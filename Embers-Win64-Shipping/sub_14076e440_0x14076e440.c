// 函数: sub_14076e440
// 地址: 0x14076e440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (*(arg1 + 0x1c8) == 0 || *(arg1 + 0xd0) == *(arg1 + 0xfc))
    return 

void* rcx = *(arg1 + 0x108)
void* r8_1 = arg1 + 0x100

if (rcx != 0)
    r8_1 = rcx

int32_t rax = *(r8_1 + (((sx.q(*(arg1 + 0x110)) - 1) & r9) << 2))

if (rax == 0xffffffff)
    return 

int64_t r8_2 = *(arg1 + 0xc8)

while (true)
    int64_t rdx_3 = sx.q(rax) * 3
    
    if (*(r8_2 + (rdx_3 << 3)) == r9.d)
        break
    
    rax = *(r8_2 + (rdx_3 << 3) + 0x10)
    
    if (rax == 0xffffffff)
        return 

if (rax != 0xffffffff)
    return sub_140773fa0(arg1 + 0xc8, r9.d) __tailcall
