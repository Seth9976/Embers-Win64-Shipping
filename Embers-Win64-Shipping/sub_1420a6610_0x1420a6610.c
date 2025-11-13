// 函数: sub_1420a6610
// 地址: 0x1420a6610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x20)
void* rbx = *(result + 0x30)

if (rbx != 0)
    void* rax = sub_14256a090()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            void* r8_2 = *(rbx + 0x2b8)
            
            if (r8_2 != 0)
                int32_t rax_1 = *(r8_2 + 0xc)
                void* const rax_8
                
                if (rax_1 s>= data_143e1d9b4)
                    rax_8 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_1)
                    uint32_t rdx_3 = zx.d(temp0_1)
                    int32_t rax_3 = temp1_1 + rdx_3
                    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_3.w) - rdx_3) * 0x18
                
                result = zx.q(*(rax_8 + 8) u>> 0x1d)
                
                if ((result.b & 1) == 0)
                    *(r8_2 + 0x2710) &= 0xffffffef
                    void* rcx_4 = *(rbx + 0x2b8)
                    int32_t var_10_1 = 0x3f800000
                    result = 0x3f800000
                    *(rcx_4 + 0x260) = _mm_unpacklo_ps(0x3f800000, 0x3f800000).q
                    *(rcx_4 + 0x268) = 0x3f800000

return result
