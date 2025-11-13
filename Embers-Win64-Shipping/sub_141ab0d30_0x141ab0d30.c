// 函数: sub_141ab0d30
// 地址: 0x141ab0d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* r12 = arg2

if ((*(arg1 + 0x126) & 2) != 0 && sub_140d3e110(&arg1[7]) != 0)
    int64_t rax_3 = sub_140d3c6e0(&arg1[7])
    int64_t r9_1 = *arg1
    (*(r9_1 + 0x118))(arg1, *r12 + 0x4a0, rax_3, r9_1)

int64_t var_178
sub_140dd5b90(&var_178, *r12)
*r12
int64_t rdi = 0
bool result_1 = r12[8].b != 0
int64_t var_170 = 0
int32_t var_168 = 0
void* var_160
__builtin_memset(&var_160, 0, 0x23)
int128_t zmm6 = sub_141e1c570(&arg1[0xf], &var_178, sub_141e295c0(&var_178))
void* r9_2 = var_160
int64_t var_1f8 = 0
int64_t var_1f0 = 0
arg1[0x1a].d = 0

if (*(arg1 + 0xd4) s<= 0xffffffff)
    sub_1405a5220(&arg1[0x19], 0)

void* r15 = arg1[0x11]
char* r14
r14.b = 0
void* rax_6 = (sx.q(arg1[0x12].d) << 4) + r15
void* var_188 = r15
uint64_t result
int64_t var_158

if (r15 == rax_6)
label_141ab170d:
    
    if (*r12 != var_178)
        sub_141e295c0(r12)
    
    sub_141a911c0(&r12[1], &var_170)
    r12[3] = var_160
    sub_141a91450(&r12[4], &var_158)
    result = zx.q(result_1)
    r12[8].b = result.b
else
    int128_t var_48_1 = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int64_t var_1e8
    int32_t var_1e0
    int64_t var_1c8
    int32_t var_198
    int32_t i_5
    
    do
        int32_t rax_7 = *(r15 + 8)
        zmm7 = data_143dbb0c0
        zmm6 = data_143dbb0d0
        zmm8 = data_143dbb0e0
        int32_t rbx_1
        
        if (rax_7 s>= 0)
            rbx_1 = *(r15 + 0xc)
        label_141ab0ec6:
            
            if (rbx_1 != 0xffffffff)
                if (sub_141ea6180(&arg1[0x1d], r9_2) == 0)
                    float (* rcx_33)[0x4] = sx.q(rbx_1) * 0x30 + var_170
                    zmm7 = *rcx_33
                    zmm6 = rcx_33[1]
                    zmm8 = rcx_33[2]
                else
                    void* rax_12 = var_160
                    int32_t rdx_6 = 0
                    var_1e8 = 0
                    int32_t r8_2 = 0
                    var_1e0 = 0
                    int32_t var_1dc_1 = 0
                    char* var_1d0
                    __builtin_memset(&var_1d0, 0, 0x30)
                    void* var_1d8_1 = rax_12
                    int32_t r14_1 = *(rax_12 + 8)
                    
                    if (r14_1 s> 0)
                        sub_141acba60(&var_1e8, r14_1)
                        r8_2 = var_1dc_1
                        rdx_6 = var_1e0
                    
                    int32_t rax_13 = r14_1 + rdx_6
                    var_1e0 = rax_13
                    
                    if (rax_13 s> r8_2)
                        sub_141acb8e0(&var_1e8, rdx_6)
                        r8_2 = var_1dc_1
                    
                    int64_t r14_2 = sx.q(var_168)
                    int64_t r15_1 = var_170
                    var_1e0 = r14_2.d
                    
                    if (r14_2.d != 0 || r8_2 != 0)
                        sub_141acb760(&var_1e8, r14_2.d, r8_2)
                        memcpy(var_1e8, r15_1, (r14_2 * 0x30).d)
                        r14_2 = zx.q(var_1e0)
                    else
                        int32_t var_1dc_2 = 0
                    
                    int32_t r15_2 = 0
                    var_1c8.d = 0
                    
                    if (var_1c8:4.d != r14_2.d)
                        sub_1405c5510(&var_1d0, r14_2.d)
                        r15_2 = var_1c8.d
                        r14_2 = zx.q(var_1e0)
                    
                    int32_t rax_14 = r15_2 + r14_2.d
                    var_1c8.d = rax_14
                    
                    if (rax_14 s> var_1c8:4.d)
                        sub_1405daba0(&var_1d0)
                    
                    memset(&var_1d0[sx.q(r15_2)], 0, sx.q(r14_2.d))
                    *var_1d0 = 1
                    int32_t rcx_19 = arg1[0x1e].d
                    int32_t rdx_12
                    
                    if (rcx_19 s>= 0)
                        rdx_12 = *(arg1 + 0xf4)
                    else
                        int32_t rcx_20 = rcx_19 * 2
                        
                        if ((rcx_20 & 0xfffffffe) == 0xfffffffe)
                            rdx_12 = -1
                        else
                            rdx_12 = *(*(r9_2 + 0x80) + (sx.q(rcx_20) s>> 1 << 2))
                    
                    char* r8_6 = var_1d0
                    int64_t r14_3 = sx.q(rdx_12)
                    
                    if (r8_6[r14_3] == 0)
                        sub_141a98300(&var_1e8, rdx_12)
                        r8_6 = var_1d0
                    
                    int64_t rcx_25 = var_1e8
                    int64_t rax_20 = r14_3 * 6
                    r14 = sx.q(rbx_1)
                    float var_108[0x4] = *(rcx_25 + (rax_20 << 3))
                    int128_t var_f8_1 = *(rcx_25 + (rax_20 << 3) + 0x10)
                    float var_e8_1[0x4] = *(rcx_25 + (rax_20 << 3) + 0x20)
                    
                    if (*(r14 + r8_6) == 0)
                        sub_141a98300(&var_1e8, rbx_1)
                        rcx_25 = var_1e8
                    
                    int64_t rax_22 = r14 * 6
                    float var_d8[0x4] = *(rcx_25 + (rax_22 << 3))
                    int128_t var_c8_1 = *(rcx_25 + (rax_22 << 3) + 0x10)
                    float var_b8_1[0x4] = *(rcx_25 + (rax_22 << 3) + 0x20)
                    float var_a8[0x3][0x4]
                    float (* rax_23)[0x4] = sub_140ad7d70(&var_d8, &var_a8, &var_108)
                    zmm7 = *rax_23
                    zmm6 = rax_23[1]
                    zmm8 = rax_23[2]
                    int64_t var_1b0
                    
                    if (var_1b0 != 0)
                        sub_140a74f90(var_1b0)
                    
                    int64_t var_1c0
                    
                    if (var_1c0 != 0)
                        sub_140a74f90(var_1c0)
                    
                    char* rcx_29 = var_1d0
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    r15 = var_188
                
                r14.b = 1
        else
            int32_t rcx_7 = rax_7 * 2
            
            if ((rcx_7 & 0xfffffffe) != 0xfffffffe)
                rbx_1 = *(*(r9_2 + 0x80) + (sx.q(rcx_7) s>> 1 << 2))
                goto label_141ab0ec6
        int64_t rbx_2
        int32_t zmm0_1
        
        if (*(arg1 + 0x124) != 1)
            var_188.o = zmm7
            zmm6, zmm7, zmm8 = sub_140adf5d0(&var_188, &var_198)
            rbx_2 = sx.q(var_1f0.d)
            int32_t rax_28 = (rbx_2 + 3).d
            var_1f0.d = rax_28
            
            if (rax_28 s> var_1f0:4.d)
                sub_1406105e0(&var_1f8)
            
            *(var_1f8 + (rbx_2 << 2)) = i_5
            *(var_1f8 + (rbx_2 << 2) + 4) = var_198.d
            int32_t var_194
            zmm0_1 = var_194
        else
            rbx_2 = sx.q(var_1f0.d)
            var_188.o = zmm6
            int32_t rax_24 = (rbx_2 + 3).d
            var_1f0.d = rax_24
            
            if (rax_24 s> var_1f0:4.d)
                sub_1406105e0(&var_1f8)
            
            int128_t zmm1_1 = var_188:4.d
            *(var_1f8 + (rbx_2 << 2)) = var_188.d
            int32_t var_180
            zmm0_1 = var_180
            *(var_1f8 + (rbx_2 << 2) + 4) = zmm1_1.d
        
        *(var_1f8 + (rbx_2 << 2) + 8) = zmm0_1
        int64_t rbx_3 = sx.q(arg1[0x1a].d)
        int32_t rax_32 = (rbx_3 + 1).d
        arg1[0x1a].d = rax_32
        
        if (rax_32 s> *(arg1 + 0xd4))
            sub_140638970(&arg1[0x19])
        
        int64_t rax_33 = arg1[0x19]
        int64_t rcx_38 = rbx_3 * 6
        r15 += 0x10
        var_188 = r15
        *(rax_33 + (rcx_38 << 3)) = zmm7
        *(rax_33 + (rcx_38 << 3) + 0x10) = zmm6
        *(rax_33 + (rcx_38 << 3) + 0x20) = zmm8
    while (r15 != rax_6)
    
    r12 = arg2
    
    if (r14.b == 0)
        goto label_141ab170d
    
    var_198.q = 0
    i_5.q = 0
    arg1[0x1f].d = arg1[0x12].d * 3
    sub_141abbb80(arg1, &var_198)
    arg1[0x18].d = 0
    
    if (*(arg1 + 0xc4) != 0)
        sub_1405c5570(&arg1[0x17], 0)
    
    sub_141ace380(&arg1[0x1f], &var_198, &var_1f8, &arg1[0x17])
    
    if (arg1[0x18].d s<= 0)
    label_141ab1660:
        
        if (*r12 != var_178)
            sub_141e295c0(r12)
        
        sub_141a911c0(&r12[1], &var_170)
        r12[3] = var_160
        sub_141a91450(&r12[4], &var_158)
        result = zx.q(result_1)
        r12[8].b = result.b
    else if (*(arg1 + 0x125) != 0)
    label_141ab1584:
        
        if (*(arg1 + 0x125) != 1)
            goto label_141ab1660
        
        if (*r12 != var_178)
            sub_141e295c0(r12)
        
        sub_141a911c0(&r12[1], &var_170)
        r12[3] = var_160
        sub_141a91450(&r12[4], &var_158)
        r12[8].b = result_1
        int32_t* i = arg1[0x17]
        result = sx.q(arg1[0x18].d)
        
        for (void* r10_1 = &i[result * 2]; i != r10_1; i = &i[2])
            result = arg1[0x15]
            int32_t r8_17 = *(sx.q(*i) * 0xc0 + result + 0xb0)
            
            if (r8_17 != 0xffff)
                uint64_t* r9_9 = r12[6]
                result = zx.q(r8_17.w)
                int16_t r8_18
                
                if (result.d s>= r9_9[1].d)
                    r8_18 = -1
                else
                    result = *r9_9
                    r8_18 = *(result + (zx.q(r8_17.w) << 1))
                
                if (r8_18 != 0xffff)
                    result = r12[4]
                    uint64_t rcx_75 = zx.q(r8_18)
                    *(result + (rcx_75 << 3)) = i[1]
                    *(result + (rcx_75 << 3) + 4) = 1
    else
        if (sub_140d3e110(&arg1[7]) == 0)
            goto label_141ab1584
        
        void* rax_36 = sub_140d3c6e0(&arg1[7])
        void* rdx_21 = *r12
        int64_t rcx_45 = *(rdx_21 + 0xb0)
        
        if (rcx_45 == 0 || *(rax_36 + 0x38) != rcx_45)
            goto label_141ab1584
        
        sub_140dd5b90(&var_1e8, rdx_21)
        *r12
        int64_t var_1a8
        var_1a8.b = r12[8].b != 0
        __builtin_memset(&var_1e0, 0, 0x33)
        sub_141e295c0(&var_1e8)
        int32_t i_1 = 0
        
        if (arg1[0xa].d s> 0)
            int64_t rcx_48 = 0
            
            do
                rcx_48 += 0xc
                i_1 += 1
                *(rcx_48 + arg1[9] - 4) = 0
            while (i_1 s< arg1[0xa].d)
        
        int32_t* i_2 = arg1[0x17]
        
        for (void* r9_4 = &i_2[sx.q(arg1[0x18].d) * 2]; i_2 != r9_4; i_2 = &i_2[2])
            int64_t rdx_23 = sx.q(*(sx.q(*i_2) * 0xc0 + arg1[0x15] + 0xb4))
            
            if (rdx_23.d != 0xffffffff)
                *(arg1[9] + rdx_23 * 0xc + 8) = i_2[1]
        
        char rax_43
        uint32_t zmm1_2[0x8]
        rax_43, zmm1_2 = sub_141e3f230(sub_140d3c6e0(&arg1[7]), &var_1e0, &var_1c8, &arg1[8])
        
        if (rax_43 == 0)
            goto label_141ab1660
        
        int64_t* rax_44 = sub_140d3c6e0(&arg1[7])
        int64_t rdx_26 = *rax_44
        
        if ((*(rdx_26 + 0x278))(rax_44, rdx_26) == 0)
            result = sub_141de4c60(&var_170, &var_1e0, &var_158, &var_1c8, zmm1_2, &arg1[0xd], 
                &r12[1], &r12[4])
        else
            void* rdx_27 = arg1[0x11]
            int128_t zmm4_1 = data_14399f720
            void* r8_12 = (sx.q(arg1[0x12].d) << 4) + rdx_27
            float zmm3_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200), 
                _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
            
            while (rdx_27 != r8_12)
                int32_t rax_46 = *(rdx_27 + 8)
                int32_t rax_50
                
                if (rax_46 s>= 0)
                    rax_50 = *(rdx_27 + 0xc)
                else
                    int32_t rcx_56 = rax_46 * 2
                    
                    if ((rcx_56 & 0xfffffffe) == 0xfffffffe)
                        rax_50 = -1
                    else
                        rax_50 = *(*(r9_2 + 0x80) + (sx.q(rcx_56) s>> 1 << 2))
                
                rdx_27 += 0x10
                int128_t* rax_53 = sx.q(rax_50) * 0x30 + var_1e0.q
                *rax_53 = zmm4_1
                rax_53[1] = zmm3_1
                rax_53[2] = zmm3_1
            
            if ((*(arg1 + 0x126) & 1) != 0)
                int32_t* rdx_28 = arg1[0x1b]
                uint64_t r8_14 = sx.q(arg1[0x1c].d) << 2 u>> 2
                
                if (rdx_28 u> &rdx_28[arg1[0x1c]])
                    r8_14 = 0
                
                if (r8_14 != 0)
                    do
                        int64_t rax_56 = sx.q(*rdx_28)
                        rdx_28 = &rdx_28[1]
                        rdi += 1
                        int128_t* rcx_62 = rax_56 * 0x30 + var_1e0.q
                        *rcx_62 = zmm4_1
                        rcx_62[1] = zmm3_1
                        rcx_62[2] = zmm3_1
                    while (rdi != r8_14)
            
            if (*r12 != var_178)
                sub_141e295c0(r12)
            
            sub_141a911c0(&r12[1], &var_170)
            r12[3] = var_160
            uint32_t zmm1_3[0x8] = sub_141a91450(&r12[4], &var_158)
            r12[8].b = result_1
            result = sub_141de0cd0(&r12[1], &var_1e0, &r12[4], &var_1c8, zmm1_3, 0x3f800000, 1)
    
    int32_t i_4 = i_5
    void* rsi_1 = var_198.q
    
    if (i_4 != 0)
        void* rbx_4 = rsi_1 + 0x88
        int32_t i_3
        
        do
            int64_t rcx_79 = *rbx_4
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            *(rbx_4 - 0x70) = &data_142d6a040
            int64_t rcx_80 = *(rbx_4 - 0x18)
            
            if (rcx_80 != 0)
                sub_140a74f90(rcx_80)
            
            result = sub_1405ae180(rbx_4 - 0x68)
            int64_t rcx_82 = *(rbx_4 - 0x88)
            
            if (rcx_82 != 0)
                result = sub_140a74f90(rcx_82)
            
            rbx_4 += 0xa0
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
int64_t rcx_87 = var_1f8

if (rcx_87 != 0)
    result = sub_140a74f90(rcx_87)

__security_check_cookie(rax_1 ^ &var_238)
return result
