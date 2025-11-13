// 函数: sub_142413400
// 地址: 0x142413400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0x58)
int64_t* r8 = *arg2
*arg2 = rax

if (rax != 0)
    *(rax + 0x44) += 1

if (r8 != 0)
    rax = zx.q(*(r8 + 0x44))
    *(r8 + 0x44) -= 1
    
    if (rax.d == 1)
        int64_t rax_2 = (**r8)(r8, 1)
        arg2[0x20].b = 0
        return rax_2

arg2[0x20].b = 0
return rax
