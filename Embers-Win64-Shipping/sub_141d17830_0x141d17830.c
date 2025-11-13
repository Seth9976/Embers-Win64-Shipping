// 函数: sub_141d17830
// 地址: 0x141d17830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140e59330(arg1, &var_18)
int128_t* var_10
*var_10 = *arg2
var_10[1].b = *arg3
*(var_10 + 0x14) = *(arg3 + 4)
*(var_10 + 0x1c) = arg3[0xc]
*(var_10 + 0x1d) = arg3[0xd]
var_10[2].q = *(arg3 + 0x10)

if (arg3 != &var_10[1])
    *(arg3 + 0x10) = 0

*(var_10 + 0x28) = 0xffffffff
int64_t rbx_1 = *var_10
int32_t rdi_1 = (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d)
int64_t rbx_3 = *(var_10 + 8)
int32_t r8 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
int32_t rdi_3 = (rdi_1 - r8) ^ r8 u>> 0xd
int32_t rcx_6 = (0x9e3779b9 - rdi_3 - r8) ^ rdi_3 << 8
int32_t r8_3 = (r8 - rcx_6 - rdi_3) ^ rcx_6 u>> 0xd
int32_t rdi_6 = (rdi_3 - rcx_6 - r8_3) ^ r8_3 u>> 0xc
int32_t rcx_9 = (rcx_6 - rdi_6 - r8_3) ^ rdi_6 << 0x10
int32_t r8_6 = (r8_3 - rcx_9 - rdi_6) ^ rcx_9 u>> 5
int32_t rdi_9 = (rdi_6 - rcx_9 - r8_6) ^ r8_6 u>> 3
int32_t rcx_12 = (rcx_9 - rdi_9 - r8_6) ^ rdi_9 << 0xa
int32_t arg_8
sub_141d1c750(arg1, &arg_8, (r8_6 - rcx_12 - rdi_9) ^ rcx_12 u>> 0xf, var_10, var_18, nullptr)
return *arg1 + 0x10 + sx.q(arg_8) * 0x30
