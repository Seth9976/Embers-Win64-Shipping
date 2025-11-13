// 函数: sub_140b51a20
// 地址: 0x140b51a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rcx = *(arg1 + 0x80)
*(rcx + 0x48) -= 1
int32_t i_1 = *(rcx + 0x50)
int32_t i

do
    i = i_1
    i_1 += 1
while (i == 0xffffffff)
*(rcx + 0x50) = i_1
void* rcx_1 = *(arg1 + 0x80)
int64_t rdx = sx.q(*(rcx_1 + 0x48))

if (rdx.d s> 0)
    void* rax = *(rcx_1 + 0x40)
    
    if (rax != 0)
        rcx_1 = rax
    
    *(arg1 + 0x78) = *(rcx_1 + (rdx << 3) - 8)
    return 

*(arg1 + 0x78) = 0
