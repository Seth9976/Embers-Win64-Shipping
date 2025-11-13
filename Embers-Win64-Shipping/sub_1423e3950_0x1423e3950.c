// 函数: sub_1423e3950
// 地址: 0x1423e3950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
void* rbx = arg1
int32_t r15 = 0
int32_t arg_18 = 0
uint64_t result

if (data_143de5426 == 0)
    int64_t* r12_1 = arg1 + 0xb28
    int64_t* var_b0 = r12_1
    
    if (*r12_1 == 0)
        sub_140af2b60()
        result = sub_140b21a10(&data_143dbb3f0, u"noeyetracking")
        
        if (result.b == 0)
            sub_140a387e0()
            int64_t var_b8
            sub_140b58260(&var_b8, u"EyeTracker", 1)
            int64_t rbx_1 = var_b8
            void* r8_1 = data_14399e720
            int64_t rsi_1 = 0
            int64_t var_a0 = 0
            int64_t var_98_1 = 0
            int32_t r13_1 = 0
            int32_t rax = (*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1)
            
            if (rax s> 0)
                do
                    void* r9_1 = data_14399e720
                    int64_t rax_1 = (*(r9_1 + 0x10))(&data_14399e720, rbx_1, zx.q(r14), r9_1)
                    int64_t r15_1
                    
                    if (rax_1 == 0)
                        r15_1 = rax_1
                    else
                        r15_1 = rax_1 - 8
                    
                    int64_t rdi_1 = sx.q(var_98_1.d)
                    int32_t rax_2 = (rdi_1 + 1).d
                    var_98_1.d = rax_2
                    
                    if (rax_2 s> r13_1)
                        sub_1405a4d70(&var_a0)
                        r13_1 = var_98_1:4.d
                        rsi_1 = var_a0
                    
                    r14 += 1
                    *(rsi_1 + (rdi_1 << 3)) = r15_1
                while (r14 s< rax)
                
                r12_1 = var_b0
                r15 = 0
            
            int16_t* var_90 = nullptr
            int32_t var_88_1 = 0
            sub_140af2b60()
            char r13_2 = sub_140b2acc0(&data_143dbb3f0, u"eyetracking=", &var_90, 1).b
            int64_t* arg_10 = nullptr
            var_b0 = nullptr
            int32_t r14_1 = 0
            int64_t var_a8_1 = 0
            int64_t* rdx_8
            int32_t i
            
            while (true)
                if (r14_1 s< 0 || r14_1 s>= var_98_1.d)
                    i = 0
                    int32_t rdi_3 = 0
                    
                    while (true)
                        if (rdi_3 s< 0 || rdi_3 s>= var_a8_1.d)
                            rdx_8 = nullptr
                            break
                        
                        int64_t* rsi_2 = var_b0[sx.q(rdi_3)]
                        void var_60
                        result = (*(*rsi_2 + 0x50))(rsi_2, &var_60)
                        
                        if (r12_1 != result)
                            *r12_1 = *result
                            *result = 0
                            sub_1405aeff0(&r12_1[1], result + 8)
                        
                        int64_t* var_58
                        
                        if (var_58 != 0)
                            var_58[1].d -= 1
                            
                            if (var_58[1].d == 1)
                                (**var_58)(var_58)
                                result = zx.q(*(var_58 + 0xc))
                                *(var_58 + 0xc) -= 1
                                
                                if (result.d == 1)
                                    (*(*var_58 + 8))(var_58, 1)
                        
                        if (*r12_1 == 0)
                            rdi_3 += 1
                            i = 0
                            continue
                        
                        rdx_8 = rsi_2
                        i = 0
                        arg_10 = rdx_8
                        break
                    
                    rsi_1 = var_a0
                    break
                
                int64_t* rdi_2 = *(rsi_1 + (sx.q(r14_1) << 3))
                int64_t var_80
                
                if (r13_2 != 0)
                    r15 |= 1
                    int64_t* rax_4 = (*(*rdi_2 + 0x40))(rdi_2, &var_80)
                    int16_t* rdx_5
                    
                    if (rax_4[1].d == 0)
                        rdx_5 = &data_142d40450
                    else
                        rdx_5 = *rax_4
                    
                    int16_t* const rcx_3 = &data_142d40450
                    
                    if (var_88_1 != 0)
                        rcx_3 = var_90
                    
                    result = sub_140a54510(rcx_3, rdx_5)
                
                int64_t* rbx_2
                
                if (r13_2 == 0 || result.d == 0)
                    rbx_2.b = 0
                else
                    rbx_2.b = 1
                
                if ((r15.b & 1) != 0)
                    int64_t rcx_4 = var_80
                    r15 &= 0xfffffffe
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                
                if (rbx_2.b == 0)
                    if ((*(*rdi_2 + 0x48))(rdi_2) == 0)
                        rbx_2 = sx.q(var_a8_1.d)
                        int32_t rax_10 = (rbx_2 + 1).d
                        var_a8_1.d = rax_10
                        
                        if (rax_10 s> var_a8_1:4.d)
                            sub_1405a4d70(&var_b0)
                        
                        *(var_b0 + (rbx_2 << 3)) = rdi_2
                    else
                        void var_70
                        result = (*(*rdi_2 + 0x50))(rdi_2, &var_70)
                        
                        if (r12_1 != result)
                            *r12_1 = *result
                            *result = 0
                            sub_1405aeff0(&r12_1[1], result + 8)
                        
                        int64_t* var_68
                        
                        if (var_68 != 0)
                            result = zx.q(var_68[1].d)
                            var_68[1].d -= 1
                            
                            if (result.d == 1)
                                (**var_68)(var_68)
                                result = zx.q(*(var_68 + 0xc))
                                *(var_68 + 0xc) -= 1
                                
                                if (result.d == 1)
                                    (*(*var_68 + 8))(var_68, 1)
                            
                            rsi_1 = var_a0
                        
                        if (*r12_1 != 0)
                            rdx_8 = rdi_2
                            i = 0
                            arg_10 = rdx_8
                            break
                
                r14_1 += 1
                continue
            
            for (; i s>= 0; i += 1)
                if (i s>= var_98_1.d)
                    break
                
                int64_t rcx_18 = *(rsi_1 + (sx.q(i) << 3))
                
                if (rcx_18 != rdx_8)
                    int64_t r8_4 = rcx_18 + 8
                    
                    if (rcx_18 == 0)
                        r8_4 = 0
                    
                    (*(data_14399e720 + 0x20))(&data_14399e720, var_b8, r8_4)
                    rdx_8 = arg_10
            
            int64_t* rcx_19 = var_b0
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int16_t* rcx_20 = var_90
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            rbx = arg1

result.b = *(rbx + 0xb28) != 0
return result
