// 函数: sub_140e1ff10
// 地址: 0x140e1ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg6
int32_t i = 0
int128_t zmm1 = arg2[1]
int128_t var_a8 = *arg2
int128_t var_98 = zmm1
var_98:8.q = arg1
int128_t var_88 = arg2[2]

if (arg8 == 0)
    arg8 = 0
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx = *(arg1 + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    arg8 = 1
    
    if (*(arg1 + 0x190) == 0)
        arg8 = 0

if (*(arg3 + 0x130) s> 0)
    int64_t rsi_1 = 0
    int128_t zmm10 = 0x3f000000
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    
    do
        void* rax_5 = *(arg3 + 0x128)
        void* rbx_1 = arg3 + 8
        
        if (rax_5 != 0)
            rbx_1 = rax_5
        
        void* rbx_2 = rbx_1 + rsi_1
        
        if (data_143e24361 != 0)
        label_140e201b9:
            int32_t rax_11
            rax_11, zmm10 =
                sub_140e1f680(*(rbx_2 + 0x38), &var_a8, rbx_2, arg4, arg5, arg6, arg7, arg8)
            
            if (r14 s>= rax_11)
                rax_11 = r14
            
            r14 = rax_11
        else
            zmm6 = *(arg4 + 8)
            zmm9 = *arg4
            zmm7 = *(arg4 + 0xc)
            zmm8 = *(arg4 + 4)
            float zmm5 = *rbx_2
            float zmm4 = *(rbx_2 + 4)
            zmm1.d = zmm7.d f- zmm8.d
            float zmm3 = zmm4 f* *(rbx_2 + 0x24)
            zmm4 = zmm4 f* *(rbx_2 + 0x28)
            zmm1.d = zmm1.d f* zmm10.d
            float zmm2 = (zmm6.d f- zmm9.d) f* zmm10.d f* data_1439ae6b0
            zmm1.d = zmm1.d f* data_1439ae6b0
            zmm9.d = zmm9.d f- zmm2
            int32_t var_d8 = (*(rbx_2 + 0x2c)).d
            zmm6.d = zmm6.d f+ zmm2
            float var_c8_1 = zmm3
            float var_c4_1 = zmm4
            zmm8.d = zmm8.d f- zmm1.d
            zmm7.d = zmm7.d f+ zmm1.d
            float var_d0_1 = zmm5 f* *(rbx_2 + 0x1c)
            int32_t var_d4_1 = (*(rbx_2 + 0x30)).d
            float var_cc_1 = zmm5 f* *(rbx_2 + 0x20)
            float var_f8
            int32_t zmm6_1
            int32_t zmm7_1
            int32_t zmm8_1
            zmm6_1, zmm7_1, zmm8_1 = sub_140dbe170(&var_d8, &var_f8)
            int32_t var_f4
            int32_t var_f0
            int32_t var_ec
            
            if (not(var_f0 f< zmm9.d) && not(zmm6_1 f< var_f8) && not(var_ec f< zmm8_1)
                    && zmm7_1 f>= var_f4)
                goto label_140e201b9
            
            float zmm2_1 = *(rbx_2 + 8)
            zmm1 = *(rbx_2 + 0x10)
            float zmm3_1 = zmm2_1 f* *(rbx_2 + 4)
            int64_t var_b4_1 = 0
            zmm2_1 = zmm2_1 f* *rbx_2
            float var_ac_1 = zmm3_1
            int32_t var_c0 = *(rbx_2 + 0xc)
            int32_t var_bc_1 = zmm1.d
            float var_b8_1 = zmm2_1
            float var_e8
            zmm6, zmm7, zmm8 = sub_140dbe170(&var_c0, &var_e8)
            int32_t var_e0
            int32_t var_dc
            int32_t var_e4
            
            if (var_e0.d f< zmm9.d || zmm6.d f< var_e8 || var_dc.d f< zmm8.d)
                if (*(*(rbx_2 + 0x38) + 0x2c) == 2)
                    goto label_140e201b9
            else if (zmm7.d f>= var_e4 || *(*(rbx_2 + 0x38) + 0x2c) == 2)
                goto label_140e201b9
        
        i += 1
        rsi_1 += 0x48
    while (i s< *(arg3 + 0x130))

return zx.q(r14)
