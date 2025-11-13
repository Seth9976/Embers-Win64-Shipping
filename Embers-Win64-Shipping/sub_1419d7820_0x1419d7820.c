// 函数: sub_1419d7820
// 地址: 0x1419d7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rax_2 = *arg1
uint64_t r13
r13.b = 1

if ((arg2[5].b & 2) == 0)
    arg1[4] = (*(rax_2 + 8))()
    int64_t* rcx_30 = arg2[1]
    int32_t* rdx_21 = *rcx_30
    
    if (&rdx_21[1] u<= rcx_30[1])
        arg1[6].d = *rdx_21
        int64_t* rax_31 = arg2[1]
        *rax_31 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[6], arg5)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[6], 4)
    
    int64_t rax_33 = sub_140a82f30(zx.q(arg1[6].d), 0)
    int64_t r9_1 = *arg2
    (*(r9_1 + 0x150))(arg2, rax_33, zx.q(arg1[6].d), r9_1)
    arg1[5] = rax_33
    sub_140b4d950(rax_33, arg2)
    int64_t* rcx_35 = arg1[4]
    (*(*rcx_35 + 0x20))(rcx_35, arg2, arg1[5], zx.q(arg3), arg4)
    int64_t* rcx_36 = arg2[1]
    int32_t var_168 = 0
    int32_t* rdx_26 = *rcx_36
    
    if (&rdx_26[1] u> rcx_36[1])
        int32_t* rdx_27 = &var_168
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_27, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_27, 4)
    else
        var_168 = *rdx_26
        *rcx_36 += 4
    
    if (var_168 s> 0)
        int32_t rdi_4 = 0
        
        do
            int64_t* rcx_38 = arg2[1]
            int64_t var_70
            __builtin_memset(&var_70, 0, 0x14)
            int64_t var_138 = 0
            int32_t var_158 = 0
            int64_t* rdx_28 = *rcx_38
            
            if (&rdx_28[1] u> rcx_38[1])
                int64_t* rdx_29 = &var_138
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg2, rdx_29, arg5)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_29, 8)
            else
                var_138 = *rdx_28
                *rcx_38 += 8
            
            int64_t* rcx_40 = arg2[1]
            int32_t* rdx_30 = *rcx_40
            
            if (&rdx_30[1] u> rcx_40[1])
                int32_t* rdx_31 = &var_158
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_31, arg5)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_31, 4)
            else
                var_158 = *rdx_30
                *rcx_40 += 4
            
            sub_140b31010(arg2, &var_70)
            rdi_4 += 1
        while (rdi_4 s< var_168)
    
    int64_t* rcx_43 = arg2[1]
    int64_t rdx_33 = *rcx_43
    bool cond:8_1
    
    if (rdx_33 + 4 u> rcx_43[1])
        int64_t rax_47 = *arg2
        int32_t var_148 = 0
        (*(rax_47 + 0x150))(arg2, &var_148, 4)
        cond:8_1 = var_148 != 0
    else
        cond:8_1 = *rdx_33 != 0
        *rcx_43 = rdx_33 + 4
    
    if (cond:8_1 == 0)
        void*** rax_69 = j_sub_140a82f30(0x48)
        
        if (rax_69 == 0)
            rax_69 = nullptr
        else
            __builtin_memset(&rax_69[1], 0, 0x40)
            *rax_69 = &data_142d5a028
            rax_69[1].d = 0
            *rax_69 = &data_14300e0a0
            __builtin_memset(&rax_69[2], 0, 0x14)
            __builtin_memset(&rax_69[5], 0, 0x20)
        
        int64_t* rcx_63 = arg1[3]
        arg1[3] = rax_69
        
        if (rax_69 != 0)
            rax_69[1].d += 1
        
        if (rcx_63 != 0)
            rcx_63[1].d -= 1
            
            if (rcx_63[1].d == 1)
                (**rcx_63)(rcx_63, 1)
        
        void* rdi_8 = arg1[3]
        sub_140b31010(arg2, rdi_8 + 0x10)
        sub_1419c47f0(arg2, rdi_8 + 0x28, arg5)
        sub_1419c4630(arg2, rdi_8 + 0x38, arg5)
        void*** rax_72 = j_sub_140a82f30(0x48)
        void*** rbx_4 = rax_72
        
        if (rax_72 == 0)
            rbx_4 = nullptr
        else
            void* rax_73 = arg1[5]
            void* rdi_9 = arg1[3]
            uint32_t rdx_43
            
            if (rax_73 == 0)
                rdx_43 = 0x31
            else
                rdx_43 = zx.d(*(rax_73 + 0x58))
            
            sub_1419c2140(rbx_4, rdx_43, *(rdi_9 + 0x40))
            *rbx_4 = &data_14300e0a8
            rbx_4[2] = &data_14300e100
            rbx_4[8] = rdi_9
            *(rdi_9 + 8) += 1
        
        int64_t* rdi_10 = arg1[2]
        arg1[2] = rbx_4
        
        if (rbx_4 != 0)
            *(rbx_4 + 0x3c) += 1
        
        if (rdi_10 != 0)
            int32_t rax_74 = *(rdi_10 + 0x3c)
            *(rdi_10 + 0x3c) -= 1
            
            if (rax_74 == 1 && (*(*rdi_10 + 0x50))(rdi_10) != 0)
                sub_141997f50(rdi_10)
                sub_141997870(&rdi_10[2])
    else
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x14)
        sub_140b31010(arg2, &var_98)
        int64_t* var_150
        int64_t* rax_57
        int64_t* rdi_7
        
        if (data_143f1d988 == 0)
            rax_57 = nullptr
            rdi_7 = nullptr
            var_150 = nullptr
        else
            r13.b = 0
            int32_t rdx_36 = data_1439c95c8
            int32_t rcx_47 = data_1439c95d4 + 1
            data_1439c95d4 = rcx_47
            int64_t rdi_5 = sx.q(rdx_36 - 1)
            
            if (rdx_36 - 1 s>= 0)
                int64_t r14_4 = rdi_5 << 4
                int64_t temp2_1
                
                do
                    int64_t rax_49 = data_1439c95c0
                    
                    if (*(r14_4 + rax_49 + 8) == 0)
                        r13.b = 1
                    else
                        int64_t* rcx_48 = *(r14_4 + rax_49)
                        
                        if (rcx_48 == 0)
                            r13.b = 1
                        else if ((*(*rcx_48 + 0x50))(rcx_48, &var_98, arg2) == 0)
                            r13.b = 1
                    
                    r14_4 -= 0x10
                    temp2_1 = rdi_5
                    rdi_5 -= 1
                while (temp2_1 - 1 s>= 0)
                rcx_47 = data_1439c95d4
                rdx_36 = data_1439c95c8
            
            data_1439c95d4 = rcx_47 - 1
            
            if (r13.b != 0 && rcx_47 - 1 s<= 0)
                r13 = zx.q(rdx_36)
                int32_t rdi_6 = 0
                
                if (rdx_36 s> 0)
                    int64_t* r14_5 = nullptr
                    
                    do
                        int64_t rax_52 = data_1439c95c0
                        
                        if (*(r14_5 + rax_52 + 8) == 0)
                            sub_1405a4880(&data_1439c95c0, rdi_6, 1, 1)
                        else
                            int64_t* rcx_50 = *(r14_5 + rax_52)
                            
                            if (rcx_50 == 0)
                                sub_1405a4880(&data_1439c95c0, rdi_6, 1, 1)
                            else if ((*(*rcx_50 + 0x20))(rcx_50) != 0)
                                sub_1405a4880(&data_1439c95c0, rdi_6, 1, 1)
                            else
                                rdi_6 += 1
                                r14_5 = &r14_5[2]
                        
                        rdx_36 = data_1439c95c8
                    while (rdi_6 s< rdx_36)
                
                int32_t rax_55 = rdx_36 * 2
                
                if (rax_55 s<= 2)
                    rax_55 = 2
                
                data_1439c95d0 = rax_55
                
                if (r13.d s> rax_55 && data_1439c95cc != rdx_36)
                    sub_1405a5410(&data_1439c95c0, rdx_36)
            
            int64_t* var_a0
            rdi_7 = *sub_1419d26f0(data_143f1d988, &var_a0, &var_98, arg2)
            rax_57 = rdi_7
            var_150 = rax_57
            
            if (rdi_7 != 0)
                *(rdi_7 + 0x3c) += 1
                rax_57 = var_150
            
            int64_t* rbx_1 = var_a0
            
            if (rbx_1 != 0)
                int32_t rax_58 = *(rbx_1 + 0x3c)
                *(rbx_1 + 0x3c) -= 1
                
                if (rax_58 == 1 && (*(*rbx_1 + 0x50))(rbx_1) != 0)
                    sub_141997f50(rbx_1)
                    void* rcx_54 = &rbx_1[2]
                    
                    if (rbx_1 == 0)
                        rcx_54 = nullptr
                    
                    sub_141997870(rcx_54)
                
                rax_57 = var_150
            
            r13.b = 1
        
        if (&arg1[2] != &var_150)
            int64_t* rbx_2 = arg1[2]
            arg1[2] = rax_57
            
            if (rbx_2 != 0)
                int32_t rax_61 = *(rbx_2 + 0x3c)
                *(rbx_2 + 0x3c) -= 1
                
                if (rax_61 == 1 && (*(*rbx_2 + 0x50))(rbx_2) != 0)
                    sub_141997f50(rbx_2)
                    sub_141997870(&rbx_2[2])
        else if (rax_57 != 0)
            int32_t rcx_58 = *(rax_57 + 0x3c)
            *(rax_57 + 0x3c) -= 1
            
            if (rcx_58 == 1)
                int64_t* rbx_3 = var_150
                
                if ((*(*rbx_3 + 0x50))(rbx_3) != 0)
                    sub_141997f50(rbx_3)
                    sub_141997870(&rdi_7[2])
        
        if (arg1[2] == 0)
            TEB* gsbase
            
            if (data_143cd80cc s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cd80cc)
            
            if (data_143cd80cc s<=
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                    || data_143cd80cc != 0xffffffff)
                r13.b = 0
            else
                sub_140af2b60()
                data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                _Init_thread_footer(&data_143cd80cc)
                r13.b = 0
    
    if (r13.b == 0)
        int64_t* rbx_5 = arg1[2]
        arg1[2] = 0
        
        if (rbx_5 != 0)
            int32_t r12_5 = *(rbx_5 + 0x3c)
            *(rbx_5 + 0x3c) -= 1
            
            if (r12_5 == 1 && (*(*rbx_5 + 0x50))(rbx_5) != 0)
                sub_141997f50(rbx_5)
                sub_141997870(&rbx_5[2])
        
        sub_140a74f90(arg1[5])
        arg1[5] = 0
    else
        int32_t rax_78 = sub_1419ce970(arg1[5])
        int64_t* rcx_72 = arg1[2]
        *(arg1 + 0x34) = rax_78
        sub_141997e80(rcx_72)
else
    int64_t* rax_3 = (*(rax_2 + 8))()
    int32_t var_c8 = 0xffffffff
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x1c)
    int128_t var_d8_1 = zx.o(0)
    int32_t var_c4_1 = 0
    int32_t var_bc_1 = 0
    int32_t var_c0 = 0xffffffff
    int64_t var_b8_1 = 0
    sub_140b51560(&var_c8)
    var_d8_1:8.q = arg1[4]
    var_d8_1.q = rax_3
    sub_140b51490(&var_c0, arg2, arg6)
    void var_130
    sub_140b4ca50(&var_130, &var_f8)
    sub_140b565a0(&var_130, arg1[5], arg1[1])
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x20)
    int512_t zmm1 = sub_140b50000(&var_f8, &var_128, 1)
    int64_t* rcx_5 = arg2[1]
    int64_t r14_1 = var_128
    int32_t var_164 = var_120_1
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        int32_t* rdx_5 = &var_164
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        var_164 = *rdx_4
        *rcx_5 += 4
    
    (*(*arg2 + 0x150))(arg2, r14_1, zx.q(var_164))
    int512_t zmm1_1 = sub_140b52c80(&var_128, arg2)
    (*(*rax_3 + 0x18))(rax_3, arg2, r14_1, zx.q(arg3))
    (**rax_3)(rax_3, 1)
    int64_t* rcx_11 = arg2[1]
    int32_t var_e0
    int32_t var_160 = var_e0
    int32_t* rdx_9 = *rcx_11
    
    if (&rdx_9[1] u> rcx_11[1])
        int32_t* rdx_10 = &var_160
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_10, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_10, 4)
    else
        var_160 = *rdx_9
        *rcx_11 += 4
    
    int64_t* var_e8
    int64_t* rdi_1 = var_e8
    int64_t r14_2 = 0
    void* rcx_13 = &rdi_1[sx.q(var_e0)]
    uint64_t r12_4 = (rcx_13 - rdi_1 + 7) u>> 3
    
    if (rdi_1 u> rcx_13)
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            void* rcx_14 = *rdi_1
            int64_t var_140 = *(rcx_14 + 0x50)
            int64_t var_84
            __builtin_memset(&var_84, 0, 0x14)
            int32_t rax_18
            rax_18, zmm1_1 = sub_140b513e0(rcx_14, &var_c0, &var_84)
            int64_t* rcx_15 = arg2[1]
            int32_t var_15c = rax_18
            int64_t* rdx_12 = *rcx_15
            
            if (&rdx_12[1] u> rcx_15[1])
                int64_t* rdx_13 = &var_140
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg2, rdx_13, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_13, 8)
            else
                var_140 = *rdx_12
                *rcx_15 += 8
            
            int64_t* rcx_17 = arg2[1]
            int32_t* rdx_14 = *rcx_17
            
            if (&rdx_14[1] u> rcx_17[1])
                int32_t* rdx_15 = &var_15c
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_15, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_15, 4)
            else
                var_15c = *rdx_14
                *rcx_17 += 4
            
            sub_140b31010(arg2, &var_84)
            rdi_1 = &rdi_1[1]
            r14_2 += 1
        while (r14_2 != r12_4)
    
    int64_t* rcx_20 = arg2[1]
    int64_t rax_26 = *rcx_20 + 4
    
    if (rax_26 u> rcx_20[1])
        int64_t rax_27 = *arg2
        int32_t var_144 = 0
        (*(rax_27 + 0x150))(arg2, &var_144, 4)
    else
        *rcx_20 = rax_26
    
    void* rdi_2 = arg1[3]
    sub_140b31010(arg2, rdi_2 + 0x10)
    sub_1419c47f0(arg2, rdi_2 + 0x28, zmm1_1)
    sub_1419c4630(arg2, rdi_2 + 0x38, zmm1_1)
    int64_t var_108
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int64_t rcx_26 = var_118
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t rcx_27 = var_128
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    sub_140fda0a0(&var_f8)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(r13.b)
