// 函数: sub_1419d50d0
// 地址: 0x1419d50d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
int64_t* i = arg2[1]
int64_t* r14 = arg2
void* result = arg1
int64_t* i_1 = i

if (i != 0)
    uint64_t rdi_1 = zx.q(data_14401b1a0)
    int64_t r12
    int64_t var_28_1 = r12
    uint128_t zmm6 = -0x4010000000000000
    
    do
        int64_t* r13_1 = *i
        r12.b = 0
        void* r15_1 = r13_1[2]
        
        if (*(r13_1 + 0x1d) == 0)
            goto label_1419d5a73
        
        if (*(r13_1 + 0x1c) != 0)
            goto label_1419d5261
        
        int32_t rdi_2 = 0
        int32_t rax_14
        
        if (*(r15_1 + 0x98) != 0)
            do
                void* rbx_1 = *(r15_1 + 0x90)
                uint64_t var_570 = zmm6.q
                int64_t r14_2 = sx.q(rdi_2) << 6
                int64_t* rcx_1 = rbx_1 + 0x20 + r14_2
                int64_t* rax_3 = *(r14_2 + rbx_1 + 0x10)
                
                if (rax_3 != 0)
                    rcx_1 = rax_3
                
                if ((*(r14_2 + rbx_1))((*(*rcx_1 + 8))(rcx_1), &var_570) == 0)
                    rdi_2 += 1
                else
                    void* rcx_3 = *(r15_1 + 0x90)
                    
                    if (*(r14_2 + rcx_3) != 0)
                        int64_t* rax_7 = *(r14_2 + rcx_3 + 0x10)
                        int64_t* rcx_5 = rcx_3 + 0x20 + r14_2
                        
                        if (rax_7 != 0)
                            rcx_5 = rax_7
                        
                        (*(*rcx_5 + 0x10))(rcx_5)
                    
                    int32_t rcx_8 = *(r15_1 + 0x98)
                    int32_t rax_10 = rcx_8 - rdi_2
                    
                    if (rax_10 != 1)
                        int64_t rcx_6 = *(r15_1 + 0x90)
                        memmove(rcx_6 + r14_2, (sx.q(rdi_2 + 1) << 6) + rcx_6, (rax_10 - 1) << 6)
                        rcx_8 = *(r15_1 + 0x98)
                    
                    *(r15_1 + 0x98) = rcx_8 - 1
                    sub_1407c3fe0(r15_1 + 0x90)
                
                rax_14 = *(r15_1 + 0x98)
            while (rdi_2 u< rax_14)
            
            r14 = arg2
            i = i_1
        
        if (*(r15_1 + 0x98) != 0 && rax_14 != 0)
            result = arg1
        label_1419d5a73:
            
            if (*(r13_1 + 0x1d) == 0)
                *(result + 0xe8) -= 1
                r12.b = 1
        else
            rdi_1 = zx.q(data_14401b1a0)
        label_1419d5261:
            int32_t var_214
            sub_141961660(&var_214)
            void** const var_558
            memset(&var_558, 0, 0x90)
            sub_140b4c2a0(&var_558)
            var_558 = &data_142d6b230
            int64_t var_4b8_1 = 0x7fffffffffffffff
            int64_t var_4c8_1 = 0
            int64_t* var_4c0_1 = r13_1
            sub_140b55290(&var_558, 1)
            var_558[0x1b](&var_558, 0)
            var_558[0x20](&var_558, 0x11)
            sub_141963420(&var_558, &var_214, arg3)
            int64_t var_2d8 = 0
            int32_t var_2d0_1 = 0
            int32_t var_2ac_1 = 0x80
            int64_t var_2c8
            __builtin_memset(&var_2c8, 0, 0x1c)
            int32_t var_2a8_1 = 0xffffffff
            int32_t var_2a4_1 = 0
            int64_t var_298_1 = 0
            int32_t var_290_1 = 0
            void var_4a8
            sub_141961660(&var_4a8)
            sub_141962e50(&var_4a8, &var_214)
            void*** rax_17 = j_sub_140a82f30(0xa0)
            int64_t* var_2e8_1
            
            if (rax_17 == 0)
                var_2e8_1 = nullptr
            else
                sub_140b4c2a0(rax_17)
                *rax_17 = &data_14300fba8
                rax_17[0x12] = 0
                rax_17[0x13] = 0
                var_2e8_1 = rax_17
            
            TEB* gsbase
            
            if (data_143f215b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdi_1 << 3))))
                _Init_thread_header(&data_143f215b0)
                
                if (data_143f215b0 == 0xffffffff)
                    __builtin_memset(&data_143f2159c, 0, 0x14)
                    _Init_thread_footer(&data_143f215b0)
            
            int32_t rax_20 = var_214
            void*** rbx_2
            
            if (rax_20 == 1)
                int64_t var_1fc
                int64_t var_1f4
                int32_t var_1ec
                
                if (var_1fc == data_143f2159c && var_1f4 == data_143f215a4
                        && var_1ec == data_143f215ac)
                    goto label_1419d57ff
                
                void var_588
                sub_141859c90(&var_2d8, &var_588, &var_1fc, nullptr)
                void**** rdi_3 = data_143f1d988
                
                if (rdi_3 == 0)
                    rbx_2.b = 0
                else
                    AcquireSRWLockShared(&rdi_3[4])
                    ReleaseSRWLockShared(&rdi_3[4])
                    rbx_2 = *rdi_3
                    void* rdi_4 = &rbx_2[sx.q(rdi_3[1].d)]
                    
                    if (rbx_2 == rdi_4)
                    label_1419d5467:
                        rbx_2.b = false
                    else
                        while (true)
                            void* rcx_24 = **rbx_2
                            
                            if ((*(*rcx_24 + 0x38))(rcx_24, &var_1fc) != 0xffffffff)
                                rbx_2.b = *rbx_2 != 0
                                break
                            
                            rbx_2 = &rbx_2[1]
                            
                            if (rbx_2 == rdi_4)
                                goto label_1419d5467
                
                int64_t var_1c0
                int64_t var_1b8
                int32_t var_1b0
                
                if (var_1c0 != data_143f2159c || var_1b8 != data_143f215a4
                        || var_1b0 != data_143f215ac)
                    void var_584
                    sub_141859c90(&var_2d8, &var_584, &var_1c0, nullptr)
                    rbx_2.b &= sub_1419caf50(&var_1c0)
                
                int64_t var_1ac
                int64_t var_1a4
                int32_t var_19c
                
                if (var_1ac != data_143f2159c || var_1a4 != data_143f215a4
                        || var_19c != data_143f215ac)
                    void var_580
                    sub_141859c90(&var_2d8, &var_580, &var_1ac, nullptr)
                    rbx_2.b &= sub_1419caf50(&var_1ac)
                
                int64_t var_1e8
                int64_t var_1e0
                int32_t var_1d8
                
                if (var_1e8 != data_143f2159c || var_1e0 != data_143f215a4
                        || var_1d8 != data_143f215ac)
                    void var_57c
                    sub_141859c90(&var_2d8, &var_57c, &var_1e8, nullptr)
                    rbx_2.b &= sub_1419caf50(&var_1e8)
                
                int64_t var_1d4
                int64_t var_1cc
                int32_t var_1c4
                
                if (var_1d4 != data_143f2159c || var_1cc != data_143f215a4
                        || var_1c4 != data_143f215ac)
                    void var_578
                    sub_141859c90(&var_2d8, &var_578, &var_1d4, nullptr)
                    rbx_2.b &= sub_1419caf50(&var_1d4)
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                int64_t var_228
                __builtin_memset(&var_228, 0, 0x14)
                
                if (var_1fc != 0 || var_1f4 != 0 || var_1ec != 0)
                    char rax_45
                    rax_45, zmm6 = sub_1419d4ef0(&var_1fc, var_2e8_1)
                    rbx_2.b &= rax_45
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                if (var_1c0 != data_143f2159c || var_1b8 != data_143f215a4
                        || var_1b0 != data_143f215ac)
                    char rax_49
                    rax_49, zmm6 = sub_1419d4ef0(&var_1c0, var_2e8_1)
                    rbx_2.b &= rax_49
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                if (var_1ac != data_143f2159c || var_1a4 != data_143f215a4
                        || var_19c != data_143f215ac)
                    char rax_53
                    rax_53, zmm6 = sub_1419d4ef0(&var_1ac, var_2e8_1)
                    rbx_2.b &= rax_53
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                if (var_1e8 != data_143f2159c || var_1e0 != data_143f215a4
                        || var_1d8 != data_143f215ac)
                    char rax_57
                    rax_57, zmm6 = sub_1419d4ef0(&var_1e8, var_2e8_1)
                    rbx_2.b &= rax_57
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                if (var_1d4 != data_143f2159c || var_1cc != data_143f215a4
                        || var_1c4 != data_143f215ac)
                    char rax_61
                    rax_61, zmm6 = sub_1419d4ef0(&var_1d4, var_2e8_1)
                    rbx_2.b &= rax_61
                
                goto label_1419d57be
            
            int64_t var_210
            int64_t var_208
            int32_t var_200
            int32_t* rbx_5
            
            if (rax_20 != 0 || (var_210 == data_143f2159c && var_208 == data_143f215a4
                && var_200 == data_143f215ac))
            label_1419d57ff:
                void* r15_3
                
                if (var_2d0_1 == var_2a4_1)
                    r15_3 = arg1
                else
                    int32_t rax_68 = r13_1[3].d
                    int64_t var_288
                    __builtin_memset(&var_288, 0, 0x2c)
                    int32_t var_25c_1 = 0x80
                    int32_t var_258_1 = 0xffffffff
                    int32_t var_254_1 = 0
                    int64_t var_248_1 = 0
                    int32_t var_240_1 = 0
                    sub_141823260(&var_288, &var_2d8)
                    r15_3 = arg1
                    int32_t rdi_5 = *(r15_3 + 0x38)
                    *(r15_3 + 0x38) = rdi_5 + 1
                    
                    if (rdi_5 + 1 s> *(r15_3 + 0x3c))
                        sub_1407755b0(r15_3 + 0x30)
                    
                    int64_t rdx_23 = *(r15_3 + 0x30)
                    memmove(rdx_23 + 0x58, rdx_23, rdi_5 * 0x58)
                    int64_t* rbx_6 = *(r15_3 + 0x30)
                    int64_t* rcx_44 = &rbx_6[2]
                    *rbx_6 = 0
                    rbx_6[1] = 0
                    rcx_44[2] = 0
                    rcx_44[3].d = 0
                    *(rcx_44 + 0x1c) = 0x80
                    int64_t* rax_70 = rcx_44[2]
                    
                    if (rax_70 != 0)
                        rcx_44 = rax_70
                    
                    *rcx_44 = 0
                    rcx_44[1] = 0
                    rbx_6[6].d = 0xffffffff
                    *(rbx_6 + 0x34) = 0
                    rbx_6[8] = 0
                    rbx_6[9].d = 0
                    sub_141823260(rbx_6, &var_288)
                    rbx_6[0xa].d = rax_68
                    int32_t var_240_2 = 0
                    
                    if (var_248_1 != 0)
                        sub_140a74f90(var_248_1)
                    
                    int64_t var_280_1
                    var_280_1.d = 0
                    int32_t var_258_2 = 0xffffffff
                    int32_t var_254_2 = 0
                    int64_t var_278
                    sub_14059a8e0(&var_278, 0)
                    int64_t var_268
                    
                    if (var_268 != 0)
                        sub_140a74f90(var_268)
                    
                    int64_t rcx_50 = var_288
                    
                    if (rcx_50 != 0)
                        sub_140a74f90(rcx_50)
                
                int64_t rbx_7 = sx.q(*(r15_3 + 0x158))
                int32_t rax_72 = (rbx_7 + 1).d
                *(r15_3 + 0x158) = rax_72
                
                if (rax_72 s> *(r15_3 + 0x15c))
                    sub_140b8a4a0(r15_3 + 0x150)
                
                rbx_5 = rbx_7 * 0x1c8 + *(r15_3 + 0x150)
            else
                void var_574
                sub_141859c90(&var_2d8, &var_574, &var_210, nullptr)
                char rax_65
                rax_65, zmm6 = sub_1419d4ef0(&var_210, var_2e8_1)
                rbx_2.b = rax_65 & 1
            label_1419d57be:
                
                if (rbx_2.b == 0)
                    goto label_1419d57ff
                
                int64_t rbx_3 = sx.q(*(arg1 + 0x18))
                int32_t rax_66 = (rbx_3 + 1).d
                *(arg1 + 0x18) = rax_66
                
                if (rax_66 s> *(arg1 + 0x1c))
                    sub_140b8a4a0(arg1 + 0x10)
                
                rbx_5 = rbx_3 * 0x1c8 + *(arg1 + 0x10)
            
            sub_141961560(rbx_5, &var_4a8)
            *(rbx_5 + 0x1c0) = var_2e8_1
            r12.b = 1
            int32_t var_290_2 = 0
            
            if (var_298_1 != 0)
                sub_140a74f90(var_298_1)
            
            var_2d0_1 = 0
            int32_t var_2a8_2 = 0xffffffff
            int32_t var_2a4_2 = 0
            sub_14059a8e0(&var_2c8, 0)
            int64_t var_2b8
            
            if (var_2b8 != 0)
                sub_140a74f90(var_2b8)
            
            int64_t rcx_57 = var_2d8
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            arg3 = sub_140b4cb40(&var_558)
        
        i_1 = i[1]
        
        if (r12.b != 0)
            int64_t* rcx_59 = r13_1[2]
            
            if (rcx_59 != 0)
                (**rcx_59)(rcx_59, 1)
                r13_1[2] = 0
            
            int64_t* rbx_9 = r13_1[7]
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t rax_78 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (rax_78 == 1)
                        (*(*rbx_9 + 8))(rbx_9, 1)
            
            int64_t* rbx_10 = r13_1[5]
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t rax_82 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (rax_82 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
            
            int64_t rcx_64 = *r13_1
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
            
            arg3 = j_sub_140a74f90(r13_1)
            
            if (i != 0)
                if (r14[3].d != 1)
                    void* rax_84 = r14[1]
                    
                    if (i != rax_84)
                        void* rax_86 = r14[2]
                        
                        if (i != rax_86)
                            *(i[1] + 0x10) = i[2]
                            *(i[2] + 8) = i[1]
                        else
                            void* rax_87 = *(rax_86 + 0x10)
                            r14[2] = rax_87
                            *(rax_87 + 8) = 0
                    else
                        void* rax_85 = *(rax_84 + 8)
                        r14[1] = rax_85
                        *(rax_85 + 0x10) = 0
                    
                    arg3 = j_sub_140a74f90(i)
                    (*(*r14 + 8))(r14, zx.q(r14[3].d - 1))
                else
                    sub_14101ebf0(r14)
        
        i = i_1
        result = arg1
        rdi_1 = zx.q(data_14401b1a0)
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_5b8)
return result
