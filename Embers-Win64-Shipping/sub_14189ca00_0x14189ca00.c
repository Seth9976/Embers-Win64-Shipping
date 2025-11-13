// 函数: sub_14189ca00
// 地址: 0x14189ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418aab80(arg1)
*arg1 = 0
int32_t i_2 = arg2[1].d
void* rdi = *arg2
arg1[1].d = i_2

if (i_2 != 0)
    sub_140874c00(arg1, i_2, 0)
    void* rbx_1 = *arg1
    void* rdi_1 = rdi + 0x20
    int32_t i
    
    do
        sub_140596d10(rbx_1, rdi_1 - 0x20)
        int128_t zmm0_1 = *(rdi_1 - 0x10)
        rdi_1 += 0x38
        *(rbx_1 + 0x10) = zmm0_1
        *(rbx_1 + 0x20) = *(rdi_1 - 0x38)
        *(rbx_1 + 0x28) = *(rdi_1 - 0x30)
        *(rbx_1 + 0x30) = *(rdi_1 - 0x28)
        rbx_1 += 0x38
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int32_t i_3 = arg2[3].d
void* rdi_2 = arg2[2]
arg1[3].d = i_3

if (i_3 != 0)
    sub_140874c00(&arg1[2], i_3, 0)
    void* rbx_2 = arg1[2]
    void* rdi_3 = rdi_2 + 0x20
    int32_t i_1
    
    do
        sub_140596d10(rbx_2, rdi_3 - 0x20)
        int128_t zmm0_2 = *(rdi_3 - 0x10)
        rdi_3 += 0x38
        *(rbx_2 + 0x10) = zmm0_2
        *(rbx_2 + 0x20) = *(rdi_3 - 0x38)
        *(rbx_2 + 0x28) = *(rdi_3 - 0x30)
        *(rbx_2 + 0x30) = *(rdi_3 - 0x28)
        rbx_2 += 0x38
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x1c) = 0

arg1[5].b = 0
return arg1
