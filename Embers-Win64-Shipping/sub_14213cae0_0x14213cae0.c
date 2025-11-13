// 函数: sub_14213cae0
// 地址: 0x14213cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0
zmm0.d = arg2[1].d.d f+ arg1[0xc].d
arg1[0xc].d = zmm0.d
int32_t var_28
int64_t* var_20
int64_t arg_8
void* rcx

if (*(arg1 + 0x64) != 0)
    int64_t rbx_3 = sx.q(arg1[1].d)
    
    if (rbx_3.d != 0)
        int32_t rbp_1 = 0
        int32_t* result
        
        if (arg1[3].d == *(arg1 + 0x44))
        label_14213cd1b:
            sub_140b33170(&arg1[2], &var_28)
            *var_20 = *arg2
            var_20[1].d = arg2[1].d
            *(var_20 + 0xc) = 0xffffffff
            int64_t rbx_5 = *var_20
            result = sub_1421419e0(&arg1[2], &arg_8, (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d), 
                var_20, var_28, nullptr)
            int32_t i_4 = arg1[1].d
            int32_t i = i_4
            int32_t r10_1 = *(arg1 + 0x64)
            int64_t r11_2 = *arg1
            
            if (i_4 s> 0)
                do
                    int32_t rcx_21 = i & 0x80000001
                    
                    if (rcx_21 s< 0)
                        rcx_21 = ((rcx_21 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(i)
                    int32_t i_3 = (temp2_1 - temp1_1) s>> 1
                    i = i_3
                    int32_t result_1 = i_3 + rbp_1
                    result = sx.q(result_1)
                    
                    if (arg2[1].d f<= *(r11_2 + result * 0xc + 8))
                        rbp_1 = result_1 + rcx_21
                while (i s> 0)
            
            if (rbp_1 s< r10_1)
                if (r10_1 == i_4)
                    if (0 != 0)
                        memmove(r11_2 + sx.q(i_4 - 1) * 0xc, r11_2 + sx.q(i_4) * 0xc, 0)
                    
                    arg1[1].d -= 1
                
                sub_142075310(arg1, rbp_1, 1)
                int64_t rcx_29 = *arg1
                int64_t rdx_17 = sx.q(rbp_1) * 3
                *(rcx_29 + (rdx_17 << 2)) = *arg2
                result = zx.q(arg2[1].d)
                *(rcx_29 + (rdx_17 << 2) + 8) = result.d
        else
            int64_t rax_7 = *arg2
            arg_8 = rax_7
            int32_t rax_9 = sub_140b5ead0(rax_7.d) + arg_8:4.d
            void* r8_2 = &arg1[9]
            void* rcx_5 = *(r8_2 + 8)
            
            if (rcx_5 != 0)
                r8_2 = rcx_5
            
            int32_t rax_11 = *(r8_2 + (((sx.q(arg1[0xb].d) - 1) & sx.q(rax_9)) << 2))
            
            if (rax_11 == 0xffffffff)
                goto label_14213cd1b
            
            int64_t r8_3 = arg1[2]
            int64_t rcx_6
            
            while (true)
                rcx_6 = sx.q(rax_11)
                int64_t rdx_7 = rcx_6 * 5
                
                if (*(r8_3 + (rdx_7 << 2)) == *arg2)
                    break
                
                rax_11 = *(r8_3 + (rdx_7 << 2) + 0xc)
                
                if (rax_11 == 0xffffffff)
                    goto label_14213cd1b
            
            if (rax_11 == 0xffffffff)
                goto label_14213cd1b
            
            result = rcx_6 * 5
            int64_t* r11_1 = r8_3 + (result << 2)
            
            if (r11_1 == 0)
                goto label_14213cd1b
            
            zmm0 = r11_1[1].d
            int32_t zmm1 = arg2[1].d
            
            if (not(zmm0.d f>= zmm1))
                int64_t r8_4 = sx.q(arg1[1].d)
                
                if (r8_4.d s> 0)
                    int64_t rbx_4 = *arg1
                    
                    if (not(zmm0.d f< *(rbx_4 + r8_4 * 0xc - 4)))
                        int32_t r9_3 = 0
                        int32_t i_1 = r8_4.d
                        
                        if (r8_4.d s> 0)
                            do
                                int32_t rcx_9 = i_1 & 0x80000001
                                
                                if (rcx_9 s< 0)
                                    rcx_9 = ((rcx_9 - 1) | 0xfffffffe) + 1
                                
                                int32_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(i_1)
                                int32_t i_2 = (temp4_1 - temp3_1) s>> 1
                                i_1 = i_2
                                int32_t rax_15 = i_2 + r9_3
                                
                                if (zmm1 f<= *(rbx_4 + sx.q(rax_15) * 0xc + 8))
                                    r9_3 = rax_15 + rcx_9
                            while (i_1 s> 0)
                        
                        if (r9_3 != r8_4.d)
                            void* rcx_13 = rbx_4 + sx.q(r9_3) * 0xc
                            
                            while (not(zmm0.d f> *(rcx_13 + 8)))
                                if (*rcx_13 == *r11_1)
                                    int32_t r8_5 = r8_4.d - r9_3
                                    
                                    if (r8_5 != 1)
                                        memmove(rbx_4 + sx.q(r9_3) * 0xc, 
                                            rbx_4 + sx.q(r9_3 + 1) * 0xc, (r8_5 - 1) * 0xc)
                                    
                                    arg1[1].d -= 1
                                    break
                                
                                r9_3 += 1
                                rcx_13 += 0xc
                                
                                if (r9_3 == r8_4.d)
                                    break
                
                goto label_14213cd1b
        
        return result
    
    int32_t rax_4 = (rbx_3 + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_14083a7e0(arg1)
    
    int64_t rdx_3 = *arg1
    int64_t rcx_3 = rbx_3 * 3
    *(rdx_3 + (rcx_3 << 2)) = *arg2
    *(rdx_3 + (rcx_3 << 2) + 8) = arg2[1].d
    rcx = &arg1[2]
else
    rcx = &arg1[2]

sub_140b33170(rcx, &var_28)
*var_20 = *arg2
var_20[1].d = arg2[1].d
*(var_20 + 0xc) = 0xffffffff
int64_t rbx_1 = *var_20
return sub_1421419e0(&arg1[2], &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_20, var_28, 
    nullptr)
