// 函数: sub_1420ce290
// 地址: 0x1420ce290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d2bce0(arg1 + 8)
int64_t result = sub_140b5b8a0(*(arg1 + 0x138), 0)
int32_t rcx_1
rcx_1.b = *(arg1 + 0x13c) != 0
rcx_1.b |= result.b == 0

if (rcx_1.b != 0)
    result = sub_140d3c6e0(arg1 + 0x130)
    
    if (result != 0)
        result = sub_140d1fd20(result, *(arg1 + 0x138))
        
        if (result != 0)
            void* arg_8 = rax
            int64_t* rax_1 = sub_140d3c6e0(arg1 + 0x130)
            int64_t rax_2 = sub_140d1fd30(rax_1, *(arg1 + 0x138))
            int64_t r9_1 = *rax_1
            return (*(r9_1 + 0x210))(rax_1, rax_2, &arg_8, r9_1)

return result
