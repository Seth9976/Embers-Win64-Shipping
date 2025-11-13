// 函数: sub_1414703a0
// 地址: 0x1414703a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1.d
float zmm6[0x4]
float var_48[0x4] = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
char var_1c8 = 0
int32_t rsi = 0
void* rax = arg1 + 0x2120
int96_t var_188 = (*(arg1 + 0x6180)).12
int64_t var_168 = (*(rax + 0x4080)).q
void* var_198 = rax
uint128_t var_178 = *(arg1 + 0x6190)
int64_t var_158 = 0
int32_t var_14c = 0

while (true)
    zmm8 = var_168:4.d
    zmm7 = var_168.d
    int32_t rbx_1 = rbx & 0xfffffff0
    zmm9 = var_188:8.d
    zmm10 = var_188:4.d
    zmm11 = var_188.d
    uint128_t zmm1
    
    do
        uint64_t r14_2 = zx.q(rbx_1) & 7
        uint64_t r12_1 = zx.q(rbx_1)
        void* rax_1 = *(rax + (r14_2 << 3) + 0x4018)
        
        if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
            void** rdi_1 = *arg4
            int32_t var_148 = zmm7.d
            uint64_t rcx_1 = zx.q(r12_1.d) & 1
            int32_t var_144_1 = zmm7.d
            int32_t var_140_1 = zmm7.d
            uint64_t rax_4 = zx.q(r12_1.d u>> 1) & 1
            uint128_t zmm0
            zmm0.d = zmm7.d f+ zmm7.d
            uint64_t r12_3 = zx.q((r12_1 u>> 2).d) & 1
            zmm0.d = zmm0.d f+ zmm7.d
            zmm1.d = zmm8.d f* *(&data_142e669e0 + (r12_3 << 2))
            float zmm2 = zmm8.d f* *(&data_142e669e0 + (rax_4 << 2)) f+ zmm10.d
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm0.d f* zmm7.d
            float var_1b8 = zmm8.d f* *(&data_142e669e0 + (rcx_1 << 2)) f+ zmm11.d
            _mm_sqrt_ss(zx.o(0)[0], zmm0.d)
            float var_1b0_1 = zmm1.d
            char rax_5
            rax_5, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141f8d780(*rdi_1, &var_1b8, &var_148)
            
            if (rax_5 != 0)
                int32_t* rax_6 = rdi_1[2]
                zmm1.d = zmm2.d f+ rax_6[1]
                zmm0.d = var_1b8.d f+ *rax_6
                void* rcx_3 = rdi_1[1]
                float var_134_1 = var_1b0_1 f+ rax_6[2]
                int32_t var_138_1 = zmm1.d
                int32_t var_13c = zmm0.d
                char rax_7
                int32_t zmm12_1
                int32_t zmm13_1
                rax_7, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12_1, zmm13_1 =
                    sub_141f8d780(rcx_3, &var_13c, &var_148)
                
                if (rax_7 != 0)
                    int64_t* r8_2 = arg4[4]
                    int32_t* rdx_2 = arg4[3]
                    zmm6[0] = zmm6[0] f+ *(arg4[2] + 0x18)
                    zmm0, zmm6 = sub_140addc20(&var_1b8, rdx_2, r8_2)
                    zmm6[0] = zmm6[0] * zmm6[0]
                    
                    if (not(zmm0.d f>= zmm6[0]))
                        int64_t rdi_2 = sx.q(rsi)
                        rsi = (rdi_2 + 1).d
                        
                        if (rsi s> var_14c)
                            sub_141238b30(&var_158, rdi_2.d)
                            zmm8 = var_168:4.d
                            zmm7 = var_168.d
                            zmm9 = var_188:8.d
                            zmm10 = var_188:4.d
                            zmm11 = var_188.d
                        
                        int64_t rcx_7 = rdi_2 << 6
                        int64_t* rcx_8 = rcx_7 + var_158
                        
                        if (rcx_7 == neg.q(var_158))
                            rcx_8 = nullptr
                        else
                            *(rcx_8 + 0x1c) = 0x3f800000
                            rcx_8[2] = 0
                            rcx_8[3].d = 0
                            *(rcx_8 + 0x24) = 0
                            *(rcx_8 + 0x2c) = 0x3f800000
                            *rcx_8 = 0
                        
                        *rcx_8 = *(var_198 + (r14_2 << 3) + 0x4018)
                        zmm0.d = zmm8.d f* *(&data_142e669e0 + (rcx_1 << 2))
                        zmm0.d = zmm0.d f+ zmm11.d
                        rcx_8[2].d = zmm0.d
                        zmm1.d = zmm8.d f* *(&data_142e669e0 + (rax_4 << 2))
                        zmm1.d = zmm1.d f+ zmm10.d
                        *(rcx_8 + 0x14) = zmm1.d
                        zmm0.d = zmm8.d f* *(&data_142e669e0 + (r12_3 << 2))
                        *(rcx_8 + 0x1c) = 0
                        zmm1.d = zmm7.d f* zmm12_1
                        *(rcx_8 + 0x2c) = 0
                        zmm0.d = zmm0.d f+ zmm9.d
                        rcx_8[4].d = zmm7.d
                        *(rcx_8 + 0x24) = zmm7.d
                        zmm1.d = zmm1.d f* zmm13_1
                        rcx_8[5].d = zmm7.d
                        rcx_8[3].d = zmm0.d
                        zmm0.d = zmm7.d f- zmm1.d
                        rcx_8[6].d = zmm1.d
                        *(rcx_8 + 0x34) = zmm0.d
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    uint64_t var_1c0
    var_1c0.d = rsi
    int32_t i = 0
    uint64_t var_1a8
    var_1a8.d = rbx_1
    char rbx_2 = var_1c8
    
    while (i s>= 0)
        if (i s>= *(rax + 0x4008))
            break
        
        void* rax_20 = *(rax + 0x4000)
        void* r8_3 = rax
        zmm1 = *(arg4 + 0x10)
        
        if (rax_20 != 0)
            r8_3 = rax_20
        
        uint128_t var_128 = *arg4
        uint128_t var_118_1 = zmm1
        uint64_t var_108_1 = arg4[4]
        
        if (sub_141471ea0(arg1, arg2, r8_3 + (sx.q(i) << 6), arg3, &var_128) == 0 && rbx_2 == 0)
            i += 1
            continue
        
        rbx_2 = 1
        i += 1
    
    rsi = var_1c0.d
    var_1c8 = rbx_2
    
    if (rsi == 0)
        zmm1 = data_142d3f660
        var_198.o = 0.o
        uint128_t var_c8
        var_168 = var_c8.q
        var_188 = zmm1.12
        uint128_t var_178_2 = zmm1
    else
        int64_t r9_1 = var_158
        int64_t rax_25 = sx.q(rsi - 1) << 6
        var_198.o = *(rax_25 + r9_1)
        var_188 = (*(rax_25 + r9_1 + 0x10)).12
        uint128_t var_178_1 = *(rax_25 + r9_1 + 0x20)
        var_168 = (*(rax_25 + r9_1 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rsi - 1) << 6) + r9_1, (sx.q(rsi) << 6) + r9_1, 0 << 6)
        
        sub_141238da0(&var_158)
        rsi -= 1
    
    rax = var_198
    rbx = var_1a8.d
    
    if (rax == 0)
        break

return zx.q(var_1c8)
