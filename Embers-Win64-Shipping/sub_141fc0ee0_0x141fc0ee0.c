// 函数: sub_141fc0ee0
// 地址: 0x141fc0ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char rsi = arg4
int64_t* r15 = arg3
uint64_t result

if ((*(arg2 + 0x29) & 1) != 0)
    sub_141fbe070(arg1, 8)
else
    result = (*(*arg2 + 0x30))(arg2)
    
    if (result.b == 0)
        int64_t* rcx_1 = *(arg1 + 0x770)
        
        if ((*(*rcx_1 + 0x158))(rcx_1) == 0)
            if (*(arg1 + 0xb0c) == 0)
                int64_t* rcx_2 = *(arg1 + 0x770)
                result = (*(*rcx_2 + 0x68))(rcx_2)
            
            if (*(arg1 + 0xb0c) != 0 || result.b != 0)
                char r12_1 = 0
                bool cond:1_1 = *(arg1 + 0xbe4) u< 6
                int32_t var_12c = 0
                
                if (not(cond:1_1))
                    int64_t* rcx_3 = arg2[1]
                    int32_t* rdx_1 = *rcx_3
                    
                    if (&rdx_1[1] u> rcx_3[1])
                        int32_t* rdx_2 = &var_12c
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, rdx_2, arg5)
                        else
                            (*(*arg2 + 0x150))(arg2, rdx_2, 4)
                    else
                        var_12c = *rdx_1
                        *rcx_3 += 4
                
                int64_t* rcx_5 = arg2[1]
                int512_t zmm0
                zmm0.o = zx.o(0)
                int32_t var_130 = 0
                int32_t* rdx_3 = *rcx_5
                
                if (&rdx_3[1] u> rcx_5[1])
                    int32_t* rdx_4 = &var_130
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg2, rdx_4, arg5)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
                else
                    var_130 = *rdx_3
                    *rcx_5 += 4
                
                arg5.o = var_130
                
                if (arg6 != 0)
                    *arg6 = arg5.d
                
                int128_t zmm6
                
                if (*(arg1 + 0xbe4) u>= 0xa)
                    zmm0, arg5, zmm6 = sub_142171740(*(*(arg1 + 0x88) + 0x68), arg2, zmm0, arg5)
                    arg5.o = var_130
                
                if (*(arg1 + 0xb0c) == 0 && rsi == 0)
                    zmm0.o = *(arg1 + 0xe24)
                
                uint64_t r13
                
                if (*(arg1 + 0xb0c) != 0 || rsi != 0 || zmm0.d f< arg5.d)
                    zmm0.o = *(arg1 + 0xe24)
                    r13.b = 1
                else
                    r13.b = 0
                
                zmm0.o = _mm_max_ss(zmm0.d, arg5.d)
                char var_138_1 = r13.b
                int32_t var_134
                int32_t* rdx_6 = &var_134
                var_134 = 0
                *(arg1 + 0xe24) = zmm0.d
                int64_t r8 = *(*arg2 + 0x168)
                int16_t* var_128
                int32_t var_120
                uint32_t var_a8[0x4]
                uint32_t var_88[0x4]
                int32_t* rbx
                uint64_t var_108
                
                if (*(arg1 + 0xe28) == 0)
                    r8(arg2, rdx_6)
                    int32_t r13_2 = 0
                    
                    if (var_134 u<= 0)
                        r13 = zx.q(var_138_1)
                    else
                        int128_t var_48_1 = zmm6
                        zmm6 = zx.o(0)
                        
                        do
                            uint32_t zmm2[0x4] = data_143f3d230
                            arg5.o = zmm2
                            var_108 = 0
                            uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f3d240)
                            zmm0.o = zmm6
                            arg5.q = zmm6 u>> 0x40
                            zmm0.o = _mm_shuffle_ps(zmm0.o, arg5.o, 0xc4)
                            var_a8 = zmm0.o
                            int32_t var_100_2 = 0
                            uint64_t var_e0 = 0
                            int32_t var_d8_1 = 0
                            int128_t var_98 = zmm6
                            var_88 = temp0_2
                            sub_141707780(arg2, &var_a8, 
                                sub_140a1d9d0(arg2, &var_e0, sub_140a1d9d0(arg2, &var_108, arg5)))
                            void* r15_2 = *(arg1 + 0x140)
                            int32_t** rsi_2 = *(r15_2 + 0x98)
                            void* r12_2 = &rsi_2[sx.q(*(r15_2 + 0xa0))]
                            
                            if (rsi_2 == r12_2)
                            label_141fc12fc:
                                int64_t var_d0_1 = 0
                                
                                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                                    sub_140d19010(r15_2, 
                                        NewObject with empty name can't be used to create default "
                                    "subobjects (inside of UObject derived class constructor) as it "
                                    "produces incon")
                                
                                void* rax_22
                                int64_t rdx_20
                                rax_22, rdx_20 =
                                    sub_140d2dfc0(sub_14252cd20(), r15_2, 0, 0, 0, 0, 0, 0, 0)
                                rdx_20.b = 1
                                rbx = rax_22
                                int64_t r8_2 = *rax_22
                                (*(r8_2 + 0x260))(rax_22, rdx_20, r8_2)
                                sub_1420ee450(rbx, 1)
                                *(rbx + 0xba) &= 0x7f
                                int16_t* const rdx_22 = &data_142d40450
                                rbx[0x52] |= 3
                                *(rbx + 0x80) = var_a8
                                *(rbx + 0x90) = var_98
                                *(rbx + 0xa0) = var_88
                                
                                if (var_d8_1 != 0)
                                    rdx_22 = var_e0
                                
                                uint64_t rdx_23 = &data_142d40450
                                void var_b8
                                *(rbx + 0x50) = *sub_140b58260(&var_b8, rdx_22, 1)
                                
                                if (var_100_2 != 0)
                                    rdx_23 = var_108
                                
                                void var_b0
                                sub_1420ee550(rbx, *sub_140b58260(&var_b0, rdx_23, 1))
                                zmm0, arg5, zmm6 = sub_14242c7b0(*(arg1 + 0x140), rbx)
                                uint64_t rcx_35 = var_e0
                                
                                if (rcx_35 != 0)
                                    zmm0, arg5 = sub_140a74f90(rcx_35)
                                
                                uint64_t rcx_36 = var_108
                                
                                if (rcx_36 != 0)
                                    zmm0, arg5 = sub_140a74f90(rcx_36)
                            else
                                while (true)
                                    rbx = *rsi_2
                                    sub_1420e4db0(rbx, &var_128)
                                    int16_t* var_c8
                                    zmm0, arg5, zmm6 = sub_140b63b70(&rbx[0x14], &var_c8)
                                    uint64_t rdx_17 = &data_142d40450
                                    int16_t* const rcx_22 = &data_142d40450
                                    
                                    if (var_100_2 != 0)
                                        rdx_17 = var_108
                                    
                                    if (var_120 != 0)
                                        rcx_22 = var_128
                                    
                                    int32_t rax_18 = sub_140a54510(rcx_22, rdx_17)
                                    
                                    if (rax_18 == 0)
                                        int16_t* const rdx_18 = &data_142d40450
                                        int16_t* const rcx_23 = &data_142d40450
                                        
                                        if (var_d8_1 != rax_18)
                                            rdx_18 = var_e0
                                        
                                        int32_t var_c0
                                        
                                        if (var_c0 != rax_18)
                                            rcx_23 = var_c8
                                        
                                        if (sub_140a54510(rcx_23, rdx_18) == 0)
                                            int16_t* rcx_37 = var_c8
                                            
                                            if (rcx_37 != 0)
                                                zmm0, arg5 = sub_140a74f90(rcx_37)
                                            
                                            int16_t* rcx_38 = var_128
                                            
                                            if (rcx_38 != 0)
                                                zmm0, arg5 = sub_140a74f90(rcx_38)
                                            
                                            uint64_t rcx_39 = var_e0
                                            
                                            if (rcx_39 != 0)
                                                zmm0, arg5 = sub_140a74f90(rcx_39)
                                            
                                            uint64_t rcx_40 = var_108
                                            
                                            if (rcx_40 != 0)
                                                zmm0, arg5 = sub_140a74f90(rcx_40)
                                            
                                            break
                                    
                                    int16_t* rcx_24 = var_c8
                                    
                                    if (rcx_24 != 0)
                                        sub_140a74f90(rcx_24)
                                    
                                    int16_t* rcx_25 = var_128
                                    
                                    if (rcx_25 != 0)
                                        sub_140a74f90(rcx_25)
                                    
                                    rsi_2 = &rsi_2[1]
                                    
                                    if (rsi_2 == r12_2)
                                        r15_2 = *(arg1 + 0x140)
                                        goto label_141fc12fc
                            
                            r13_2 += 1
                        while (r13_2 u< var_134)
                        
                    label_141fc1148:
                        r15 = arg3
                        rsi = arg4
                        r13 = zx.q(var_138_1)
                else
                    r8(arg2, rdx_6)
                    
                    if (r13.b != 0 && rsi == 0)
                        r12_1 = 1
                    
                    int32_t r15_1 = 0
                    var_108 = 0
                    int64_t var_100_1 = 0
                    
                    if (var_134 u> 0)
                        do
                            zmm0, arg5 = sub_140a1d9d0(arg2, &var_108, arg5)
                            
                            if (r12_1 != 0)
                                void* rax_13
                                rax_13, zmm0, arg5 = sub_141fb32e0(arg1, &var_108)
                                int64_t rsi_1 = sx.q(*(arg1 + 0xe18))
                                int32_t rcx_12 = (rsi_1 + 1).d
                                *(arg1 + 0xe18) = rcx_12
                                
                                if (rcx_12 s> *(arg1 + 0xe1c))
                                    sub_1405a4cf0(arg1 + 0xe10)
                                
                                *(*(arg1 + 0xe10) + (rsi_1 << 2)) = *(rax_13 + 0x10)
                            
                            r15_1 += 1
                        while (r15_1 u< var_134)
                        
                        uint64_t rcx_15 = var_108
                        
                        if (rcx_15 != 0)
                            zmm0, arg5 = sub_140a74f90(rcx_15)
                        
                        goto label_141fc1148
                    
                    r15 = arg3
                char rdx_11 = *(arg2 + 0x29)
                
                if ((rdx_11 & 1) != 0)
                    sub_141fbe070(arg1, 8)
                else
                    bool cond:4_1 = *(arg1 + 0xe28) == 0
                    int64_t var_e8 = 0
                    
                    if (not(cond:4_1))
                        int64_t* rcx_16 = arg2[1]
                        int64_t* r8_1 = *rcx_16
                        
                        if (&r8_1[1] u> rcx_16[1])
                            int64_t* rdx_26 = &var_e8
                            
                            if ((rdx_11 & 0x20) != 0)
                                sub_140b540d0(arg2, rdx_26, arg5)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_26, 8)
                        else
                            var_e8 = *r8_1
                            *rcx_16 += 8
                    
                    if (rsi != 0)
                        rbx = *arg2
                        (*(rbx + 0x178))(arg2, (*(rbx + 0x20))(arg2) + var_e8)
                    else
                        zmm0, arg5 = sub_141fbca20(arg1, arg2, var_130)
                    
                    bool cond:7_1 = *(arg1 + 0xe2a) == 0
                    int64_t var_f8 = 0
                    
                    if (not(cond:7_1))
                        int64_t* rcx_45 = arg2[1]
                        int64_t* rdx_29 = *rcx_45
                        
                        if (&rdx_29[1] u> rcx_45[1])
                            int64_t* rdx_30 = &var_f8
                            
                            if ((*(arg2 + 0x29) & 0x20) != 0)
                                sub_140b540d0(arg2, rdx_30, arg5)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_30, 8)
                        else
                            var_f8 = *rdx_29
                            *rcx_45 += 8
                        
                        if (var_f8 s<= 0 || rsi != 0)
                            rbx = *arg2
                            (*(rbx + 0x178))(arg2, (*(rbx + 0x20))(arg2) + var_f8)
                        else
                            __builtin_memset(&var_a8, 0, 0x2c)
                            var_88[3] = 0x80
                            int32_t var_78_1 = 0xffffffff
                            int32_t var_74_1 = 0
                            int64_t var_68_1 = 0
                            int32_t var_60_1 = 0
                            sub_141fa7dc0(arg2, &var_a8, arg5)
                            
                            if (var_a8[2] - var_74_1 s> 0)
                                sub_141fa1830(arg1 + 0xc98, &var_130)
                            
                            int32_t var_60_2 = 0
                            
                            if (var_68_1 != 0)
                                sub_140a74f90(var_68_1)
                            
                            zmm0, arg5 = sub_141cdb8d0(&var_a8, 0)
                            int64_t rcx_51 = var_88[0].q
                            
                            if (rcx_51 != 0)
                                zmm0, arg5 = sub_140a74f90(rcx_51)
                            
                            int64_t rcx_52 = var_a8[0].q
                            
                            if (rcx_52 != 0)
                                zmm0, arg5 = sub_140a74f90(rcx_52)
                    
                    zmm0.o = var_130
                    int32_t rax_35 = var_12c
                    int32_t var_118_1 = zmm0.d
                    int32_t var_110 = 0xffffffff
                label_141fc161b:
                    var_120.q = 0
                    var_128 = nullptr
                    
                    while (true)
                        if (*(arg1 + 0x10d0) != 0 && (*(*arg2 + 0x20))(arg2) s>= *(arg1 + 0x10d0))
                            int16_t* rcx_74 = var_128
                            
                            if (rcx_74 != 0)
                                sub_140a74f90(rcx_74)
                            
                            break
                        
                        if (*(arg1 + 0xe28) != 0)
                            (*(*arg2 + 0x168))(arg2, &var_110)
                        
                        int64_t* rcx_57 = arg2[1]
                        var_134 = 0
                        int32_t* rdx_35 = *rcx_57
                        
                        if (&rdx_35[1] u> rcx_57[1])
                            int32_t* rdx_36 = &var_134
                            
                            if ((*(arg2 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg2, rdx_36, arg5)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_36, 4)
                        else
                            var_134 = *rdx_35
                            *rcx_57 += 4
                        
                        int32_t var_11c
                        int32_t rcx_59
                        
                        if ((*(arg2 + 0x29) & 1) == 0)
                            int64_t rcx_60 = sx.q(var_134)
                            
                            if (rcx_60.d == 0)
                                rcx_59 = 1
                            else if (rcx_60.d s> 0x800)
                                rcx_59 = 2
                            else if (rcx_60.d s>= 0)
                                if (r13.b != 0)
                                    int32_t rax_43 = var_120
                                    
                                    if (rcx_60.d s> rax_43)
                                        var_120 = rcx_60.d
                                        
                                        if (rcx_60.d s> var_11c)
                                            sub_1405daba0(&var_128)
                                            rcx_60 = zx.q(var_134)
                                    else if (rcx_60.d s< rax_43)
                                        rbx = zx.q(rax_43 - rcx_60.d)
                                        
                                        if (rax_43 != rcx_60.d)
                                            int32_t rdx_40 = rax_43 - rbx.d
                                            
                                            if (rdx_40 != rcx_60.d)
                                                memmove(rcx_60 + var_128, 
                                                    sx.q((rbx + rcx_60).d) + var_128, 
                                                    rdx_40 - rcx_60.d)
                                                rax_43 = var_120
                                                rcx_60 = zx.q(var_134)
                                            
                                            var_120 = rax_43 - rbx.d
                                    
                                    (*(*arg2 + 0x150))(arg2, var_128, sx.q(rcx_60.d))
                                else
                                    rbx = *arg2
                                    (*(rbx + 0x178))(arg2, (*(rbx + 0x20))(arg2) + sx.q(var_134))
                                
                                rcx_59 = (zx.d(*(arg2 + 0x29)) & 1) * 2
                            else
                                rcx_59 = 2
                        else
                            rcx_59 = 2
                        
                        if (rcx_59 != 0)
                            if (rcx_59 == 1)
                                rbx.b = 1
                            else if (rcx_59 == 2)
                                sub_141fbe070(arg1, 8)
                                rbx.b = 0
                            else
                                rbx.b = 0
                            
                            int16_t* rcx_77 = var_128
                            
                            if (rcx_77 != 0)
                                sub_140a74f90(rcx_77)
                            
                            result = zx.q(rbx.b)
                            goto label_141fc187a
                        
                        if (not(r13.b ^ 1))
                            rbx = sx.q(r15[1].d)
                            int32_t rax_47 = (rbx + 1).d
                            r15[1].d = rax_47
                            
                            if (rax_47 s> *(r15 + 0xc))
                                sub_1405c4e40(r15)
                            
                            int64_t* rcx_72 = (rbx << 5) + *r15
                            *rcx_72 = 0
                            *rcx_72 = var_128
                            var_128 = nullptr
                            rcx_72[1].d = var_120
                            *(rcx_72 + 0xc) = var_11c
                            zmm0.o = var_118_1
                            var_120.q = 0
                            rcx_72[2].d = zmm0.d
                            *(rcx_72 + 0x14) = rax_35
                            rcx_72[3].d = var_110
                            int16_t* rcx_73 = var_128
                            
                            if (rcx_73 == 0)
                                goto label_141fc161b
                            
                            zmm0, arg5 = sub_140a74f90(rcx_73)
                            goto label_141fc161b
        else
            sub_141fbe070(arg1, 6)

result.b = 0
label_141fc187a:
__security_check_cookie(rax_1 ^ &var_188)
return result
