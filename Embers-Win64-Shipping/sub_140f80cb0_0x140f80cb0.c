// 函数: sub_140f80cb0
// 地址: 0x140f80cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t var_1a8 = data_143e1e020
int64_t var_1a0 = data_143e1e028
void* rax_4 = data_143e1e030
void* var_198 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
uint32_t zmm10[0x4]
uint32_t var_98[0x4] = zmm10

if (sub_140f4a520(arg4, &var_1a8) == 0 || *(arg4 + 0x5c) != 0)
label_140f810ae:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t r12_1 = arg1[0x9b].d
    
    if (r12_1 != 1)
        zmm10 = *(arg4 + 0x28)
    else
        zmm10 = *(arg4 + 0x2c)
    
    zmm6 = zmm10
    zmm6[0] = zmm6[0] f/ *(arg3 + 8)
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
    temp0_1[0] = temp0_1[0] f+ *(arg1 + 0x3fc)
    *(arg1 + 0x3fc) = temp0_1[0]
    
    if (sub_140e66040(data_143e29f28) f> *(arg1 + 0x3fc))
        goto label_140f810ae
    
    char rax_6 = sub_140f4a5f0(arg1[0x76])
    
    if (rax_6 == 0 && *(arg1 + 0x4e4) != rax_6)
        goto label_140f810ae
    
    bool (* var_1c8)(int64_t* arg1, int64_t arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm6, 
        int128_t arg5 @ zmm7, int128_t arg6 @ zmm8)
    uint32_t var_1b8
    int512_t zmm1
    
    if (*(arg1 + 0x4dc) == 0)
        int32_t var_1c0_1 = 0
        var_1c8 = sub_140f90770
        var_1c8.o = var_1c8.o
        *(arg1 + 0x4dc) = 1
        zmm1, zmm6 = sub_140e20c50(arg1, &var_1b8, zx.o(0), sub_140dd1ff0(&var_1a8, arg1, &var_1c8))
        int64_t* var_1b0
        
        if (var_1b0 != 0)
            var_1b0[1].d -= 1
            
            if (var_1b0[1].d == 1)
                (**var_1b0)(var_1b0)
                int32_t temp1_1 = *(var_1b0 + 0xc)
                *(var_1b0 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_1b0 + 8))(var_1b0, 1)
    
    uint32_t zmm0_2[0x4] = arg1[0x81].d
    int64_t rax_10 = *arg1
    zmm0_2[0] = zmm0_2[0] f- zmm6[0]
    arg1[0x81].d = zmm0_2[0]
    (*(rax_10 + 0x250))(arg1, arg3, zmm6 ^ data_142d3f780, zx.q(*(arg1 + 0x4e4)))
    int32_t var_d4
    int32_t var_d4_1 = var_d4 & 0xffffff00
    zmm1.o = zx.o(0)
    char var_188 = 1
    int64_t var_180_1 = 0
    int64_t var_178_1 = 0
    char var_168_1 = 0
    int64_t var_160
    __builtin_memset(&var_160, 0, 0x88)
    int32_t var_d8_1 = 0x20702
    
    if (sub_140e19840(arg1, zmm1) == 0)
        int64_t* rax_12 = sub_140f2cda0(&arg1[1], &var_1a8)
        sub_140f63c00(sub_140eae530(&var_188, sub_140f2cda0(&arg1[1], &var_1c8)), rax_12)
        int128_t zmm9 = *(arg3 + 0x1c)
        int128_t zmm8 = *(arg3 + 0x28)
        zmm1.o = zmm9
        zmm6 = *(arg3 + 0x20)
        float zmm3 = *(arg3 + 0x24)
        uint32_t zmm7[0x4] = *(arg4 + 0x18)
        uint32_t zmm5_1[0x4] = *(arg4 + 0x1c)
        zmm6[0] = zmm6[0] f* zmm3
        zmm1.d = zmm1.d f* zmm8.d
        zmm1.d = zmm1.d f- zmm6[0]
        zmm7[0] = zmm7[0] f- *(arg3 + 0x2c)
        zmm7[0] = zmm7[0] f- *(arg3 + 0x2c)
        float zmm4_1 = 1f f/ zmm1.d
        zmm8.d = zmm8.d f* zmm4_1
        zmm9.d = zmm9.d f* zmm4_1
        zmm8.d = zmm8.d f* zmm7[0]
        zmm5_1[0] = zmm5_1[0] f- *(arg3 + 0x30)
        zmm5_1[0] = zmm5_1[0] f- *(arg3 + 0x30)
        arg1[0x9a].b = 1
        zmm6[0] = zmm6[0] f* zmm4_1
        zmm9.d = zmm9.d f* zmm5_1[0]
        zmm6[0] = zmm6[0] f* zmm7[0]
        zmm9.d = zmm9.d f- zmm6[0]
        zmm8.d = zmm8.d f- zmm3 * zmm4_1 f* zmm5_1[0]
        *(arg1 + 0x4cc) = zmm9.d
        arg1[0x99].d = zmm8.d
    
    if (not(zmm0_2[0] f== 0f))
        if (r12_1 != 1)
            var_1b8 = zmm10[0]
            int32_t var_1b4_1 = 0
        else
            var_1c8:4.d = zmm10[0]
            var_1c8.d = 0
        
        bool (** rax_15)(int64_t* arg1, int64_t arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm6, 
            int128_t arg5 @ zmm7, int128_t arg6 @ zmm8) = &var_1b8
        
        if (r12_1 == 1)
            rax_15 = &var_1c8
        
        zmm0_2 = *rax_15
        zmm1.o = *(rax_15 + 4)
        zmm0_2[0] = zmm0_2[0] f+ arg1[0x99].d
        zmm1.d = zmm1.d f+ *(arg1 + 0x4cc)
        arg1[0x99].d = zmm0_2[0]
        *(arg1 + 0x4cc) = zmm1.d
    
    sub_140e51550(arg2, &var_188)
    sub_140597700(&var_188)

__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
