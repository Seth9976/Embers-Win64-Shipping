// 函数: sub_140a91a20
// 地址: 0x140a91a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140a9e7a0(arg1, &var_18)
int128_t* var_10
int128_t* r9 = var_10
int64_t* rdx_1 = &r9[2]
*r9 = *arg2
r9[1] = arg2[1]
*rdx_1 = *arg3
void* rax_1 = arg3[1]
rdx_1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    r9 = var_10

rdx_1[2].d = arg3[2].d
*(rdx_1 + 0x14) = *(arg3 + 0x14)
*(r9 + 0x38) = 0xffffffff
int32_t r8 = *(r9 + 0x18)
int32_t rdx_4 = (*(r9 + 8) - r8) ^ r8 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - r8 - rdx_4) ^ rdx_4 << 8
int32_t r8_3 = (r8 - rcx_2 - rdx_4) ^ rcx_2 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_2 - r8_3) ^ r8_3 u>> 0xc
int32_t rcx_5 = (rcx_2 - r8_3 - rdx_7) ^ rdx_7 << 0x10
int32_t r8_6 = (r8_3 - rcx_5 - rdx_7) ^ rcx_5 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_5 - r8_6) ^ r8_6 u>> 3
int32_t rcx_8 = (rcx_5 - r8_6 - rdx_10) ^ rdx_10 << 0xa
int32_t arg_8
sub_140aa8150(arg1, &arg_8, (r8_6 - rcx_8 - rdx_10) ^ rcx_8 u>> 0xf, r9, var_18, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x20
