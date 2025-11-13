// 函数: sub_140eea220
// 地址: 0x140eea220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rbx = *arg2
uint128_t zmm6
zmm6.d = 1f f/ *(arg3 + 8)
void var_128
int32_t* rax_3 = (*(*rbx + 0x38))(rbx, &var_128)
int32_t var_150 = 0x3f800000
uint128_t zmm7
zmm7.d = zmm6.d f* *rax_3
uint128_t zmm8
zmm8.d = zmm6.d f* rax_3[1]
int32_t var_14c = zmm7.d
int32_t var_148 = zmm8.d
void var_120
float* rax_5 = (*(*rbx + 0x18))(rbx, &var_120)
int128_t* rcx_3 = *(arg1 + 0xa0) + 0x1c8
bool cond:0 = data_143e20cf4 != 0
float zmm0 = zmm6.d * *rax_5
zmm6.d = zmm6.d f* rax_5[1]
float var_168 = zmm0
int32_t var_164 = zmm6.d
uint128_t var_118
uint64_t var_108
uint128_t var_e0
uint128_t zmm0_1
uint128_t zmm1_1

if (cond:0)
    uint128_t* rax_7 = sub_140e111c0(rcx_3)
    char rcx_4 = 0
    
    if (*(rax_7 + 0x18) == 0)
        zmm1_1 = var_118
    else
        zmm0_1 = zx.o(rax_7[1].q)
        rcx_4 = 1
        zmm1_1 = *rax_7
        var_108 = zmm0_1.q
        var_108.d = (zmm0_1 ^ data_142d3f780).d
    
    if (rcx_4 == 0)
        goto label_140eea406
    
    uint64_t var_d0_2 = var_108
    var_e0 = zmm1_1
    goto label_140eea345

int128_t* rax_6 = sub_140e111c0(rcx_3)

if (*(rax_6 + 0x18) == 0)
label_140eea406:
    zmm6 = *(arg3 + 8)
    var_118.q = var_168.q
    var_150.o = data_142d8c9b0
    int32_t var_140_1 = zmm7.d
    int32_t var_13c_1 = zmm8.d
    int32_t var_fc
    int32_t zmm7_1
    int32_t zmm8_1
    zmm7_1, zmm8_1 = sub_1408b8950(&var_fc, &var_150, arg3 + 0x1c)
    zmm1_1.d = zmm6.d f* zmm7_1
    uint128_t zmm0_2
    zmm0_2.d = zmm6.d f* zmm8_1
    char var_e4
    char var_e4_1 = var_e4 ^ ((*(arg3 + 0x34) ^ var_e4) & 1)
    zmm1_1.d = zmm1_1.d f+ *(arg3 + 0xc)
    var_118:8.d = zmm6.d
    zmm0_2.d = zmm0_2.d f+ *(arg3 + 0x10)
    var_108:4.d = zmm7_1
    int32_t var_100_1 = zmm8_1
    var_118:0xc.d = zmm1_1.d
    var_108.d = zmm0_2.d
else
    zmm1_1 = zx.o(rax_6[1].q)
    var_e0 = *rax_6
    uint64_t var_d0_1 = zmm1_1.q
label_140eea345:
    uint64_t* rbx_2 = *(arg1 + 0xa0) + 0x1f8
    char var_c8_1 = 1
    
    if (rbx_2[3].d != 0)
        int64_t* rcx_5 = rbx_2[2]
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (rbx_2[3].d == 0)
                rcx_6 = nullptr
            else
                rcx_6 = rbx_2[2]
            
            int64_t var_138
            (*(*rcx_6 + 0x48))(rcx_6, &var_138)
            *rbx_2 = var_138
    
    zmm0_1 = zx.o(*rbx_2)
    int128_t* var_178_1 = arg3 + 0x1c
    int32_t var_160 = (*(arg3 + 8)).d
    zmm1_1 = *(arg3 + 0x10)
    int128_t* var_180_1 = &var_160
    uint64_t var_130 = zmm0_1.q
    int32_t var_15c_1 = (*(arg3 + 0xc)).d
    int32_t var_158_1 = zmm1_1.d
    sub_140dd8200(&var_118, &var_168, &var_150, &var_e0, &var_130, var_180_1, var_178_1)

int64_t* rbx_3 = *(arg1 + 0xa8)

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t var_80 = *(arg1 + 0xa0)
uint128_t var_b8 = var_118
uint128_t var_a8 = var_108.o
int64_t var_e8
uint64_t var_88 = var_e8
uint128_t var_f8
uint128_t var_98 = var_f8

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

uint64_t result = sub_140d99900(arg4, &var_b8)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
