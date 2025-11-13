// 函数: sub_142aa64d0
// 地址: 0x142aa64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t* result = arg6
void* rcx = arg5
int32_t rbx = arg3
char var_188 = arg4
int32_t* rdi = arg2
int32_t var_180 = rbx
int32_t* result_1 = result
void* var_158 = rcx

if (*result s<= 0)
    int16_t var_150_1 = 0
    
    while (true)
        pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(rcx)
        
        if (rbx == 0)
            break
        
        if (rbx == 1 && *rdi == 0x67)
            break
        
        char var_148[0x100]
        memset(&var_148, 0, 0x100)
        int64_t r15_1 = sx.q(*(arg1 + 0x64))
        void* r14_1 = *(arg1 + 0x68)
        uint64_t rax_3 = zx.q(*(r14_1 + (sx.q((r15_1 + 0xe).d) << 1)))
        
        if (rax_3.d != 0)
            var_148[rax_3] = 0xff
        
        uint64_t rax_5 = zx.q(*(r14_1 + (sx.q((r15_1 + 0xf).d) << 1)))
        
        if (rax_5.d != 0)
            var_148[rax_5] = 0xff
        
        int32_t rbx_1 = 0
        void* r12_1 = *(arg1 + 0x70)
        int32_t rcx_5 = *(arg1 + 0x78) - 1
        int64_t rdx = 0
        uint32_t rax_6 = zx.d(*(r12_1 + 2))
        uint32_t var_184_1 = zx.d(*(r12_1 + (sx.q(rcx_5) << 1)))
        int64_t rcx_8 = sx.q(var_180)
        int64_t r8 = rcx_8
        
        if (rcx_8.d s> 0)
            do
                rcx_8 = zx.q(rdi[rdx] - 0x1000)
                
                if (rcx_8.d u<= 7)
                    rbx_1 |= 1 << (rcx_8.d u% 0x20)
                
                rdx += 1
            while (rdx s< r8)
        
        int16_t* rdi_1 = r14_1 + (r15_1 << 1)
        int32_t r11_1 = 1
        int64_t i_2 = 8
        int64_t i
        
        do
            uint64_t rsi_1 = zx.q(*rdi_1)
            
            if (rsi_1.d != 0 && (rbx_1 & r11_1) == 0)
                r12_1 = *(arg1 + 0x70)
                uint32_t rdx_1 = rax_6 + 0x100
                uint32_t r10_1 = zx.d(*(r12_1 + (rsi_1 << 1)))
                
                if (r10_1.b u>= rax_6.b)
                    rdx_1 = rax_6
                
                var_148[rsi_1] = (rdx_1 s>> 8).b
                uint32_t r8_1 = zx.d(*(r12_1 + (zx.q((rsi_1 + 1).d) << 1)))
                rax_6 = ((rdx_1 & 0xff00) - (r10_1 & 0xff00) + (r8_1 & 0xff00)) | zx.d(r8_1.b)
            
            r11_1 = rol.d(r11_1, 1)
            rdi_1 = &rdi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdi = arg2
        uint32_t rsi_2 = 0
        int32_t var_170_1 = 0
        
        if (rbx_1 == 0 && *rdi == 0x19 && var_188 == 0)
            uint32_t rdx_2 = zx.d(*(r12_1 + (zx.q(*(r14_1 + 0x32)) << 1)))
            rcx_8 = zx.q(rdx_2 - rax_6)
            rax_6 = rdx_2
            var_170_1 = rcx_8.d
        
        int64_t rbx_2 = 0
        char var_188_1 = 0
        int64_t rcx_17 = sx.q(var_180)
        
        if (rcx_17.d s> 0)
            while (true)
                int64_t rcx_18 = sx.q(rdi[rbx_2])
                rbx_2 += 1
                
                if (rcx_18.d == 0x67)
                    var_188_1 = 1
                    int64_t r11_3 = rcx_17
                    
                    if (rbx_2 s>= rcx_17)
                        goto label_142aa6854
                    
                    while (true)
                        int64_t rcx_28 = sx.q(rdi[r11_3 - 1])
                        r11_3 -= 1
                        
                        if (rcx_28.d == 0x67)
                            break
                        
                        if (rcx_28.d == 0xffffffff)
                            break
                        
                        if (rcx_28.d s>= 0)
                            uint32_t rcx_29
                            
                            if (rcx_28.d s< r15_1.d)
                                rcx_29 = zx.d(*(r14_1 + (rcx_28 << 1)))
                            label_142aa67e0:
                                
                                if (rcx_29 != 0)
                                    uint64_t r10_5 = zx.q(rcx_29)
                                    void* rdi_3 = &var_148[r10_5]
                                    
                                    if (*rdi_3 != 0)
                                        break
                                    
                                    int64_t r8_3 = *(arg1 + 0x70)
                                    uint32_t rdx_6 = var_184_1 - 0x100
                                    uint32_t r9_1 = zx.d(*(r8_3 + (zx.q(rcx_29 + 1) << 1)))
                                    uint32_t r10_6 = zx.d(*(r8_3 + (r10_5 << 1)))
                                    
                                    if (r9_1.b u<= var_184_1.b)
                                        rdx_6 = var_184_1
                                    
                                    uint32_t rbp_6 = ((rdx_6 & 0xff00) - (r9_1 & 0xff00)
                                        + (r10_6 & 0xff00)) | zx.d(r10_6.b)
                                    var_184_1 = rbp_6
                                    *rdi_3 = (rbp_6 s>> 8).b
                                    rdi = arg2
                            else if (rcx_28.d s>= 0x1000 && rcx_28.d - 0x1000 s< 8)
                                rcx_29 = zx.d(*(r14_1 + (sx.q(rcx_28.d - 0x1000 + r15_1.d) << 1)))
                                goto label_142aa67e0
                        
                        if (rbx_2 s>= r11_3)
                            goto label_142aa6854
                else if (rcx_18.d != 0xffffffff)
                    if (rcx_18.d s< 0)
                    label_142aa6770:
                        
                        if (rbx_2 s>= rcx_17)
                            goto label_142aa6854
                        
                        continue
                    else
                        uint64_t r11_2
                        
                        if (rcx_18.d s>= r15_1.d)
                            if (rcx_18.d s< 0x1000 || rcx_18.d - 0x1000 s>= 8)
                                goto label_142aa6770
                            
                            r11_2 = zx.q(*(r14_1 + (sx.q(rcx_18.d - 0x1000 + r15_1.d) << 1)))
                        else
                            r11_2 = zx.q(*(r14_1 + (rcx_18 << 1)))
                        
                        if (r11_2.d == 0)
                            goto label_142aa6770
                        
                        void* rdi_2 = &var_148[zx.q(r11_2.d)]
                        
                        if (*rdi_2 == 0)
                            int64_t r9 = *(arg1 + 0x70)
                            uint32_t rdx_4 = rax_6 + 0x100
                            uint32_t r10_3 = zx.d(*(r9 + (r11_2 << 1)))
                            
                            if (r10_3.b u>= rax_6.b)
                                rdx_4 = rax_6
                            
                            *rdi_2 = (rdx_4 s>> 8).b
                            rdi = arg2
                            uint32_t r8_2 = zx.d(*(r9 + (zx.q((r11_2 + 1).d) << 1)))
                            rax_6 = ((rdx_4 & 0xff00) - (r10_3 & 0xff00) + (r8_2 & 0xff00))
                                | zx.d(r8_2.b)
                            goto label_142aa6770
                
                result = result_1
                *result = 1
                break
            
            break
        
    label_142aa6854:
        int64_t rbx_3 = sx.q(rcx_5)
        int32_t rbp_7 = 1
        int64_t r9_3 = 1
        
        if (1 s< rbx_3)
            do
                if (var_148[r9_3] == 0)
                    int64_t rcx_38 = *(arg1 + 0x70)
                    uint32_t r10_7 = zx.d(*(rcx_38 + (r9_3 << 1)))
                    
                    if (var_188_1 == 0 && r10_7 s> rax_6)
                        rax_6 = r10_7
                    
                    uint32_t rdx_7 = rax_6 + 0x100
                    
                    if (r10_7.b u>= rax_6.b)
                        rdx_7 = rax_6
                    
                    uint32_t rdx_8 = zx.d(*(rcx_38 + (r9_3 << 1) + 2))
                    var_148[r9_3] = (rdx_7 s>> 8).b
                    rax_6 = ((rdx_7 & 0xff00) - (r10_7 & 0xff00) + (rdx_8 & 0xff00)) | zx.d(rdx_8.b)
                
                r9_3 += 1
            while (r9_3 s< rbx_3)
            
            rsi_2 = 0
        
        if (rax_6 s<= var_184_1)
            int64_t i_1 = 1
            
            while (true)
                uint32_t rdi_4 = rsi_2
                int32_t r9_5 = *(arg1 + 0x78) - 1
                
                for (; i_1 s< sx.q(r9_5); i_1 += 1)
                    uint32_t rdx_10 = zx.d(var_148[i_1])
                    
                    if (rdx_10 != 0xff)
                        rdi_4 = rdx_10 - zx.d(*(*(arg1 + 0x70) + (i_1 << 1) + 1))
                        
                        if (rdi_4 != rsi_2)
                            break
                    
                    rbp_7 += 1
                
                if (rsi_2 != 0 || rbp_7 s< r9_5)
                    int32_t rdx_11 = *(var_158 + 8)
                    uint32_t rsi_6 = zx.d(*(*(arg1 + 0x70) + (i_1 << 1))) << 0x10 | zx.d(var_150_1)
                    
                    if (rdx_11 + 1 s< 0 || *(var_158 + 0xc) s< rdx_11 + 1)
                        if (sub_142ae7df0(var_158, rdx_11 + 1, result_1) != 0)
                            *(*(var_158 + 0x18) + (sx.q(*(var_158 + 8)) << 2)) = rsi_6
                            *(var_158 + 8) += 1
                    else
                        *(*(var_158 + 0x18) + (sx.q(*(var_158 + 8)) << 2)) = rsi_6
                        *(var_158 + 8) += 1
                
                result = zx.q(*(arg1 + 0x78) - 1)
                
                if (rbp_7 == result.d)
                    break
                
                rsi_2 = rdi_4
                rbp_7 += 1
                var_150_1 = rsi_2.w
                i_1 += 1
            
            break
        
        result = result_1
        
        if (rax_6 - (var_170_1 & 0xff00) s> var_184_1)
            *result = 0xf
            break
        
        var_188 = 1
        
        if (*result s> 0)
            break
        
        rcx = var_158
        rbx = var_180

__security_check_cookie(rax_1 ^ &var_1a8)
return result
