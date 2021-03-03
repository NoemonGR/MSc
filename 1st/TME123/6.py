# 6.Χρησιμοποιήστε το API του ΟΠΑΠ (https://www.opap.gr/web-services) από την Python 
# για να βρείτε τον αριθμό που εμφανίζεται συχνότερα στο ΚΙΝΟ κάθε μέρα του τρέχοντα μήνα.

#get url
import requests
#open data
import json
# from collections import Counter 
# import numpy as np

#take data from 2021-01-01 to 2021-01-31
#url ="https://api.opap.gr/draws/v3.0/1100/draw-date/2021-01-01/2021-01-31/draw-id"
#split url's
url1="https://api.opap.gr/draws/v3.0/1100/draw-date/"
url2="2021-01-"
url3="/"
url4="/draw-id"


nums=[]

#take id's from every day
for i in range(1,32):
    datenum=str(i).zfill(2)
    url=url1+url2+datenum+url3+url2+datenum+url4
    r=requests.get(url)
    html=r.text
    draws=json.loads(html)

    #winning numbers in all id date
    for d in draws:
      url="https://api.opap.gr/draws/v3.0/1100/"+str(d)
      r=requests.get(url)
      html=r.text
      data=json.loads(html)
      nums=data["winningNumbers"]["list"]

    print("Date: ",url2,datenum,"\n","Most common number: ",max(set(nums), key = nums.count))