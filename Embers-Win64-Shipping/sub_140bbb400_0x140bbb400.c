// 函数: sub_140bbb400
// 地址: 0x140bbb400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x48)

if (rdx == 0)
    *(arg1 + 0x48) = 0
    return 

int64_t i = *(rdx - 8)
void* rdi = rdx + i * 0x18

if (i != 0)
    do
        int64_t rcx = *(rdi - 0x18)
        rdi -= 0x18
        i -= 1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
    while (i != 0)
    
    *(rdx - 8)

j_sub_140a74f90(rdx - 8)
*(arg1 + 0x48) = 0
