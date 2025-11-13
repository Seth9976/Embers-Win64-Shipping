// 函数: sub_14237ace0
// 地址: 0x14237ace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_14098dfb0(arg1, &var_28)
int64_t* rdx_1 = *arg3
int64_t* rdi = arg3[1]
int64_t* var_20
*var_20 = *rdx_1
sub_140596d10(&var_20[1], &rdx_1[1])
var_20[3] = *rdi
var_20[4].d = 0xffffffff
int64_t rbx_1 = *var_20
int32_t rdi_1 = (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d)
int32_t rdx_5 = rdi_1 u>> 0xd ^ neg.d(rdi_1)
int32_t rcx_4 = (0x9e3779b9 - rdi_1 - rdx_5) ^ rdx_5 << 8
int32_t rdi_4 = (rdi_1 - rcx_4 - rdx_5) ^ rcx_4 u>> 0xd
int32_t rdx_8 = (rdx_5 - rcx_4 - rdi_4) ^ rdi_4 u>> 0xc
int32_t rcx_7 = (rcx_4 - rdi_4 - rdx_8) ^ rdx_8 << 0x10
int32_t rdi_7 = (rdi_4 - rcx_7 - rdx_8) ^ rcx_7 u>> 5
int32_t rdx_11 = (rdx_8 - rcx_7 - rdi_7) ^ rdi_7 u>> 3
int32_t rcx_10 = (rcx_7 - rdi_7 - rdx_11) ^ rdx_11 << 0xa
int32_t rax_19 = var_20[2].d
int16_t* rdx_12

if (rax_19 == 0)
    rdx_12 = &data_142d40450
else
    rdx_12 = var_20[1]

int32_t rcx_12 = rax_19 - 1

if (rax_19 == 0)
    rcx_12 = 0

int32_t rax_20 = sub_1405969c0(rcx_12, rdx_12)
int32_t rdi_12 = (((rdi_7 - rcx_10 - rdx_11) ^ rcx_10 u>> 0xf) - rax_20) ^ rax_20 u>> 0xd
int32_t rbx_5 = (0x9e3779b9 - rdi_12 - rax_20) ^ rdi_12 << 8
int32_t r8_3 = (rax_20 - rbx_5 - rdi_12) ^ rbx_5 u>> 0xd
int32_t rdi_15 = (rdi_12 - rbx_5 - r8_3) ^ r8_3 u>> 0xc
int32_t rbx_8 = (rbx_5 - rdi_15 - r8_3) ^ rdi_15 << 0x10
int32_t r8_6 = (r8_3 - rbx_8 - rdi_15) ^ rbx_8 u>> 5
int32_t rdi_18 = (rdi_15 - rbx_8 - r8_6) ^ r8_6 u>> 3
int32_t rbx_11 = (rbx_8 - rdi_18 - r8_6) ^ rdi_18 << 0xa
sub_14238add0(arg1, arg2, (r8_6 - rbx_11 - rdi_18) ^ rbx_11 u>> 0xf, var_20, var_28, arg4)
return arg2
