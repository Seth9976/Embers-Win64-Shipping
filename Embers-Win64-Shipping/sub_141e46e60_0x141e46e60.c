// 函数: sub_141e46e60
// 地址: 0x141e46e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
uint64_t result = zx.q(*(arg1 + 0x18))

if (result.d != *(arg1 + 0x44))
    int32_t rax_1 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x48
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x10)
        
        while (true)
            int64_t rdx_3 = sx.q(result.d) * 3
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            result = zx.q(*(r8_2 + (rdx_3 << 3) + 0x10))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            if (*(arg1 + 0xb0) != 0)
                result = *(arg1 + 0xb4)
            
            if (*(arg1 + 0xb0) == 0 || *arg2 != result)
                int64_t rbx_1 = *arg2
                result = zx.q(*(arg1 + 0x18))
                
                if (result.d != *(arg1 + 0x44))
                    int32_t result_1 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                    void* r8_3 = arg1 + 0x48
                    void* rcx_4 = *(r8_3 + 8)
                    result = sx.q(result_1)
                    
                    if (rcx_4 != 0)
                        r8_3 = rcx_4
                    
                    int32_t rdx_7 = *(r8_3 + (((sx.q(*(arg1 + 0x58)) - 1) & result) << 2))
                    
                    if (rdx_7 != 0xffffffff)
                        int64_t r8_4 = *(arg1 + 0x10)
                        int64_t rcx_5
                        
                        while (true)
                            rcx_5 = sx.q(rdx_7)
                            result = rcx_5 * 3
                            
                            if (*(r8_4 + (result << 3)) == rbx_1)
                                break
                            
                            rdx_7 = *(r8_4 + (result << 3) + 0x10)
                            
                            if (rdx_7 == 0xffffffff)
                                return result
                        
                        if (rdx_7 != 0xffffffff)
                            int64_t* rbx_2 = *(r8_4 + rcx_5 * 0x18 + 8)
                            result = sub_1405c2fb0(arg1 + 0x10, rdx_7)
                            
                            if (rbx_2 != 0)
                                if (sub_140a80f40() != 0)
                                label_141e46fac:
                                    sub_1422ce940(rbx_2)
                                    sub_1422b5540(rbx_2)
                                    return j_sub_140a74f90(rbx_2) __tailcall
                                
                                if (data_143f138f4 == 0)
                                    if (data_143de5480 == 0)
                                        goto label_141e46fac
                                    
                                    uint32_t rax_7
                                    rax_7.b = GetCurrentThreadId() == data_143de5470
                                    
                                    if (rax_7.b != 0)
                                        goto label_141e46fac
                                
                                void var_38
                                void** rax_8 = sub_141e3c410(&var_38, nullptr, 0xff)
                                *(*rax_8 + 0x10) = rbx_2
                                void* rcx_13 = *rax_8
                                int32_t r8_6 = rax_8[2].d
                                int64_t* rdx_10 = rax_8[1]
                                int64_t* rbx_3 = *(rcx_13 + 0x20)
                                int64_t* arg_10 = rbx_3
                                int32_t* rdi_1 = &rbx_3[9]
                                
                                if (rbx_3 != 0)
                                    *rdi_1 += 1
                                    rbx_3 = arg_10
                                
                                result = sub_1405a5630(rcx_13, rdx_10, r8_6, 1)
                                
                                if (rbx_3 != 0)
                                    result = zx.q(*rdi_1)
                                    *rdi_1 -= 1
                                    
                                    if (result.d == 1)
                                        return sub_140a2f6e0(arg_10)

return result
