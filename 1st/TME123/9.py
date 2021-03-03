# Γράψτε ένα κώδικα σε Python ο οποίος να παίρνει σαν είσοδο ένα λεξικό από αρχείο. 
# Το λεξικό μπορεί να περιέχει και άλλα λεξικά, λίστες, κτλ. 
# Εμφανίστε στο χρήστη τα κλειδιά που εμφανίζονται τις περισσότερες φορές, ελέγχοντας και τα εμφωλευμένα λεξικά.
# {"results":[{"x":5} ,{"x":5,"y":[1,2,3]},{"x":5,"y":{"a":2,"b":67}}]}

# open data
import json

with open('TME123/exercise 9/9listes.json') as f:
    my_dict = json.load(f)

from collections import Counter
def get_result(d):
    keys = []

#check to see if it is a list or dict
    def recurse(d):
        if isinstance(d, dict):
            for k, v in d.items():
                keys.append(k)
                if isinstance(v, (dict, list)):
                    recurse(v)

        elif isinstance(d, list):
            for item in d:
                if isinstance(item, (dict, list)):
                    recurse(item)
        else:
            return
    recurse(d)
    print(keys)
    print(f'found {len(keys)} keys.'.upper())
    for k, v in Counter(keys).items():
        print(f'{k} key found {v} time'.upper())

get_result(my_dict)