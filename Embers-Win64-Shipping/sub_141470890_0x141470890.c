// 函数: sub_141470890
// 地址: 0x141470890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1.d
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
char var_188 = 0
int32_t r14 = 0
void* rax = arg1 + 0x2120
int96_t var_148 = (*(arg1 + 0x6180)).12
int64_t var_128 = (*(rax + 0x4080)).q
void* var_158 = rax
int128_t var_138 = *(arg1 + 0x6190)
int64_t var_118 = 0
int32_t var_10c = 0

while (true)
    zmm7 = var_128:4.d
    zmm6 = var_128.d
    int32_t rbx_1 = rbx & 0xfffffff0
    zmm8 = var_148:8.d
    zmm9 = var_148:4.d
    zmm10 = var_148.d
    int128_t zmm1
    
    do
        uint64_t r15_2 = zx.q(rbx_1) & 7
        uint64_t r12_1 = zx.q(rbx_1)
        void* rax_1 = *(rax + (r15_2 << 3) + 0x4018)
        
        if (rax_1 != 0 && (*(rax_1 + 0x4058) & 0x7fffffff) u> 0)
            int32_t var_108 = zmm6.d
            uint64_t rcx_1 = zx.q(r12_1.d) & 1
            int32_t var_104_1 = zmm6.d
            uint64_t rax_4 = zx.q(r12_1.d u>> 1) & 1
            int32_t var_100_1 = zmm6.d
            void* rcx_2 = *arg4
            uint64_t r12_3 = zx.q((r12_1 u>> 2).d) & 1
            zmm1.d = zmm7.d f* *(&data_142e669e0 + (rax_4 << 2))
            int128_t zmm0
            zmm0.d = zmm7.d f* *(&data_142e669e0 + (r12_3 << 2))
            zmm1.d = zmm1.d f+ zmm9.d
            zmm0.d = zmm0.d f+ zmm8.d
            float var_170 = zmm7.d f* *(&data_142e669e0 + (rcx_1 << 2)) f+ zmm10.d
            int32_t var_16c_1 = zmm1.d
            float var_168_1 = zmm0.d
            char rax_5
            rax_5, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_141f8d780(rcx_2, &var_170, &var_108)
            
            if (rax_5 != 0)
                int32_t* rax_6 = arg4[2]
                zmm1.d = var_16c_1.d f+ rax_6[1]
                zmm0.d = var_170.d f+ *rax_6
                void* rcx_3 = arg4[1]
                float var_f4_1 = var_168_1 f+ rax_6[2]
                int32_t var_f8_1 = zmm1.d
                int32_t var_fc = zmm0.d
                char rax_7
                int32_t zmm11_1
                int32_t zmm12_1
                rax_7, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11_1, zmm12_1 =
                    sub_141f8d780(rcx_3, &var_fc, &var_108)
                
                if (rax_7 != 0)
                    int64_t rsi_1 = sx.q(r14)
                    r14 = (rsi_1 + 1).d
                    
                    if (r14 s> var_10c)
                        sub_141238b30(&var_118, rsi_1.d)
                        zmm7 = var_128:4.d
                        zmm6 = var_128.d
                        zmm8 = var_148:8.d
                        zmm9 = var_148:4.d
                        zmm10 = var_148.d
                    
                    int64_t rcx_6 = rsi_1 << 6
                    int64_t* rcx_7 = rcx_6 + var_118
                    
                    if (rcx_6 == neg.q(var_118))
                        rcx_7 = nullptr
                    else
                        *(rcx_7 + 0x1c) = 0x3f800000
                        rcx_7[2] = 0
                        rcx_7[3].d = 0
                        *(rcx_7 + 0x24) = 0
                        *(rcx_7 + 0x2c) = 0x3f800000
                        *rcx_7 = 0
                    
                    *rcx_7 = *(var_158 + (r15_2 << 3) + 0x4018)
                    zmm0.d = zmm7.d f* *(&data_142e669e0 + (rcx_1 << 2))
                    zmm0.d = zmm0.d f+ zmm10.d
                    rcx_7[2].d = zmm0.d
                    zmm1.d = zmm7.d f* *(&data_142e669e0 + (rax_4 << 2))
                    zmm1.d = zmm1.d f+ zmm9.d
                    *(rcx_7 + 0x14) = zmm1.d
                    zmm0.d = zmm7.d f* *(&data_142e669e0 + (r12_3 << 2))
                    *(rcx_7 + 0x1c) = 0
                    zmm1.d = zmm6.d f* zmm11_1
                    *(rcx_7 + 0x2c) = 0
                    zmm0.d = zmm0.d f+ zmm8.d
                    rcx_7[4].d = zmm6.d
                    *(rcx_7 + 0x24) = zmm6.d
                    zmm1.d = zmm1.d f* zmm12_1
                    rcx_7[5].d = zmm6.d
                    rcx_7[3].d = zmm0.d
                    zmm0.d = zmm6.d f- zmm1.d
                    rcx_7[6].d = zmm1.d
                    *(rcx_7 + 0x34) = zmm0.d
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    uint64_t var_180
    var_180.d = r14
    int32_t i = 0
    uint64_t var_178
    var_178.d = rbx_1
    char rbx_2 = var_188
    
    while (i s>= 0)
        if (i s>= *(rax + 0x4008))
            break
        
        void* rax_19 = *(rax + 0x4000)
        void* r8_2 = rax
        
        if (rax_19 != 0)
            r8_2 = rax_19
        
        if (sub_141472180(arg1, arg2, r8_2 + (sx.q(i) << 6), arg3, arg4) == 0 && rbx_2 == 0)
            i += 1
            continue
        
        rbx_2 = 1
        i += 1
    
    r14 = var_180.d
    var_188 = rbx_2
    
    if (r14 == 0)
        zmm1 = data_142d3f660
        var_158.o = 0.o
        int128_t var_b8
        var_128 = var_b8.q
        var_148 = zmm1.12
        int128_t var_138_2 = zmm1
    else
        int64_t r9_1 = var_118
        int64_t rax_24 = sx.q(r14 - 1) << 6
        var_158.o = *(rax_24 + r9_1)
        var_148 = (*(rax_24 + r9_1 + 0x10)).12
        int128_t var_138_1 = *(rax_24 + r9_1 + 0x20)
        var_128 = (*(rax_24 + r9_1 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(r14 - 1) << 6) + r9_1, (sx.q(r14) << 6) + r9_1, 0 << 6)
        
        sub_141238da0(&var_118)
        r14 -= 1
    
    rax = var_158
    rbx = var_178.d
    
    if (rax == 0)
        break

return zx.q(var_188)
