// 函数: sub_141471410
// 地址: 0x141471410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1.d
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
char var_1b8 = 0
int32_t rsi = 0
void* rax = arg1 + 0x2120
int96_t var_168 = (*(arg1 + 0x6180)).12
int64_t var_148 = (*(rax + 0x4080)).q
void* var_178 = rax
uint128_t var_158 = *(arg1 + 0x6190)
int64_t var_138 = 0
int32_t var_12c = 0

while (true)
    zmm7 = var_148:4.d
    zmm6 = var_148.d
    int32_t rbx_1 = rbx & 0xfffffff0
    zmm8 = var_168:8.d
    zmm9 = var_168:4.d
    zmm10 = var_168.d
    uint128_t zmm1
    
    do
        uint64_t r14_2 = zx.q(rbx_1) & 7
        uint64_t r12_1 = zx.q(rbx_1)
        void* rax_1 = *(rax + (r14_2 << 3) + 0x4018)
        
        if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
            void** rdi_1 = *arg4
            float var_190 = zmm6.d
            uint64_t rcx_1 = zx.q(r12_1.d) & 1
            int32_t var_18c_1 = zmm6.d
            int32_t var_188_1 = zmm6.d
            uint64_t rax_4 = zx.q(r12_1.d u>> 1) & 1
            uint64_t r12_3 = zx.q((r12_1 u>> 2).d) & 1
            zmm1.d = zmm7.d f* *(&data_142e669e0 + (rax_4 << 2))
            uint128_t zmm0
            zmm0.d = zmm7.d f* *(&data_142e669e0 + (r12_3 << 2))
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm0.d f+ zmm8.d
            float var_1a8 = zmm7.d f* *(&data_142e669e0 + (rcx_1 << 2)) f+ zmm10.d
            int32_t var_1a4_1 = zmm1.d
            float var_1a0_1 = zmm0.d
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_141f8d780(*rdi_1, &var_1a8, &var_190)
            
            if (rax_5 != 0)
                int32_t* rax_6 = rdi_1[2]
                zmm1.d = var_1a4_1.d f+ rax_6[1]
                zmm0.d = var_1a8.d f+ *rax_6
                void* rcx_3 = rdi_1[1]
                float var_120_1 = var_1a0_1 f+ rax_6[2]
                int32_t var_124_1 = zmm1.d
                int32_t var_128 = zmm0.d
                char rax_7
                int32_t zmm11_1
                int32_t zmm12_1
                rax_7, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11_1, zmm12_1 =
                    sub_141f8d780(rcx_3, &var_128, &var_190)
                
                if (rax_7 != 0)
                    char rax_10
                    rax_10, zmm6, zmm7, zmm8, zmm9 = sub_141478040(arg4[1], &var_1a8, &var_190, 
                        arg4[3], arg4[4], (*(arg4[2] + 0x18)).d)
                    
                    if (rax_10 != 0)
                        int64_t rdi_2 = sx.q(rsi)
                        rsi = (rdi_2 + 1).d
                        
                        if (rsi s> var_12c)
                            sub_141238b30(&var_138, rdi_2.d)
                            zmm7 = var_148:4.d
                            zmm6 = var_148.d
                            zmm8 = var_168:8.d
                            zmm9 = var_168:4.d
                            zmm10 = var_168.d
                        
                        int64_t rcx_7 = rdi_2 << 6
                        int64_t* rcx_8 = rcx_7 + var_138
                        
                        if (rcx_7 == neg.q(var_138))
                            rcx_8 = nullptr
                        else
                            *(rcx_8 + 0x1c) = 0x3f800000
                            rcx_8[2] = 0
                            rcx_8[3].d = 0
                            *(rcx_8 + 0x24) = 0
                            *(rcx_8 + 0x2c) = 0x3f800000
                            *rcx_8 = 0
                        
                        *rcx_8 = *(var_178 + (r14_2 << 3) + 0x4018)
                        zmm0.d = zmm7.d f* *(&data_142e669e0 + (rcx_1 << 2))
                        zmm0.d = zmm0.d f+ zmm10.d
                        rcx_8[2].d = zmm0.d
                        zmm1.d = zmm7.d f* *(&data_142e669e0 + (rax_4 << 2))
                        zmm1.d = zmm1.d f+ zmm9.d
                        *(rcx_8 + 0x14) = zmm1.d
                        zmm0.d = zmm7.d f* *(&data_142e669e0 + (r12_3 << 2))
                        *(rcx_8 + 0x1c) = 0
                        zmm1.d = zmm6.d f* zmm11_1
                        *(rcx_8 + 0x2c) = 0
                        zmm0.d = zmm0.d f+ zmm8.d
                        rcx_8[4].d = zmm6.d
                        *(rcx_8 + 0x24) = zmm6.d
                        zmm1.d = zmm1.d f* zmm12_1
                        rcx_8[5].d = zmm6.d
                        rcx_8[3].d = zmm0.d
                        zmm0.d = zmm6.d f- zmm1.d
                        rcx_8[6].d = zmm1.d
                        *(rcx_8 + 0x34) = zmm0.d
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    uint64_t var_1b0
    var_1b0.d = rsi
    int32_t i = 0
    uint64_t var_198
    var_198.d = rbx_1
    char rbx_2 = var_1b8
    
    while (i s>= 0)
        if (i s>= *(rax + 0x4008))
            break
        
        void* rax_22 = *(rax + 0x4000)
        void* r8_3 = rax
        zmm1 = *(arg4 + 0x10)
        
        if (rax_22 != 0)
            r8_3 = rax_22
        
        uint128_t var_118 = *arg4
        uint128_t var_108_1 = zmm1
        uint64_t var_f8_1 = arg4[4]
        
        if (sub_141472740(arg1, arg2, r8_3 + (sx.q(i) << 6), arg3, &var_118) == 0 && rbx_2 == 0)
            i += 1
            continue
        
        rbx_2 = 1
        i += 1
    
    rsi = var_1b0.d
    var_1b8 = rbx_2
    
    if (rsi == 0)
        zmm1 = data_142d3f660
        var_178.o = 0.o
        uint128_t var_b8
        var_148 = var_b8.q
        var_168 = zmm1.12
        uint128_t var_158_2 = zmm1
    else
        int64_t r9_2 = var_138
        int64_t rax_27 = sx.q(rsi - 1) << 6
        var_178.o = *(rax_27 + r9_2)
        var_168 = (*(rax_27 + r9_2 + 0x10)).12
        uint128_t var_158_1 = *(rax_27 + r9_2 + 0x20)
        var_148 = (*(rax_27 + r9_2 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rsi - 1) << 6) + r9_2, (sx.q(rsi) << 6) + r9_2, 0 << 6)
        
        sub_141238da0(&var_138)
        rsi -= 1
    
    rax = var_178
    rbx = var_198.d
    
    if (rax == 0)
        break

return zx.q(var_1b8)
