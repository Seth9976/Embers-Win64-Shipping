// 函数: sub_1427392c0
// 地址: 0x1427392c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0

if (&var_18 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rsi_1 = *arg2
    var_10.d = rbx_1.d
    
    if (rbx_1.d != 0)
        sub_1407c3650(&var_18, rbx_1.d, 0)
        memcpy(var_18, rsi_1, (rbx_1 * 0xc).d)

int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f73648), &var_18)
int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
