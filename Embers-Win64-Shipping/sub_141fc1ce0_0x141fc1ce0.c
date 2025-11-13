// 函数: sub_141fc1ce0
// 地址: 0x141fc1ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int32_t* var_48 = __security_cookie ^ &var_288
int64_t* r13 = *(arg1 + 0x48)
int64_t* r14 = arg2
int32_t* result

if (r13 == 0)
    result.b = 0
else
    void* rax_1 = *(arg1 + 0x50)
    int64_t* rbx_1 = *(rax_1 + 0x58)
    int64_t rax_2 = *(rax_1 + 0x68)
    char rax_4 = (*(*rbx_1 + 0x368))(rbx_1)
    char r15_1 = rax_4
    char var_236_1
    
    if (*data_143f3d1a8 s> 0)
        var_236_1 = 1
    
    if (*data_143f3d1a8 s<= 0 || rax_4 != 0)
        var_236_1 = 0
    
    int512_t zmm1_1
    result, zmm1_1 = sub_140bdcf70(rbx_1[0x2c], *(arg1 + 0x40))
    
    if (result == 0)
        result.b = 0
    else
        void* rax_5 = *(arg1 + 0x20)
        int32_t** rcx_3 = *(arg1 + 0x30)
        char var_238 = 0
        int32_t* var_200_1 = *rcx_3
        char var_237
        int32_t* rdi_1
        
        if (arg4 == 0)
            rdi_1 = arg3
        label_141fc1e69:
            void* rax_14 = sub_141f8a490(*(arg1 + 0x58), *(arg1 + 0x40))
            void var_198
            sub_140bd5b20(&var_198, r14[0x16], 0, 0)
            int512_t zmm0_1
            zmm0_1.o = zx.o(0)
            void* rcx_11 = *(arg1 + 0x58)
            void** const var_1e8 = &data_14328ac98
            int64_t* var_1e0_1 = rbx_1
            int64_t* var_258_2 = &var_198
            void* rbx_2 = nullptr
            void** var_230 = nullptr
            int64_t* var_260_2 = &var_230
            int128_t var_1d8
            __builtin_memset(&var_1d8, 0, 0x21)
            int64_t var_1b0_1 = 0
            int64_t* var_1a8_1 = nullptr
            char rax_15
            int512_t zmm0_2
            rax_15, zmm0_2 =
                sub_141f92a60(rcx_11, r13, result, rax_14, zmm0_1, r14, var_260_2, var_258_2)
            int64_t var_108
            
            if (rax_15 == 0)
            label_141fc2074:
                
                if (var_238 != 0)
                    sub_141fce700(arg1)
                
                rdi_1.b = 1
            else
                while (true)
                    if ((*(r14 + 0x29) & 1) == 0)
                        void** r9_2 = var_230
                        
                        if (r9_2 == 0 || r9_2[3].b != 0)
                        label_141fc2067:
                            char rax_24
                            rax_24, zmm0_2 = sub_141f92a60(*(arg1 + 0x58), r13, result, rax_14, 
                                zmm0_2, r14, &var_230, &var_198)
                            
                            if (rax_24 == 0)
                                goto label_141fc2074
                            
                            continue
                        else
                            char rdx_7 = r9_2[1].b
                            
                            if (rdx_7 == 0)
                                rbx_2 = *r9_2
                                
                                if (rbx_2 == 0 || ((*(*(rbx_2 + 8) + 0x10) u>> 0x14).b & 1) == 0)
                                    rbx_2 = nullptr
                            
                            int64_t var_d8
                            int128_t var_c8
                            void* var_b0
                            int128_t var_a8
                            int40_t var_90
                            
                            if (rbx_2 == 0)
                                void* rbx_4
                                
                                if (rdx_7 == 0)
                                    rbx_4 = nullptr
                                else
                                    rbx_4 = *r9_2
                                    
                                    if (rbx_4 == 0)
                                        rbx_4 = nullptr
                                    else
                                        void* rax_28 = sub_140bdfab0()
                                        void* rdx_10 = *(rbx_4 + 0x10)
                                        int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                                        
                                        if (rax_29.d s> *(rdx_10 + 0x38)
                                                || *(*(rdx_10 + 0x30) + (rax_29 << 3))
                                                != rax_28 + 0x30)
                                            r9_2 = var_230
                                            rbx_4 = nullptr
                                        else
                                            r9_2 = var_230
                                
                                if (rbx_4 != 0)
                                    rbx_2 = nullptr
                                    var_237 = 0
                                    __builtin_memset(&var_d8, 0, 0x2c)
                                    int64_t* var_268_2
                                    var_268_2.b = var_236_1
                                    var_b0:4.d = 0x80
                                    var_a8.d = 0xffffffff
                                    var_a8:4.d = 0
                                    int64_t var_98_2 = 0
                                    var_90.d = 0
                                    int64_t var_d0_2
                                    int64_t var_b8_2
                                    
                                    if (sub_141fc26f0(arg1, &var_198, rdi_1, r9_2, var_268_2.b, 
                                            &var_237, &var_d8) == 0)
                                        rdi_1.b = 0
                                    label_141fc2399:
                                        var_90.d = 0
                                        
                                        if (var_98_2 != 0)
                                            sub_140a74f90(var_98_2)
                                        
                                        var_d0_2.d = 0
                                        var_a8.d = 0xffffffff
                                        var_a8:4.d = 0
                                        sub_14059a8e0(&var_c8, 0)
                                        
                                        if (var_b8_2 != 0)
                                            sub_140a74f90(var_b8_2)
                                        
                                        int64_t rcx_41 = var_d8
                                        
                                        if (rcx_41 != 0)
                                            sub_140a74f90(rcx_41)
                                        
                                        break
                                    
                                    if (var_237 == 0)
                                        int32_t rax_38 = *(r13 + 0xc)
                                        void* const rax_42
                                        
                                        if (rax_38 s>= data_143e1d9b4)
                                            rax_42 = nullptr
                                        else
                                            uint32_t rdx_17 = zx.d(rax_38.w)
                                            
                                            if (rax_38 s< 0)
                                                rax_38 += 0xffff
                                                rdx_17 -= 0x10000
                                            
                                            rax_42 =
                                                *(data_143e1d9a0 + (sx.q(rax_38 s>> 0x10) << 3))
                                                + sx.q(rdx_17) * 0x18
                                        
                                        if (((*(rax_42 + 8) u>> 0x1d).b & 1) != 0)
                                            rdi_1.b = 1
                                            goto label_141fc2399
                                    else
                                        int64_t rdi_2 = sx.q(*(arg1 + 0x80))
                                        int32_t rax_33 = (rdi_2 + 1).d
                                        *(arg1 + 0x80) = rax_33
                                        
                                        if (rax_33 s> *(arg1 + 0x84))
                                            sub_1405fdd60(arg1 + 0x78)
                                        
                                        int32_t* rdi_4 = rdi_2 * 0x70 + *(arg1 + 0x78)
                                        *rdi_4 = var_230[2].d
                                        rdi_4[1] = *arg3
                                        *(rdi_4 + 8) = 0
                                        uint32_t count
                                        rdi_4[4] = count
                                        
                                        if (count != 0)
                                            sub_1405da9e0(&rdi_4[2], count, 0)
                                            memcpy(*(rdi_4 + 8), var_108, count)
                                        else
                                            rdi_4[5] = 0
                                        
                                        int64_t var_f8
                                        *(rdi_4 + 0x18) = var_f8
                                        void* rdx_15 = &rdi_4[0xc]
                                        *(rdi_4 + 0x20) = 0
                                        *(rdi_4 + 0x28) = 0
                                        *(rdx_15 + 0x10) = 0
                                        *(rdx_15 + 0x18) = 0
                                        *(rdx_15 + 0x1c) = 0x80
                                        void* rax_37 = *(rdx_15 + 0x10)
                                        
                                        if (rax_37 != 0)
                                            rdx_15 = rax_37
                                        
                                        *rdx_15 = 0
                                        *(rdx_15 + 8) = 0
                                        rdi_4[0x14] = 0xffffffff
                                        rdi_4[0x15] = 0
                                        *(rdi_4 + 0x60) = 0
                                        rdi_4[0x1a] = 0
                                        sub_140780cc0(&rdi_4[8], &var_d8)
                                        r14 = arg2
                                        r15_1 = rax_4
                                        rdi_1 = arg3
                                        *arg5 = 1
                                        *(arg1 + 8) |= 4
                                        var_238 = 1
                                    
                                    var_90.d = 0
                                    
                                    if (var_98_2 != 0)
                                        sub_140a74f90(var_98_2)
                                    
                                    bool cond:3_1 = var_d0_2:4.d == 0
                                    var_d0_2.d = 0
                                    
                                    if (not(cond:3_1))
                                        sub_140638cc0(&var_d8, 0)
                                    
                                    var_a8.d = 0xffffffff
                                    var_a8:4.d = 0
                                    zmm0_2 = sub_14059a8e0(&var_c8, 0)
                                    
                                    if (var_b8_2 != 0)
                                        zmm0_2 = sub_140a74f90(var_b8_2)
                                    
                                    int64_t rcx_36 = var_d8
                                    
                                    if (rcx_36 != 0)
                                        zmm0_2 = sub_140a74f90(rcx_36)
                                    
                                    goto label_141fc2067
                            else if (r15_1 == 0)
                                int32_t rax_17 = *(arg1 + 8)
                                
                                if ((rax_17.b & 8) == 0)
                                    int64_t* rcx_14 = *(arg1 + 0x48)
                                    *(arg1 + 8) = rax_17 | 8
                                    
                                    if (rcx_14 != 0)
                                        (*(*rcx_14 + 0x1d8))(rcx_14)
                                
                                zmm0_2.o = zx.o(0)
                                var_90 = 0
                                var_d8 = 0
                                int64_t var_60_1 = 0
                                int64_t var_58_1 = 0
                                int64_t var_b8_1 = rax_2
                                int16_t var_68_1 = 0xffff
                                void* var_d0_1 = &var_198
                                void** const* var_98_1 = &var_1e8
                                void* rax_21 = *(arg1 + 0x50)
                                int128_t var_88_1
                                __builtin_memset(&var_88_1, 0, 0x20)
                                var_c8 = zmm0_2.o
                                var_a8 = zx.o(0)
                                var_b0 = rax_21
                                var_88_1.q = r13
                                var_90:7.b = (*(rax_21 + 0xa4) u>> 1).b & 1
                                uint8_t rax_22
                                rax_22, zmm0_2 = sub_1422cc8a0(rax_5, var_200_1, &var_d8, rbx_2)
                                
                                if (rax_22 != 0)
                                    if (var_90:3.b != 0)
                                        *arg5 = 1
                                    
                                    char rax_27 = var_238
                                    
                                    if (var_90:4.b != 0)
                                        rax_27 = 1
                                    
                                    var_238 = rax_27
                                else
                                    var_230[3].b = 1
                                
                                if (var_60_1 != 0)
                                    zmm0_2 = sub_140a74f90(var_60_1)
                                
                                rbx_2 = nullptr
                                goto label_141fc2067
                    
                    rdi_1.b = 0
                    break
            
            if (var_1a8_1 != 0)
                var_1a8_1[1].d -= 1
                
                if (var_1a8_1[1].d == 1)
                    (**var_1a8_1)(var_1a8_1)
                    int32_t temp1_1 = *(var_1a8_1 + 0xc)
                    *(var_1a8_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_1a8_1 + 8))(var_1a8_1, 1)
            
            int128_t var_1c8
            int64_t* rbx_5 = var_1c8:8.q
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp3_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            var_1e8 = &data_14328a850
            
            if (var_108 != 0)
                sub_140a74f90(var_108)
            
            sub_140b4cb40(&var_198)
            result = zx.q(rdi_1.b)
        else if (r15_1 != 0)
            result.b = 0
        else
            int32_t rax_6 = *(arg1 + 8)
            
            if ((rax_6.b & 8) == 0)
                int64_t* rcx_4 = *(arg1 + 0x48)
                *(arg1 + 8) = rax_6 | 8
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x1d8))(rcx_4)
            
            char rax_10 = (*(*rbx_1 + 0x3c0))(rbx_1, r13)
            rdi_1 = arg3
            int32_t rdx_2 = 0
            int64_t r8 = *(arg1 + 0x40)
            var_237 = 0
            
            if (rax_10 != 0)
                rdx_2 = 1
            
            int32_t rcx_7 = rdx_2 | 2
            
            if (((*rdi_1).b & 0x40) == 0)
                rcx_7 = rdx_2
            
            if (sub_1422ccaa0(rax_5, *(arg1 + 0x58), r8, **(arg1 + 0x30), zmm1_1, r13, r14, 
                    &var_237, &var_238, rcx_7).b != 0)
                *arg5 |= var_237
                goto label_141fc1e69
            
            result.b = 0

__security_check_cookie(var_48 ^ &var_288)
return result
