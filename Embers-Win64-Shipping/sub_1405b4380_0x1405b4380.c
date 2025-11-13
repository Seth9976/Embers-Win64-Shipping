// 函数: sub_1405b4380
// 地址: 0x1405b4380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return arg2

void* rax = *(arg1 + 0x1d8)

if (rax == 0)
    int32_t rbx_1 = *(arg1 + 8)
    int32_t rdi_2 = rbx_1 & 0x69
    int64_t* rax_1 = sub_1405cb940()
    int64_t arg_10 = 0
    int32_t r15_2 = rdi_2 | 0x20
    rbx_1.b &= 0x30
    
    if (rbx_1.b == 0)
        r15_2 = rdi_2
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    rax = sub_140d2dfc0(rax_1, arg1, 0, r15_2, 0, 0, 0, 0, 0)
    *(arg1 + 0x1d8) = rax

void* rax_3 = rax + 0x30
void* rcx_3 = arg1 + 0x70
int64_t i_1 = 2
int64_t i

do
    rax_3 += 0x80
    int128_t zmm0 = *rcx_3
    rcx_3 += 0x80
    *(rax_3 - 0x80) = zmm0
    *(rax_3 - 0x70) = *(rcx_3 - 0x70)
    *(rax_3 - 0x60) = *(rcx_3 - 0x60)
    *(rax_3 - 0x50) = *(rcx_3 - 0x50)
    *(rax_3 - 0x40) = *(rcx_3 - 0x40)
    *(rax_3 - 0x30) = *(rcx_3 - 0x30)
    *(rax_3 - 0x20) = *(rcx_3 - 0x20)
    *(rax_3 - 0x10) = *(rcx_3 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rax_3 = *rcx_3
*(rax_3 + 0x10) = *(rcx_3 + 0x10)
*(rax_3 + 0x20) = *(rcx_3 + 0x20)
*(rax_3 + 0x30) = *(rcx_3 + 0x30)
*(rax_3 + 0x40) = *(rcx_3 + 0x40)
void* rcx_4 = *(arg1 + 0x1d8)
*(rcx_4 + 0x180) = *(arg1 + 0x1c0)
*(rcx_4 + 0x190) = *(arg1 + 0x1d0)
*(*(arg1 + 0x1d8) + 0x194) = *(arg1 + 0x1d4)
int64_t rax_6 = sub_1405c4270(arg1, 0x3f800000)
void* rax_7 = *(arg3 + 0x1f0)

if (rax_7 != 0)
    *(rax_7 + 0x298) = rax_6

sub_1405b9e20(arg3, arg2, *(arg1 + 0x1d8))
void* rax_8 = *(arg3 + 0x1f0)

if (rax_8 != 0)
    *(rax_8 + 0x298) = 0

return rax_6
