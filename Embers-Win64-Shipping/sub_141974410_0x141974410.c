// 函数: sub_141974410
// 地址: 0x141974410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rdx_2[2]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x18)
    rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[2]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = rdx_2
*(arg1 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142dd5b50
int64_t* rax_3 = sub_140a82f30(0x1c8, 0)
int64_t* rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    sub_141961860(rax_3, (1 << (data_1439c7a34).b) - 1)

sub_140a4bff0(rdi, arg1, 0x1c8)

if (rdi[1] == arg1)
    rdi[1] = rdi

if (*(arg1 + 8) == rdi)
    *(arg1 + 8) = arg1

*(arg1 + 0x180) = *(rdi + 0x180)
*(arg1 + 0x190) = *(rdi + 0x190)
*(arg1 + 0x1a0) = *(rdi + 0x1a0)
*(arg1 + 0x1b0) = rdi[0x36]
*(arg1 + 0x20) = rdi[4]
*(arg1 + 0x28) = rdi[5]
*(arg1 + 0x8c) = *(rdi + 0x8c)
*(arg1 + 0x90) = *(rdi + 0x8c)
*(arg1 + 0xa0) = *(rdi + 0xa0)
*(arg1 + 0xb0) = *(rdi + 0xb0)
*(arg1 + 0xc0) = *(rdi + 0xc0)
*(arg1 + 0xd0) = *(rdi + 0xd0)
*(arg1 + 0xe0) = *(rdi + 0xe0)
*(arg1 + 0xf0) = *(rdi + 0xf0)
*(arg1 + 0x100) = *(rdi + 0x100)
*(arg1 + 0x110) = *(rdi + 0x110)
*(arg1 + 0x120) = *(rdi + 0x120)
*(arg1 + 0x130) = *(rdi + 0x130)
*(arg1 + 0x140) = *(rdi + 0x140)
*(arg1 + 0x150) = *(rdi + 0x150)
*(arg1 + 0x160) = *(rdi + 0x160)
*(arg1 + 0x170) = *(rdi + 0x170)
void*** rcx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_8[3]

if (rax_11 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x20)
    rcx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_8[3]

data_143f02bac += 1
data_143f02bc8 = rax_11
*data_143f02ba0 = rcx_8
data_143f02ba0 = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_143002a78
rcx_8[2] = rdi

if (data_143f02bac u<= 0)
    return &data_143002a78

int128_t entry_zmm2
int128_t entry_zmm3
return sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
