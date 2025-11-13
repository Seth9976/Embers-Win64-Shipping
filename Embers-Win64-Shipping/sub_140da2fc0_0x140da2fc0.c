// 函数: sub_140da2fc0
// 地址: 0x140da2fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t*** arg_8 = arg1
int64_t* rax = *arg2
int64_t* result = nullptr
int64_t* result_1 = nullptr
int32_t arg_10 = 0
void* rbx = *rax
void* var_a0 = rbx
void* rax_2 = rbx + sx.q(rax[1].d) * 0x28

if (rbx != rax_2)
    int64_t* result_4 = rbx + 8
    int64_t* result_3 = result_4
    void* rbx_4
    
    do
        int64_t* rax_3
        rax_3, arg4 = sub_140da60e0(arg1, result_4, arg4)
        int32_t r11_1 = *(arg3 + 0x28)
        int32_t rcx = 0
        int32_t r8 = 0
        int32_t var_c8_1 = 0
        int32_t r15_1 = 0
        int32_t var_c4_1 = 1
        int32_t* var_c0_1 = arg3 + 0x10
        int32_t var_b8_1 = 0xffffffff
        int64_t var_b4_1 = 0
        
        if (r11_1 != 0)
            int32_t* rax_4 = *(arg3 + 0x20)
            int32_t* r9_1 = arg3 + 0x10
            
            if (rax_4 != 0)
                r9_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_140da30a9:
                int32_t rax_10 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_c4_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_b4_1.d = r8 - rax_11 + 0x1f
                
                if (r8 - rax_11 + 0x1f s> r11_1)
                    var_b4_1.d = r11_1
            else
                while (true)
                    int64_t rax_7 = sx.q(rcx)
                    r8 += 0x20
                    rcx += 1
                    var_b4_1:4.d = r8
                    var_c8_1 = rcx
                    
                    if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                        break
                    
                    rdx_4 = r9_1[rax_7 + 1]
                    int32_t var_b8_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140da30a9
                
                var_b4_1.d = r11_1
        
        int32_t r14_1 = *(arg3 + 0x28)
        int128_t var_58_1 = var_c8_1.o
        int32_t rcx_5 = r14_1 & 0xffffffe0
        int32_t r8_3 = r14_1 s>> 5
        int128_t var_48_1 = 0xffffffff
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        arg4.o = var_58_1
        int128_t var_88 = arg3.o
        int128_t var_78_1 = arg4.o
        
        if (r14_1 != r11_1)
            int32_t* rax_13 = *(arg3 + 0x20)
            int32_t* r9_2 = arg3 + 0x10
            
            if (rax_13 != 0)
                r9_2 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_8 = r9_2[sx.q(r8_3)] & 0xffffffff << (r14_1.b & 0x1f)
            
            if (rdx_8 != 0)
            label_140da316b:
                int32_t rax_20 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t rax_21
                
                if (rax_20 == 0)
                    rax_21 = 0x20
                else
                    rax_21 = 0x1f - temp0_4
                
                r14_1 = rcx_5 - rax_21 + 0x1f
                
                if (r14_1 s> r11_1)
                    r14_1 = r11_1
            else
                while (true)
                    int64_t rax_17 = sx.q(r8_3)
                    rcx_5 += 0x20
                    r8_3 += 1
                    
                    if (rax_17.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                        break
                    
                    rdx_8 = r9_2[rax_17 + 1]
                    
                    if (rdx_8 != 0)
                        goto label_140da316b
                
                r14_1 = r11_1
        
        while (true)
            int64_t rax_22 = sx.q(var_78_1:0xc.d)
            int64_t* rdi = var_88.q
            
            if (rax_22.d == r14_1 && var_78_1.q == arg3 + 0x10 && rdi == arg3)
                break
            
            int64_t rdi_2 = *(*rdi + rax_22 * 0x10)
            int32_t rbx_2
            
            if (rax_3[1].d != *(rax_3 + 0x34))
                int32_t rax_26 = sub_140b5ead0(rdi_2.d) + rdi_2:4.d
                void* r8_4 = &rax_3[7]
                void* rcx_8 = *(r8_4 + 8)
                
                if (rcx_8 != 0)
                    r8_4 = rcx_8
                
                rbx_2 = *(r8_4 + (((sx.q(rax_3[9].d) - 1) & sx.q(rax_26)) << 2))
            
            if (rax_3[1].d == *(rax_3 + 0x34) || rbx_2 == 0xffffffff)
            label_140da3208:
                rbx_2 = -1
            else
                int64_t rcx_9 = *rax_3
                
                while (true)
                    int64_t rax_29 = sx.q(rbx_2) * 2
                    
                    if (*(rcx_9 + (rax_29 << 3)) == rdi_2)
                        break
                    
                    rbx_2 = *(rcx_9 + (rax_29 << 3) + 8)
                    
                    if (rbx_2 == 0xffffffff)
                        goto label_140da3208
            
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
            int32_t rax_32 = r15_1 + 1
            
            if (rbx_2 == 0xffffffff)
                rax_32 = r15_1
            
            r15_1 = rax_32
        
        if (r15_1 s<= arg_10)
            result = result_1
        
        int64_t* result_2
        
        if (r15_1 s<= arg_10 && result != 0)
            result_2 = result_3
        else
            result_2 = result_3
            result = result_2
            result_1 = result_2
            arg_10 = r15_1
        
        result_4 = &result_2[5]
        arg1 = arg_8
        rbx_4 = var_a0 + 0x28
        var_a0 = rbx_4
        result_3 = result_4
    while (rbx_4 != rax_2)

return result
