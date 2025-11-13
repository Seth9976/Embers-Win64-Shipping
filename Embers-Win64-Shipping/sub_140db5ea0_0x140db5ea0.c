// 函数: sub_140db5ea0
// 地址: 0x140db5ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
uint64_t r12
uint64_t var_28 = r12
void* r14 = arg1
int16_t* r15 = arg2
int64_t rsi = sx.q(arg3)
int128_t zmm6
int128_t var_58 = zmm6
void* var_98 = nullptr
int32_t i_6 = 0
int32_t var_278 = rsi.d
int32_t var_8c = 4
int32_t* rax_3
int512_t zmm0
rax_3, zmm0 = j_sub_142bf81c0()
int64_t* rcx = *(r14 + 0x38)
int64_t r9 = *rcx
(*(r9 + 8))(rcx, &r15[rsi], zx.q(arg4), r9)
int64_t* rcx_1 = *(r14 + 0x38)
zmm0.o = zx.o(0)
int64_t* var_288
int64_t* var_1b8 = &var_288
int32_t i_9 = 0
uint32_t var_294 = rsi.d
void var_178
void* var_1b0 = &var_178
int32_t* var_1a8 = &var_294
uint32_t var_298
int32_t* var_1a0 = &var_298
uint128_t var_188
int128_t* var_198 = &var_188
int32_t var_2a8
int32_t* var_190 = &var_2a8
var_298 = rsi.d
var_288 = nullptr
var_188 = zx.o(0)
var_2a8 = 0x3f800000
int32_t i_7 = (*(*rcx_1 + 0x50))(zmm0)
int32_t i_5 = i_7
int32_t var_290
int64_t* var_208
uint128_t var_1d8
int64_t* var_1d0
int32_t var_88

if (i_7 != 0xffffffff)
    int32_t i
    
    do
        int64_t rcx_2 = sx.q(var_298)
        r12 = zx.q(i_5 - i_9)
        uint32_t rbx_1 = zx.d(r15[rcx_2])
        
        if (r12.d s> 1 && 0x2800 + rbx_1.w u<= 0x3ff)
            uint32_t rcx_4 = zx.d(r15[sx.q(rcx_2.d + 1)])
            
            if (0x2400 + rcx_4.w u<= 0x3ff)
                rbx_1 = (rbx_1 << 0xa) - 0x35fdc00 + rcx_4
        
        bool rax_8 = sub_140a81220(rbx_1.w)
        uint64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = zx.q(rbx_1 - 0x2009)
        
        char rdi_1
        
        if (rax_8 == 0 && (rax_9.d u> 0x26 || not(test_bit(0x4000000005, rax_9))))
            rdi_1 = 0
        else
            rdi_1 = 1
        
        int64_t*** rcx_6 = *(r14 + 0x18)
        var_290 = 0x3f800000
        int64_t* rax_10
        int512_t zmm1_2
        rax_10, zmm1_2 = sub_140da64e0(rcx_6, arg5, rbx_1, &var_290)
        int64_t* r15_1 = rax_10
        char rcx_7
        
        if (rdi_1 == 0)
            rcx_7 = *(arg5 + 0x4c)
        else
            rcx_7 = 0
        
        int128_t zmm7 = sub_140da70c0(*(r14 + 0x20), &var_208, rax_10, rbx_1, zmm1_2, rcx_7)
        int64_t* rsi_2 = var_208
        int64_t* rbx_5
        int64_t* var_200
        
        if (rsi_2 != 0)
            rbx_5 = var_200
            
            if ((*(*rsi_2 + 8) & 1) != 0)
                zmm6 = var_290
            else
                zmm6 = zmm7
        else
            int32_t rbx_4 = 0xfffd
            
            if (rdi_1 != 0)
                rbx_4 = 0x20
            
            int64_t* rax_11
            int512_t zmm1_3
            rax_11, zmm1_3 = sub_140da64e0(*(r14 + 0x18), arg5, rbx_4, &var_290)
            r15_1 = rax_11
            int64_t* rax_13
            rax_13, zmm7 =
                sub_140da70c0(*(r14 + 0x20), &var_1d8, r15_1, rbx_4, zmm1_3, *(arg5 + 0x4c))
            rbx_5 = var_200
            
            if (&var_208 != rax_13)
                rsi_2 = *rax_13
                *rax_13 = 0
                int64_t* rdi_3 = rbx_5
                int64_t* rcx_11 = rax_13[1]
                
                if (rcx_11 != rbx_5)
                    rax_13[1] = 0
                    rbx_5 = rcx_11
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp8_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
            
            if (var_1d0 != 0)
                var_1d0[1].d -= 1
                
                if (var_1d0[1].d == 1)
                    (**var_1d0)(var_1d0)
                    int32_t temp6_1 = *(var_1d0 + 0xc)
                    *(var_1d0 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_1d0 + 8))(var_1d0, 1)
            
            if (rsi_2 != 0 && (*(*rsi_2 + 8) & 1) == 0)
                zmm6 = zmm7
            else
                zmm6 = var_290
        int64_t* r8_5 = var_288
        uint128_t zmm0_1
        
        if (r8_5 == 0)
        label_140db6264:
            var_294 = var_298
            var_288 = r15_1
            var_88.q = rsi_2
            int32_t var_80
            var_80.q = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            uint128_t zmm1_1 = var_188
            zmm0_1 = var_88.o
            var_88.o = zmm1_1
            int64_t* rdi_6 = _mm_bsrli_si128(zmm1_1, 8).q
            var_188 = zmm0_1
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp15_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            var_2a8 = zmm6.d
        else
            int64_t r9_5 = var_188.q
            
            if (r8_5 == r15_1 && r9_5 == rsi_2)
                zmm0_1 = var_2a8
            
            if (r8_5 != r15_1 || r9_5 != rsi_2 || not(zmm0_1.d f== zmm6.d))
                int64_t i_12 = sx.q(i_6)
                uint32_t r14_2 = var_298 - var_294
                int32_t i_10 = (i_12 + 1).d
                i_6 = i_10
                
                if (i_10 s> var_8c)
                    sub_140dbc7e0(&var_178, i_12.d)
                    r8_5 = var_288
                    r9_5 = var_188.q
                
                void* rdx_6 = &var_178
                
                if (var_98 != 0)
                    rdx_6 = var_98
                
                void* rdx_7 = rdx_6 + i_12 * 0x38
                void* rcx_18 = var_188:8.q
                
                if (rcx_18 != 0)
                    *(rcx_18 + 8) += 1
                    r8_5 = var_288
                
                zmm0_1 = var_2a8
                *rdx_7 = var_294
                *(rdx_7 + 4) = r14_2
                *(rdx_7 + 8) = r8_5
                *(rdx_7 + 0x10) = r9_5
                *(rdx_7 + 0x18) = rcx_18
                *(rdx_7 + 0x20) = zmm0_1.d
                *(rdx_7 + 0x28) = 0
                *(rdx_7 + 0x30) = 0
                int64_t* rdi_5 = var_188:8.q
                var_288 = nullptr
                var_188.q = 0
                
                if (rdi_5 != 0)
                    var_188:8.q = 0
                    rdi_5[1].d -= 1
                    
                    if (rdi_5[1].d == 1)
                        (**rdi_5)(rdi_5)
                        int32_t temp22_1 = *(rdi_5 + 0xc)
                        *(rdi_5 + 0xc) -= 1
                        
                        if (temp22_1 == 1)
                            (*(*rdi_5 + 8))(rdi_5, 1)
                
                r14 = arg1
                var_2a8 = 0x3f800000
                goto label_140db6264
        
        var_298 += r12.d
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp19_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        i_9 = i_5
        i = (*(**(r14 + 0x38) + 0x50))(zmm0_1)
        r15 = arg2
        i_5 = i
    while (i != 0xffffffff)

sub_140d97200(&var_1b8)
int64_t* rbx_6 = var_188:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp1_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

void* rcx_36 = var_98
void* rsi_3 = &var_178
int64_t i_11 = sx.q(i_6)

if (rcx_36 != 0)
    rsi_3 = rcx_36

void* var_260 = rsi_3
void* rax_31 = i_11 * 0x38 + rsi_3
void* var_250 = rax_31

if (rsi_3 != rax_31)
    int32_t rdi_7 = var_188.d
    void* r14_3 = rsi_3 + 0x30
    
    do
        int32_t r15_2 = *rsi_3
        r12.b = 0
        int32_t rsi_4 = r15_2
        int32_t rax_33 = *(r14_3 - 0x2c) + r15_2
        var_290 = rax_33
        
        if (r15_2 s< rax_33)
            int32_t rax_34 = r15_2
            
            do
                int32_t rax_36 = sub_142bf2c10(rax_3, zx.q(arg2[sx.q(rax_34)]))
                
                if (r12.b == 0)
                label_140db6449:
                    r15_2 = rsi_4
                    rdi_7 = rax_36
                    r12.b = 1
                else if (rdi_7 != rax_36 && rax_36 != 0x5a797979 && rax_36 != 0x5a696e68
                        && rax_36 != 0x5a7a7a7a)
                    if (rdi_7 != 0x5a797979 && rdi_7 != 0x5a696e68 && rdi_7 != 0x5a7a7a7a)
                        int64_t r13 = sx.q(*r14_3)
                        int32_t rax_37 = (r13 + 1).d
                        *r14_3 = rax_37
                        
                        if (rax_37 s> *(r14_3 + 4))
                            sub_140dbcb10(r14_3 - 8)
                        
                        int64_t rax_38 = *(r14_3 - 8)
                        int64_t rcx_33 = r13 * 3
                        *(rax_38 + (rcx_33 << 2)) = r15_2
                        *(rax_38 + (rcx_33 << 2) + 4) = rsi_4 - r15_2
                        *(rax_38 + (rcx_33 << 2) + 8) = rdi_7
                        goto label_140db6449
                    
                    rdi_7 = rax_36
                    r12.b = 1
                
                rsi_4 += 1
                rax_34 = rsi_4
            while (rsi_4 s< var_290)
            
            if (r12.b != 0)
                int64_t rbx_8 = sx.q(*r14_3)
                int32_t rax_39 = (rbx_8 + 1).d
                *r14_3 = rax_39
                
                if (rax_39 s> *(r14_3 + 4))
                    sub_140dbcb10(r14_3 - 8)
                
                int64_t rax_40 = *(r14_3 - 8)
                int64_t rcx_35 = rbx_8 * 3
                *(rax_40 + (rcx_35 << 2)) = r15_2
                *(rax_40 + (rcx_35 << 2) + 4) = rsi_4 - r15_2
                *(rax_40 + (rcx_35 << 2) + 8) = rdi_7
        
        r14_3 += 0x38
        rsi_3 = var_260 + 0x38
        var_260 = rsi_3
    while (rsi_3 != var_250)
    
    i_11 = zx.q(i_6)
    rcx_36 = var_98

if (arg7 == 1)
    int128_t* r10_1 = &var_178
    int32_t r8_6 = (i_11 - 1).d
    
    if (rcx_36 != 0)
        r10_1 = rcx_36
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i_11.d)
    int32_t i_8 = (temp3_1 - temp2_1) s>> 1
    
    if (i_8 s> 0)
        int128_t* rdx_12 = r10_1
        uint64_t i_4 = zx.q(i_8)
        uint64_t i_1
        
        do
            void* rcx_38 = sx.q(r8_6) * 0x38 + r10_1
            
            if (rdx_12 != rcx_38)
                int128_t zmm3 = *rdx_12
                int128_t zmm4_1 = rdx_12[1]
                int128_t zmm5_1 = rdx_12[2]
                int64_t zmm2 = rdx_12[3].q
                *rdx_12 = *rcx_38
                rdx_12[1] = *(rcx_38 + 0x10)
                rdx_12[2] = *(rcx_38 + 0x20)
                rdx_12[3].q = *(rcx_38 + 0x30)
                *rcx_38 = zmm3
                *(rcx_38 + 0x10) = zmm4_1
                *(rcx_38 + 0x20) = zmm5_1
                *(rcx_38 + 0x30) = zmm2
            
            rdx_12 += 0x38
            r8_6 -= 1
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

int32_t* rax_45 = sub_142bf5d20()
int16_t* r13_1 = arg2
int32_t* rcx_39 = rax_45
int32_t var_228

if (r13_1 == 0)
    var_228 = 0
else
    int64_t rdx_13 = -1
    
    do
        rdx_13 += 1
    while (r13_1[rdx_13] != 0)
    
    var_228.q = rdx_13

void* rsi_7 = &var_178

if (var_98 != 0)
    rsi_7 = var_98

void* var_230 = rsi_7
void* r14_5 = sx.q(i_6) * 0x38 + rsi_7
var_188.q = r14_5

if (rsi_7 != r14_5)
    do
        int64_t* rdx_16 = *(rsi_7 + 0x10)
        
        if (rdx_16 != 0)
            uint32_t rax_51
            rax_51.b = (*(*rdx_16 + 8) u>> 6).b & 1
            int32_t var_80_1 = 0
            void* r8_7 = *(rsi_7 + 8)
            var_298 = rax_51
            uint32_t var_84_1 = zx.d(rax_51.b)
            __builtin_strncpy(&var_88, "nrek", 4)
            int32_t var_7c_1 = 0xffffffff
            int32_t rbx_9 = (((zx.q(*(*rdx_16 + 8)) & 1) << 3) + 0x100000).d
            
            if (data_1439ae500 == 0)
                rbx_9 |= 0x20020
            else
                void* rdi_8 = *(r8_7 + 0x18)
                char rax_56
                
                if (rdi_8 == 0)
                    rax_56 = *(r8_7 + 0x10)
                else
                    void* rax_55 = sub_140d21950(rdi_8, sub_140e28000())
                    int64_t rdx_15 = *rax_55
                    rax_56 = (*(rdx_15 + 0x18))(rax_55, rdx_15)
                    rdx_16 = *(rsi_7 + 0x10)
                
                uint32_t rcx_44 = zx.d(rax_56)
                
                if (rcx_44 == 1)
                    rbx_9 |= 0x20
                else if (rcx_44 == 2)
                    rbx_9 |= 0x10000
                else if (rcx_44 == 3)
                    rbx_9 |= 0x20020
                else if (rcx_44 == 4)
                    rbx_9 |= 0x8002
            
            void* r12_3 = arg1
            zmm6.d = arg6.d f* *(rsi_7 + 0x20)
            char var_2c8
            var_2c8.d = zmm6.d
            int32_t* rax_57
            rax_57, zmm6 = sub_140d9c980(r12_3 + 0x48, rdx_16, rbx_9, arg5[9].d, var_2c8)
            void*** rax_58 = j_sub_140a82f30(0x30)
            void*** rdi_9 = rax_58
            
            if (rax_58 == 0)
                rdi_9 = nullptr
            else
                rax_58[1].d = 1
                *(rax_58 + 0xc) = 1
                *rdi_9 = &data_142ec7a78
                void* rax_59 = *(rsi_7 + 0x18)
                var_208 = *(rsi_7 + 0x10)
                void* var_200_1 = rax_59
                
                if (rax_59 != 0)
                    *(rax_59 + 0xc) += 1
                
                var_2c8.d = zmm6.d
                sub_140d92930(&rdi_9[2], &var_208, rbx_9, arg5[9].d, var_2c8)
            
            void* var_218 = &rdi_9[2]
            int64_t* r15_4 = *(rsi_7 + 0x28)
            int64_t rax_60 = sx.q(*(rsi_7 + 0x30))
            var_288 = r15_4
            void* rax_61 = r15_4 + rax_60 * 0xc
            
            if (r15_4 != rax_61)
                void** r14_6 = arg8
                int32_t rbx_10
                rbx_10.b = arg7 != 0
                int32_t rsi_8 = r14_6[1].d
                int32_t rbx_11 = rbx_10 + 4
                int32_t var_240_1 = rbx_11
                var_290 = rsi_8
                
                while (true)
                    sub_142bf5eb0(rax_45, 0)
                    sub_142bf5ec0(rax_45, rbx_11)
                    sub_142bf5ed0(rax_45, r15_4[1].d)
                    var_2c8.d = *(r15_4 + 4)
                    j_sub_142bf4b80(rax_45, r13_1, var_228, *r15_4, var_2c8)
                    unzOpenCurrentFile2(rax_57, rax_45, &var_88, 1)
                    var_2a8 = 0
                    int64_t rax_63 = sub_142bf5e30(rax_45, &var_2a8)
                    int64_t rbx_12 = rax_63
                    int64_t rax_64 = sub_142bf5e40(rax_45, &var_2a8)
                    int64_t rdi_11 = rax_64
                    int32_t r8_13 = var_2a8
                    int32_t rdx_27 = r14_6[1].d + r8_13
                    
                    if (rdx_27 s> *(r14_6 + 0xc))
                        sub_1405fdf40(r14_6, rdx_27)
                        r8_13 = var_2a8
                    
                    if (r8_13 != 0)
                        int32_t rsi_9 = 0
                        
                        do
                            var_2c8.q = r14_6
                            uint64_t r13_2 = zx.q(rsi_9) * 5
                            int64_t rcx_59 = sx.q(*(rbx_12 + (r13_2 << 2) + 8))
                            var_294 = rcx_59.d
                            int16_t r12_4 = arg2[rcx_59]
                            char rax_66
                            rax_66, zmm6 = sub_140db2a60(arg1, arg2, rcx_59.d, &var_218, var_2c8)
                            
                            if (rax_66 != 0)
                                r12_3 = arg1
                            else
                                int64_t r15_5 = sx.q(r14_6[1].d)
                                int32_t rax_67 = (r15_5 + 1).d
                                r14_6[1].d = rax_67
                                
                                if (rax_67 s> *(r14_6 + 0xc))
                                    sub_1405fde00(r14_6)
                                
                                void* rax_68 = *r14_6
                                int64_t rcx_62 = r15_5 * 0x68
                                __builtin_memset(rcx_62 + rax_68, 0, 0x25)
                                __builtin_memset(rcx_62 + rax_68 + 0x28, 0, 0x40)
                                uint128_t zmm0_3 = var_218.o
                                void* r14_7 = *r14_6
                                var_1d8 = zmm0_3
                                int64_t* r14_8 = r14_7 + rcx_62
                                void* rax_69 = _mm_bsrli_si128(zmm0_3, 8).q
                                
                                if (rax_69 != 0)
                                    *(rax_69 + 8) += 1
                                
                                if (r14_8 == &var_1d8)
                                    goto label_140db69fc
                                
                                *r14_8 = var_1d8.q
                                int64_t* rdi_12 = r14_8[1]
                                
                                if (var_1d0 == rdi_12)
                                    rdi_11 = rax_64
                                label_140db69fc:
                                    
                                    if (var_1d0 != 0)
                                        var_1d0[1].d -= 1
                                        
                                        if (var_1d0[1].d == 1)
                                            (**var_1d0)(var_1d0)
                                            int32_t temp25_1 = *(var_1d0 + 0xc)
                                            *(var_1d0 + 0xc) -= 1
                                            
                                            if (temp25_1 == 1)
                                                (*(*var_1d0 + 8))(var_1d0, 1)
                                else
                                    r14_8[1] = var_1d0
                                    
                                    if (rdi_12 != 0)
                                        rdi_12[1].d -= 1
                                        
                                        if (rdi_12[1].d == 1)
                                            (**rdi_12)(rdi_12)
                                            int32_t temp29_1 = *(rdi_12 + 0xc)
                                            *(rdi_12 + 0xc) -= 1
                                            
                                            if (temp29_1 == 1)
                                                (*(*rdi_12 + 8))(rdi_12, 1)
                                    
                                    rdi_11 = rax_64
                                
                                rbx_12 = rax_63
                                r14_8[2].d = *(rbx_12 + (r13_2 << 2))
                                *(r14_8 + 0x14) = var_294
                                r14_8[3].w = ((*(rdi_11 + (r13_2 << 2)) + 0x20) s>> 6).w
                                *(r14_8 + 0x1a) =
                                    neg.w(((*(rdi_11 + (r13_2 << 2) + 4) + 0x20) s>> 6).w)
                                *(r14_8 + 0x1c) = ((*(rdi_11 + (r13_2 << 2) + 8) + 0x20) s>> 6).w
                                int32_t rax_85 = *(rdi_11 + (r13_2 << 2) + 0xc) + 0x20
                                r14_8[4].w = 0
                                *(r14_8 + 0x22) = 0
                                *(r14_8 + 0x1e) = neg.w((rax_85 s>> 6).w)
                                *(r14_8 + 0x23) = arg7
                                int16_t rax_88
                                
                                if (sub_140a81220(r12_4).b != 0 || (0xfffd & (r12_4 - 0x2009)) == 0
                                        || r12_4 == 0x202f)
                                    rax_88.b = 0
                                else
                                    rax_88.b = 1
                                
                                *(r14_8 + 0x24) = rax_88.b
                                
                                if (r15_5.d s<= 0 || var_298.b == 0)
                                    r12_3 = arg1
                                    r14_6 = arg8
                                else
                                    r12_3 = arg1
                                    
                                    if (rax_88.b == 0)
                                        r14_6 = arg8
                                    else
                                        int64_t rbx_14 = r15_5 * 0x68
                                        void* rdi_14 = *arg8
                                        var_250.d = *(rbx_14 + rdi_14 - 0x58)
                                        var_250:4.d = r14_8[2].d
                                        var_2c8.d = arg5[9].d
                                        r14_6 = arg8
                                        int32_t var_1e8
                                        
                                        if (sub_140da1790(*(r12_3 + 0x10), **(var_230 + 0x10), 
                                                &var_250, 0, var_2c8, zmm6.d, &var_1e8) != 0)
                                            *(rbx_14 + rdi_14 - 0x48) = ((var_1e8 + 0x20) s>> 6).b
                                        
                                        rdi_11 = rax_64
                                        rbx_12 = rax_63
                            
                            rsi_9 += 1
                        while (rsi_9 u< var_2a8)
                        
                        rsi_8 = var_290
                        r15_4 = var_288
                    
                    j_sub_142bf4df0(rax_45)
                    int32_t rcx_70 = r14_6[1].d
                    int32_t rdx_31 = rcx_70
                    
                    if (rcx_70 - rsi_8 s> 0)
                        if (arg7 != 0)
                            int64_t* rax_119 = var_288
                            int32_t r15_11 = *r15_4 + *(rax_119 + 4)
                            
                            if (rsi_8 s>= rcx_70)
                                r15_4 = rax_119
                            else
                                int64_t r14_13 = sx.q(rsi_8)
                                
                                do
                                    int64_t rbx_16 = r14_13 * 0x68
                                    void* rdi_17 = *arg8
                                    
                                    if (*(rbx_16 + rdi_17 + 0x21) == 0
                                            && *(rbx_16 + rdi_17 + 0x22) == 0)
                                        int32_t r12_5 = *(rbx_16 + rdi_17 + 0x14)
                                        char rax_120 = r15_11.b
                                        *(rbx_16 + rdi_17 + 0x21) = rax_120 - r12_5.b
                                        
                                        if (rax_120 != r12_5.b)
                                            int32_t r12_6 = r12_5 - var_278
                                            int32_t r15_12 = r15_11 - var_278
                                            int64_t* rcx_79 = *(arg1 + 0x38)
                                            (*(*rcx_79 + 0x60))(rcx_79, zx.q(r12_6))
                                            int64_t* rcx_80 = *(arg1 + 0x38)
                                            
                                            if ((*(*rcx_80 + 0x48))(rcx_80) == r12_6)
                                                int64_t* rcx_81 = *(arg1 + 0x38)
                                                int32_t rax_125 =
                                                    (*(*rcx_81 + 0x60))(rcx_81, zx.q(r12_6))
                                                bool cond:7_1
                                                
                                                if (rax_125 == 0xffffffff)
                                                label_140db6d69:
                                                    cond:7_1 = rax_125 == r15_12
                                                else
                                                    while (true)
                                                        *(rbx_16 + rdi_17 + 0x22) += 1
                                                        cond:7_1 = rax_125 == r15_12
                                                        
                                                        if (rax_125 s>= r15_12)
                                                            break
                                                        
                                                        int64_t* rcx_82 = *(arg1 + 0x38)
                                                        rax_125 = (*(*rcx_82 + 0x50))(rcx_82)
                                                        
                                                        if (rax_125 == 0xffffffff)
                                                            goto label_140db6d69
                                                
                                                if (not(cond:7_1))
                                                    *(rbx_16 + rdi_17 + 0x22) = 0
                                    
                                    rsi_8 += 1
                                    r14_13 += 1
                                    rdx_31 = arg8[1].d
                                    void* rcx_83 = *arg8
                                    
                                    if (rsi_8 s< rdx_31)
                                        void* rcx_85 = rcx_83 + 0x14 + r14_13 * 0x68
                                        
                                        while (*(rbx_16 + rcx_83 + 0x14) == *rcx_85)
                                            rsi_8 += 1
                                            r14_13 += 1
                                            rcx_85 += 0x68
                                            
                                            if (rsi_8 s>= rdx_31)
                                                break
                                    
                                    r15_11 = *(rbx_16 + rdi_17 + 0x14)
                                while (rsi_8 s< rdx_31)
                                
                                r14_6 = arg8
                                r15_4 = var_288
                        else
                            if (rsi_8 s< rcx_70)
                                int64_t r13_3 = sx.q(rsi_8)
                                
                                do
                                    void* rbx_15 = *r14_6
                                    int64_t rdi_15 = r13_3 * 0x68
                                    rsi_8 += 1
                                    r13_3 += 1
                                    
                                    if (rsi_8 s< rcx_70)
                                        void* rdx_33 = rbx_15 + 0x14 + r13_3 * 0x68
                                        
                                        while (*(rdi_15 + rbx_15 + 0x14) == *rdx_33)
                                            rcx_70 = r14_6[1].d
                                            rsi_8 += 1
                                            r13_3 += 1
                                            rdx_33 += 0x68
                                            
                                            if (rsi_8 s>= rcx_70)
                                                break
                                    
                                    char rax_104 = *(rdi_15 + rbx_15 + 0x21)
                                    int32_t rax_111
                                    int32_t r14_10
                                    bool cond:8_1
                                    
                                    if (rsi_8 s>= rcx_70)
                                        if (rax_104 == 0 && *(rdi_15 + rbx_15 + 0x22) == rax_104)
                                            int32_t r14_12 = *r15_4 + *(r15_4 + 4)
                                            int32_t r15_8 = *(rdi_15 + rbx_15 + 0x14)
                                            char rax_113 = r14_12.b
                                            *(rdi_15 + rbx_15 + 0x21) = rax_113 - r15_8.b
                                            
                                            if (rax_113 == r15_8.b)
                                                r14_6 = arg8
                                            else
                                                int64_t* rcx_75 = *(r12_3 + 0x38)
                                                int32_t r15_9 = r15_8 - var_278
                                                r14_10 = r14_12 - var_278
                                                (*(*rcx_75 + 0x60))(rcx_75, zx.q(r15_9))
                                                int64_t* rcx_76 = *(r12_3 + 0x38)
                                                
                                                if ((*(*rcx_76 + 0x48))(rcx_76) != r15_9)
                                                    r14_6 = arg8
                                                else
                                                    int64_t* rcx_77 = *(r12_3 + 0x38)
                                                    rax_111 =
                                                        (*(*rcx_77 + 0x60))(rcx_77, zx.q(r15_9))
                                                    
                                                    if (rax_111 != 0xffffffff)
                                                        while (true)
                                                            *(rdi_15 + rbx_15 + 0x22) += 1
                                                            cond:8_1 = rax_111 == r14_10
                                                            
                                                            if (rax_111 s>= r14_10)
                                                                break
                                                            
                                                            int64_t* rcx_78 = *(r12_3 + 0x38)
                                                            rax_111 = (*(*rcx_78 + 0x50))(rcx_78)
                                                            
                                                            if (rax_111 == 0xffffffff)
                                                                goto label_140db6bde
                                                        
                                                        goto label_140db6be1
                                                    
                                                label_140db6bde:
                                                    cond:8_1 = rax_111 == r14_10
                                                label_140db6be1:
                                                    r14_6 = arg8
                                                    
                                                    if (not(cond:8_1))
                                                        *(rdi_15 + rbx_15 + 0x22) = 0
                                    else if (rax_104 == 0 && *(rdi_15 + rbx_15 + 0x22) == rax_104)
                                        int32_t r15_6 = *(rdi_15 + rbx_15 + 0x14)
                                        int32_t r14_9 = *(r13_3 * 0x68 + rbx_15 + 0x14)
                                        char rax_106 = r14_9.b
                                        *(rdi_15 + rbx_15 + 0x21) = rax_106 - r15_6.b
                                        
                                        if (rax_106 == r15_6.b)
                                            r14_6 = arg8
                                        else
                                            int64_t* rcx_71 = *(r12_3 + 0x38)
                                            int32_t r15_7 = r15_6 - var_278
                                            r14_10 = r14_9 - var_278
                                            (*(*rcx_71 + 0x60))(rcx_71, zx.q(r15_7))
                                            int64_t* rcx_72 = *(r12_3 + 0x38)
                                            
                                            if ((*(*rcx_72 + 0x48))(rcx_72) == r15_7)
                                                int64_t* rcx_73 = *(r12_3 + 0x38)
                                                rax_111 = (*(*rcx_73 + 0x60))(rcx_73, zx.q(r15_7))
                                                
                                                if (rax_111 == 0xffffffff)
                                                    goto label_140db6bde
                                                
                                                while (true)
                                                    *(rdi_15 + rbx_15 + 0x22) += 1
                                                    cond:8_1 = rax_111 == r14_10
                                                    
                                                    if (rax_111 s>= r14_10)
                                                        break
                                                    
                                                    int64_t* rcx_74 = *(r12_3 + 0x38)
                                                    rax_111 = (*(*rcx_74 + 0x50))(rcx_74)
                                                    
                                                    if (rax_111 == 0xffffffff)
                                                        goto label_140db6bde
                                                
                                                goto label_140db6be1
                                            
                                            r14_6 = arg8
                                    rdx_31 = r14_6[1].d
                                    rcx_70 = rdx_31
                                    r15_4 = var_288
                                while (rsi_8 s< rdx_31)
                            
                            r15_4 = var_288
                    
                    r13_1 = arg2
                    r15_4 += 0xc
                    rsi_8 = rdx_31
                    rbx_11 = var_240_1
                    var_288 = r15_4
                    var_290 = rdx_31
                    
                    if (r15_4 == rax_61)
                        break
                    
                    r12_3 = arg1
                
                rsi_7 = var_230
                r14_5 = var_188.q
            
            sub_142bf3de0(rax_57)
            int64_t* rbx_17 = rdi_9
            
            if (rbx_17 != 0)
                rbx_17[1].d -= 1
                
                if (rbx_17[1].d == 1)
                    (**rbx_17)(rbx_17)
                    int32_t temp21_1 = *(rbx_17 + 0xc)
                    *(rbx_17 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*rbx_17 + 8))(rbx_17, 1)
        
        rsi_7 += 0x38
        var_230 = rsi_7
    while (rsi_7 != r14_5)
    
    rcx_39 = rax_45

sub_142bf5d80(rcx_39)
int64_t* rcx_89 = *(arg1 + 0x38)
int64_t result = (*(*rcx_89 + 0x28))(rcx_89)
void* rcx_90 = var_98
void* rdi_18 = &var_178
int32_t i_3 = i_6

if (rcx_90 != 0)
    rdi_18 = rcx_90

if (i_3 != 0)
    void* rdi_19 = rdi_18 + 0x18
    int32_t i_2
    
    do
        int64_t rcx_91 = *(rdi_19 + 0x10)
        
        if (rcx_91 != 0)
            result = sub_140a74f90(rcx_91)
        
        int64_t* rbx_18 = *rdi_19
        
        if (rbx_18 != 0)
            rbx_18[1].d -= 1
            
            if (rbx_18[1].d == 1)
                result = (**rbx_18)(rbx_18)
                int32_t temp13_1 = *(rbx_18 + 0xc)
                *(rbx_18 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    result = (*(*rbx_18 + 8))(rbx_18, 1)
        
        rdi_19 += 0x38
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rcx_90 = var_98

if (rcx_90 != 0)
    result = sub_140a74f90(rcx_90)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
