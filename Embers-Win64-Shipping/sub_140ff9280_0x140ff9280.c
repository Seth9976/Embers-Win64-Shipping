// 函数: sub_140ff9280
// 地址: 0x140ff9280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int128_t zmm0 = *(arg1 + 0x19e4)
int32_t var_38
int32_t rax_3

if (arg2 == 0)
    int32_t rcx = int.d(fconvert.t(zmm0.d))
    int32_t rdx = int.d(fconvert.t(zmm0:4.d))
    var_38 = rcx
    int32_t var_34_1 = rdx
    int32_t var_30_1 = int.d(fconvert.t(zmm0:8.d)) + rcx
    rax_3 = int.d(fconvert.t(zmm0:0xc.d)) + rdx
else
    int32_t var_30 = arg4
    rax_3 = arg5
    var_38 = arg3
    int32_t r9
    int32_t var_34 = r9

int64_t* rcx_1 = *(arg1 + 0x138)
int32_t var_2c = rax_3
int64_t result = (*(*rcx_1 + 0x168))(rcx_1, 1, &var_38)
__security_check_cookie(rax_1 ^ &var_58)
return result
