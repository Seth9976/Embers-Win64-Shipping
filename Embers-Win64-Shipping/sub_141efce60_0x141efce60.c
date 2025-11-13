// 函数: sub_141efce60
// 地址: 0x141efce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1[2] + 0xcc)
uint64_t result = zx.q(rdx u>> 0x12)

if ((result.b & 1) != 0 || ((rdx u>> 7).b & 1) == 0)
    result = sub_142459f30(arg1, arg2)
    
    if (data_143a2d690 != 0)
        result = sub_1405be820(arg1)
        
        if (result != 0)
            void* rcx_1 = *(result + 0x188)
            int64_t* rcx_2
            
            if (rcx_1 == 0)
                rcx_2 = result + 0x308
            else
                rcx_2 = *(rcx_1 + 0xc8)
            
            return sub_1420e7dd0(rcx_2, arg1, *(result + 0x530)) __tailcall

return result
