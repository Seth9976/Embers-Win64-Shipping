// 函数: sub_140ce9db0
// 地址: 0x140ce9db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143e1b7d0
void* result = sub_140d21d80(arg1)

if (result != rbx)
    if (data_143ddb408 != 0)
        result = sub_140d21d80(arg1)
        
        if ((*(result + 0x50) & 0x300010) == 0)
            *(arg1 + 8) |= 8
            int64_t* rcx_1 = data_143ddb408
            result = (*(*rcx_1 + 0x40))(rcx_1, arg1)
    
    *(arg1 + 0x28) &= 0xfe
    *(arg1 + 0x28) |= arg2

return result
