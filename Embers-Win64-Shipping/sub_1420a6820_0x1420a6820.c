// 函数: sub_1420a6820
// 地址: 0x1420a6820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0)
label_1420a6866:
    result = *(arg1 + 0x20)
    int64_t* rbx_1 = *(result + 0x30)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_14256a090()
        int64_t rdx_1 = rbx_1[2]
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            int64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_3 + 0x30)
                int64_t* r8_3 = rbx_1[0x57]
                
                if (r8_3 != 0)
                    int32_t rax_4 = *(r8_3 + 0xc)
                    void* const rax_11
                    
                    if (rax_4 s>= data_143e1d9b4)
                        rax_11 = nullptr
                    else
                        int16_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(rax_4)
                        uint32_t rdx_3 = zx.d(temp0_1)
                        int32_t rax_6 = temp1_1 + rdx_3
                        rdx_1 = sx.q(zx.d(rax_6.w) - rdx_3) * 3
                        rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + (rdx_1 << 3)
                    
                    result = zx.q(*(rax_11 + 8) u>> 0x1d)
                    
                    if ((result.b & 1) == 0)
                        (*(*r8_3 + 0x7c0))(r8_3, rdx_1)
                        
                        if ((*(rbx_1 + 0x294) & 2) != 0)
                            result = (*(*rbx_1 + 0x6a8))(rbx_1)
                        
                        if ((*(rbx_1 + 0x294) & 2) == 0 || result.b == 0)
                            result.b = 0
                        else
                            result.b = 1
                        
                        if (result.b == 0)
                            char var_10_1 = result.b
                            int32_t arg_10 = 0
                            int32_t var_18_1 = 0
                            return sub_142569840(rbx_1, 0, 0, _mm_unpacklo_ps(zx.o(0), 0))
else
    void* rax_1 = sub_1424cd830()
    void* r8_1 = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r8_1 + 0x38))
        goto label_1420a6866
    
    result = *(r8_1 + 0x30)
    
    if (*(result + (rax_2 << 3)) != rax_1 + 0x30 || (*(arg2 + 0x90) & 1) == 0)
        goto label_1420a6866

return result
