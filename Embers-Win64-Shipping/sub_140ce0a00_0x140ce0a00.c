// 函数: sub_140ce0a00
// 地址: 0x140ce0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8))

if ((result.b & 0x50) == 0 && (result.b & 1) != 0)
    int32_t rax = *(arg1 + 0xc)
    void* const rax_6
    
    if (rax s>= data_143e1d9b4)
        rax_6 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    if (((*(rax_6 + 8) u>> 0x1d).b & 1) == 0)
        void* rbx_1 = *(arg1 + 0x20)
        
        if (rbx_1 != 0)
            void* rax_8 = j_sub_140cddea0()
            void* rdx_4 = *(rbx_1 + 0x10)
            result = sx.q(*(rax_8 + 0x38))
            
            if (result.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (result << 3)) == rax_8 + 0x30
                    && rbx_1 != data_143e1b7d0 && ((*(rbx_1 + 8) u>> 6).b & 1) == 0)
                result.b = 1
                return result

result.b = 0
return result
