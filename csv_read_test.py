import csv

data = {}

def read(path, skip):
    with open(path, mode='r') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        print("\n\n\n",csv_reader,"\n\n\n")
        
        for i in range(skip):
            next(csv_reader)
            
        for bench, mem, temp, row_size, count,  col_width, cycles, l1_tot, tmp1, tmp2, tmp3, tmp4, in csv_reader:
            data.setdefault(mem.strip(),dict()).setdefault(temp.strip(),dict()).setdefault(int(col_width.strip()),[]).append(int(cycles))

        print(data)
    return

def plot():

    return


if __name__ == "__main__":
    print("Reading csv")
    read("PLT_result_q2_col_v4_mlp.csv", 1)
    
