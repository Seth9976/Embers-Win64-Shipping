// 函数: sub_141cd3e30
// 地址: 0x141cd3e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18)
void* r13 = &arg2[2]
(*(*arg1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2)
uint64_t var_c8
int32_t var_a8
int64_t* var_88

if ((arg1[5].b & 1) == 0)
    int32_t r15_2 = arg2[1].d
    int64_t* r9_1 = nullptr
    int64_t* var_98_1 = nullptr
    int32_t var_8c_1 = 0x80
    uint32_t r14_3 = (r15_2 + 0x1f) u>> 5
    
    if (r14_3 u<= 4)
        var_a8.q = 0
        int64_t var_a0_2 = 0
    else
        sub_1405a4a00(&var_a8, 0, r14_3, 4)
        int64_t* r13_1 = &var_a8
        uint32_t var_8c_2 = r14_3 << 5
        
        if (var_98_1 != 0)
            r13_1 = var_98_1
        
        if (r14_3 u> 8)
            memset(r13_1, 0, zx.q(r14_3) << 2)
        else if (r14_3 != 0)
            __builtin_memset(r13_1, 0, zx.q(r14_3) << 2)
        
        int32_t* rdx_17 = zx.q(r14_3 - 1) << 2
        *(rdx_17 + r13_1) &= 0xffffffff u>> ((neg.d(r15_2)).b & 0x1f)
        r13 = &arg2[2]
        r9_1 = var_98_1
    
    int32_t r8_13 = 0
    
    if (r15_2 s> 0)
        int32_t rdi_8 = 1
        
        do
            void* rcx_23 = arg2[4]
            void* rax_28 = r13
            uint64_t rdx_19 = zx.q(r8_13) u>> 5
            
            if (rcx_23 != 0)
                rax_28 = rcx_23
            
            if ((*(rax_28 + (rdx_19 << 2)) & rdi_8) != 0)
                int64_t* rax_29 = &var_a8
                
                if (r9_1 != 0)
                    rax_29 = r9_1
                
                *(rax_29 + (rdx_19 << 2)) |= rdi_8
                r9_1 = var_98_1
            
            r8_13 += 1
            rdi_8 = rol.d(rdi_8, 1)
        while (r8_13 s< r15_2)
    
    sub_1409adb60(arg1, &var_a8, arg3)
    int512_t zmm1_1 = sub_1407453e0(&var_88, arg2)
    void* var_78
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_78 + 0x18); i = i_1)
        int32_t* rdi_9 = *var_88 + sx.q(i) * 0x18
        int64_t* rcx_27 = arg1[1]
        int32_t* rdx_23 = *rcx_27
        
        if (&rdx_23[1] u<= rcx_27[1])
            *rdi_9 = *rdx_23
            int64_t* rax_35 = arg1[1]
            *rax_35 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_9, zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, rdi_9, 4)
        
        int64_t* rcx_29 = arg1[1]
        int32_t* rdi_10 = *rcx_29
        
        if (&rdi_10[1] u<= rcx_29[1])
            rdi_9[1] = *rdi_10
            int64_t* rax_39 = arg1[1]
            *rax_39 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_9[1], zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_9[1], 4)
        
        if ((arg1[5].b & 1) != 0)
            int32_t rax_41
            rax_41, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a4b70)
            
            if (rax_41 s< 0x11)
                var_c8 = 0
                int64_t var_c0_2 = 0
                sub_1409ac9a0(arg1, &var_c8, zmm1_1)
                uint64_t rcx_33 = var_c8
                
                if (rcx_33 != 0)
                    zmm1_1 = sub_140a74f90(rcx_33)
        
        int64_t var_80
        int32_t var_70 = var_70 & not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
else
    int32_t var_6c = 0x80
    __builtin_memset(&var_88, 0, 0x1c)
    sub_1409adb60(arg1, &var_88, arg3)
    int32_t var_70_1
    int512_t zmm1 = sub_1409b8cb0(arg2, var_70_1)
    int64_t* var_78_1
    int64_t* r10_1 = var_78_1
    int32_t rcx_3 = 0
    var_a8 = 0
    int64_t* var_a0_1 = &var_88
    int32_t rdi_2 = 1
    int32_t var_a4_1 = 1
    int32_t r15 = -1
    int64_t var_98 = 0
    int32_t r14 = 0
    int32_t r8_6 = 0
    
    if (var_70_1 == 0)
    label_141cd3f94:
        
        if (r14 s< var_70_1)
            while (true)
                int32_t rax_9 = data_143a1c6b4
                int32_t var_5c_1 = rax_9
                int32_t var_b8[0x4]
                int64_t* rcx_6 = *(sub_1409ca9d0(arg2, &var_b8, r14) + 8)
                
                if (rcx_6 != 0)
                    *rcx_6 = rax_9.q
                    rcx_6[1] = 0
                    rcx_6[2] = 0
                
                int32_t* r14_1 = *arg2 + sx.q(r14) * 0x18
                int64_t* rcx_8 = arg1[1]
                int32_t* rdx_13 = *rcx_8
                
                if (&rdx_13[1] u<= rcx_8[1])
                    *r14_1 = *rdx_13
                    int64_t* rax_16 = arg1[1]
                    *rax_16 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, r14_1, zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, r14_1, 4)
                
                int64_t* rcx_10 = arg1[1]
                int32_t* r8_9 = *rcx_10
                
                if (&r8_9[1] u<= rcx_10[1])
                    r14_1[1] = *r8_9
                    int64_t* rax_20 = arg1[1]
                    *rax_20 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, &r14_1[1], zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, &r14_1[1], 4)
                
                if ((arg1[5].b & 1) != 0)
                    int32_t rax_22
                    rax_22, zmm1 = sub_140b4e7c0(arg1, &data_1439a4b70)
                    
                    if (rax_22 s< 0x11)
                        var_c8 = 0
                        int64_t var_c0_1 = 0
                        sub_1409ac9a0(arg1, &var_c8, zmm1)
                        uint64_t rcx_14 = var_c8
                        
                        if (rcx_14 != 0)
                            zmm1 = sub_140a74f90(rcx_14)
                
                var_98.d = r15 & not.d(rdi_2)
                sub_14059bdd0(&var_a8)
                r14 = var_98:4.d
                
                if (r14 s>= var_a0_1[3].d)
                    break
                
                r15 = var_98.d
                rdi_2 = var_a4_1
            
            r10_1 = var_78_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_70_1 - 1)
        int64_t* rdi_3 = &var_88
        
        if (r10_1 != 0)
            rdi_3 = r10_1
        
        int32_t rax_6 = *rdi_3
        
        if (rax_6 != 0)
        label_141cd3f68:
            rdi_2 = ((rax_6 - 1) & rax_6) ^ rax_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_2)
            var_a4_1 = rdi_2
            int32_t rax_8
            
            if (rdi_2 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            r14 = r8_6 - rax_8 + 0x1f
            var_98:4.d = r14
            
            if (r14 s<= var_70_1)
                goto label_141cd3f94
        else
            while (true)
                int64_t rax_7 = sx.q(rcx_3)
                r8_6 += 0x20
                rcx_3 += 1
                int32_t var_90_1 = r8_6
                var_a8 = rcx_3
                
                if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_6 = *(rdi_3 + (rax_7 << 2) + 4)
                r15 = -1
                
                if (rax_6 != 0)
                    goto label_141cd3f68
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
__security_check_cookie(rax_1 ^ &var_e8)
return arg1
