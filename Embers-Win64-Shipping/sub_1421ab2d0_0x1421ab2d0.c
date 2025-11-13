// 函数: sub_1421ab2d0
// 地址: 0x1421ab2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[4].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rax = *arg1
        int64_t* j = *(rsi_1 + rax)
        
        if (j != 0)
            do
                int64_t* j_1 = j
                j = *j
                sub_140a74f90(j_1)
            while (j != 0)
            
            rax = *arg1
        
        *(rsi_1 + rax) = 0
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[4].d)

int64_t* i_1 = arg1[2]

while (i_1 != 0)
    int64_t* i_2 = i_1
    i_1 = *i_1
    sub_140a74f90(i_2)

arg1[2] = 0
int64_t rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
