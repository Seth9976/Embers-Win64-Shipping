// 函数: sub_14211d0d0
// 地址: 0x14211d0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48
sub_140b4c620(&var_48, &arg1[1])
int32_t i_1 = *(arg1 + 0x14)
void* r14 = *arg1
char result_1 = arg1[2].b

if ((*(r14 + 0x18c) & 8) != 0)
    int64_t* rax = sub_142006940()
    int64_t r8_1 = *rax
    (*(r8_1 + 0x158))(rax, r14, r8_1)
    *(r14 + 0x18c) &= 0xf7

*(r14 + 0x188) += 1
void* rbx = r14 + 0x60
int64_t rsi = 0
void* rdi = r14 + 0x10
int64_t i_2 = 4
int64_t i

do
    *(rbx - 8) = 0
    *rbx = 0
    sub_1421305d0(rdi)
    rdi += 0x58
    rbx += 0x58
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t rbx_1 = sx.q(*(r14 + 0x1b0))
uint64_t result

if (rbx_1.d s<= 0)
label_14211d1ac:
    int128_t zmm0 = var_48
    int32_t rax_1 = (rbx_1 + 1).d
    int128_t zmm1_1 = *(arg1 + 0x18)
    *(r14 + 0x1b0) = rax_1
    
    if (rax_1 s> *(r14 + 0x1b4))
        sub_1405c4e40(r14 + 0x1a8)
    
    result = *(r14 + 0x1a8)
    int64_t rcx_6 = rbx_1 << 5
    *(rcx_6 + result) = zmm0
    *(rcx_6 + result + 0x10) = zmm1_1
else
    void* rcx_3 = *(r14 + 0x1a8)
    result = zx.q(result_1)
    
    while (*rcx_3 != var_48.q || *(rcx_3 + 0xc) != result.b || *(rcx_3 + 8) != i_1)
        rsi += 1
        rcx_3 += 0x20
        
        if (rsi s>= rbx_1)
            goto label_14211d1ac
    
    *(rcx_3 + 0x10) = *(arg1 + 0x18)

return result
