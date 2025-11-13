// 函数: sub_141ee1370
// 地址: 0x141ee1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1405be820(arg1)

if (result != 0 && result[0x24] != 0 && (*(*arg1 + 0x5c0))(arg1).b != 0)
    int64_t rcx_1 = arg1[0x29]
    
    if (rcx_1 != 0)
        result = sub_141dec0a0(rcx_1)
        
        if (result != 0)
            void* rcx_2 = arg1[0x29]
            
            if (rcx_2 != 0)
                int64_t rdx = *(rcx_2 + 0x220)
                void* rax_1 = (*(rdx + 0x10))(rcx_2 + 0x220, rdx)
                int128_t var_18 = zx.o(0)
                float zmm1 = *(rax_1 + 4)
                zmm1 = zmm1 + zmm1
                int32_t zmm0_1 = *(rax_1 + 0x10) f* *(rax_1 + 8)
                int64_t rax_2 = *result
                float var_28 = zmm1
                float var_24_1 = zmm1
                return (*(rax_2 + 0x10))(result, arg2, arg3, &var_28, &var_18, 0, var_28, zmm0_1, 
                    var_18)

result.b = 0
return result
