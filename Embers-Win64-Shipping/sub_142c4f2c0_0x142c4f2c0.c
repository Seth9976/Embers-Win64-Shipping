// 函数: sub_142c4f2c0
// 地址: 0x142c4f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_12 = *arg1
int64_t* i_1 = i_12
void** i_16 = i_12
void** i_13 = i_12[1]
void** i_10 = i_13

if (*(i_13 + 0x19) == 0)
    int64_t r9_1 = *arg2
    
    do
        int64_t rdx = i_10[4]
        
        if (rdx u>= r9_1)
            if (*(i_16 + 0x19) != 0 && r9_1 u< rdx)
                i_16 = i_10
            
            i_1 = i_10
            i_10 = *i_10
        else
            i_10 = i_10[2]
    while (*(i_10 + 0x19) == 0)

if (*(i_16 + 0x19) == 0)
    i_13 = *i_16

while (*(i_13 + 0x19) == 0)
    if (*arg2 u>= i_13[4])
        i_13 = i_13[2]
    else
        i_16 = i_13
        i_13 = *i_13

int64_t result = 0
int64_t* i = i_1

if (i_1 != i_16)
    do
        int64_t* i_4 = i[2]
        result += 1
        
        if (*(i_4 + 0x19) == 0)
            int64_t* i_8 = *i_4
            i = i_4
            
            if (*(i_8 + 0x19) == 0)
                int64_t* i_15
                
                do
                    i_15 = *i_8
                    i = i_8
                    i_8 = i_15
                while (*(i_15 + 0x19) == 0)
        else
            int64_t* i_5 = i[1]
            
            if (*(i_5 + 0x19) == 0)
                while (i == i_5[2])
                    i = i_5
                    i_5 = i_5[1]
                    
                    if (*(i_5 + 0x19) != 0)
                        break
            
            i = i_5
    while (i != i_16)

if (i_1 == *i_12 && i_16 == i_12)
    sub_142c4f230(arg1)
else
    while (i_1 != i_16)
        int64_t* i_11 = i_1[2]
        int64_t* i_9 = i_1
        char r9_2 = *(i_11 + 0x19)
        
        if (r9_2 == 0)
            int64_t* i_6 = *i_11
            i_1 = i_11
            
            if (*(i_6 + 0x19) == 0)
                int64_t* i_14
                
                do
                    i_14 = *i_6
                    i_1 = i_6
                    i_6 = i_14
                while (*(i_14 + 0x19) == 0)
        else
            int64_t* i_3 = i_1[1]
            
            if (*(i_3 + 0x19) == 0)
                while (i_1 == i_3[2])
                    i_1 = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0x19) != 0)
                        break
            
            i_1 = i_3
        
        int64_t* i_2 = i_9
        
        if (r9_2 == 0)
            int64_t* rcx_2 = *i_11
            
            if (*(rcx_2 + 0x19) == 0)
                int64_t* rax
                
                do
                    rax = *rcx_2
                    rcx_2 = rax
                while (*(rax + 0x19) == 0)
        else
            int64_t* i_7 = i_9[1]
            
            if (*(i_7 + 0x19) == 0)
                while (i_2 == i_7[2])
                    i_2 = i_7
                    i_7 = i_7[1]
                    
                    if (*(i_7 + 0x19) != 0)
                        break
        
        j_sub_140a74f90(sub_14297e610(arg1, i_9))

return result
