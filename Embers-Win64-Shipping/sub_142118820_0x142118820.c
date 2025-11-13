// 函数: sub_142118820
// 地址: 0x142118820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x18c) & 8) != 0)
    int64_t* rax_1 = sub_142006940()
    (*(*rax_1 + 0x158))(rax_1, arg1)
    *(arg1 + 0x18c) &= 0xf7

*(arg1 + 0x188) += 1
void* rbx = arg1 + 0x60
int64_t rsi = 0
void* rdi = arg1 + 0x10
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
int64_t rbx_1 = sx.q(*(arg1 + 0x1d0))
int64_t result

if (rbx_1.d s<= 0)
label_1421188d7:
    int64_t rax_4 = *arg3
    uint128_t zmm0_1 = *arg2
    int32_t rax_5 = (rbx_1 + 1).d
    *(arg1 + 0x1d0) = rax_5
    
    if (rax_5 s> *(arg1 + 0x1d4))
        sub_1405a4df0(arg1 + 0x1c8)
    
    result = *(arg1 + 0x1c8)
    int64_t rcx_4 = rbx_1 * 3
    *(result + (rcx_4 << 3)) = zmm0_1
    *(result + (rcx_4 << 3) + 0x10) = rax_4
else
    int64_t* rcx_2 = *(arg1 + 0x1c8)
    
    while (*rcx_2 != *arg2 || *(rcx_2 + 0xc) != *(arg2 + 0xc) || rcx_2[1].d != arg2[1].d)
        rsi += 1
        rcx_2 = &rcx_2[3]
        
        if (rsi s>= rbx_1)
            goto label_1421188d7
    
    result = *arg3
    rcx_2[2] = result

return result
