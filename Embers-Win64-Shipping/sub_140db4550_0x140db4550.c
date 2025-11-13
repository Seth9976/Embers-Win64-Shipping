// 函数: sub_140db4550
// 地址: 0x140db4550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg2
int64_t r14 = sx.q(arg4)
int64_t* rax = sub_140da4220(*(arg1 + 0x58), arg6, arg8, &data_143e20dd8)
int16_t rax_1 = sub_140da8a70(rax)
int64_t* r10 = arg3
int16_t arg_8 = rax_1
int32_t rdx_1 = r10[1].d
int32_t rcx_3
int32_t r9

if (rdx_1 s> 1)
    r9 = arg5
    rcx_3 = r9 - r14.d

if (rdx_1 s<= 1 || rcx_3 s<= 0 || r9 s<= 0 || r14.d s< 0 || r9 s<= r14.d)
    *result = 0
    *(result + 4) = _mm_cvtepi32_ps(zx.o(rax_1)).d
else
    int64_t* r13_1 = nullptr
    
    if (r14.d != 0)
        goto label_140db474d
    
    int32_t rax_2 = rdx_1 - 1
    
    if (rdx_1 == 0)
        rax_2 = 0
    
    if (r9 != rax_2 || arg7 != 0 || rcx_3 s<= 5 || arg9 != 0xffffffff)
        goto label_140db474d
    
    int64_t* rax_3 = sub_140da1060(arg1, arg6, arg8)
    r13_1 = rax_3
    uint128_t zmm0
    uint32_t var_c8
    
    if (rax_3 == 0)
    label_140db473d:
        r10 = arg3
        r9 = arg5
    label_140db474d:
        uint32_t rdx_7 = zx.d(arg_8)
        int32_t rsi_1 = 0
        var_c8 = rdx_7
        uint32_t rcx_8 = rdx_7
        int16_t var_c4_1 = 0
        int32_t rbx_1 = 0
        
        if (r14.d != 0 && arg7 != 0)
            var_c4_1 = *(*r10 + (r14 << 1) - 2)
        
        int32_t r8_4 = arg10
        int32_t rdi_2 = r14.d
        int64_t rax_13 = sx.q(r9)
        
        if (r14 s< rax_13)
            do
                int16_t rbp = *(*r10 + (r14 << 1))
                
                if (rbp != 0xa)
                    void var_b0
                    sub_140da3dd0(rax, &var_b0, rbp, *(arg6 + 0x4c))
                    int32_t rcx_10 = 0
                    
                    if (var_c4_1 != 0)
                        void var_80
                        int16_t* rax_17
                        int512_t zmm1_2
                        rax_17, zmm1_2 = sub_140da3dd0(rax, &var_80, var_c4_1, *(arg6 + 0x4c))
                        rcx_10 = sx.d(sub_140da7c50(rax, rax_17, &var_b0, zmm1_2))
                    
                    int16_t var_8a
                    int32_t rdx_11 = sx.d(var_8a)
                    r8_4 = arg10
                    var_c4_1 = rbp
                    rbx_1 += rdx_11 + rcx_10
                    
                    if (arg9 != 0xffffffff)
                        if (r8_4 == 1)
                            int16_t var_8e
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(sx.d(var_8e) + rdx_11 + rcx_10)
                            
                            if (arg9 s< rbx_1 - ((temp1_1 - temp0_1) s>> 1))
                                break
                        else if (r8_4 == 0 && arg9 s< rbx_1)
                            rdi_2 -= 1
                            
                            if (rdi_2 s< arg4)
                                rdi_2 = -1
                            
                            break
                    
                    rdx_7 = zx.d(arg_8)
                    r10 = arg3
                    rcx_8 = var_c8
                else
                    rcx_8 += rdx_7
                    var_c8 = rcx_8
                    
                    if (rbx_1 s>= rsi_1)
                        rsi_1 = rbx_1
                    
                    rbx_1 = 0
                
                rdi_2 += 1
                r14 += 1
            while (r14 s< rax_13)
            
            result = arg2
            r9 = arg5
        
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(var_c8))
        
        if (rbx_1 s>= rsi_1)
            rsi_1 = rbx_1
        
        int32_t arg_c = zmm1_1.d
        arg_8.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d
        
        if (r8_4 == 0 && rdi_2 s>= r9)
            rdi_2 = r9 - 1
        
        *arg11 = rdi_2
        
        if (arg9 == 0xffffffff && r13_1 != 0)
            sub_140d98240(r13_1, arg3, &arg_8)
        
        zmm0 = zx.o(arg_8.q)
    else
        sub_140da0450(rax_3, &var_c8, arg3)
        int64_t rcx_6 = sx.q(var_c8)
        
        if (rcx_6.d == arg9)
            goto label_140db473d
        
        int64_t rdx_5 = rcx_6 << 4
        int64_t* rdx_6 = rdx_5 + *r13_1
        
        if (rdx_5 == neg.q(*r13_1))
            goto label_140db473d
        
        void* rcx_7 = *rdx_6
        void* rax_4 = r13_1[0xb]
        
        if (rcx_7 == rax_4)
            int64_t r8_1 = *(rax_4 + 0x20)
            
            if (r8_1 != 0)
                r13_1[0xb] = r8_1
        
        if (rcx_7 != r13_1[0xa])
            void* r8_2 = *(rcx_7 + 0x20)
            
            if (r8_2 != 0)
                *(r8_2 + 0x18) = *(rcx_7 + 0x18)
            
            void* r8_3 = *(rcx_7 + 0x18)
            
            if (r8_3 != 0)
                *(r8_3 + 0x20) = *(rcx_7 + 0x20)
            
            *(rcx_7 + 0x18) = 0
            *(rcx_7 + 0x20) = 0
            void* rax_7 = r13_1[0xa]
            *(rcx_7 + 0x18) = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 0x20) = rcx_7
            
            r13_1[0xa] = rcx_7
        
        void* rax_8 = *rdx_6
        
        if (rax_8 == -0x10)
            goto label_140db473d
        
        zmm0 = zx.o(*(rax_8 + 0x10))
    *result = zmm0.q

return result
