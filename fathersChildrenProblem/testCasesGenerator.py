# Generating Test Cases Script
import random
import string

def generate_test_case():
    n = random.randint(1, 10000)
    names = set()
    father_names = []


    for _ in range(n):
        first_name = ''.join(random.choices(string.ascii_lowercase, k=random.randint(3, 10)))
        last_name = ''.join(random.choices(string.ascii_lowercase, k=random.randint(3, 10)))
        father_names.append(last_name)
        names.add((first_name, last_name))

    q = random.randint(1, 1000)
    queries = []


    for _ in range(q):
        query_name = random.choice(father_names)
        queries.append(query_name)

    return n, names, q, queries

def print_test_case_to_file(n, names, q, queries, file_name):
    with open(file_name, 'w') as file:
        file.write(f"{n}\n")
        for first_name, last_name in names:
            file.write(f"{first_name} {last_name}\n")
        file.write(f"{q}\n")
        for query_name in queries:
            file.write(f"{query_name}\n")


for i in range(115):
    n, names, q, queries = generate_test_case()
    file_name = f"test_case_{i+1}.txt"
    print_test_case_to_file(n, names, q, queries, file_name)
