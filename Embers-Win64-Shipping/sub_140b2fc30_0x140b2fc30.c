// 函数: sub_140b2fc30
// 地址: 0x140b2fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1

if (i == 0)
    *arg1 = 0
    arg1[1] = 0
    return 0

do
    int64_t* rdi_1 = i + 0x400
    int64_t j = 0x20
    *arg1 = *rdi_1
    
    do
        int64_t rcx = rdi_1[-4]
        rdi_1 = &rdi_1[-4]
        j -= 1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
    while (j != 0)
    
    j_sub_140a74f90(i)
    i = *arg1
while (i != 0)

*arg1 = 0
arg1[1] = 0
return 0
