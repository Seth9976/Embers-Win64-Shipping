// 函数: sub_14211c380
// 地址: 0x14211c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58
sub_140b4c620(&var_58, &arg1[1])
int32_t rax = *(arg1 + 0x14)
void* r14 = *arg1
char rax_1 = arg1[2].b

if ((*(r14 + 0x18c) & 8) != 0)
    int64_t* rax_2 = sub_142006940()
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x158))(rax_2, r14, r8_1)
    *(r14 + 0x18c) &= 0xf7

*(r14 + 0x188) += 1
void* rbx = r14 + 0x60
int64_t rsi = 0
void* rdi = r14 + 0x10
int64_t i_1 = 4
int64_t i

do
    *(rbx - 8) = 0
    *rbx = 0
    sub_1421305d0(rdi)
    rdi += 0x58
    rbx += 0x58
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rbx_1 = sx.q(*(r14 + 0x1e0))
int64_t result

if (rbx_1.d s<= 0)
label_14211c45c:
    int64_t rax_4 = arg1[3]
    uint128_t zmm0_1 = var_58
    int32_t rax_5 = (rbx_1 + 1).d
    *(r14 + 0x1e0) = rax_5
    
    if (rax_5 s> *(r14 + 0x1e4))
        sub_1405a4df0(r14 + 0x1d8)
    
    result = *(r14 + 0x1d8)
    int64_t rcx_5 = rbx_1 * 3
    *(result + (rcx_5 << 3)) = zmm0_1
    *(result + (rcx_5 << 3) + 0x10) = rax_4
else
    int64_t* rcx_3 = *(r14 + 0x1d8)
    
    while (*rcx_3 != var_58.q || *(rcx_3 + 0xc) != rax_1 || rcx_3[1].d != rax)
        rsi += 1
        rcx_3 = &rcx_3[3]
        
        if (rsi s>= rbx_1)
            goto label_14211c45c
    
    result = arg1[3]
    rcx_3[2] = result

return result
