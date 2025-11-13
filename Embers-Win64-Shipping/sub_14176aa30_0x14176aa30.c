// 函数: sub_14176aa30
// 地址: 0x14176aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
void var_48
int32_t arg_8
int32_t arg_10
float (* rcx_1)[0x4]
int32_t entry_r9
int32_t zmm1[0x8]
int32_t zmm2_1[0x8]
int128_t zmm7_1
rcx_1, zmm1, zmm2_1, zmm7_1 =
    sub_141778690(&arg1[0xa], &arg1[8], &(*arg1)[0x23], entry_r9, &var_58, &arg_8, &var_48, &arg_10)
int32_t zmm6 = (zx.o(0)).d
*arg2 = 0
void* var_78
void* var_68
float zmm0_1[0x4]
float zmm3_1[0x4]

if (arg3 == 1)
    if (arg6[0xe].b == 0)
    label_14176ab61:
        zmm2_1[0].o = arg6[7]
        goto label_14176ab66
    
    zmm3_1 = arg6[7]
    zmm2_1[0].o = arg_8
    zmm3_1[0] = zmm3_1[0] + (*arg1)[0x63]
    zmm1[0].o = zmm2_1[0].o
    zmm1[0].o = __andps_xmmxud_memxud(zmm1[0].o, data_142d3f770)
    
    if (not(zmm1[0] f<= zmm3_1[0]))
        if (zmm2_1[0] f<= 0f)
            zmm3_1[0] = zmm3_1[0] f+ zmm2_1[0]
            zmm2_1[0].o = zmm3_1
        else
            zmm2_1[0] = zmm2_1[0] f- zmm3_1[0]
        
        zmm0_1 = *(arg5 + 0x40)
        
        if (not(zmm0_1[0] > 0f))
            zmm0_1 = arg6[0x11]
        
        zmm3_1 = *(arg5 + 0x44)
        
        if (not(zmm3_1[0] > 0f))
            zmm3_1 = arg6[0x12]
        
        zmm1[0].o = zmm7_1
        var_68.d = zmm2_1[0]
        rcx_1.b = arg6[0xf] == 0
        var_78.b = rcx_1.b
        zmm2_1[0].o = zmm0_1
        zmm1, zmm2_1, zmm6, zmm7_1 =
            sub_140038d90(arg1, zmm1, zmm2_1, zmm3_1, var_78.b, &var_58, var_68.d, &(*arg1)[0x26])
        *arg2 += 1
else if (arg3 != 0)
    if (arg3 != 2)
        goto label_14176ab61
    
    zmm2_1[0].o = zx.o(0)
label_14176ab66:
    zmm3_1 = arg_8
    zmm0_1 = zmm2_1[0].o
    zmm0_1[0] = zmm0_1[0] + (*arg1)[0x63]
    zmm1[0].o = zmm3_1
    zmm1[0].o = __andps_xmmxud_memxud(zmm1[0].o, data_142d3f770)
    
    if (not(zmm1[0] f<= zmm0_1[0]))
        if (zmm3_1[0] <= 0f)
            zmm2_1[0] = zmm2_1[0] f+ zmm3_1[0]
            zmm3_1 = zmm2_1[0].o
        else
            zmm3_1[0] = zmm3_1[0] f- zmm2_1[0]
        
        zmm1[0].o = *(arg5 + 0x2c)
        
        if (not(zmm1[0] f> 0f))
            zmm1[0].o = *arg6
        
        zmm1, zmm2_1, zmm6, zmm7_1 = sub_14176b2c0(arg1, zmm1[0].o, &var_58, zmm3_1)
        *arg2 += 1

if (arg4 == 1)
    if (arg6[0xe].b == 0)
    label_14176ac5c:
        zmm1[0].o = arg6[7]
        goto label_14176ac61
    
    zmm2_1[0].o = arg6[7]
    zmm1[0].o = arg_10
    zmm0_1 = zmm2_1[0].o
    zmm0_1[0] = zmm0_1[0] + (*arg1)[0x63]
    
    if (not(zmm1[0] f<= zmm0_1[0]))
        zmm1[0] = zmm1[0] f- zmm2_1[0]
        zmm2_1[0].o = *(arg5 + 0x40)
        bool cond:1_1 = zmm2_1[0] f> zmm6
        zmm1[0].o = _mm_max_ss(zmm1[0], zmm6)
        
        if (not(cond:1_1))
            zmm2_1[0].o = arg6[0x11]
        
        zmm3_1 = *(arg5 + 0x44)
        
        if (not(zmm3_1[0] f> zmm6))
            zmm3_1 = arg6[0x12]
        
        var_68.d = zmm1[0]
        rcx_1.b = arg6[0xf] == 0
        zmm1[0].o = zmm7_1
        var_78.b = rcx_1.b
        sub_140038d90(arg1, zmm1, zmm2_1, zmm3_1, var_78.b, &var_48, var_68.d, &(*arg1)[0x26])
        *arg2 += 1
else if (arg4 != 0)
    if (arg4 != 2)
        goto label_14176ac5c
    
    zmm1[0].o = zx.o(0)
label_14176ac61:
    zmm3_1 = arg_10
    zmm0_1 = zmm1[0].o
    zmm0_1[0] = zmm0_1[0] + (*arg1)[0x63]
    
    if (not(zmm3_1[0] <= zmm0_1[0]))
        zmm3_1[0] = zmm3_1[0] f- zmm1[0]
        zmm1[0].o = *(arg5 + 0x2c)
        bool cond:0_1 = zmm1[0] f> zmm6
        float temp0_4[0x4] = _mm_max_ss(zmm3_1[0], zmm6)
        
        if (not(cond:0_1))
            zmm1[0].o = *arg6
        
        sub_14176b2c0(arg1, zmm1[0].o, &var_48, temp0_4)
        *arg2 += 1

return arg2
