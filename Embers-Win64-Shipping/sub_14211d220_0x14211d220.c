// 函数: sub_14211d220
// 地址: 0x14211d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48
sub_140b4c620(&var_48, &arg1[1])
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
int64_t rbx_1 = sx.q(*(r14 + 0x1c0))
uint64_t result

if (rbx_1.d s<= 0)
label_14211d301:
    int32_t rax_4 = (rbx_1 + 1).d
    int128_t var_38_1 = var_48
    int32_t var_28_1 = arg1[3].d.d
    *(r14 + 0x1c0) = rax_4
    
    if (rax_4 s> *(r14 + 0x1c4))
        sub_1405a4df0(r14 + 0x1b8)
    
    result = *(r14 + 0x1b8)
    int64_t rcx_5 = rbx_1 * 3
    *(result + (rcx_5 << 3)) = var_38_1
    *(result + (rcx_5 << 3) + 0x10) = var_28_1.q
else
    void* rcx_3 = *(r14 + 0x1b8)
    
    while (*rcx_3 != var_48.q || *(rcx_3 + 0xc) != rax_1 || *(rcx_3 + 8) != rax)
        rsi += 1
        rcx_3 += 0x18
        
        if (rsi s>= rbx_1)
            goto label_14211d301
    
    result = zx.q(arg1[3].d)
    *(rcx_3 + 0x10) = result.d

return result
