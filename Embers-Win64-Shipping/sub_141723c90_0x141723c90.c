// 函数: sub_141723c90
// 地址: 0x141723c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int64_t r8 = sx.q(*arg1) * 0x3c
int64_t* rax_1 = *(arg1 + 0x28)
void* var_48 = nullptr
*(r8 + *rax_1 + 0x38) = 1
int64_t r8_1 = sx.q(arg1[6]) * 0xb0
int64_t rdx_1 = **(arg1 + 0x10)
int32_t i_1 = *(r8_1 + rdx_1 + 0x28)
int64_t rbx = *(r8_1 + rdx_1 + 0x20)
int32_t i_2 = i_1
int32_t r15

if (i_1 != 0)
    sub_1405c4b20(&var_48, i_1, 0)
    rsi = var_48
    void* rbx_1 = rbx - rsi
    void* rcx_1 = rsi + 4
    int32_t i
    
    do
        *(rcx_1 - 4) = *(rbx_1 + rcx_1 - 4)
        *rcx_1 = *(rbx_1 + rcx_1)
        *(rcx_1 + 8) = *(rbx_1 + rcx_1 + 8)
        *(rcx_1 + 0xc) = *(rbx_1 + rcx_1 + 0xc)
        *(rcx_1 + 0x14) = *(rbx_1 + rcx_1 + 0x14)
        rcx_1 += 0x1c
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t var_3c
    r15 = var_3c
    i_1 = i_2
else
    r15 = 0

int64_t* rbx_2 = *(arg1 + 0x20)
int128_t var_38
__builtin_memcpy(&var_38, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
int64_t rbp = sx.q(rbx_2[1].d)
int32_t rax_7 = (rbp + 1).d
rbx_2[1].d = rax_7

if (rax_7 s> *(rbx_2 + 0xc))
    sub_1405c4ec0(rbx_2)

int64_t rcx_3 = *rbx_2
int32_t rax_8 = var_38:8.d
int64_t rdx_5 = rbp * 5
uint128_t zmm0 = zx.o(var_38.q)
*(rcx_3 + (rdx_5 << 3)) = rsi
*(rcx_3 + (rdx_5 << 3) + 8) = i_1
*(rcx_3 + (rdx_5 << 3) + 0xc) = r15
*(rcx_3 + (rdx_5 << 3) + 0x10) = zmm0.q
zmm0 = zx.o(var_38:0xc.q)
*(rcx_3 + (rdx_5 << 3) + 0x18) = rax_8
*(rcx_3 + (rdx_5 << 3) + 0x1c) = zmm0.q
int32_t var_24
*(rcx_3 + (rdx_5 << 3) + 0x24) = var_24
int64_t* result = *(arg1 + 0x28)
*(sx.q(*arg1) * 0x3c + *result + 0x30) = rbp.d
return result
