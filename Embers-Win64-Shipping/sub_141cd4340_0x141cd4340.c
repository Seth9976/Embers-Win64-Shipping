// 函数: sub_141cd4340
// 地址: 0x141cd4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 0x28, sx.q(*(arg2 + 0xc)) * 0x28)
(*(*arg1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2)
int64_t* var_d0
uint64_t var_c0
uint64_t var_b0
int32_t var_88
int64_t* var_68

if ((arg1[5].b & 1) == 0)
    int32_t r13_2 = arg2[1].d
    int64_t* r8_7 = nullptr
    int64_t* var_78_1 = nullptr
    int32_t var_6c_1 = 0x80
    uint32_t r14_3 = (r13_2 + 0x1f) u>> 5
    
    if (r14_3 u<= 4)
        var_88.q = 0
        int64_t var_80_2 = 0
    else
        sub_1405a4a00(&var_88, 0, r14_3, 4)
        int64_t* r15_5 = &var_88
        uint32_t var_6c_2 = r14_3 << 5
        
        if (var_78_1 != 0)
            r15_5 = var_78_1
        
        if (r14_3 u> 8)
            memset(r15_5, 0, zx.q(r14_3) << 2)
        else if (r14_3 != 0)
            __builtin_memset(r15_5, 0, zx.q(r14_3) << 2)
        
        void* rdx_18 = r15_5 + (zx.q(r14_3 - 1) << 2)
        *rdx_18 &= 0xffffffff u>> ((neg.d(r13_2)).b & 0x1f)
        r8_7 = var_78_1
    
    int32_t rdi_9 = 0
    
    if (r13_2 s> 0)
        int32_t r15_6 = 1
        
        do
            void* rax_24 = arg2[4]
            void* rcx_29 = &arg2[2]
            uint64_t rdx_20 = zx.q(rdi_9) u>> 5
            
            if (rax_24 != 0)
                rcx_29 = rax_24
            
            if ((*(rcx_29 + (rdx_20 << 2)) & r15_6) != 0)
                int64_t* rax_25 = &var_88
                
                if (r8_7 != 0)
                    rax_25 = r8_7
                
                *(rax_25 + (rdx_20 << 2)) |= r15_6
                r8_7 = var_78_1
            
            rdi_9 += 1
            r15_6 = rol.d(r15_6, 1)
        while (rdi_9 s< r13_2)
    
    sub_1409adb60(arg1, &var_88, arg3)
    int512_t zmm1_1 = sub_1407453e0(&var_68, arg2)
    void* var_58
    int32_t i_2
    
    for (int32_t i = i_2; i s< *(var_58 + 0x18); i = i_2)
        uint64_t* r13_3 = *var_68 + sx.q(i) * 0x28
        int32_t rax_29
        
        if ((arg1[5].b & 2) != 0)
            rax_29, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a93f8)
        
        if ((arg1[5].b & 2) == 0 || rax_29 s< 0x23 || r13_3[1].d != 3)
            sub_1409ac9a0(arg1, r13_3, zmm1_1)
        else
            var_b0 = 0
            int64_t var_a8_2 = 0
            sub_1409ac9a0(arg1, &var_b0, zmm1_1)
            uint64_t rcx_35 = var_b0
            
            if (rcx_35 != 0)
                zmm1_1 = sub_140a74f90(rcx_35)
        
        if ((arg1[5].b & 1) != 0)
            int32_t rax_30
            rax_30, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a93f8)
            
            if (rax_30 s< 0x1e)
                var_d0 = nullptr
                int32_t j_2 = 0
                zmm1_1 = sub_141cd35d0(arg1, &var_d0, zmm1_1)
                int32_t j_1 = j_2
                int64_t* r15_7 = var_d0
                int64_t* rdi_10 = r15_7
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_39 = *rdi_10
                        
                        if (rcx_39 != 0)
                            zmm1_1 = sub_140a74f90(rcx_39)
                        
                        rdi_10 = &rdi_10[2]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                if (r15_7 != 0)
                    zmm1_1 = sub_140a74f90(r15_7)
            
            if ((arg1[5].b & 1) != 0)
                int32_t rax_31
                rax_31, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a4b70)
                
                if (rax_31 s< 0x11)
                    var_c0 = 0
                    int64_t var_b8_2 = 0
                    zmm1_1 = sub_141cd33d0(arg1, &var_c0, zmm1_1)
                    uint64_t rcx_43 = var_c0
                    
                    if (rcx_43 != 0)
                        zmm1_1 = sub_140a74f90(rcx_43)
        
        int64_t* rcx_44 = arg1[1]
        int32_t* rdi_11 = *rcx_44
        
        if (&rdi_11[1] u<= rcx_44[1])
            r13_3[4].d = *rdi_11
            int64_t* rax_34 = arg1[1]
            *rax_34 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &r13_3[4], zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, &r13_3[4], 4)
        
        int32_t var_5c
        int32_t var_50 = var_50 & not.d(var_5c)
        int64_t var_60
        sub_14059bdd0(&var_60)
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
else
    int32_t var_4c = 0x80
    __builtin_memset(&var_68, 0, 0x1c)
    sub_1409adb60(arg1, &var_68, arg3)
    int32_t var_50_1
    int512_t zmm1 = sub_141cdb8d0(arg2, var_50_1)
    int64_t* var_58_1
    int64_t* r10_1 = var_58_1
    int32_t rcx_3 = 0
    var_88 = 0
    int64_t* var_80_1 = &var_68
    int32_t r15_1 = 1
    int32_t var_84_1 = 1
    int32_t r13 = -1
    int64_t var_78 = 0
    int32_t r14_1 = 0
    int32_t rdi_2 = 0
    
    if (var_50_1 == 0)
    label_141cd44a7:
        
        if (r14_1 s< var_50_1)
            int64_t* r12_1 = arg2
            
            while (true)
                int32_t rdi_4 = data_143a1c6c4
                int32_t var_98[0x4]
                void* rcx_6 = *(sub_1409cab50(r12_1, &var_98, r14_1) + 8)
                
                if (rcx_6 != 0)
                    __builtin_memset(rcx_6, 0, 0x20)
                    *(rcx_6 + 0x20) = rdi_4
                
                uint64_t* rdi_5 = *r12_1 + sx.q(r14_1) * 0x28
                int32_t rax_12
                
                if ((arg1[5].b & 2) != 0)
                    rax_12, zmm1 = sub_140b4e7c0(arg1, &data_1439a93f8)
                
                if ((arg1[5].b & 2) == 0 || rax_12 s< 0x23 || rdi_5[1].d != 3)
                    sub_1409ac9a0(arg1, rdi_5, zmm1)
                else
                    var_c0 = 0
                    int64_t var_b8_1 = 0
                    sub_1409ac9a0(arg1, &var_c0, zmm1)
                    uint64_t rcx_10 = var_c0
                    
                    if (rcx_10 != 0)
                        zmm1 = sub_140a74f90(rcx_10)
                
                if ((arg1[5].b & 1) != 0)
                    int32_t rax_13
                    rax_13, zmm1 = sub_140b4e7c0(arg1, &data_1439a93f8)
                    
                    if (rax_13 s< 0x1e)
                        var_d0 = nullptr
                        int32_t i_4 = 0
                        zmm1 = sub_141cd35d0(arg1, &var_d0, zmm1)
                        int32_t i_3 = i_4
                        int64_t* r12_2 = var_d0
                        int64_t* rdi_6 = r12_2
                        
                        if (i_3 != 0)
                            int32_t i_1
                            
                            do
                                int64_t rcx_14 = *rdi_6
                                
                                if (rcx_14 != 0)
                                    zmm1 = sub_140a74f90(rcx_14)
                                
                                rdi_6 = &rdi_6[2]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                        
                        if (r12_2 != 0)
                            zmm1 = sub_140a74f90(r12_2)
                        
                        r12_1 = arg2
                    
                    if ((arg1[5].b & 1) != 0)
                        int32_t rax_14
                        rax_14, zmm1 = sub_140b4e7c0(arg1, &data_1439a4b70)
                        
                        if (rax_14 s< 0x11)
                            var_b0 = 0
                            int64_t var_a8_1 = 0
                            zmm1 = sub_141cd33d0(arg1, &var_b0, zmm1)
                            uint64_t rcx_18 = var_b0
                            
                            if (rcx_18 != 0)
                                zmm1 = sub_140a74f90(rcx_18)
                
                int64_t* rcx_19 = arg1[1]
                int32_t* rdi_7 = *rcx_19
                
                if (&rdi_7[1] u<= rcx_19[1])
                    rdi_5[4].d = *rdi_7
                    int64_t* rax_17 = arg1[1]
                    *rax_17 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, &rdi_5[4], zmm1)
                else
                    (*(*arg1 + 0x150))(arg1, &rdi_5[4], 4)
                
                var_78.d = r13 & not.d(r15_1)
                sub_14059bdd0(&var_88)
                r14_1 = var_78:4.d
                
                if (r14_1 s>= var_80_1[3].d)
                    break
                
                r13 = var_78.d
                r15_1 = var_84_1
            
            r10_1 = var_58_1
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_50_1 - 1)
        int64_t* r9_1 = &var_68
        
        if (r10_1 != 0)
            r9_1 = r10_1
        
        int32_t rax_6 = *r9_1
        
        if (rax_6 != 0)
        label_141cd4479:
            r15_1 = ((rax_6 - 1) & rax_6) ^ rax_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(r15_1)
            var_84_1 = r15_1
            int32_t rax_8
            
            if (r15_1 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            r14_1 = rdi_2 - rax_8 + 0x1f
            var_78:4.d = r14_1
            
            if (r14_1 s<= var_50_1)
                goto label_141cd44a7
        else
            while (true)
                int64_t rax_7 = sx.q(rcx_3)
                rdi_2 += 0x20
                rcx_3 += 1
                int32_t var_70_1 = rdi_2
                var_88 = rcx_3
                
                if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                rax_6 = *(r9_1 + (rax_7 << 2) + 4)
                r13 = -1
                
                if (rax_6 != 0)
                    goto label_141cd4479
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
__security_check_cookie(rax_1 ^ &var_f8)
return arg1
