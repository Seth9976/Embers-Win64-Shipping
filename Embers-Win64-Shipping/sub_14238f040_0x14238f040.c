// 函数: sub_14238f040
// 地址: 0x14238f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (arg2 == 0)
label_14238f202:
    result.b = 0
else
    int32_t var_64_1 = 1
    int32_t r10_1 = *(arg1 + 0x38)
    void* r9_1 = arg1 + 0x20
    int32_t rcx = 0
    void* var_60 = r9_1
    int32_t var_68_1 = 0
    int32_t r8 = 0
    int32_t var_58_1 = 0xffffffff
    int64_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax = *(r9_1 + 0x10)
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_14238f0e8:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_64_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_54_1.d = r8 - rax_8 + 0x1f
            
            if (r8 - rax_8 + 0x1f s> r10_1)
                var_54_1.d = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_54_1:4.d = r8
                var_68_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_14238f0e8
            
            var_54_1.d = r10_1
    
    int128_t var_28_1 = 0xffffffff
    double var_38_1[0x2] = var_68_1.o
    var_68_1.o = (arg1 + 0x10).o
    int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_58_1.o = var_38_1
    
    if (0 s>= r10_1)
    label_14238f202_1:
        result.b = 0
    else
        int32_t var_4c
        int32_t rcx_2 = var_4c
        
        while (true)
            int64_t* r14_1 = *(*var_68_1.q + sx.q(rcx_2) * 0x28 + 0x18)
            
            if (*r14_1 == arg2)
                int64_t* i = r14_1[4]
                
                for (void* rsi_3 = &i[sx.q(r14_1[5].d) * 2]; i != rsi_3; i = &i[2])
                    int64_t* rbx_2 = i[1]
                    
                    if (rbx_2 != 0)
                        int32_t rax_12 = rbx_2[1].d
                        
                        if (rax_12 != 0)
                            rbx_2[1].d = rax_12 + 1
                            void* rdx_5 = *i
                            
                            if (rdx_5 != 0)
                                sub_140597df0(arg3, rdx_5 + 0x48)
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t temp4_1 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (temp4_1 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                                
                                result.b = 1
                                goto label_14238f221
                            
                            rbx_2[1].d = rax_12
                            
                            if (rax_12 == 0)
                                (**rbx_2)(rbx_2, rdx_5)
                                int32_t temp5_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                
                if (r14_1[3].d s> 0)
                    sub_140597df0(arg3, *r14_1[2] + 0x48)
                    result.b = 1
                    break
            
            var_54_1:4.d &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            rcx_2 = var_4c
            
            if (rcx_2 s>= var_58_1.q[3].d)
                goto label_14238f202_1

label_14238f221:
return result
