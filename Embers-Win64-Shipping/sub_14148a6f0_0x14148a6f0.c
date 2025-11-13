// 函数: sub_14148a6f0
// 地址: 0x14148a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
void* rdi = arg1

if (arg2[1].d == 0 && arg3[1].d == 0)
    return 

int32_t i_2 = 0
bool cond:1_1 = data_1439b6e10 == 0
int64_t* var_210 = nullptr
int64_t var_208_1 = 0
void*** (* var_178)()
uint64_t var_138

if (cond:1_1)
    int32_t r15_4 = *(data_143ed9d10 + 4)
    int32_t i_8 = divs.dp.d(sx.q(r15_4 - 1 + *(*(arg1 + 8) + 0xdc0)), r15_4)
    
    if (i_8 s> 0)
        sub_14083ad10(&var_210, i_8)
        int32_t r14_9 = 0
        uint64_t i_6 = zx.q(i_8)
        uint64_t i
        
        do
            void* rax_46 = *(rdi + 8)
            var_138 = j_sub_140597fc0
            char var_217 = 0
            int32_t rdi_11 = *(rax_46 + 0xdc0) - r14_9
            char* var_130_1 = &var_217
            
            if (r15_4 s<= rdi_11)
                rdi_11 = r15_4
            
            void* rax_47 = sub_140a756e0(&var_138, &data_143958018)
            int64_t* rcx_36 = (*(rax_47 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_48 = &rcx_36[0xb]
            
            if (rax_48 u> *(rax_47 + 0x18))
                sub_140b0e3d0(rax_47 + 0x10, 0x68)
                rcx_36 = (*(rax_47 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_48 = &rcx_36[0xb]
            
            *(rax_47 + 0x10) = rax_48
            int64_t* rdi_12
            
            if (rcx_36 == 0)
                rdi_12 = nullptr
            else
                rdi_12 = sub_1414755d0(rcx_36, *(arg1 + 8), arg1 + 0xa0, 0, r14_9, rdi_11, arg_10, 
                    arg3, *(arg1 + 0x3b0), arg4)
            
            int64_t rbx_4 = sx.q(var_208_1.d)
            int32_t rax_53 = (rbx_4 + 1).d
            var_208_1.d = rax_53
            
            if (rax_53 s> var_208_1:4.d)
                sub_14083a440(&var_210, rbx_4.d)
            
            r14_9 += r15_4
            var_210[rbx_4] = rdi_12
            rdi = arg1
            i = i_6
            i_6 -= 1
        while (i != 1)
else
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    int128_t zmm12
    int128_t var_b8_1 = zmm12
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    sub_14083ad10(&var_210, 0x64)
    void* i_1 = *(rdi + 8) + 0x2120
    int32_t r13_1 = 0
    int32_t rbx_1 = arg_10.d
    void* i_3 = i_1
    int96_t var_1b8_1 = (*(i_1 + 0x4060)).12
    int64_t var_198_1 = (*(i_1 + 0x4080)).q
    void* i_4 = i_1
    int128_t var_1a8_1 = *(i_1 + 0x4070)
    int64_t var_1e8_1 = 0
    int64_t var_188 = 0
    int32_t var_17c_1 = 0
    
    do
        zmm10 = var_198_1:4.d
        void* i_5 = i_1
        int128_t zmm6_1 = var_198_1.d
        rbx_1 &= 0xfffffff0
        zmm11 = var_1b8_1:8.d
        zmm12 = var_1b8_1:4.d
        zmm13 = var_1b8_1.d
        int128_t zmm1_1
        
        do
            uint64_t r15_2 = zx.q(rbx_1) & 7
            uint64_t r12_1 = zx.q(rbx_1)
            void* rax_1 = *(i_5 + (r15_2 << 3) + 0x4018)
            
            if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
                uint64_t rcx_2 = zx.q(r12_1.d) & 1
                uint64_t rax_4 = zx.q(r12_1.d u>> 1) & 1
                uint64_t r12_3 = zx.q((r12_1 u>> 2).d) & 1
                var_138 = rax_4
                zmm8.d = zmm10.d f* *(&data_142e669e0 + (rax_4 << 2))
                int64_t rdi_1 = 0
                int64_t* rax_5 = arg_10
                zmm7.d = zmm10.d f* *(&data_142e669e0 + (rcx_2 << 2))
                zmm9.d = zmm10.d f* *(&data_142e669e0 + (r12_3 << 2))
                zmm8.d = zmm8.d f+ zmm12.d
                int64_t r14_1 = sx.q(rax_5[1].d)
                zmm7.d = zmm7.d f+ zmm13.d
                zmm9.d = zmm9.d f+ zmm11.d
                int128_t zmm0_1
                
                if (r14_1 s> 0)
                    while (true)
                        int64_t rax_6 = *rax_5
                        int32_t var_168 = zmm6_1.d
                        int32_t var_164_1 = zmm6_1.d
                        int32_t var_160_1 = zmm6_1.d
                        void* rcx_3 = *(rax_6 + (rdi_1 << 3))
                        zmm1_1.d = zmm8.d f+ *(rcx_3 + 0x58)
                        zmm0_1.d = zmm9.d f+ *(rcx_3 + 0x5c)
                        float var_15c = zmm7.d f+ *(rcx_3 + 0x54)
                        int32_t var_158_1 = zmm1_1.d
                        int32_t var_154_1 = zmm0_1.d
                        char rax_7
                        rax_7, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                            sub_141f8d780(rcx_3 + 0x170, &var_15c, &var_168)
                        
                        if (rax_7 != 0)
                            break
                        
                        rax_5 = arg_10
                        rdi_1 += 1
                        
                        if (rdi_1 s>= r14_1)
                            goto label_14148a971
                    
                    goto label_14148aa02
                
            label_14148a971:
                int64_t* rax_10 = arg3
                int64_t rdi_2 = 0
                int64_t r14_2 = sx.q(rax_10[1].d)
                
                if (r14_2 s> 0)
                    while (true)
                        int64_t rax_8 = *rax_10
                        int32_t var_150 = zmm6_1.d
                        int32_t var_14c_1 = zmm6_1.d
                        int32_t var_148_1 = zmm6_1.d
                        void* rcx_5 = *(rax_8 + (rdi_2 << 3))
                        zmm1_1.d = zmm8.d f+ *(rcx_5 + 0x58)
                        zmm0_1.d = zmm9.d f+ *(rcx_5 + 0x5c)
                        float var_144 = zmm7.d f+ *(rcx_5 + 0x54)
                        int32_t var_140_1 = zmm1_1.d
                        int32_t var_13c_1 = zmm0_1.d
                        char rax_9
                        rax_9, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                            sub_141f8d780(rcx_5 + 0x170, &var_144, &var_150)
                        
                        if (rax_9 != 0)
                            break
                        
                        rax_10 = arg3
                        rdi_2 += 1
                        
                        if (rdi_2 s>= r14_2)
                            goto label_14148ab11
                    
                label_14148aa02:
                    int64_t rdi_3 = sx.q(r13_1)
                    r13_1 = (rdi_3 + 1).d
                    void* i_7
                    int64_t r8_2
                    
                    if (r13_1 s<= var_17c_1)
                        i_7 = i_3
                        r8_2 = var_1e8_1
                    else
                        sub_141238b30(&var_188, rdi_3.d)
                        r8_2 = var_188
                        i_7 = i_4
                        zmm10 = var_198_1:4.d
                        zmm6_1 = var_198_1.d
                        zmm11 = var_1b8_1:8.d
                        zmm12 = var_1b8_1:4.d
                        zmm13 = var_1b8_1.d
                        var_1e8_1 = r8_2
                        i_3 = i_7
                    
                    int64_t rcx_9 = rdi_3 << 6
                    int64_t* rcx_10 = rcx_9 + r8_2
                    
                    if (rcx_9 == neg.q(r8_2))
                        rcx_10 = nullptr
                    else
                        rcx_10[2] = 0
                        rcx_10[3].d = 0
                        *(rcx_10 + 0x1c) = 0x3f800000
                        *(rcx_10 + 0x24) = 0
                        *(rcx_10 + 0x2c) = 0x3f800000
                        *rcx_10 = 0
                    
                    *rcx_10 = *(i_7 + (r15_2 << 3) + 0x4018)
                    zmm0_1.d = zmm10.d f* *(&data_142e669e0 + (rcx_2 << 2))
                    zmm0_1.d = zmm0_1.d f+ zmm13.d
                    rcx_10[2].d = zmm0_1.d
                    zmm1_1.d = zmm10.d f* *(&data_142e669e0 + (var_138 << 2))
                    zmm1_1.d = zmm1_1.d f+ zmm12.d
                    *(rcx_10 + 0x14) = zmm1_1.d
                    zmm0_1.d = zmm10.d f* *(&data_142e669e0 + (r12_3 << 2))
                    *(rcx_10 + 0x1c) = 0
                    zmm1_1.d = zmm6_1.d f* 0.5f
                    *(rcx_10 + 0x2c) = 0
                    zmm0_1.d = zmm0_1.d f+ zmm11.d
                    rcx_10[4].d = zmm6_1.d
                    *(rcx_10 + 0x24) = zmm6_1.d
                    zmm1_1.d = zmm1_1.d f* 1.0625f
                    rcx_10[5].d = zmm6_1.d
                    rcx_10[3].d = zmm0_1.d
                    zmm0_1.d = zmm6_1.d f- zmm1_1.d
                    rcx_10[6].d = zmm1_1.d
                    *(rcx_10 + 0x34) = zmm0_1.d
                
            label_14148ab11:
                i_5 = i_1
            
            if ((rbx_1.b & 7) u>= 7)
                rbx_1 |= 8
            else
                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
        while (((rbx_1 u>> 3).b & 1) == 0)
        
        uint64_t var_200
        var_200.d = r13_1
        
        if (*(i_5 + 0x4008) s> 0)
            char var_218 = 0
            char* var_170_1 = &var_218
            var_178 = j_sub_140597fc0
            void* rax_21 = sub_140a756e0(&var_178, &data_143958018)
            int64_t* rdi_6 = (*(rax_21 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_22 = &rdi_6[0xb]
            
            if (rax_22 u> *(rax_21 + 0x18))
                sub_140b0e3d0(rax_21 + 0x10, 0x68)
                rdi_6 = (*(rax_21 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_22 = &rdi_6[0xb]
            
            *(rax_21 + 0x10) = rax_22
            
            if (rdi_6 == 0)
                rdi_6 = nullptr
            else
                int32_t rcx_13 = *(arg1 + 0x3b0)
                *rdi_6 = *(arg1 + 8)
                rdi_6[1] = arg1 + 0xa0
                rdi_6[2] = i_1
                rdi_6[4] = arg_10
                *(rdi_6 + 0x34) = arg4
                rdi_6[3] = 0
                rdi_6[5] = arg3
                rdi_6[6].d = rcx_13
                __builtin_memset(&rdi_6[7], 0, 0x20)
                int32_t j_6 = rdi_6[8].d
                int64_t* r14_4 = rdi_6[7]
                int32_t rax_29 = *(rdi_6[4] + 8)
                void* var_1f8_1
                var_1f8_1.d = rax_29
                
                if (j_6 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_14 = *r14_4
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        r14_4 = &r14_4[2]
                        j = j_6
                        j_6 -= 1
                    while (j != 1)
                    rax_29 = var_1f8_1.d
                
                int32_t r14_5 = 0
                rdi_6[8].d = 0
                
                if (*(rdi_6 + 0x44) != rax_29)
                    sub_14083ae30(&rdi_6[7], rax_29)
                    r14_5 = rdi_6[8].d
                
                int64_t r12_4 = sx.q(*(rdi_6[4] + 8))
                int32_t rax_31 = r14_5 + r12_4.d
                rdi_6[8].d = rax_31
                
                if (rax_31 s> *(rdi_6 + 0x44))
                    sub_14083a990(&rdi_6[7], r14_5)
                
                memset((sx.q(r14_5) << 4) + rdi_6[7], 0, r12_4 << 4)
                int32_t j_7 = rdi_6[0xa].d
                int64_t* r14_6 = rdi_6[9]
                int32_t r12_5 = *(rdi_6[5] + 8)
                
                if (j_7 != 0)
                    int32_t j_1
                    
                    do
                        int64_t rcx_20 = *r14_6
                        
                        if (rcx_20 != 0)
                            sub_140a74f90(rcx_20)
                        
                        r14_6 = &r14_6[2]
                        j_1 = j_7
                        j_7 -= 1
                    while (j_1 != 1)
                
                int32_t r14_7 = 0
                rdi_6[0xa].d = 0
                
                if (*(rdi_6 + 0x54) != r12_5)
                    sub_14083ae30(&rdi_6[9], r12_5)
                    r14_7 = rdi_6[0xa].d
                
                int64_t r15_3 = sx.q(*(rdi_6[5] + 8))
                int32_t rax_34 = r14_7 + r15_3.d
                rdi_6[0xa].d = rax_34
                
                if (rax_34 s> *(rdi_6 + 0x54))
                    sub_14083a990(&rdi_6[9], r14_7)
                
                memset((sx.q(r14_7) << 4) + rdi_6[9], 0, r15_3 << 4)
            
            int64_t r14_8 = sx.q(var_208_1.d)
            int32_t rax_35 = (r14_8 + 1).d
            var_208_1.d = rax_35
            
            if (rax_35 s> var_208_1:4.d)
                sub_14083a440(&var_210, r14_8.d)
            
            r13_1 = var_200.d
            var_210[r14_8] = rdi_6
        
        if (r13_1 == 0)
            zmm1_1 = data_142d3f660
            i_4.o = 0.o
            int128_t var_f8
            var_198_1 = var_f8.q
            var_1b8_1 = zmm1_1.12
            int128_t var_1a8_3 = zmm1_1
        else
            int64_t rax_38 = sx.q(r13_1 - 1) << 6
            i_4.o = *(rax_38 + var_1e8_1)
            var_1b8_1 = (*(rax_38 + var_1e8_1 + 0x10)).12
            int128_t var_1a8_2 = *(rax_38 + var_1e8_1 + 0x20)
            var_198_1 = (*(rax_38 + var_1e8_1 + 0x30)).q
            
            if (0 != 0)
                memmove((sx.q(r13_1 - 1) << 6) + var_1e8_1, (sx.q(r13_1) << 6) + var_1e8_1, 0 << 6)
            
            sub_141238da0(&var_188)
            r13_1 -= 1
            var_1e8_1 = var_188
        
        i_1 = i_4
        i_3 = i_1
    while (i_1 != 0)
char rax_55 = sub_140b011d0()
int32_t r8_10

if (rax_55 != 0)
    r8_10 = 0

if (rax_55 == 0 || *(data_143ed9cf8 + 4) s<= 0)
    r8_10 = 1

arg_10 = &var_210
var_178 = sub_141481e40
int64_t** var_170_2 = &arg_10
sub_14077b750(var_208_1.d, &var_178, r8_10)

if (var_208_1.d s<= 0)
    return 

int64_t r15_5 = 0

do
    void* r14_10 = *(var_210 + r15_5)
    sub_14149b720(r14_10)
    int32_t j_4 = *(r14_10 + 0x50)
    int64_t* rbx_5 = *(r14_10 + 0x48)
    
    if (j_4 != 0)
        int32_t j_2
        
        do
            int64_t rcx_43 = *rbx_5
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            rbx_5 = &rbx_5[2]
            j_2 = j_4
            j_4 -= 1
        while (j_2 != 1)
    
    int32_t j_5 = *(r14_10 + 0x40)
    int64_t* rbx_6 = *(r14_10 + 0x38)
    
    if (j_5 != 0)
        int32_t j_3
        
        do
            int64_t rcx_44 = *rbx_6
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            rbx_6 = &rbx_6[2]
            j_3 = j_5
            j_5 -= 1
        while (j_3 != 1)
    
    i_2 += 1
    r15_5 += 8
while (i_2 s< var_208_1.d)
