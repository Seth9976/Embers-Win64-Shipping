// 函数: sub_140dc05c0
// 地址: 0x140dc05c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r14 = sx.q(arg4)
void* rax_3 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t rax_5 = sub_142bf6d10(sub_1405948b0(arg1))
int32_t* rax_6 = sub_142bf4a70(arg1, &data_143e20d00)
int32_t rdi_1 = 0
int64_t var_48 = 0
void var_88

if (sub_140da1470(*(rax_6 + 8), rax_3, arg3, rax_5, *rax_6, rax_6[1], &var_88) != 0 && r14.d u< 0)
    rdi_1 = 1
    *arg5 = *(var_48 + (r14 << 3))
    *arg6 = *(var_48 + (r14 << 3) + 4)

if (var_48 != 0)
    sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rdi_1)
