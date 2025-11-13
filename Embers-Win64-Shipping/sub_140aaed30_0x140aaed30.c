// 函数: sub_140aaed30
// 地址: 0x140aaed30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int32_t entry_r8
int64_t result = *sub_140aaedb0(arg1 + 8, &var_18, entry_r8)
int64_t* var_10

if (var_10 == 0)
    return result

var_10[1].d -= 1

if (var_10[1].d == 1)
    int64_t rdx_1 = *var_10
    (*rdx_1)(var_10, rdx_1)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8 = *var_10
        (*(r8 + 8))(var_10, zx.q(rsi_1), r8)

return result
