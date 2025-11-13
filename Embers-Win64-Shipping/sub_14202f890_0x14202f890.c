// 函数: sub_14202f890
// 地址: 0x14202f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    void* rax = arg1 + 0x28
    
    if (arg1 == 0)
        rax = nullptr
    
    if (data_143f5b268 == rax && *(data_143f5b298 + 0x788) == arg1)
        goto label_14202f8c5
    
    return 

label_14202f8c5:
int64_t* rbx_1 = data_143f40650
int32_t i_1 = data_143f40658

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:1_1 = data_143f4065c == 0
data_143f40658 = 0

if (not(cond:1_1))
    return sub_14061cd70(&data_143f40650, 0) __tailcall
