// 函数: sub_141140f00
// 地址: 0x141140f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r13 = data_143a2dd48
int64_t r12 = *(arg2 + 0x1b0)
int32_t rbx = *(arg3 + 0x18b0)
int64_t r9 = *(arg4 + 0x10)
int64_t rax_4 = sx.q(*(arg3 + 0x18d0))
int64_t var_98 = r12
void* rdi = *(arg3 + (rax_4 << 3) + 0x18b8)
int32_t rax_5 = *(r13 + 0x60)
int32_t rax_6 = *(r13 + 0x64)
int32_t var_90 = *(r13 + 0x68)
sub_1410809a0(arg1, arg2, r12, r9)
char var_a0 = 0
sub_14107ee50(arg1 + 0x118, arg2, &var_98, rdi, rbx, r13.d, rax_5, rax_6, var_90.b)
int64_t rax_11 = data_143e579b0
int64_t rcx_1 = data_143e57970
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_12 = data_143e579d0
int64_t rax_13 = data_143e579f0
void* rax_14 = &rbx_3[4]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rbx_3[4]

*(arg2 + 0x30) = rax_14
*rbx_3 = rcx_1
rbx_3[1] = rax_11
rbx_3[2] = rax_12
rbx_3[3] = rax_13
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_5[6]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_5[6]

*(arg2 + 0x30) = rax_18
void**** rax_19 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int32_t var_b8
var_b8.q = 0
*rax_19 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142da7798
int32_t var_80 = rax_5
int32_t var_7c = rax_6
int32_t var_78 = var_90
rcx_5[2].d = 4
rcx_5[3] = rbx_3
rcx_5[4].d = 2
*(rcx_5 + 0x24) = 3
rcx_5[5] = 0
int32_t var_c8
var_c8.q = r13
sub_1410e8980(arg1 + 0x13c, arg2, r12, &data_143e57960, var_c8, &var_80, var_b8)
var_90.q = 0x24
sub_14077c4b0(arg2, &var_98, arg1 + 0x16e, &var_90, 0)
sub_14077c730(arg2, &var_98, arg1 + 0x174, arg5, 0)
sub_14077c870(arg2, &var_98, arg1 + 0x180, arg7, 0)
int32_t var_c8_4 = 0
int64_t* rdx_5 = &var_98
int32_t arg_30
uint64_t result

if (arg_30 s> 0xc)
    var_90 = 0
    result = sub_140741e30(arg2, rdx_5, arg1 + 0x17a, &var_90, var_c8_4)
else
    sub_140741e30(arg2, rdx_5, arg1 + 0x17a, &arg_30, var_c8_4)
    int32_t* var_c0_1
    var_c0_1.d = 0
    result = sub_14077c9b0(arg2, &var_98, arg1 + 0x186, arg6, arg_30, var_c0_1.d)

__security_check_cookie(rax_1 ^ &var_e8)
return result
