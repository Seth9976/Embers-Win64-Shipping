// 函数: sub_141d70b80
// 地址: 0x141d70b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 + 8)
void* rax_1

if (rax_3 == 0)
    rax_1 = arg1 + 0x18
else
    void* rax = *(rax_3 + 0x130)
    
    if (rax == 0)
        rax_1 = &data_143dbb0c0
    else
        rax_1 = rax + 0x1c0

int128_t zmm1 = *(rax_1 + 0x10)
*arg2 = *rax_1
int128_t zmm0 = *(rax_1 + 0x20)
arg2[1] = zmm1
arg2[2] = zmm0
return arg2
