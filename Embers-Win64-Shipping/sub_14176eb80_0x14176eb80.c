// 函数: sub_14176eb80
// 地址: 0x14176eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm14 = arg5[0].o
int32_t* result = arg2
*arg2 = 0

if (*(arg4 + 0x22) == 0)
    return result

void* arg_28
void* rsi = arg_28
int32_t rax = *(rsi + 0x20)
int32_t r15 = *(rsi + 0x28)
int32_t rbx = *(rsi + 0x24)

if ((*(rsi + 0xa8) != 0 || *(rsi + 0xa9) != 0) && rax != 2 && r15 != 2 && rbx != 2)
    int32_t* rax_1 = sub_14176eff0(arg1, &arg_28, arg5, arg4, rsi)
    int32_t rax_2 = rax_1[1]
    *result += *rax_1
    result[1] += rax_2
    return result

int128_t zmm13 = zx.o(0)
int32_t var_c0
int64_t var_98
float zmm7
float zmm8
float zmm9[0x4]
float zmm11[0x4]
float zmm12[0x4]

if ((*(rsi + 0xaa) != 0 || *(rsi + 0xab) != 0) && rax != 2)
    int32_t zmm1_1[0x8]
    int32_t zmm3_1[0x8]
    arg3, zmm1_1, arg5, zmm3_1, zmm7 = sub_141779950(&arg1[0xa], &arg1[0xb], &var_98, &arg_28)
    zmm1_1[0].o = arg_28.d
    zmm1_1[0] = zmm1_1[0] f- *(rsi + 0x90)
    
    if (not(__andps_xmmxud_memxud(zmm1_1[0].o, data_142d3f770)[0] f<= arg1[0x19][0]))
        if (*(rsi + 0xaa) == 0)
            arg5[0].o = zx.o(0)
        else
            arg5[0].o = *(arg4 + 0x38)
            
            if (not(arg5[0] f> 0f))
                arg5[0].o = *(rsi + 0xb4)
        
        if (*(rsi + 0xab) == 0)
            zmm3_1[0].o = zx.o(0)
        else
            zmm3_1[0].o = *(arg4 + 0x3c)
            
            if (not(zmm3_1[0] f> 0f))
                zmm3_1[0].o = *(rsi + 0xb8)
        
        var_c0.q = &var_98
        zmm1_1[0].o = zmm14
        arg3, arg5, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13, zmm14 = sub_14176e1f0(arg1, zmm1_1, 
            arg5, zmm3_1, *(rsi + 0xb0) == 0, var_c0, zmm1_1[0], &(*arg1)[0x52])
    
    result[1] += 1

if (*(rsi + 0xac) != 0 || *(rsi + 0xad) != 0)
    int32_t var_c0_1
    
    if (r15 == 2)
    label_14176ef67:
        
        if (rbx != 2)
            var_c0_1 = 1
        label_14176ef7c:
            arg5[0].o = zmm14
            int32_t* rax_7 = sub_14176fcc0(arg1, &arg_28, arg3, arg4, rsi, var_c0_1)
            *result += *rax_7
            result[1] += rax_7[1]
    else
        if (rbx == 2)
            if (r15 == 2)
                goto label_14176ef67
            
            var_c0_1 = 2
            goto label_14176ef7c
        
        arg5[0].o = *(arg4 + 8)
        float var_28_1 = zmm7
        float var_38_1 = zmm8
        float var_48_1[0x4] = zmm9
        float var_58_1[0x4] = zmm11
        float var_68_1[0x4] = zmm12
        int32_t var_a8
        int32_t zmm1_2[0x8]
        int32_t zmm2[0x8]
        int32_t zmm3_2[0x8]
        zmm1_2, zmm2, zmm3_2 = sub_141778400(&arg1[0xa], &arg1[0xb], arg5[0].o, &var_a8, &arg_28)
        zmm9 = (*arg1)[0x29]
        zmm11 = (*arg1)[0x2a]
        float zmm8_1 = zmm9[0]
        zmm12 = arg1[0xa][0]
        float var_a4
        zmm11[0] = zmm11[0] * var_a4
        zmm2[0].o = var_a8
        zmm3_2[0].o = (*arg1)[0x2b]
        float zmm5_1 = zmm12[0] * var_a4
        float var_a0
        zmm8_1 = zmm8_1 * var_a0 - zmm11[0]
        float zmm7_1 = zmm11[0] f* zmm2[0]
        zmm12[0] = zmm12[0] * var_a0
        zmm1_2[0].o = zmm3_2[0].o
        zmm8_1 = zmm8_1 + zmm8_1
        zmm7_1 = zmm7_1 - zmm12[0]
        zmm9[0] = zmm9[0] f* zmm2[0]
        zmm1_2[0] = zmm1_2[0] f* zmm8_1
        zmm5_1 = zmm5_1 - zmm9[0]
        zmm9[0] = zmm9[0] * zmm8_1
        zmm7_1 = zmm7_1 + zmm7_1
        zmm1_2[0] = zmm1_2[0] f+ zmm2[0]
        zmm11[0] = zmm11[0] * zmm8_1
        zmm5_1 = zmm5_1 + zmm5_1
        zmm11[0] = zmm11[0] * zmm7_1
        zmm9[0] = zmm9[0] * zmm5_1
        zmm9[0] = zmm9[0] - zmm11[0]
        zmm12[0] = zmm12[0] * zmm5_1
        zmm12[0] = zmm12[0] * zmm7_1
        zmm11[0] = zmm11[0] - zmm12[0]
        zmm9[0] = zmm9[0] f+ zmm1_2[0]
        zmm1_2[0].o = zmm3_2[0].o
        zmm1_2[0] = zmm1_2[0] f* zmm7_1
        zmm12[0] = zmm12[0] - zmm9[0]
        zmm1_2[0] = zmm1_2[0] f+ var_a4
        zmm3_2[0] = zmm3_2[0] f* zmm5_1
        zmm3_2[0] = zmm3_2[0] f+ var_a0
        zmm11[0] = zmm11[0] f+ zmm1_2[0]
        zmm1_2[0].o = arg_28.d
        zmm12[0] = zmm12[0] f+ zmm3_2[0]
        var_98 = (_mm_unpacklo_ps(zmm9, zmm11[0].q)).q
        float temp0_3[0x4] = __maxss_xmmss_memss((*(rsi + 0x98))[0], *(rsi + 0x94))
        float var_90_1 = zmm12[0]
        zmm1_2[0] = zmm1_2[0] f- temp0_3[0]
        
        if (not(__andps_xmmxud_memxud(zmm1_2[0].o, data_142d3f770)[0] <= arg1[0x19][0]))
            if (*(rsi + 0xac) == 0)
                zmm2[0].o = zx.o(0)
            else
                zmm2[0].o = *(arg4 + 0x38)
                
                if (not(zmm2[0] f> zmm13.d))
                    zmm2[0].o = *(rsi + 0xb4)
            
            if (*(rsi + 0xad) == 0)
                zmm3_2[0].o = zx.o(0)
            else
                zmm3_2[0].o = *(arg4 + 0x3c)
                
                if (not(zmm3_2[0] f> zmm13.d))
                    zmm3_2[0].o = *(rsi + 0xb8)
            
            var_c0.q = &var_98
            zmm1_2[0].o = zmm14
            int32_t* var_c8_2
            var_c8_2.b = *(rsi + 0xb0) == 0
            sub_14176e1f0(arg1, zmm1_2, zmm2, zmm3_2, var_c8_2.b, var_c0, zmm1_2[0], &(*arg1)[0x53])
        
        result[1] += 1

return result
