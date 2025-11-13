// 函数: sub_14227d030
// 地址: 0x14227d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
int32_t* arg_30
int32_t* r10 = arg_30
char var_98 = 0
int32_t r11 = *r10
bool rax

if (r11 != 1)
    if (r11 == 2 || r11 == 3)
        rax = 9.99999975e-05f f>= r10[1]
    else
        rax = true
    
    goto label_14227d08c

uint64_t (* var_78)(int64_t* arg1, int64_t* arg2)
int64_t* var_58
char arg_38

if (9.99999975e-05f f< r10[1] || 9.99999975e-05f f< r10[2] || not(9.99999975e-05f f>= r10[3]))
    rax = false
label_14227d08c:
    
    if (rax == 0)
        int32_t rax_4 = arg3[1].d
        *(arg1 + 0x40) = *arg3
        *(arg1 + 0x48) = rax_4
        int32_t rax_5 = arg4[1].d
        *(arg1 + 0x4c) = *arg4
        *(arg1 + 0x54) = rax_5
        int32_t* rax_6 = *(arg2 + 0xa0)
        void* var_20_2 = arg1
        int32_t* var_48_2 = r10
        
        if (rax_6 != 0)
            arg2 = rax_6
        
        int64_t* var_40_2 = arg4
        arg_30 = arg2
        var_58 = &arg_10
        int64_t var_50_2 = arg5
        int64_t* var_38_2 = arg3
        void** var_30_2 = &arg_30
        char* var_28_2 = &arg_38
        char* var_18_2 = &var_98
        int64_t** var_70_2 = &var_58
        var_78 = j_sub_14225b9e0
        sub_142269e40(&arg2[0x3c], &var_78)
        return zx.d(var_98)

int64_t zmm0 = *arg3
char var_90 = arg_38
int32_t rax_2 = arg3[1].d
*(arg1 + 0x40) = zmm0
*(arg1 + 0x48) = rax_2
uint32_t result = arg4[1].d
*(arg1 + 0x4c) = *arg4
*(arg1 + 0x54) = result
result.b = 0
zmm0.d = arg4[1].d.d f- arg3[1].d
float zmm1 = *arg4 f- *arg3
float zmm2 = *(arg4 + 4) f- *(arg3 + 4)
int32_t var_60_1 = zmm0.d
zmm0.d = zmm0.d f* zmm0.d
char var_88 = 0
float var_68 = zmm1
float var_64_1 = zmm2
int32_t* var_10 = arg2
arg_30.b = 0
zmm0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d).q
int32_t var_80 = zmm0.d

if (zmm0.d f<= 9.99999975e-05f)
    return result

void* var_30_1 = arg1
var_58 = &var_10
int64_t* var_48_1 = arg3
char* var_50_1 = &var_90
int64_t* var_28_1 = arg4
float* var_40_1 = &var_68
int32_t* var_38_1 = &var_80
char* var_20_1 = &var_88
int64_t* var_18_1 = &arg_30
int64_t** var_70_1 = &var_58
var_78 = j_sub_14225b4c0
sub_142269e40(&arg2[0x3c], &var_78)
return zx.q(arg_30.b)
