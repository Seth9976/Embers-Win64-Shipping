// 函数: sub_1422a6f20
// 地址: 0x1422a6f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg1
int32_t var_30 = arg3[1].d
int32_t var_20 = arg2[1].d
int64_t var_38 = *arg3
int64_t zmm0 = *arg2
int32_t zmm3
int32_t var_14 = zmm3
int32_t var_18 = 2
int64_t var_28 = zmm0
char rax_3 = (*(r10 + 0x830))(zmm0, arg9, &var_28, &var_38, &data_14399f720, &var_18, arg4)

if (rax_3 == 0)
    *arg6 = data_143dbb1f8.q
    arg6[1].d = data_143dbb200
    *arg7 = data_143dbb1f8.q
    arg7[1].d = data_143dbb200
    int64_t arg_8 = 0
    *arg8 = 0
else
    *arg6 = *(arg9 + 0x10)
    arg6[1].d = *(arg9 + 0x18)
    *arg7 = *(arg9 + 0x28)
    arg7[1].d = *(arg9 + 0x30)
    *arg8 = *(arg9 + 0x78)

if (arg5 != 0)
    if (arg1[0x15] == 0)
        sub_141ee69e0(arg1)
    
    if (rax_3 != 0 && arg1[0x15] == 0)
        sub_141ee69e0(arg1)
        
        if (arg1[0x15] == 0)
            sub_141ee69e0(arg1)

return zx.q(rax_3)
