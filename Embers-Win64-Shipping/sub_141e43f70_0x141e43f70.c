// 函数: sub_141e43f70
// 地址: 0x141e43f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_20
uint64_t i_26 = i_20
int64_t i_10
int64_t i_14 = i_10
int64_t* rsi = arg5
void** r13 = arg1
float zmm6[0x4]
float var_48[0x4] = zmm6
void* rdx = arg3
float zmm7[0x4]
float var_58[0x4] = zmm7
int32_t rcx = 0
int128_t zmm13 = zx.o(0)
float zmm14[0x4] = arg2
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
int64_t result_3
int32_t var_12c
uint64_t i_19
void* const* result
float zmm0[0x4]
int32_t zmm3

while (true)
    if (rcx s< 0 || rcx s>= *(rdx + 8))
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    int64_t result_2 = 0
    int32_t* rcx_3 = (sx.q(rcx) << 6) + *rdx
    int64_t result_1 = 0
    result_3 = 0
    int64_t rbx_1 = sx.q(rcx_3[0xe])
    i_20 = zx.q(*rcx_3)
    int64_t rax = *(rcx_3 + 8)
    zmm7 = rcx_3[4]
    int64_t rdi_1 = *(rcx_3 + 0x30)
    float var_150_1 = rcx_3[6][0]
    float var_154_1 = rcx_3[5][0]
    float var_158_1 = zmm7[0]
    float var_14c_1 = rcx_3[7][0]
    int32_t i_22 = i_20.d
    int32_t i_25 = i_20.d
    int32_t var_184_1 = rbx_1.d
    int32_t var_130_1 = rbx_1.d
    float var_148_1[0x4] = *(rcx_3 + 0x20)
    
    if (rbx_1.d != 0)
        sub_140638750(&result_3, rbx_1.d, 0)
        result_2 = result_3
        result_1 = result_2
        memcpy(result_2, rdi_1, (rbx_1 << 2).d)
        rbx_1 = zx.q(var_130_1)
        i_20 = zx.q(i_25)
        zmm7 = var_158_1
        var_184_1 = rbx_1.d
        i_22 = i_20.d
    else
        var_12c = 0
    
    uint64_t i_15 = zx.q(r13[0x17].d)
    i_10.b = 0
    
    if (rbx_1.d != i_15.d)
        rbx_1 = 0
        var_184_1 = 0
        int32_t var_130_2 = 0
        
        if (var_12c != i_15.d)
            sub_1405dadb0(&result_3, i_15.d)
            result_2 = result_3
            rbx_1 = zx.q(var_130_2)
            i_20 = zx.q(i_25)
            zmm7 = var_158_1
            result_1 = result_2
            var_184_1 = rbx_1.d
            i_22 = i_20.d
        
        if (i_15.d s> 0)
            uint64_t i_6 = i_15
            uint64_t i
            
            do
                int64_t rdi_2 = sx.q(rbx_1.d)
                rbx_1 = zx.q((rdi_2 + 1).d)
                int32_t var_130_3 = rbx_1.d
                
                if (rbx_1.d s> var_12c)
                    sub_1406105e0(&result_3)
                    rbx_1 = zx.q(var_130_3)
                    result_2 = result_3
                    zmm7 = var_158_1
                
                int32_t* rcx_8 = result_2 + (rdi_2 << 2)
                
                if (rcx_8 != 0)
                    *rcx_8 = zmm7[0]
                
                i = i_6
                i_6 -= 1
            while (i != 1)
            i_20 = zx.q(i_25)
            i_22 = i_20.d
            result_1 = result_2
            var_184_1 = rbx_1.d
    
    int32_t rax_1 = 0
    
    while (true)
        if (rax_1 s< 0 || rax_1 s>= arg4[1].d)
            rsi = arg5
            break
        
        int64_t rsi_1 = *arg4
        int64_t rdi_4 = sx.q(rax_1) << 6
        int32_t rcx_10 = *(rdi_4 + rsi_1)
        
        if (rcx_10 != i_20.d)
            rax_1 += 1
            continue
        
        uint64_t i_17 = 0
        i_10 = sx.q(*(rdi_4 + rsi_1 + 0x38))
        int64_t rax_2 = *(rdi_4 + rsi_1 + 8)
        float zmm4[0x4] = *(rdi_4 + rsi_1 + 0x10)
        int64_t r12 = *(rdi_4 + rsi_1 + 0x30)
        float var_110_1 = (*(rdi_4 + rsi_1 + 0x18))[0]
        float var_114_1 = (*(rdi_4 + rsi_1 + 0x14))[0]
        float var_118_1 = zmm4[0]
        float var_10c_1 = (*(rdi_4 + rsi_1 + 0x1c))[0]
        uint64_t i_18 = 0
        i_19 = 0
        int32_t var_f0_1 = i_10.d
        float var_108_1[0x4] = *(rdi_4 + rsi_1 + 0x20)
        int32_t i_12
        
        if (i_10.d != 0)
            sub_140638750(&i_19, i_10.d, 0)
            i_17 = i_19
            i_18 = i_17
            memcpy(i_17, r12, (i_10 << 2).d)
            zmm4 = *(rdi_4 + rsi_1 + 0x10)
            i_10 = zx.q(i_12)
        else
            i_12 = i_10.d
        zmm0 = sub_140ad62e0(zmm7, zmm4, zmm14, arg1[0x15].d)
        uint64_t i_8 = zx.q(rbx_1.d)
        zmm6 = zmm0
        int32_t i_13 = i_8.d
        int32_t i_11 = i_8.d
        float var_118_2 = zmm0[0]
        
        if (rbx_1.d != 0 || i_10.d != 0)
            sub_140638750(&i_19, rbx_1.d, i_10.d)
            i_17 = i_19
            i_18 = i_17
            memcpy(i_17, result_2, rbx_1.d << 2)
            i_8 = zx.q(i_11)
            zmm6 = var_118_2
            i_13 = i_8.d
        
        if (i_8.d s> 0)
            int64_t r15_1 = 0
            i_10 = i_17
            uint64_t i_1
            
            do
                zmm0 = *(rdi_4 + rsi_1 + 0x10)
                zmm3 = *(arg1[0x16] + r15_1 + 0x10)
                
                if (not(zmm3 f<= 0f))
                    zmm0, zmm6 = sub_140ad62e0(*(i_10 + result_1 - i_17), zmm0, zmm14, zmm3)
                
                *i_10 = zmm0[0]
                r15_1 += 0x14
                i_10 += 4
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
            rbx_1 = zx.q(var_184_1)
            i_17 = i_18
            i_8 = zx.q(i_13)
        
        rsi = arg5
        int64_t rdi_5 = sx.q(rsi[1].d)
        int32_t rax_7 = (rdi_5 + 1).d
        rsi[1].d = rax_7
        
        if (rax_7 s> *(rsi + 0xc))
            sub_1405c4fe0(rsi)
        
        int32_t* rcx_18 = (rdi_5 << 6) + *rsi
        rcx_18[5] = var_114_1[0]
        rcx_18[6] = var_110_1[0]
        *rcx_18 = rcx_10
        rcx_18[7] = var_10c_1[0]
        *(rcx_18 + 8) = rax_2
        rcx_18[4] = zmm6[0]
        *(rcx_18 + 0x20) = var_108_1
        *(rcx_18 + 0x30) = 0
        rcx_18[0xe] = i_8.d
        
        if (i_8.d != 0)
            sub_140638750(&rcx_18[0xc], i_8.d, 0)
            memcpy(*(rcx_18 + 0x30), i_17, i_8.d << 2)
        else
            rcx_18[0xf] = i_8.d
        
        if (zmm6[0] >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
        else
            zmm6 = zx.o(0)
        
        zmm13.d = zmm13.d f+ zmm6[0]
        i_10.b = 1
        
        if (i_17 != 0)
            sub_140a74f90(i_17)
        
        i_20 = zx.q(i_22)
        break
    
    if (i_10.b == 0)
        uint64_t i_21 = 0
        zmm8 = var_154_1
        zmm9 = var_150_1
        zmm10 = var_14c_1
        float var_118_3 = zmm7[0]
        int32_t var_114_2 = zmm8.d
        int32_t var_110_2 = zmm9.d
        float var_10c_2 = zmm10[0]
        int32_t i_29 = i_20.d
        uint64_t i_23 = 0
        i_19 = 0
        int32_t var_f0_2 = rbx_1.d
        
        if (rbx_1.d == 0)
            i_10 = result_1
        else
            sub_140638750(&i_19, rbx_1.d, 0)
            i_21 = i_19
            i_10 = result_1
            i_23 = i_21
            memcpy(i_21, i_10, rbx_1.d << 2)
            rbx_1 = zx.q(var_f0_2)
            zmm10 = var_10c_2
            zmm9 = var_110_2
            zmm8 = var_114_2
            i_22 = i_29
        
        zmm6 = sub_140ad62e0(zmm7, zx.o(0), zmm14, arg1[0x15].d)
        
        if (rbx_1.d s> 0)
            int64_t rsi_2 = 0
            i_20 = i_10 - i_21
            i_10 = zx.q(rbx_1.d)
            uint64_t i_27 = i_21
            int64_t i_2
            
            do
                zmm3 = *(arg1[0x16] + rsi_2 + 0x10)
                
                if (zmm3 f<= 0f)
                    zmm0 = zx.o(0)
                else
                    zmm0, zmm6 = sub_140ad62e0(*(i_20 + i_27), zx.o(0), zmm14, zmm3)
                
                *i_27 = zmm0[0]
                rsi_2 += 0x14
                i_27 += 4
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
            i_21 = i_23
            rsi = arg5
        
        if (not(zmm6[0] <= 9.99999975e-06f))
            int64_t rdi_7 = sx.q(rsi[1].d)
            int32_t rax_13 = (rdi_7 + 1).d
            rsi[1].d = rax_13
            
            if (rax_13 s> *(rsi + 0xc))
                sub_1405c4fe0(rsi)
            
            int32_t* rax_16 = (rdi_7 << 6) + *rsi
            rax_16[4] = zmm6[0]
            rax_16[5] = zmm8.d
            rax_16[6] = zmm9.d
            rax_16[7] = zmm10[0]
            *rax_16 = i_22
            *(rax_16 + 8) = rax
            *(rax_16 + 0x20) = var_148_1
            *(rax_16 + 0x30) = 0
            rax_16[0xe] = rbx_1.d
            
            if (rbx_1.d != 0)
                sub_140638750(&rax_16[0xc], rbx_1.d, 0)
                memcpy(*(rax_16 + 0x30), i_21, rbx_1.d << 2)
            else
                rax_16[0xf] = 0
            
            if (zmm6[0] >= 0f)
                zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
            else
                zmm6 = zx.o(0)
            
            zmm13.d = zmm13.d f+ zmm6[0]
        
        if (i_21 != 0)
            sub_140a74f90(i_21)
    
    result = result_1
    
    if (result != 0)
        sub_140a74f90(result)
    
    rdx = arg3
    rcx += 1
    r13 = arg1

int32_t r13_3 = 0

while (true)
    void* arg_18
    arg_18.d = r13_3
    
    if (r13_3 s< 0 || r13_3 s>= arg4[1].d)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    int64_t result_4 = 0
    int32_t* rcx_33 = (sx.q(r13_3) << 6) + *arg4
    result_3 = 0
    uint64_t rbx_3 = sx.q(rcx_33[0xe])
    int64_t rax_17 = *(rcx_33 + 8)
    zmm6 = rcx_33[4]
    int32_t r15_3 = *rcx_33
    int64_t rdi_9 = *(rcx_33 + 0x30)
    float var_150_2 = rcx_33[6][0]
    float var_154_2 = rcx_33[5][0]
    float var_158_2 = zmm6[0]
    float var_14c_2 = rcx_33[7][0]
    int32_t var_168_1 = r15_3
    int32_t var_130_4 = rbx_3.d
    arg2 = *(rcx_33 + 0x20)
    
    if (rbx_3.d != 0)
        sub_140638750(&result_3, rbx_3.d, 0)
        result_4 = result_3
        memcpy(result_4, rdi_9, (rbx_3 << 2).d)
        rbx_3 = zx.q(var_130_4)
        zmm6 = var_158_2
        r15_3 = var_168_1
    else
        var_12c = 0
    
    i_20.b = 0
    uint64_t i_16 = zx.q(arg1[0x17].d)
    
    if (rbx_3.d != i_16.d)
        rbx_3 = 0
        int32_t var_130_5 = 0
        
        if (var_12c != i_16.d)
            sub_1405dadb0(&result_3, i_16.d)
            rbx_3 = zx.q(var_130_5)
            result_4 = result_3
            zmm6 = var_158_2
            r15_3 = var_168_1
        
        if (i_16.d s> 0)
            uint64_t i_7 = i_16
            uint64_t i_3
            
            do
                void** rdi_10 = sx.q(rbx_3.d)
                rbx_3 = zx.q((rdi_10 + 1).d)
                int32_t var_130_6 = rbx_3.d
                
                if (rbx_3.d s> var_12c)
                    sub_1406105e0(&result_3)
                    rbx_3 = zx.q(var_130_6)
                    result_4 = result_3
                    zmm6 = var_158_2
                
                int64_t rcx_38 = result_4 + (rdi_10 << 2)
                
                if (rcx_38 != 0)
                    *rcx_38 = zmm6[0]
                
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
            r15_3 = var_168_1
            rsi = arg5
    
    for (int32_t i_4 = 0; i_4 s>= 0; i_4 += 1)
        if (i_4 s>= rsi[1].d)
            break
        
        if (*((sx.q(i_4) << 6) + *rsi) == r15_3)
            i_20.b = 1
            break
    
    if (i_20.b == 0)
        i_20 = 0
        zmm7 = var_154_2
        zmm8 = var_150_2
        zmm9 = var_14c_2
        float var_118_4 = zmm6[0]
        float var_114_3 = zmm7[0]
        int32_t var_110_3 = zmm8.d
        int32_t var_10c_3 = zmm9.d
        int64_t var_180_1 = rax_17
        uint64_t i_24 = 0
        i_19 = 0
        int32_t var_f0_3 = rbx_3.d
        
        if (rbx_3.d != 0)
            sub_140638750(&i_19, rbx_3.d, 0)
            i_20 = i_19
            i_24 = i_20
            memcpy(i_20, result_4, rbx_3.d << 2)
            rbx_3 = zx.q(var_f0_3)
            zmm9 = var_10c_3
            zmm8 = var_110_3
            zmm7 = var_114_3
            var_180_1 = rax_17
        
        zmm6 = sub_140ad62e0(zx.o(0), zmm6, zmm14, arg1[0x15].d)
        
        if (rbx_3.d s> 0)
            int64_t rsi_3 = 0
            uint64_t i_9 = zx.q(rbx_3.d)
            uint64_t i_28 = i_20
            int64_t rcx_44 = result_4 - i_20
            int64_t var_e0_1 = rcx_44
            uint64_t i_5
            
            do
                zmm0 = *(i_28 + rcx_44)
                zmm3 = *(arg1[0x16] + rsi_3 + 0x10)
                
                if (not(zmm3 f<= 0f))
                    zmm0, zmm6 = sub_140ad62e0(zx.o(0), zmm0, zmm14, zmm3)
                    rcx_44 = var_e0_1
                
                *i_28 = zmm0[0]
                rsi_3 += 0x14
                i_28 += 4
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
            i_20 = i_24
            r13_3 = arg_18.d
            rsi = arg5
        
        int64_t rdi_12 = sx.q(rsi[1].d)
        int32_t rax_21 = (rdi_12 + 1).d
        rsi[1].d = rax_21
        
        if (rax_21 s> *(rsi + 0xc))
            sub_1405c4fe0(rsi)
        
        int32_t* rax_24 = (rdi_12 << 6) + *rsi
        rax_24[4] = zmm6[0]
        rax_24[5] = zmm7[0]
        rax_24[6] = zmm8.d
        rax_24[7] = zmm9.d
        *rax_24 = r15_3
        *(rax_24 + 8) = var_180_1
        *(rax_24 + 0x20) = arg2
        *(rax_24 + 0x30) = 0
        rax_24[0xe] = rbx_3.d
        
        if (rbx_3.d != 0)
            sub_140638750(&rax_24[0xc], rbx_3.d, 0)
            memcpy(*(rax_24 + 0x30), i_20, rbx_3.d << 2)
        else
            rax_24[0xf] = 0
        
        if (zmm6[0] >= 0f)
            zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
        else
            zmm6 = zx.o(0)
        
        zmm13.d = zmm13.d f+ zmm6[0]
        
        if (i_20 != 0)
            sub_140a74f90(i_20)
    
    if (result_4 != 0)
        sub_140a74f90(result_4)
    
    r13_3 += 1

result.b = zmm13.d f> 9.99999975e-06f
return result
