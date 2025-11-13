// 函数: sub_14228bea0
// 地址: 0x14228bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a30)
void var_1a48
int64_t rax_1 = __security_cookie ^ &var_1a48
int64_t r8 = *arg1
char* rsi = arg2
int64_t* result = arg1
(*(r8 + 0x1d8))(arg1, &data_1439a9478, r8)

if (*(result + 0x2a) s>= 0)
    char rax_3 = result[5].b
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int32_t var_1a28
    int32_t var_1a24
    float var_1a18
    int128_t* var_1a08
    void* i_3
    int128_t* rcx_31
    
    if ((rax_3 & 1) != 0)
        int64_t* rcx_2 = result[1]
        int128_t* r15_1 = nullptr
        int64_t rdx_1 = *rcx_2
        bool cond:1_1
        
        if (rdx_1 + 4 u> rcx_2[1])
            int64_t rax_6 = *result
            var_1a28 = 0
            (*(rax_6 + 0x150))(result, &var_1a28, 4)
            cond:1_1 = var_1a28 != 0
        else
            cond:1_1 = *rdx_1 != 0
            *rcx_2 = rdx_1 + 4
        
        if (cond:1_1 != 0)
            float var_19e8[0x4]
            int64_t* rax_8 =
                sub_1408d9160(sub_1408d9160(result, &var_19e8, arg3), &var_19e8[3], arg3)
            int64_t* r9_2 = rax_8
            int64_t* rcx_6 = rax_8[1]
            char* rdx_5 = *rcx_6
            char var_19d0
            
            if (&rdx_5[1] u> rcx_6[1])
                r9_2 = (*(*r9_2 + 0x150))(r9_2, &var_19d0, 1)
            else
                var_19d0 = *rdx_5
                int64_t* rax_11 = r9_2[1]
                *rax_11 += 1
            
            int64_t* rcx_8 = result[1]
            var_1a28 = 0
            int32_t* rdx_7 = *rcx_8
            
            if (&rdx_7[1] u> rcx_8[1])
                int32_t* rdx_8 = &var_1a28
                
                if ((*(result + 0x29) & 0x20) != 0)
                    r9_2 = sub_140b54070(result, rdx_8, arg3)
                else
                    r9_2 = (*(*result + 0x150))(result, rdx_8, 4)
            else
                var_1a28 = *rdx_7
                *rcx_8 += 4
            
            if (*rsi != 0)
                int32_t rdx_9
                int32_t r8_3
                rdx_9, r8_3 = sub_14229e150(rsi)
                r9_2, arg3 = sub_1422976f0(&rsi[0xc0], 0, sub_1422976f0(&rsi[0x20], rdx_9, r8_3))
            
            zmm6 = var_19e8
            int32_t rax_16 = var_19d0.d
            int64_t var_19d8
            float zmm2 = var_19d8.d
            arg3.o = zmm6
            float zmm4_1 = var_19d8:4.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            *(rsi + 4) = zmm6
            *rsi = 1
            *(rsi + 0x14) = var_19d8
            uint128_t zmm0
            zmm0.d = zmm6.d f+ temp0_1[0]
            arg3.o = _mm_shuffle_ps(arg3.o, zmm6, 0x55)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            temp0_1[0] = temp0_1[0] - zmm6[0]
            *(rsi + 0x1c) = rax_16
            zmm0.d = zmm0.d f* 0.5f
            temp0_1[0] = temp0_1[0] * 0.5f
            var_1a18 = zmm0.d
            zmm0.d = arg3.o.d f+ zmm2
            zmm0.d = zmm0.d f* 0.5f
            int32_t var_1a14_1 = zmm0.d
            zmm0.d = temp0_3.d f+ zmm4_1
            zmm0.d = zmm0.d f* 0.5f
            int32_t var_1a10_1 = zmm0.d
            int32_t r9_3 = sub_142289bf0(&i_3, 
                sub_14228a280(&rsi[0x20], 
                    sub_1422870b0(&i_3, &var_1a18, 
                        _mm_max_ss(_mm_max_ss((zmm2 f- arg3.d) * 0.5f, temp0_1[0]), 
                            (zmm4_1 - temp0_3[0]) * 0.5f), 
                        r9_2.d)))
            float zmm2_1 = var_19e8[1]
            zmm6 = var_19d8.d
            float zmm4_2 = var_19e8[0]
            float zmm1 = zmm2_1 + zmm6[0]
            float zmm3_1 = var_19e8[2]
            zmm6[0] = zmm6[0] - zmm2_1
            zmm6[0] = zmm6[0] * 0.5f
            float var_1a14_2 = zmm1 * 0.5f
            zmm1 = var_19d8:4.d
            float var_19dc
            var_1a18 = (zmm4_2 + var_19dc) * 0.5f
            float var_1a10_2 = (zmm3_1 + zmm1) * 0.5f
            sub_142289bf0(&i_3, 
                sub_14228a280(&rsi[0xc0], 
                    sub_1422870b0(&i_3, &var_1a18, 
                        _mm_max_ss(_mm_max_ss(zmm6[0], (var_19dc - zmm4_2) * 0.5f)[0], 
                            (zmm1 - zmm3_1) * 0.5f)[0], 
                        r9_3)))
            var_1a24 = 4
            int32_t rax_19
            int512_t zmm1_1
            rax_19, zmm1_1 = sub_140b4e7c0(result, &data_1439a9478)
            
            if (rax_19 s>= 1)
                int64_t* rcx_20 = result[1]
                int32_t* rdx_16 = *rcx_20
                
                if (&rdx_16[1] u> rcx_20[1])
                    int32_t* rdx_17 = &var_1a24
                    
                    if ((*(result + 0x29) & 0x20) != 0)
                        sub_140b54070(result, rdx_17, zmm1_1)
                    else
                        (*(*result + 0x150))(result, rdx_17, 4)
                else
                    var_1a24 = *rdx_16
                    *rcx_20 += 4
            
            int32_t rdx_18 = var_1a24
            var_1a08 = nullptr
            int32_t i_8 = 0
            int512_t zmm1_2 = sub_1422a70a0(result, rdx_18, &var_1a08, zmm1_1)
            
            if (sub_1423d2320(data_1439c7a08) != 0 && i_8 s> 0)
                int128_t* rsi_1 = var_1a08
                uint64_t i_5 = zx.q(i_8)
                uint64_t i
                
                do
                    zmm1_2 = sub_14228e130(&rsi[0x20], rsi_1, &rsi[0x20], &rsi[0x80])
                    rsi_1 = &rsi_1[0xb]
                    i = i_5
                    i_5 -= 1
                while (i != 1)
            
            uint64_t i_6 = 0
            int32_t i_7 = 0
            var_1a18.q = 0
            int32_t var_1a0c_1 = 0
            
            if (result[8].d s>= 0x128)
                sub_1422a70a0(result, var_1a24, &var_1a18, zmm1_2)
                i_6 = zx.q(i_7)
                r15_1 = var_1a18.q
            
            char rax_25
            int32_t rdx_21
            rax_25, rdx_21 = sub_1423d2320(data_1439c7a08)
            
            if (rax_25 == 0 && i_6.d s> 0)
                int128_t* rsi_2 = r15_1
                uint64_t i_1
                
                do
                    rdx_21 = sub_14228e130(&rsi[0xc0], rsi_2, &rsi[0xc0], &rsi[0x120])
                    rsi_2 = &rsi_2[0xb]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            sub_1422ad840(&rsi[0xc0], sub_1422ad840(&rsi[0x20], rdx_21))
            sub_14229e150(arg2)
            
            if (r15_1 == 0)
                goto label_14228cb31
            
            rcx_31 = r15_1
        label_14228cb2c:
            sub_140a74f90(rcx_31)
        label_14228cb31:
            int128_t* rcx_63 = var_1a08
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
    else if ((rax_3 & 2) != 0)
        int64_t* rcx_32 = result[1]
        int32_t* rdx_24 = *rcx_32
        bool rax_28
        
        if (&rdx_24[1] u> rcx_32[1])
            int32_t rax_29
            rax_29.b = *rsi != 0
            var_1a28 = rax_29
            (*(*result + 0x150))(result, &var_1a28, 4)
            rax_28 = var_1a28 != 0
            *rsi = rax_28
        else
            void* rax_26
            rax_26.b = *rdx_24 != 0
            *rsi = rax_26.b
            int64_t* rax_27 = result[1]
            *rax_27 += 4
            rax_28 = *rsi
        
        if (rax_28 != 0)
            sub_1408db5d0(result, &rsi[4], arg3)
            int64_t* rcx_35 = result[1]
            var_1a28 = 0
            int32_t* rdx_27 = *rcx_35
            
            if (&rdx_27[1] u> rcx_35[1])
                int32_t* rdx_28 = &var_1a28
                
                if ((*(result + 0x29) & 0x20) != 0)
                    sub_140b54070(result, rdx_28, arg3)
                else
                    (*(*result + 0x150))(result, rdx_28, 4)
            else
                var_1a28 = *rdx_27
                *rcx_35 += 4
            
            int64_t* rcx_37 = result[1]
            var_1a24 = 9
            int32_t* rdx_29 = *rcx_37
            
            if (&rdx_29[1] u> rcx_37[1])
                int32_t* rdx_30 = &var_1a24
                
                if ((*(result + 0x29) & 0x20) != 0)
                    sub_140b54070(result, rdx_30, arg3)
                else
                    (*(*result + 0x150))(result, rdx_30, 4)
            else
                var_1a24 = *rdx_29
                *rcx_37 += 4
            
            int64_t* rcx_39 = result[0xe]
            int32_t r13_1 = 0
            var_1a08 = nullptr
            int64_t var_1a00_1 = 0
            char rax_38
            
            if (rcx_39 != 0)
                rax_38 = (*(*rcx_39 + 0xd8))(rcx_39, 4)
            
            int32_t var_1a20
            uint128_t var_1998
            void var_1948
            
            if (rcx_39 == 0 || rax_38 != 0)
                int32_t rbx_2 = var_1a20
                void* i_2 = &rsi[0x20]
                arg3.o = *(i_2 + 0x70)
                uint128_t var_1978_1 = *(i_2 + 0x60)
                uint128_t var_1958_1 = *(i_2 + 0x80)
                var_1a18.q = i_2
                i_3 = i_2
                int128_t var_1968_1 = arg3.o
                void* var_88_1 = nullptr
                int32_t var_78_1 = 0
                int32_t var_74_1 = 0x63
                
                do
                    int32_t rbx_3 = rbx_2 & 0xfffffff0
                    
                    do
                        void* rdx_31 = *(i_2 + ((zx.q(rbx_3) & 7) << 3) + 0x18)
                        
                        if (rdx_31 != 0 && (*(rdx_31 + 0x58) & 0x7fffffff) u> 0)
                            sub_1422a7fa0(&i_3, rbx_3)
                            i_2 = var_1a18.q
                        
                        if ((rbx_3.b & 7) u>= 7)
                            rbx_3 |= 8
                        else
                            rbx_3 ^= ((rbx_3 + 1) ^ rbx_3) & 7
                    while (((rbx_3 u>> 3).b & 1) == 0)
                    
                    var_1a20 = rbx_3
                    int32_t j = 0
                    int32_t r15_2 = var_1a00_1:4.d
                    int128_t* rbx_4 = var_1a08
                    
                    while (j s>= 0)
                        if (j s>= *(i_2 + 8))
                            break
                        
                        int64_t rdi = sx.q(r13_1)
                        int64_t* r14_3 = sx.q(j) * 0xb0 + *i_2
                        r13_1 = (rdi + 1).d
                        var_1a00_1.d = r13_1
                        
                        if (r13_1 s> r15_2)
                            sub_140a05e50(&var_1a08)
                            r13_1 = var_1a00_1.d
                            r15_2 = var_1a00_1:4.d
                            rbx_4 = var_1a08
                        
                        void* rsi_4 = rdi * 0xb0 + rbx_4
                        memset(rsi_4 + 0x10, 0, 0x90)
                        j += 1
                        i_2 = var_1a18.q
                        *rsi_4 = *r14_3
                        *(rsi_4 + 8) = r14_3[1].d
                        *(rsi_4 + 0xc) = *(r14_3 + 0xc)
                        *(rsi_4 + 0x10) = *(r14_3 + 0x10)
                        arg3.o = *(r14_3 + 0x20)
                        *(rsi_4 + 0x20) = arg3.o
                        *(rsi_4 + 0x30) = *(r14_3 + 0x30)
                        arg3.o = *(r14_3 + 0x40)
                        *(rsi_4 + 0x40) = arg3.o
                        *(rsi_4 + 0x50) = *(r14_3 + 0x50)
                        arg3.o = *(r14_3 + 0x60)
                        *(rsi_4 + 0x60) = arg3.o
                        *(rsi_4 + 0x70) = *(r14_3 + 0x70)
                        arg3.o = *(r14_3 + 0x80)
                        *(rsi_4 + 0x80) = arg3.o
                        *(rsi_4 + 0x90) = *(r14_3 + 0x90)
                        *(rsi_4 + 0xa0) = r14_3[0x14].d
                        *(rsi_4 + 0xa4) = *(r14_3 + 0xa4)
                    
                    int32_t rcx_43 = var_78_1
                    
                    if (rcx_43 == 0)
                        arg3.o = data_142d3f660
                        i_3.o = 0.o
                        uint128_t var_1958_3 = var_1998
                        int128_t var_1978_3
                        __builtin_memcpy(&var_1978_3, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x20)
                    else
                        void* r9_6 = &var_1948
                        
                        if (var_88_1 != 0)
                            r9_6 = var_88_1
                        
                        uint128_t* rax_55 = sx.q(rcx_43 - 1) << 6
                        i_3.o = *(rax_55 + r9_6)
                        arg3.o = *(rax_55 + r9_6 + 0x10)
                        int128_t var_1978_2 = arg3.o
                        uint128_t var_1968_2 = *(rax_55 + r9_6 + 0x20)
                        arg3.o = *(rax_55 + r9_6 + 0x30)
                        int128_t var_1958_2 = arg3.o
                        
                        if (0 != 0)
                            memmove((sx.q(rcx_43 - 1) << 6) + r9_6, (sx.q(rcx_43) << 6) + r9_6, 
                                0 << 6)
                            rcx_43 = var_78_1
                        
                        var_78_1 = rcx_43 - 1
                        sub_1409da9e0(&var_1948)
                    
                    i_2 = i_3
                    rbx_2 = var_1a20
                    var_1a18.q = i_2
                while (i_2 != 0)
                
                if (var_88_1 != 0)
                    arg3 = sub_140a74f90(var_88_1)
                
                rsi = arg2
                result = arg1
            
            sub_14228b800(result, &var_1a08, arg3)
            int64_t* rcx_51 = result[0xe]
            int32_t r13_2 = 0
            var_1a18.q = 0
            int32_t var_1a10
            var_1a10.q = 0
            char rax_61
            
            if (rcx_51 != 0)
                rax_61 = (*(*rcx_51 + 0xd8))(rcx_51, 5)
            
            if (rcx_51 == 0 || rax_61 != 0)
                arg3.o = *(rsi + 0x130)
                int32_t rsi_5 = 0
                int32_t rbx_5 = var_1a20
                int96_t var_1978_4 = (*(rsi + 0x120)).12
                int64_t var_1958_4 = (*(rsi + 0x140)).q
                i_3 = &rsi[0xc0]
                int128_t var_1968_3 = arg3.o
                void* var_88_2 = nullptr
                int32_t var_78_2 = 0
                int32_t var_74_2 = 0x63
                
                do
                    void* i_4 = i_3
                    int32_t rbx_6 = rbx_5 & 0xfffffff0
                    void* i_9 = i_4
                    
                    do
                        uint64_t r14_5 = zx.q(rbx_6) & 7
                        uint64_t rdi_1 = zx.q(rbx_6)
                        void* rax_63 = *(i_4 + (r14_5 << 3) + 0x18)
                        
                        if (rax_63 != 0 && (*(rax_63 + 0x58) & 0x7fffffff) u> 0)
                            var_78_2 = rsi_5 + 1
                            
                            if (rsi_5 + 1 s> var_74_2)
                                sub_1409da5f0(&var_1948, rsi_5)
                            
                            void* rdx_39 = &var_1948
                            
                            if (var_88_2 != 0)
                                rdx_39 = var_88_2
                            
                            int64_t rax_67 = sx.q(rsi_5) << 6
                            int64_t* rdx_40 = rdx_39 + rax_67
                            
                            if (rdx_39 == neg.q(rax_67))
                                rdx_40 = nullptr
                            else
                                rdx_40[2] = 0
                                rdx_40[3].d = 0
                                *(rdx_40 + 0x1c) = 0x3f800000
                                *(rdx_40 + 0x24) = 0
                                *(rdx_40 + 0x2c) = 0x3f800000
                                *rdx_40 = 0
                            
                            *rdx_40 = *(i_3 + (r14_5 << 3) + 0x18)
                            i_4 = i_9
                            uint128_t zmm0_2
                            zmm0_2.d =
                                var_1958_4:4.d.d f* *(&data_142e669e0 + ((zx.q(rdi_1.d) & 1) << 2))
                            zmm0_2.d = zmm0_2.d f+ var_1978_4.d
                            rdx_40[2].d = zmm0_2.d
                            zmm0_2.d = var_1958_4:4.d.d f*
                                *(&data_142e669e0 + ((zx.q((rdi_1 u>> 1).d) & 1) << 2))
                            zmm0_2.d = zmm0_2.d f+ var_1978_4:4.d
                            *(rdx_40 + 0x14) = zmm0_2.d
                            zmm0_2.d = var_1958_4:4.d.d f*
                                *(&data_142e669e0 + ((zx.q((rdi_1 u>> 2).d) & 1) << 2))
                            zmm0_2.d = zmm0_2.d f+ var_1978_4:8.d
                            *(rdx_40 + 0x1c) = 0
                            rdx_40[3].d = zmm0_2.d
                            rdx_40[4].d = var_1958_4.d.d
                            arg3.o = var_1958_4.d
                            *(rdx_40 + 0x24) = arg3.d
                            rdx_40[5].d = var_1958_4.d.d
                            *(rdx_40 + 0x2c) = 0
                            arg3.o = var_1958_4.d
                            arg3.d = arg3.d f* 0.5f
                            arg3.d = arg3.d f* 1.0625f
                            rdx_40[6].d = arg3.d
                            zmm0_2.d = var_1958_4.d.d f- arg3.d
                            *(rdx_40 + 0x34) = zmm0_2.d
                            rsi_5 = var_78_2
                        
                        if ((rbx_6.b & 7) u>= 7)
                            rbx_6 |= 8
                        else
                            rbx_6 ^= ((rbx_6 + 1) ^ rbx_6) & 7
                    while (((rbx_6 u>> 3).b & 1) == 0)
                    
                    int32_t j_1 = 0
                    int32_t var_1a0c
                    int32_t r15_3 = var_1a0c
                    int64_t rbx_7 = var_1a18.q
                    
                    while (j_1 s>= 0)
                        if (j_1 s>= *(i_4 + 8))
                            break
                        
                        int64_t rdi_4 = sx.q(r13_2)
                        int64_t* r14_7 = sx.q(j_1) * 0xb0 + *i_4
                        r13_2 = (rdi_4 + 1).d
                        
                        if (r13_2 s> r15_3)
                            sub_140a05e50(&var_1a18)
                            r15_3 = var_1a0c
                            rbx_7 = var_1a18.q
                        
                        uint64_t* rsi_7 = rdi_4 * 0xb0 + rbx_7
                        memset(&rsi_7[2], 0, 0x90)
                        j_1 += 1
                        i_4 = i_9
                        *rsi_7 = *r14_7
                        rsi_7[1].d = r14_7[1].d
                        *(rsi_7 + 0xc) = *(r14_7 + 0xc)
                        *(rsi_7 + 0x10) = *(r14_7 + 0x10)
                        arg3.o = *(r14_7 + 0x20)
                        *(rsi_7 + 0x20) = arg3.o
                        *(rsi_7 + 0x30) = *(r14_7 + 0x30)
                        arg3.o = *(r14_7 + 0x40)
                        *(rsi_7 + 0x40) = arg3.o
                        *(rsi_7 + 0x50) = *(r14_7 + 0x50)
                        arg3.o = *(r14_7 + 0x60)
                        *(rsi_7 + 0x60) = arg3.o
                        *(rsi_7 + 0x70) = *(r14_7 + 0x70)
                        arg3.o = *(r14_7 + 0x80)
                        *(rsi_7 + 0x80) = arg3.o
                        *(rsi_7 + 0x90) = *(r14_7 + 0x90)
                        rsi_7[0x14].d = r14_7[0x14].d
                        *(rsi_7 + 0xa4) = *(r14_7 + 0xa4)
                    
                    rsi_5 = var_78_2
                    
                    if (rsi_5 == 0)
                        arg3.o = data_142d3f660
                        i_3.o = 0.o
                        var_1958_4 = var_1998.q
                        var_1978_4 = arg3.12
                        int128_t var_1968_5 = arg3.o
                    else
                        void* r9_7 = &var_1948
                        
                        if (var_88_2 != 0)
                            r9_7 = var_88_2
                        
                        uint128_t* rax_88 = sx.q(rsi_5 - 1) << 6
                        i_3.o = *(rax_88 + r9_7)
                        arg3.o = *(rax_88 + r9_7 + 0x10)
                        var_1978_4 = arg3.12
                        uint128_t var_1968_4 = *(rax_88 + r9_7 + 0x20)
                        arg3.o = *(rax_88 + r9_7 + 0x30)
                        var_1958_4 = arg3.q
                        
                        if (0 != 0)
                            memmove((sx.q(rsi_5 - 1) << 6) + r9_7, (sx.q(rsi_5) << 6) + r9_7, 
                                0 << 6)
                            rsi_5 = var_78_2
                        
                        var_78_2 = rsi_5 - 1
                        sub_1409da9e0(&var_1948)
                        rsi_5 = var_78_2
                    
                    rbx_5 = rbx_6
                while (i_3 != 0)
                
                if (var_88_2 != 0)
                    arg3 = sub_140a74f90(var_88_2)
                
                result = arg1
            
            sub_14228b800(result, &var_1a18, arg3)
            rcx_31 = var_1a18.q
            
            if (rcx_31 == 0)
                goto label_14228cb31
            
            goto label_14228cb2c
else
    int32_t rax_2 = sub_14229e150(rsi)
    int64_t r9_1 = *result
    int64_t rdx = sx.q(rax_2)
    (*(r9_1 + 8))(result, rdx, rdx, r9_1)

__security_check_cookie(rax_1 ^ &var_1a48)
return result
