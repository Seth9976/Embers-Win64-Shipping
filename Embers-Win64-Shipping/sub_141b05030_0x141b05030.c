// 函数: sub_141b05030
// 地址: 0x141b05030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_2 = *(arg3 + 0x18)
void* i = arg3

if (i_2 != 0)
    i = i_2

for (void* rdi = i + sx.q(*(arg3 + 0x20)) * 0xc; i != rdi; i += 0xc)
    int512_t zmm2
    zmm2.o = *(i + 8)
    sub_142131b70(arg2, *i)

void* i_3 = *(arg3 + 0xa8)
void* i_1 = arg3 + 0x80

if (i_3 != 0)
    i_1 = i_3

int128_t var_28

for (void* rdi_1 = i_1 + sx.q(*(arg3 + 0xb0)) * 0x14; i_1 != rdi_1; i_1 += 0x14)
    void var_18
    int32_t* rax_2 = sub_140acc990(&var_18, i_1 + 8)
    int64_t rdx_2 = *i_1
    var_28 = *rax_2
    sub_1421321b0(arg2, rdx_2, &var_28)

void* rax_3 = *(arg3 + 0xe8)
void* rbx = arg3 + 0xb8

if (rax_3 != 0)
    rbx = rax_3

int64_t result = sx.q(*(arg3 + 0xf0))
void* rbp_1 = rbx + result * 0x18

if (rbx != rbp_1)
    void* rdi_2 = rbx + 8
    
    do
        int64_t rdx_3 = *rbx
        var_28 = *rdi_2
        result = sub_1421321b0(arg2, rdx_3, &var_28)
        rbx += 0x18
        rdi_2 += 0x18
    while (rbx != rbp_1)

return result
