// 函数: sub_140755db0
// 地址: 0x140755db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
void* rbp = *(arg1 + 8)
int32_t rdi = 0
void* result = &rax[1]
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = result
int32_t var_28 = rdx_1
int32_t rcx
rcx.b = rdx_1 != 0x7fff
int32_t var_24 = rcx
int32_t* rbx_2
void var_20

if (rdx_1 == 0x7fff)
    rbx_2 = &var_20
else
    rbx_2 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    while (true)
        result = sub_14075d350(*(rbp + 0x28))
        rdi += 1
        *rbx_2 = result.d
        
        if (rdi s>= *(arg2 + 0x40))
            break
        
        rbx_2 = &rbx_2[sx.q(rcx)]
        rcx = var_24

return result
