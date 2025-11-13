// 函数: sub_140638520
// 地址: 0x140638520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1423de540(data_143f5b298, arg1, 0)
int64_t* result_1 = result

if (result != 0)
    int64_t rbx_1 = *arg2
    
    if (rbx_1 != 0)
        int64_t* i = result[0x13]
        
        for (void* rbp_1 = &i[sx.q(result[0x14].d)]; i != rbp_1; i = &i[1])
            int64_t* rsi_1 = *i
            int64_t arg_18
            result = sub_1420e4d10(rsi_1, &arg_18)
            
            if (rbx_1 == arg_18)
                (*(*rsi_1 + 0x260))(rsi_1, 0)
                sub_1420ee450(rsi_1, 0)
                sub_1420ee130(rsi_1, 1)
                return sub_142435600(result_1, 1)

return result
