// 函数: sub_140757de0
// 地址: 0x140757de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
void* rbp = *(arg1 + 8)
int32_t rdi = 0
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_28 = rdx_1
int32_t rcx
rcx.b = rdx_1 != 0x7fff
int32_t var_24 = rcx
int32_t* rbx_1
void var_20

if (rdx_1 == 0x7fff)
    rbx_1 = &var_20
else
    rbx_1 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    while (true)
        rdi += 1
        *rbx_1 = sub_14075d350(*(rbp + 0x28)).d
        
        if (rdi s>= *(arg2 + 0x40))
            break
        
        rbx_1 = &rbx_1[sx.q(rcx)]
        rcx = var_24

void* result
result.b = 1
return result
