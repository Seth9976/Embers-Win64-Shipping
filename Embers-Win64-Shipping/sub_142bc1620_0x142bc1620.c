// 函数: sub_142bc1620
// 地址: 0x142bc1620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_948
int64_t rax_1 = __security_cookie ^ &var_948
void* rsi = *(arg1 + 8)
int32_t r12 = arg4
uint64_t r15 = zx.q(arg3)
char var_904 = 0
void* rax_2 = *(rsi + 0x2f0)
void* r14 = *(rsi + 0x3e8)
void* var_468 = rax_2
int64_t rax_3 = *(rax_2 + 0x50)
uint64_t result

if (*(r14 + 0x664) != 0xffff && *(r14 + 0x4e0) != 0)
    if (arg3 == 0)
        goto label_142bc16d6
    
    uint32_t rax_4 = 0
    
    if (r15.d u<= *(r14 + 0x4e8))
        rax_4 = zx.d(*(*(r14 + 0x4e0) + (r15 << 1)))
    
    r15 = zx.q(rax_4)
    
    if (rax_4 != 0)
        goto label_142bc16d6
    
    result = 6
else if (r15.d u>= *(r14 + 0x20))
    result = 6
else
label_142bc16d6:
    
    if (test_bit(r12, 0xa))
        r12 |= 3
    
    *(arg1 + 0xfc) = 0x10000
    *(arg1 + 0x100) = 0x10000
    int16_t var_908
    int32_t var_900
    int16_t* var_458
    
    if (arg2 == 0)
    label_142bc18c6:
        
        if (test_bit(r12, 0xe))
            result = 6
        else
            int64_t var_8d8_1
            int128_t var_448
            int64_t rbx_3
            int512_t zmm0
            
            if (*(r14 + 0x8b0) == 0)
                zmm0.o = *(r14 + 0x610)
                var_448 = zmm0.o
                rbx_3 = *(r14 + 0x628)
                var_8d8_1 = rbx_3
            else
                char rax_33 = sub_142bbd260(r14 + 0x10b8, r15.d)
                
                if (zx.d(rax_33) u>= *(r14 + 0x8b0))
                    rax_33 = *(r14 + 0x8b0) - 1
                
                int32_t rcx_11 = *(r14 + 0x624)
                var_900 = rcx_11
                void* rbx_1 = r14 + (zx.q(rax_33) << 3)
                void* rax_35 = *(rbx_1 + 0x8b8)
                int32_t rdx_4 = *(rax_35 + 0x44)
                zmm0.o = *(rax_35 + 0x30)
                var_448 = zmm0.o
                rbx_3 = *(*(rbx_1 + 0x8b8) + 0x48)
                var_8d8_1 = rbx_3
                
                if (rcx_11 != rdx_4)
                    uint32_t rax_36 = sub_142b93dd0(*(arg1 + 0xfc), rcx_11, rdx_4)
                    int32_t rdx_6 = var_900
                    int32_t rcx_13 = *(arg1 + 0x100)
                    *(arg1 + 0xfc) = rax_36
                    *(arg1 + 0x100) = sub_142b93dd0(rcx_13, rdx_6, rdx_4)
                    var_904 = 1
            
            __builtin_strncpy(arg1 + 0x60, "ltuo", 4)
            *(arg1 + 0x9a) = 0
            *(arg1 + 0x98) = 0
            var_458 = arg1 + 0x98
            void* (* var_910_1)(void* arg1, int64_t* arg2, int32_t arg3, int512_t arg4 @ zmm2) =
                sub_142bc00c0
            *(arg1 + 0xf9) = not.b(r12.b) & 1
            uint8_t rcx_15 = not.b((r12 u>> 1).b) & 1
            int64_t (* var_918_2)(void* arg1, int32_t arg2, int64_t* arg3, int32_t* arg4, 
                int512_t arg5 @ zmm0, int512_t arg6 @ zmm1) = sub_142bc0120
            uint8_t var_8f8_2 = rcx_15
            *(arg1 + 0xf8) = rcx_15
            void var_8b8
            (*rax_3)(&var_8b8, rsi, arg2, arg1, rcx_15, r12 s>> 0x10 & 0xf, var_918_2, var_910_1)
            int32_t rdx_8 = r15.d
            char var_547
            char rax_44 = var_547
            
            if ((0x100 & r12) != 0)
                rax_44 = 1
            
            char var_547_1 = rax_44
            uint8_t var_85e_1 = (r12 u>> 0xa).b & 1
            int64_t* rcx_17 = *(*(rsi + 0xd0) + 0x50)
            int64_t var_8f0
            int64_t var_8d0
            int32_t rax_51
            int32_t result_1
            
            if (rcx_17 == 0)
                int32_t result_2
                result_2, zmm0 =
                    sub_142bc0190(*(rsi + 0x3e8) + 0x4f0, rdx_8, &var_8f0, &var_900, zmm0, arg5)
                result_1 = result_2
                rax_51 = var_900
            else
                result_1 = (**rcx_17)(rcx_17[1], rdx_8, &var_8d0)
                var_8f0 = var_8d0
                int32_t var_8c8
                rax_51 = var_8c8
            
            var_900 = rax_51
            
            if (result_1 == 0)
                int32_t result_3 = (*(rax_3 + 8))(&var_8b8, arg2, zx.q(r15.d))
                result_1 = result_3
                
                if (result_3 == 0)
                    void var_438
                    (*(var_468 + 0x30))(&var_438, &var_8b8, 0)
                    int32_t result_4 = (*(rax_3 + 0x10))(&var_438, var_8f0, zx.q(var_900))
                    result_1 = result_4
                    
                    if (result_4.b == 0xa4)
                        uint64_t r8_11 = zx.q(var_900)
                        int64_t rdx_12 = var_8f0
                        var_8f8_2 = 0
                        var_904 = 1
                        *(arg1 + 0xf8) = 0
                        result_1 = (*(rax_3 + 0x10))(&var_438, rdx_12, r8_11)
                    
                    int64_t* rcx_25 = *(*(rsi + 0xd0) + 0x50)
                    
                    if (rcx_25 == 0)
                        void* rcx_27 = *(rsi + 0x3e8)
                        
                        if (*(rcx_27 + 0x518) == 0)
                            sub_142b97020(*(rcx_27 + 0x4f0), &var_8f0)
                    else
                        var_8d0 = var_8f0
                        int32_t var_8c8_1 = var_900
                        (*(*rcx_25 + 8))(rcx_25[1], &var_8d0)
                    
                    if (result_1 == 0)
                        if (*(*(rsi + 0xd0) + 0x50) == 0)
                            int64_t rcx_29 = *(r14 + 0x510)
                            
                            if (rcx_29 != 0)
                                int32_t rax_65 = var_900
                                *(arg1 + 0xd0) =
                                    zx.q(*(rcx_29 + (zx.q(r15.d) << 2))) + *(r14 + 0x518) - 1
                                *(arg1 + 0xd8) = rax_65
                        else
                            *(arg1 + 0xd0) = 0
                            *(arg1 + 0xd8) = 0
                        
                        int64_t var_840
                        var_840(&var_8b8)
                        int64_t* rcx_33 = *(*(rsi + 0xd0) + 0x50)
                        void* r10_2
                        
                        if (rcx_33 != 0)
                            r10_2 = *rcx_33
                        
                        int32_t var_880
                        int32_t var_460
                        int32_t var_45c
                        int32_t rdx_16
                        
                        if (rcx_33 == 0 || *(r10_2 + 0x10) == 0)
                            rdx_16 = var_880
                        label_142bc1c5e:
                            int32_t var_550
                            
                            if (not(test_bit(r12, 0xa)))
                                uint8_t var_928_1
                                int16_t var_8fc
                                
                                if (*(rsi + 0x15a) == 0)
                                    *(arg1 + 0x40) = var_550
                                    *(arg1 + 0x50) = var_550
                                else
                                    var_8fc = 0
                                    var_908 = 0
                                    var_928_1.q = &var_908
                                    (*(*(rsi + 0x2d0) + 0x118))(rsi, 0, zx.q(r15.d), &var_8fc, 
                                        var_928_1)
                                    uint32_t rcx_37 = zx.d(var_908)
                                    int32_t rax_74 = sx.d(var_8fc)
                                    *(arg1 + 0x40) = rcx_37
                                    *(arg1 + 0x38) = rax_74
                                    *(arg1 + 0x50) = rcx_37
                                
                                *(*(arg1 + 0xf0) + 0xc) = 0
                                void* rax_76
                                
                                if (*(rsi + 0x190) == 0 || *(rsi + 0x1ba) u<= 0)
                                    rax_76.b = 0
                                else
                                    rax_76.b = 1
                                
                                var_908.b = rax_76.b
                                
                                if (rax_76.b == 0)
                                    int32_t rax_80
                                    int32_t rcx_39
                                    
                                    if (*(rsi + 0x208) == 0xffff)
                                        rax_80 = sx.d(*(rsi + 0x13e))
                                        rcx_39 = sx.d(*(rsi + 0x13c))
                                    else
                                        rax_80 = sx.d(*(rsi + 0x250))
                                        rcx_39 = sx.d(*(rsi + 0x24e))
                                    
                                    *(arg1 + 0x4c) = rcx_39 - rax_80
                                else
                                    var_8fc = 0
                                    var_900.w = 0
                                    rdx_16.b = 1
                                    var_928_1.q = &var_900
                                    (*(*(rsi + 0x2d0) + 0x118))(rsi, rdx_16, zx.q(r15.d), &var_8fc, 
                                        var_928_1)
                                    *(arg1 + 0x48) = sx.d(var_8fc)
                                    *(arg1 + 0x4c) = zx.d(var_900.w)
                                
                                int32_t rax_81 = *(arg1 + 0x4c)
                                *(arg1 + 0xb8) = 0
                                *(arg1 + 0x54) = rax_81
                                __builtin_strncpy(arg1 + 0x60, "ltuo", 4)
                                
                                if (arg2 != 0)
                                    int32_t rax_82 = *(arg1 + 0xb8)
                                    
                                    if (*(arg2 + 0x1a) u< 0x18)
                                        rax_82 = 0x100
                                    
                                    *(arg1 + 0xb8) = rax_82
                                
                                *(arg1 + 0xb8) |= 4
                                void* r15_1
                                
                                if (var_448.d != 0x10000 || var_448:0xc.d != 0x10000
                                        || var_448:4.d != 0 || var_448:8.d != 0)
                                    r15_1 = arg1 + 0x98
                                    sub_142b95190(r15_1, &var_448)
                                    int32_t rax_83 = sub_142b93e80(*(arg1 + 0x40), var_448.d)
                                    int32_t rdx_19 = var_448:0xc.d
                                    int32_t rcx_44 = *(arg1 + 0x4c)
                                    *(arg1 + 0x40) = rax_83
                                    *(arg1 + 0x4c) = sub_142b93e80(rcx_44, rdx_19)
                                else
                                    r15_1 = arg1 + 0x98
                                
                                int32_t rsi_1 = var_8d8_1:4.d
                                
                                if (rbx_3.d != 0 || rsi_1 != 0)
                                    sub_142b95270(r15_1, rbx_3.d, rsi_1)
                                    *(arg1 + 0x40) += rbx_3.d
                                    *(arg1 + 0x4c) += rsi_1
                                
                                if ((r12.b & 1) == 0 || var_904 != 0)
                                    int32_t* rbx_4 = *(r15_1 + 8)
                                    int32_t r15_2 = *(arg1 + 0x100)
                                    int32_t rsi_2 = *(arg1 + 0xfc)
                                    int64_t var_858
                                    
                                    if (var_8f8_2 == 0 || var_858 == 0)
                                        int32_t i = sx.d(*(arg1 + 0x9a))
                                        
                                        while (i s> 0)
                                            int32_t rax_85 = sub_142b93e80(*rbx_4, rsi_2)
                                            int32_t rcx_47 = rbx_4[1]
                                            *rbx_4 = rax_85
                                            i -= 1
                                            rbx_4[1] = sub_142b93e80(rcx_47, r15_2)
                                            rbx_4 = &rbx_4[2]
                                    
                                    int32_t rax_87 = sub_142b93e80(*(arg1 + 0x40), rsi_2)
                                    int32_t rcx_49 = *(arg1 + 0x4c)
                                    *(arg1 + 0x40) = rax_87
                                    *(arg1 + 0x4c) = sub_142b93e80(rcx_49, r15_2)
                                
                                sub_142b94c20(var_458, &var_468)
                                int32_t r8_15 = var_468.d
                                *(arg1 + 0x38) = r8_15
                                *(arg1 + 0x30) = var_460 - r8_15
                                bool cond:4_1 = var_908.b == 0
                                *(arg1 + 0x34) = var_45c - var_468:4.d
                                *(arg1 + 0x3c) = var_45c
                                
                                if (not(cond:4_1))
                                    int32_t temp0_1
                                    int32_t temp1_1
                                    temp0_1:temp1_1 = sx.q(*(arg1 + 0x40))
                                    *(arg1 + 0x44) = r8_15 - ((temp1_1 - temp0_1) s>> 1)
                                else if ((r12.b & 0x10) != 0)
                                    sub_142b9a4e0(arg1 + 0x30, *(arg1 + 0x4c))
                            else
                                void* rcx_35 = *(arg1 + 0xf0)
                                zmm0.o = var_448
                                *(arg1 + 0x38) = rdx_16
                                *(arg1 + 0x40) = var_550
                                *(rcx_35 + 0x10) = zmm0.o
                                *(rcx_35 + 0x20) = rbx_3
                                *(rcx_35 + 0xc) = 1
                        else
                            var_468.d = var_880
                            int32_t var_878
                            var_460 = var_878
                            int32_t var_874
                            var_45c = var_874
                            var_468:4.d = 0
                            int32_t result_5 =
                                (*(r10_2 + 0x10))(rcx_33[1], zx.q(r15.d), 0, &var_468)
                            rdx_16 = var_468.d
                            result_1 = result_5
                            int32_t var_878_1 = var_460
                            int32_t var_874_1 = var_45c
                            int32_t var_880_1 = rdx_16
                            
                            if (result_1 == 0)
                                goto label_142bc1c5e
            
            result = zx.q(result_1)
    else
        *(arg1 + 0xfc) = *(arg2 + 0x1c)
        *(arg1 + 0x100) = arg2[4].d
        void* rax_8 = *arg2
        int32_t rdx = arg2[8].d
        void* r10_1 = *(rax_8 + 0x2d0)
        
        if (rdx == 0xffffffff || *(r10_1 + 0xc0) == 0 || (r12.b & 8) != 0)
            goto label_142bc18c6
        
        int32_t var_920
        var_920.q = arg1 + 0x68
        char var_928
        var_928.q = *(rax_8 + 0xa0)
        
        if ((*(r10_1 + 0x90))(rsi, rdx, zx.q(r15.d), zx.q(r12), var_928, var_920, &var_458) != 0)
            goto label_142bc18c6
        
        int32_t rcx_2 = sx.d(var_458:4.w)
        int32_t rdx_1 = sx.d(var_458:6.w)
        int16_t var_44e
        int32_t r8_1 = sx.d(var_44e)
        int16_t var_44c
        int32_t r9_1 = sx.d(var_44c)
        *(arg1 + 0x30) = zx.d(var_458:2.w) << 6
        *(arg1 + 0x34) = zx.d(var_458.w) << 6
        *(arg1 + 0x38) = rcx_2 << 6
        *(arg1 + 0x3c) = rdx_1 << 6
        int16_t var_450
        *(arg1 + 0x40) = zx.d(var_450) << 6
        *(arg1 + 0x44) = r8_1 << 6
        *(arg1 + 0x48) = r9_1 << 6
        *(arg1 + 0x98) = 0
        int16_t var_44a
        *(arg1 + 0x4c) = zx.d(var_44a) << 6
        __builtin_strncpy(arg1 + 0x60, "stib", 4)
        
        if ((r12.b & 0x10) == 0)
            *(arg1 + 0x90) = rcx_2
            *(arg1 + 0x94) = rdx_1
        else
            *(arg1 + 0x90) = r8_1
            *(arg1 + 0x94) = r9_1
        
        var_928.q = &var_908
        (*(*(rsi + 0x2d0) + 0x118))(rsi, 0, zx.q(r15.d), &var_900, var_928)
        *(arg1 + 0x50) = zx.d(var_908)
        
        if (*(rsi + 0x190) != 0 && *(rsi + 0x1ba) u> 0)
            var_928.q = &var_908
            int64_t rdx_2
            rdx_2.b = 1
            (*(*(rsi + 0x2d0) + 0x118))(rsi, rdx_2, zx.q(r15.d), &var_900, var_928)
            *(arg1 + 0x54) = zx.d(var_908)
            result = 0
        else if (*(rsi + 0x208) == 0xffff)
            *(arg1 + 0x54) = sx.d(*(rsi + 0x13c)) - sx.d(*(rsi + 0x13e))
            result = 0
        else
            *(arg1 + 0x54) = sx.d(*(rsi + 0x24e)) - sx.d(*(rsi + 0x250))
            result = 0

__security_check_cookie(rax_1 ^ &var_948)
return result
