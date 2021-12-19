def main():
    words = {}
    while 1:
        data = input().split()
        if data[0] != '#':
            for word in data:
                key = "".join(sorted(word.lower()))
                try:
                    words[key][0] += 1
                    words[key].append(word)
                except (KeyError):
                    words[key] = [1,]
                    words[key].append(word)
        else:
            rel_ananagram = sorted(v[1] for k, v in words.items()
                                   if v[0] == 1)
            for gram in rel_ananagram:
                print (gram)
            break

if __name__ == '__main__':
    main()