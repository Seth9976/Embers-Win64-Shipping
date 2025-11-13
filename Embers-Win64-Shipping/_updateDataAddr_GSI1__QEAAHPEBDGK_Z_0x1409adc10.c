// 函数: ?updateDataAddr@GSI1@@QEAAHPEBDGK@Z
// 地址: 0x1409adc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 0x48, sx.q(*(arg2 + 0xc)) * 0x48)
void* r12 = &arg2[2]
(*(*arg1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2)
int32_t rsi = 0
int32_t var_e8
int64_t* var_c8

if ((arg1[5].b & 1) == 0)
    int32_t r15_2 = arg2[1].d
    int64_t* r8_11 = nullptr
    int64_t* var_d8_1 = nullptr
    int32_t var_cc_1 = 0x80
    uint32_t r14_3 = (r15_2 + 0x1f) u>> 5
    
    if (r14_3 u<= 4)
        var_e8.q = 0
        int64_t var_e0_2 = 0
    else
        sub_1405a4a00(&var_e8, 0, r14_3, 4)
        int64_t* r12_3 = &var_e8
        uint32_t var_cc_2 = r14_3 << 5
        
        if (var_d8_1 != 0)
            r12_3 = var_d8_1
        
        if (r14_3 u> 8)
            memset(r12_3, 0, zx.q(r14_3) << 2)
        else if (r14_3 != 0)
            __builtin_memset(r12_3, 0, zx.q(r14_3) << 2)
        
        void* rdx_19 = r12_3 + (zx.q(r14_3 - 1) << 2)
        r12 = &arg2[2]
        *rdx_19 &= 0xffffffff u>> ((neg.d(r15_2)).b & 0x1f)
        r8_11 = var_d8_1
    
    if (r15_2 s> 0)
        int32_t rdi_8 = 1
        
        do
            void* rax_30 = arg2[4]
            void* rcx_28 = r12
            uint64_t rdx_21 = zx.q(rsi) u>> 5
            
            if (rax_30 != 0)
                rcx_28 = rax_30
            
            if ((*(rcx_28 + (rdx_21 << 2)) & rdi_8) != 0)
                int64_t* rax_31 = &var_e8
                
                if (r8_11 != 0)
                    rax_31 = r8_11
                
                *(rax_31 + (rdx_21 << 2)) |= rdi_8
                r8_11 = var_d8_1
            
            rsi += 1
            rdi_8 = rol.d(rdi_8, 1)
        while (rsi s< r15_2)
    
    sub_1409adb60(arg1, &var_e8, arg3)
    int512_t zmm1_1 = sub_1407453e0(&var_c8, arg2)
    void* var_b8
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_b8 + 0x18); i = i_1)
        int32_t* rdi_9 = *var_c8 + sx.q(i) * 0x48
        int64_t* rcx_32 = arg1[1]
        int32_t* rdx_25 = *rcx_32
        
        if (&rdx_25[1] u<= rcx_32[1])
            *rdi_9 = *rdx_25
            int64_t* rax_37 = arg1[1]
            *rax_37 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_9, zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, rdi_9, 4)
        
        int64_t* rcx_34 = arg1[1]
        int32_t* r8_15 = *rcx_34
        
        if (&r8_15[1] u<= rcx_34[1])
            rdi_9[1] = *r8_15
            int64_t* rax_41 = arg1[1]
            *rax_41 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_9[1], zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_9[1], 4)
        
        int64_t* rcx_36 = arg1[1]
        int32_t* r8_16 = *rcx_36
        
        if (&r8_16[1] u<= rcx_36[1])
            rdi_9[2] = *r8_16
            int64_t* rax_45 = arg1[1]
            *rax_45 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_9[2], zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_9[2], 4)
        
        zmm1_1 = sub_1409ae5b0(arg1, &rdi_9[4], zmm1_1)
        int64_t var_c0
        int32_t var_b0 = var_b0 & not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
else
    int32_t var_ac = 0x80
    __builtin_memset(&var_c8, 0, 0x1c)
    sub_1409adb60(arg1, &var_c8, arg3)
    int32_t var_b0_1
    int512_t zmm1 = sub_1409b8c00(arg2, var_b0_1)
    int64_t* var_b8_1
    int64_t* r10_1 = var_b8_1
    int32_t rcx_3 = 0
    var_e8 = 0
    int64_t* var_e0_1 = &var_c8
    int32_t rdi_2 = 1
    int32_t var_e4_1 = 1
    int32_t r12_1 = -1
    int64_t var_d8 = 0
    int32_t r14 = 0
    int32_t r8_6 = 0
    
    if (var_b0_1 == 0)
    label_1409add76:
        
        if (r14 s< var_b0_1)
            while (true)
                int64_t var_98
                __builtin_memset(&var_98, 0, 0x3c)
                int32_t r15_1 = 0
                int32_t var_5c_1 = 0x80
                int32_t var_58_1 = 0xffffffff
                int32_t var_54_1 = 0
                int32_t var_f8[0x4]
                int32_t* rcx_6 = *(sub_1409ca850(arg2, &var_f8, r14) + 8)
                int64_t var_88
                int64_t var_80_1
                
                if (rcx_6 != 0)
                    *rcx_6 = 0
                    rcx_6[1] = var_98:4.d
                    rcx_6[2] = 0
                    sub_1409a9d30(&rcx_6[4], &var_88)
                    r15_1 = var_80_1:4.d
                
                var_80_1.d = 0
                
                if (r15_1 != 0)
                    sub_1405a5410(&var_88, 0)
                
                int32_t var_58_2 = 0xffffffff
                int32_t var_54_2 = 0
                int64_t var_78
                sub_14059a8e0(&var_78, 0)
                int64_t var_68
                
                if (var_68 != 0)
                    zmm1 = sub_140a74f90(var_68)
                
                int64_t rcx_11 = var_88
                
                if (rcx_11 != 0)
                    zmm1 = sub_140a74f90(rcx_11)
                
                int32_t* r14_1 = *arg2 + sx.q(r14) * 0x48
                int64_t* rcx_13 = arg1[1]
                int32_t* rdx_14 = *rcx_13
                
                if (&rdx_14[1] u<= rcx_13[1])
                    *r14_1 = *rdx_14
                    int64_t* rax_15 = arg1[1]
                    *rax_15 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, r14_1, zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, r14_1, 4)
                
                int64_t* rcx_15 = arg1[1]
                int32_t* r8_9 = *rcx_15
                
                if (&r8_9[1] u<= rcx_15[1])
                    r14_1[1] = *r8_9
                    int64_t* rax_19 = arg1[1]
                    *rax_19 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, &r14_1[1], zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, &r14_1[1], 4)
                
                int64_t* rcx_17 = arg1[1]
                int32_t* r8_10 = *rcx_17
                
                if (&r8_10[1] u<= rcx_17[1])
                    r14_1[2] = *r8_10
                    int64_t* rax_23 = arg1[1]
                    *rax_23 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, &r14_1[2], zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, &r14_1[2], 4)
                
                zmm1 = sub_1409ae5b0(arg1, &r14_1[4], zmm1)
                var_d8.d = r12_1 & not.d(rdi_2)
                sub_14059bdd0(&var_e8)
                r14 = var_d8:4.d
                
                if (r14 s>= var_e0_1[3].d)
                    break
                
                r12_1 = var_d8.d
                rdi_2 = var_e4_1
            
            r10_1 = var_b8_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_b0_1 - 1)
        int64_t* rdi_3 = &var_c8
        
        if (r10_1 != 0)
            rdi_3 = r10_1
        
        int32_t rax_6 = *rdi_3
        
        if (rax_6 != 0)
        label_1409add49:
            rdi_2 = ((rax_6 - 1) & rax_6) ^ rax_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_2)
            var_e4_1 = rdi_2
            int32_t rax_8
            
            if (rdi_2 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            r14 = r8_6 - rax_8 + 0x1f
            var_d8:4.d = r14
            
            if (r14 s<= var_b0_1)
                goto label_1409add76
        else
            while (true)
                int64_t rax_7 = sx.q(rcx_3)
                r8_6 += 0x20
                rcx_3 += 1
                int32_t var_d0_1 = r8_6
                var_e8 = rcx_3
                
                if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_6 = *(rdi_3 + (rax_7 << 2) + 4)
                r12_1 = -1
                
                if (rax_6 != 0)
                    goto label_1409add49
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
__security_check_cookie(rax_1 ^ &var_118)
return arg1
