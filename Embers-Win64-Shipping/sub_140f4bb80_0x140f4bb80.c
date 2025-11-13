// 函数: sub_140f4bb80
// 地址: 0x140f4bb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t i_6 = *(arg1 + 0x2d8)
void* rsi = arg1
int32_t r12 = 0
uint64_t r13 = 0
int32_t i_5 = 0
uint64_t var_1e8 = 0
int32_t var_1e0 = 0

if (i_6 s> 0)
    arg4 = sub_1406105e0(&var_1e8)
    i_5 = i_6
    r13 = var_1e8
    *(r13 + (sx.q(i_5 - 1) << 2)) = 0

int32_t i_7 = *(rsi + 0x2e8)
int32_t i_4 = 0
int32_t var_1d0 = 0
uint64_t r14 = 0
uint64_t var_1d8 = 0
int32_t var_1cc = 0

if (i_7 s> 0)
    arg4 = sub_1406105e0(&var_1d8)
    i_4 = i_7
    r14 = var_1d8
    *(r14 + (sx.q(i_4 - 1) << 2)) = 0

float zmm0 = sub_140f2d1a0(&var_1e8, *arg2, rsi + 0x2d0, rsi + 0x2f8, arg4)
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
zmm6, zmm7, zmm8 = sub_140f2d1a0(&var_1d8, *(arg2 + 4), rsi + 0x2e0, rsi + 0x308, zmm0)
int128_t zmm1 = zx.o(0)
int32_t zmm2 = (zx.o(0)).d
float zmm0_1[0x4]

if (i_5 s> 0)
    uint64_t rax_4 = r13
    uint64_t i_2 = zx.q(i_5)
    uint64_t i
    
    do
        zmm0_1 = *rax_4
        *rax_4 = zmm2
        rax_4 += 4
        zmm2 = zmm2 f+ zmm0_1[0]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_4 s> 0)
    uint64_t rax_5 = r14
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        zmm0_1 = *rax_5
        *rax_5 = zmm1.d
        rax_5 += 4
        zmm1.d = zmm1.d f+ zmm0_1[0]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int32_t result = (**(rsi + 0x2a8))(rsi + 0x2a8, zmm1, zmm2)

if (result s> 0)
    int64_t r13_1 = 0
    float var_48_1[0x4] = zmm6
    float var_58_1[0x4] = zmm7
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    
    do
        void* rdi = *(*(rsi + 0x2b8) + r13_1)
        char* rbx_1 = *(rdi + 0x10) + 0x1a8
        
        if (*(rbx_1 + 0x10) != 0)
            int64_t* rcx_7 = *(rbx_1 + 8)
            
            if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                int64_t* rcx_8
                
                if (*(rbx_1 + 0x10) == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = *(rbx_1 + 8)
                
                char var_1f8
                (*(*rcx_8 + 0x48))(rcx_8, &var_1f8)
                *rbx_1 = var_1f8
        
        char rbx_2 = *rbx_1
        
        if ((*arg3 & rbx_2) != 0)
            int64_t rcx_9 = sx.q(*(rdi + 0x60))
            uint64_t r8_2 = var_1e8
            int64_t rdx_3 = sx.q(*(rdi + 0x68))
            zmm13 = *(r8_2 + (rcx_9 << 2))
            zmm12 = *(r14 + (rdx_3 << 2))
            zmm6 = *(r8_2 + (sx.q(*(rdi + 0x64) + rcx_9.d) << 2))
            int32_t rax_16 = *(rdi + 0x6c)
            zmm6[0] = zmm6[0] f- zmm13.d
            bool cond:0_1 = *(rdi + 0x48) == 0
            zmm10 = *(r14 + (sx.q(rax_16 + rdx_3.d) << 2))
            zmm10[0] = zmm10[0] f- zmm12.d
            
            if (not(cond:0_1))
                int64_t* rcx_10 = *(rdi + 0x40)
                
                if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                    int64_t* rcx_11
                    
                    if (*(rdi + 0x48) == 0)
                        rcx_11 = nullptr
                    else
                        rcx_11 = *(rdi + 0x40)
                    
                    float var_188[0x4]
                    (*(*rcx_11 + 0x48))(rcx_11, &var_188)
                    *(rdi + 0x28) = var_188
            
            zmm7 = *(rdi + 0x28)
            int32_t rsi_1 = *(rdi + 0x20)
            zmm9 = zmm6
            zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm7[0] = zmm7[0] + zmm8[0]
            float var_140[0x4] = zmm7
            zmm9[0] = zmm9[0] - zmm7[0]
            
            if (rsi_1 != 0)
                void var_198
                int64_t* rax_22 = sub_140e13cf0(*(rdi + 0x10), &var_198)
                zmm0_1 = __minss_xmmss_memss(zmm9[0], *rax_22)
                
                if (rsi_1 == 1)
                    zmm9 = zmm0_1
                else if (rsi_1 == 2)
                    zmm6[0] = zmm6[0] - zmm0_1[0]
                    zmm6[0] = zmm6[0] * 0.5f
                    zmm6[0] = zmm6[0] + zmm7[0]
                label_140f4be95:
                    zmm6[0] = zmm6[0] - zmm8[0]
                    zmm7 = zmm6
                    zmm9 = zmm0_1
                else if (rsi_1 == 3)
                    zmm6[0] = zmm6[0] - zmm0_1[0]
                    goto label_140f4be95
            
            zmm6 = var_140[1]
            zmm8 = zmm10
            int32_t var_134
            zmm11 = var_134
            int32_t rsi_4 = *(rdi + 0x24)
            zmm6[0] = zmm6[0] f+ zmm11.d
            zmm8[0] = zmm8[0] - zmm6[0]
            
            if (rsi_4 != 0)
                void var_190
                float zmm0_2[0x4] =
                    _mm_min_ss((*(sub_140e13cf0(*(rdi + 0x10), &var_190) + 4))[0], zmm8[0])
                
                if (rsi_4 == 1)
                    zmm8 = zmm0_2
                else if (rsi_4 == 2)
                    zmm10[0] = zmm10[0] - zmm0_2[0]
                    zmm10[0] = zmm10[0] * 0.5f
                    zmm10[0] = zmm10[0] + zmm6[0]
                    zmm6 = zmm10
                    zmm6[0] = zmm6[0] f- zmm11.d
                    zmm8 = zmm0_2
                else if (rsi_4 == 3)
                    zmm6 = zmm10
                    zmm6[0] = zmm6[0] - zmm0_2[0]
                    zmm6[0] = zmm6[0] f- zmm11.d
                    zmm8 = zmm0_2
            
            void* rcx_14 = *(rdi + 0x10)
            zmm7[0] = zmm7[0] f+ zmm13.d
            zmm12.d = zmm12.d f+ zmm6[0]
            float var_1c8 = zmm9[0]
            float var_1c4_1 = zmm8[0]
            bool cond:1_1 = data_143e20cf4 != 0
            int32_t var_1ac = 0x3f800000
            zmm7[0] = zmm7[0] f+ *(rdi + 0x74)
            zmm12.d = zmm12.d f+ *(rdi + 0x78)
            float var_1a8_1 = zmm7[0]
            int32_t var_1a4_1 = zmm12.d
            uint64_t var_130
            uint128_t var_120
            uint64_t var_110
            char var_108_1
            char rcx_16
            uint128_t zmm0_3
            uint128_t zmm1_1
            
            if (cond:1_1)
                uint128_t* rax_25 = sub_140e111c0(rcx_14 + 0x1c8)
                char rdx_7 = 0
                
                if (*(rax_25 + 0x18) == 0)
                    zmm1_1 = var_140
                else
                    zmm0_3 = zx.o(rax_25[1].q)
                    rdx_7 = 1
                    zmm1_1 = *rax_25
                    var_130 = zmm0_3.q
                    var_130.d = (zmm0_3 ^ 0x80000000).d
                
                rcx_16 = 0
                var_108_1 = 0
                
                if (rdx_7 != 0)
                    var_110 = var_130
                    var_120 = zmm1_1
                    rcx_16 = 1
                    var_108_1 = 1
            else
                int128_t* rax_24 = sub_140e111c0(rcx_14 + 0x1c8)
                rcx_16 = 0
                var_108_1 = 0
                
                if (*(rax_24 + 0x18) != 0)
                    zmm1_1 = zx.o(rax_24[1].q)
                    var_120 = *rax_24
                    var_110 = zmm1_1.q
                    rcx_16 = 1
                    var_108_1 = 1
            
            int64_t* rdi_1
            int64_t r14_1
            
            if (rcx_16 == 0)
                zmm6 = *(arg2 + 8)
                var_120.q = var_1c8.q
                var_140 = data_142d8c9b0
                var_130.d = zmm7[0]
                var_130:4.d = zmm12.d
                int32_t var_104
                zmm7, zmm12 = sub_1408b8950(&var_104, &var_140, arg2 + 0x1c)
                r14_1 = *(rdi + 0x10)
                rdi_1 = *(rdi + 0x18)
                zmm1_1.d = zmm6.d f* zmm7[0]
                char var_ec = var_ec ^ ((*(arg2 + 0x34) ^ var_ec) & 1)
                zmm6[0] = zmm6[0] f* zmm12.d
                var_120:8.d = zmm6[0]
                var_110:4.d = zmm7[0]
                var_108_1.d = zmm12.d
                zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
                zmm6[0] = zmm6[0] f+ arg2[1].d
                var_120:0xc.d = zmm1_1.d
                var_110.d = zmm6[0]
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                zmm6 = var_120
                zmm7 = var_110.o
                float var_100[0x4]
                zmm8 = var_100
                int64_t var_f0
                zmm9 = zx.o(var_f0)
            else
                uint64_t* rsi_8 = *(rdi + 0x10) + 0x1f8
                
                if (rsi_8[3].d != 0)
                    int64_t* rcx_17 = rsi_8[2]
                    
                    if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                        int64_t* rcx_18
                        
                        if (rsi_8[3].d == 0)
                            rcx_18 = nullptr
                        else
                            rcx_18 = rsi_8[2]
                        
                        int64_t var_1a0
                        (*(*rcx_18 + 0x48))(rcx_18, &var_1a0)
                        *rsi_8 = var_1a0
                
                zmm0_3 = zx.o(*rsi_8)
                int32_t var_1b8 = (*(arg2 + 8)).d
                var_140[0].q = zmm0_3.q
                int32_t var_1b4_1 = (*(arg2 + 0xc)).d
                int32_t var_1b0_1 = arg2[1].d.d
                float var_178[0x4]
                sub_140dd8200(&var_178, &var_1c8, &var_1ac, &var_120, &var_140, &var_1b8, 
                    arg2 + 0x1c)
                r14_1 = *(rdi + 0x10)
                rdi_1 = *(rdi + 0x18)
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                zmm6 = var_178
                float var_168[0x4]
                zmm7 = var_168
                float var_158[0x4]
                zmm8 = var_158
                int64_t var_148
                zmm9 = zx.o(var_148)
            
            if (rdi_1 != 0)
                int32_t rax_31 = rdi_1[1].d
                rdi_1[1].d = rax_31
                
                if (rax_31 == 0)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if ((*arg3 & rbx_2) == 0)
                goto label_140f4c1c8
            
            void* rbx_3 = &arg3[8]
            int64_t rsi_9 = sx.q(*(rbx_3 + 0x128))
            int32_t rax_35 = (rsi_9 + 1).d
            *(rbx_3 + 0x128) = rax_35
            
            if (rax_35 s> *(rbx_3 + 0x12c))
                sub_140dbcd70(rbx_3, rsi_9.d)
            
            void* rax_36 = *(rbx_3 + 0x120)
            int64_t rcx_25 = rsi_9 * 9
            
            if (rax_36 != 0)
                rbx_3 = rax_36
            
            *(rbx_3 + (rcx_25 << 3)) = zmm6
            *(rbx_3 + (rcx_25 << 3) + 0x10) = zmm7
            *(rbx_3 + (rcx_25 << 3) + 0x20) = zmm8
            *(rbx_3 + (rcx_25 << 3) + 0x30) = zmm9.q
            *(rbx_3 + (rcx_25 << 3) + 0x38) = r14_1
            *(rbx_3 + (rcx_25 << 3) + 0x40) = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            label_140f4c1c8:
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp8_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            rsi = arg1
        
        r12 += 1
        r13_1 += 8
        result = (**(rsi + 0x2a8))(rsi + 0x2a8)
        r14 = var_1d8
    while (r12 s< result)
    
    r13 = var_1e8

uint64_t rcx_29 = var_1d8

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

if (r13 != 0)
    result = sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_238)
return result
