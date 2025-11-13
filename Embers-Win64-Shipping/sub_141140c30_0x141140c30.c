// 函数: sub_141140c30
// 地址: 0x141140c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r13 = *(arg2 + 0x1b0)
void* rdi = *(arg3 + 0x18c8)
int32_t rbx = *(arg3 + 0x18b4)
int64_t r9 = *(arg4 + 0x10)
int32_t r12 = data_143f3d918
int64_t var_90 = data_143f3dab0
int64_t var_88 = data_143f3dc90
int64_t var_98 = r13
sub_1410809a0(arg1, arg2, r13, r9)
char var_a0 = 0
sub_14107ee50(arg1 + 0x118, arg2, &var_98, rdi, rbx, var_90.d, r12, r12, 1)
int64_t rax_7 = data_1439b5e30
int64_t rcx_1 = data_1439b5df0
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_8 = data_1439b5e50
int64_t rax_9 = data_1439b5e70
void* rax_10 = &rbx_3[4]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rbx_3[4]

*(arg2 + 0x30) = rax_10
*rbx_3 = rcx_1
rbx_3[1] = rax_7
rbx_3[2] = rax_8
rbx_3[3] = rax_9
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_5[6]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_5[6]

*(arg2 + 0x30) = rax_14
void**** rax_15 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int32_t var_80 = r12
int32_t var_7c = r12
*rax_15 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142da7798
int32_t var_b8
var_b8.q = var_88
int32_t* var_c0_1 = &var_80
int64_t rax_18 = var_90
rcx_5[2].d = 4
rcx_5[3] = rbx_3
rcx_5[4].d = 2
*(rcx_5 + 0x24) = 3
rcx_5[5] = 0
int32_t var_c8
var_c8.q = rax_18
int32_t var_78 = 1
sub_1410e8980(arg1 + 0x13c, arg2, r13, &data_1439b5de0, var_c8, var_c0_1, var_b8)
var_88 = 0x24
sub_14077c4b0(arg2, &var_98, arg1 + 0x16e, &var_88, 0)
sub_14077c730(arg2, &var_98, arg1 + 0x174, arg5, 0)
sub_14077c870(arg2, &var_98, arg1 + 0x180, arg7, 0)
int32_t var_c8_4 = 0
int64_t* rdx_5 = &var_98
int32_t arg_30
uint64_t result

if (arg_30 s> 0xc)
    var_90.d = 0
    result = sub_140741e30(arg2, rdx_5, arg1 + 0x17a, &var_90, var_c8_4)
else
    sub_140741e30(arg2, rdx_5, arg1 + 0x17a, &arg_30, var_c8_4)
    var_c0_1.d = 0
    result = sub_14077c9b0(arg2, &var_98, arg1 + 0x186, arg6, arg_30, var_c0_1.d)

__security_check_cookie(rax_1 ^ &var_e8)
return result
