// 函数: sub_141d75bc0
// 地址: 0x141d75bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(&arg1[0xe])
int64_t result_1 = result

if (result != 0)
    int128_t zmm6 = *(arg1 + 0x60)
    *(result + 0x68) -= 1
    int64_t* rsi_1 = *arg1
    int64_t arg_8 = 0
    int64_t arg_10 = 0
    int64_t r9_1 = *rsi_1
    result = (*(r9_1 + 8))(rsi_1, &arg_8, &arg_10, r9_1)
    
    if (arg_8 != 0)
        result = sx.q(rsi_1[1].d)
        
        if (arg_10 == (zx.q(*(rsi_1 + 0x15)) u>> 3) * zx.q(*(rsi_1 + 0x16)) * sx.q(*(rsi_1 + 0xc))
                * result)
            int128_t var_28 = zmm6
            return sub_141d83ba0(result_1, arg1, &arg1[2], &var_28)

return result
