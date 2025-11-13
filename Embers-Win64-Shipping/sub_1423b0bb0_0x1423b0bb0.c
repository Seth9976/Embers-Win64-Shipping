// 函数: sub_1423b0bb0
// 地址: 0x1423b0bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t* result = arg6
int32_t* result_1 = result

if (rbp != 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int32_t var_78
    
    if (*(rbp + 0x88) == *(rbp + 0xb4) || arg7 != 0)
        sub_140865c40(rbp + 0x30, &var_78, arg3)
        int64_t rax_15 = sx.q(var_78)
        void* const rcx_11
        
        if (rax_15.d == 0xffffffff)
            rcx_11 = nullptr
        else
            rcx_11 = *(rbp + 0x30) + rax_15 * 0x18
        
        result = rcx_11 + 8
        
        if (rcx_11 == 0)
            result = nullptr
        
        if (result != 0)
            result = zx.q(*result)
            
            if (result.d != 0xffffffff)
                while (arg2 != 0 || 8192f f> *arg5 || arg7 != 0)
                    int64_t rdx_9 = *(rbp + 0x20)
                    int64_t rbx_2 = sx.q(result.d) * 5
                    int64_t rax_18 = sx.q(*(rdx_9 + (rbx_2 << 3) + 0x10))
                    
                    if (rax_18.d s>= 0 && rax_18.d s< arg1[2].d)
                        sub_1423b33e0(arg1, arg2, arg1[1] + (rax_18 << 3), 
                            *(rdx_9 + (rbx_2 << 3) + 0x14), *(rdx_9 + (rbx_2 << 3) + 0x18), arg4, 
                            arg5, result_1)
                        rdx_9 = *(rbp + 0x20)
                    
                    result = zx.q(*(rdx_9 + (rbx_2 << 3) + 0x20))
                    
                    if (result.d == 0xffffffff)
                        break
    else
        sub_1405ba560(rbp + 0x80, &var_78, arg3)
        int64_t rax_1 = sx.q(var_78)
        int32_t rsi_1 = 0
        void* const rcx_3
        
        if (rax_1.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = (rax_1 << 5) + *(rbp + 0x80)
        
        result = rcx_3 + 8
        
        if (rcx_3 == 0)
            result = nullptr
        
        if (result != 0)
            int64_t r13_1 = sx.q(result[1].d)
            int64_t* r12_2 = *result
            var_78.q = r12_2
            
            if (r13_1 s> 0)
                void* rbx_1 = r12_2 + 4
                int64_t rbp_1 = 0
                
                while (not(8192f f<= *arg5))
                    int64_t r8 = sx.q(*(rbx_1 - 4))
                    
                    if (r8.d s>= 0 && r8.d s< arg1[2].d)
                        if (arg2 != 0 && not(0f f!= *rbx_1))
                            void* r9 = *arg1
                            
                            if (r8.d s< *(r9 + 0x18) << 2)
                                int32_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(r8.d)
                                int32_t rdx_2 = temp0_1 & 3
                                int32_t rax_6 = temp1_1 + rdx_2
                                int64_t zmm0 = *(*(r9 + 0x10)
                                    + ((sx.q(rax_6 s>> 2) * 0x3c + sx.q((rax_6 & 3) - rdx_2)) << 2)
                                    + 0x90)
                                zmm0.d = zmm0.d f+ zmm0.d
                                *rbx_1 = zmm0.d
                        
                        result = sub_1423b33e0(arg1, arg2, arg1[1] + (r8 << 3), *rbx_1, 
                            *(rbx_1 + 4), arg4, arg5, result_1)
                    
                    rsi_1 += 1
                    rbp_1 += 1
                    rbx_1 += 0xc
                    
                    if (rbp_1 s>= r13_1)
                        break
                
                r12_2 = var_78.q
            
            if (not(8192f f> *arg5) && rsi_1 s> 1)
                result = sx.q(rsi_1 - 1) * 3
                void* rdx_6 = r12_2 + (result << 2)
                
                if (r12_2 != rdx_6)
                    int64_t zmm1 = *r12_2
                    int32_t rcx_9 = r12_2[1].d
                    *r12_2 = *rdx_6
                    result = zx.q(*(rdx_6 + 8))
                    r12_2[1].d = result.d
                    *rdx_6 = zmm1
                    *(rdx_6 + 8) = rcx_9

return result
