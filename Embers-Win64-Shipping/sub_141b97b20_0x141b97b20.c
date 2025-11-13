// 函数: sub_141b97b20
// 地址: 0x141b97b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg2 + 0xb4) != 1)
    result.b = 0
else
    result = sub_140be0b10(arg2)
    
    if (result == 0)
        result.b = 0
    else
        int64_t rbx_1 = *(result + 8)
        sub_140d11050()
        
        if (rbx_1 != &data_143e1b9d0 || *(result + 0x3c) != 1)
            result.b = 0
        else
            int32_t rax = *(arg1 + 0xc)
            void* const rax_7
            
            if (rax s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax)
                uint32_t rdx_1 = zx.d(temp0_1)
                int32_t rax_2 = temp1_1 + rdx_1
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
            
            if (((*(rax_7 + 8) u>> 0x1c).b & 1) != 0)
                result.b = 0
            else
                (*(*arg1 + 0x210))(arg1, arg2, arg3)
                result.b = 1

return result
