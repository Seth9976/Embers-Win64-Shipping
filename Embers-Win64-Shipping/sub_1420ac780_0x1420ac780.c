// 函数: sub_1420ac780
// 地址: 0x1420ac780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)
uint64_t result = (*(*rcx + 0x260))(rcx)
uint64_t result_1 = result

if (result != 0)
    int64_t rax_1 = sub_14256a090()
    void* rcx_1 = *(result_1 + 0x10)
    result = rax_1 + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        void* r8 = *(result_1 + 0x2b8)
        
        if (r8 != 0)
            int32_t rax_2 = *(r8 + 0xc)
            void* const rax_9
            
            if (rax_2 s>= data_143e1d9b4)
                rax_9 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_2)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_4 = temp1_1 + rdx_3
                rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_4.w) - rdx_3) * 0x18
            
            result = zx.q(*(rax_9 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                *(r8 + 0x2710) |= 0x10
                int32_t var_38 = 0x3f800000
                int32_t var_34_1 = 0x3f800000
                int32_t var_30_1 = 0x3f800000
                uint64_t var_2c
                sub_141a1d730(arg1 + 0x70, &var_2c, arg2, &var_38)
                void* rcx_8 = *(result_1 + 0x2b8)
                *(rcx_8 + 0x260) = var_2c
                int32_t var_24
                *(rcx_8 + 0x268) = var_24
                result = *(result_1 + 0x2b8)
                *(result + 0x2710) &= 0xffffffdf

return result
