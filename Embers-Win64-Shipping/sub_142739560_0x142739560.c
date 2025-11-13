// 函数: sub_142739560
// 地址: 0x142739560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = arg2
uint64_t var_18 = 0
int32_t var_10 = 0
int64_t var_20 = arg3

if (&var_18 != arg4)
    int64_t rbx_1 = sx.q(arg4[1].d)
    int64_t rbp_1 = *arg4
    var_10 = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1405c4a00(&var_18, rbx_1.d, 0)
        memcpy(var_18, rbp_1, (rbx_1 << 3).d)

(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f73620), &var_28)
uint64_t rbx_3 = var_18
uint64_t* result = &var_18

if (arg4 != &var_18)
    int64_t rsi_1 = sx.q(var_10)
    int32_t r8_3 = *(arg4 + 0xc)
    arg4[1].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_3 != 0)
        sub_1405c4a00(arg4, rsi_1.d, r8_3)
        result = memcpy(*arg4, rbx_3, (rsi_1 << 3).d)
        rbx_3 = var_18
    else
        *(arg4 + 0xc) = 0

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
