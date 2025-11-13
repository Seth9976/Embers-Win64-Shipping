// 函数: sub_141a529c0
// 地址: 0x141a529c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140d21e10(arg1, &var_28, sub_140d226f0(arg1, sub_141a6e000()))
int32_t rbx = 0

if (*(arg1 + 0x110) != 0)
    sub_140a20ba0(&var_28, &data_14302f380, 3)
    int64_t var_18
    int64_t* rax_2 = sub_140d21e10(*(arg1 + 0x110), &var_18, 0)
    int32_t rcx_4 = rax_2[1].d
    int32_t r8_1 = rcx_4 - 1
    
    if (rcx_4 == 0)
        r8_1 = 0
    
    sub_140a20ba0(&var_28, *rax_2, r8_1)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int16_t* const r9 = &data_142d40450
int16_t* r10 = var_28
int32_t var_20

if (var_20 != 0)
    r9 = r10

int16_t i = *r9

while (i != 0)
    r9 = &r9[1]
    int32_t rax_4
    rax_4.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
    rax_4.w &= 0x20
    uint64_t r8_2 = zx.q(i - rax_4.w)
    i = *r9
    int32_t rdx_5 = *(&data_1439a2500 + ((zx.q(rbx.b) ^ zx.q(r8_2.b)) << 2)) ^ rbx u>> 8
    rbx = *(&data_1439a2500 + ((zx.q((r8_2 u>> 8).b) ^ zx.q(rdx_5.b)) << 2)) ^ rdx_5 u>> 8

*arg2 = rbx

if (r10 != 0)
    sub_140a74f90(r10)

return arg2
