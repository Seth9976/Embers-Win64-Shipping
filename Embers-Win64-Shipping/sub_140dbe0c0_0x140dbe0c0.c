// 函数: sub_140dbe0c0
// 地址: 0x140dbe0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (not(0f f== *(arg4 + 0xc)) && not(0f f== *(arg2 + 0x14)) && not(0f f== *(arg2 + 0x18)))
    result = sub_140dbe040(arg1)
    
    if (result.b == 0 && *(arg3 + 0x6c) != result.b)
        void* r8 = *(arg3 + 0x48)
        
        if (r8 == 0)
            result.b = 0
            return result
        
        int32_t rax = *(r8 + 0xc)
        
        if (rax s>= data_143e1d9b4)
            result = 0
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_2 = temp1_1 + rdx_1
            result =
                *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
        
        if ((*(result + 8) & 0x30000000) == 0 && ((*(r8 + 8) u>> 0xf).b & 1) == 0)
            result.b = 0
            return result

result.b = 1
return result
