// 函数: sub_140f2b790
// 地址: 0x140f2b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* rsi = nullptr
int32_t var_170

if (*(arg4 + 0x40) != 0)
    int64_t* rcx = *(arg4 + 0x38)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg4 + 0x40) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg4 + 0x38)
        
        (*(*rcx_1 + 0x48))(rcx_1, &var_170)
        *(arg4 + 0x20) = var_170.o

int32_t var_158
sub_140e13cf0(*(arg4 + 0x10), &var_158)
float zmm7[0x4] = *(arg4 + 0x24)
float zmm10[0x4] = *(arg4 + 0x2c)
int128_t zmm9
zmm9.d = (*(arg4 + 0x28)).d f+ *(arg4 + 0x20)
float zmm8[0x4] = *(arg2 + 4)
zmm7[0] = zmm7[0] + zmm10[0]
int32_t rdi = *(arg4 + 0x4c)
float zmm6[0x4] = zmm8
zmm9.d = zmm9.d f+ var_158
zmm6[0] = zmm6[0] - zmm7[0]
uint64_t var_150

if (rdi != 0)
    float temp0_1[0x4] = _mm_min_ss((*(sub_140e13cf0(*(arg4 + 0x10), &var_150) + 4))[0], zmm6[0])
    
    if (rdi == 1)
        zmm6 = temp0_1
    else if (rdi == 2)
        zmm8[0] = zmm8[0] - temp0_1[0]
        zmm8[0] = zmm8[0] * 0.5f
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm7 = zmm8
        zmm7[0] = zmm7[0] - zmm10[0]
        zmm6 = temp0_1
    else if (rdi == 3)
        zmm7 = zmm8
        zmm7[0] = zmm7[0] - temp0_1[0]
        zmm7[0] = zmm7[0] - zmm10[0]
        zmm6 = temp0_1

float zmm0_1[0x4] = var_158
zmm10 = arg5
void* rcx_4 = *(arg4 + 0x10)
zmm10[0] = zmm10[0] f+ *(arg4 + 0x20)
float var_178 = zmm0_1[0]
bool cond:0 = data_143e20cf4 != 0
float var_174 = zmm6[0]
float var_16c = zmm10[0]
var_170 = 0x3f800000
float var_168 = zmm7[0]
uint128_t var_130
uint64_t var_120
uint128_t var_f8
uint128_t zmm0_2
uint128_t zmm1_1

if (cond:0)
    uint128_t* rax_7 = sub_140e111c0(rcx_4 + 0x1c8)
    char rcx_6 = 0
    
    if (*(rax_7 + 0x18) == 0)
        zmm1_1 = var_130
    else
        zmm0_2 = zx.o(rax_7[1].q)
        rcx_6 = 1
        zmm1_1 = *rax_7
        var_120 = zmm0_2.q
        var_120.d = (zmm0_2 ^ data_142d3f780).d
    
    if (rcx_6 == 0)
        goto label_140f2ba2d
    
    uint64_t var_e8_2 = var_120
    var_f8 = zmm1_1
    goto label_140f2b96c

int128_t* rax_6 = sub_140e111c0(rcx_4 + 0x1c8)
int128_t zmm9_1
int32_t zmm10_1

if (*(rax_6 + 0x18) == 0)
label_140f2ba2d:
    zmm6 = *(arg2 + 8)
    var_130.q = var_178.q
    var_170.o = data_142d8c9b0
    float var_160_1 = zmm10[0]
    float var_15c_1 = zmm7[0]
    int32_t var_114
    uint128_t zmm7_1
    uint128_t zmm8_1
    zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408b8950(&var_114, &var_170, arg2 + 0x1c)
    zmm1_1.d = zmm8_1.d f* zmm6[0]
    uint128_t zmm0_3
    zmm0_3.d = zmm7_1.d f* zmm6[0]
    char var_fc
    char var_fc_1 = var_fc ^ ((*(arg2 + 0x34) ^ var_fc) & 1)
    zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
    var_130:8.d = zmm6[0]
    zmm0_3.d = zmm0_3.d f+ *(arg2 + 0x10)
    var_120:4.d = zmm8_1.d
    int32_t var_118_1 = zmm7_1.d
    var_130:0xc.d = zmm1_1.d
    var_120.d = zmm0_3.d
else
    zmm1_1 = zx.o(rax_6[1].q)
    var_f8 = *rax_6
    uint64_t var_e8_1 = zmm1_1.q
label_140f2b96c:
    uint64_t* rdi_4 = *(arg4 + 0x10) + 0x1f8
    char var_e0_1 = 1
    
    if (rdi_4[3].d != 0)
        int64_t* rcx_7 = rdi_4[2]
        
        if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
            if (rdi_4[3].d != 0)
                rsi = rdi_4[2]
            
            int64_t var_13c
            (*(*rsi + 0x48))(rsi, &var_13c)
            *rdi_4 = var_13c
    
    zmm0_2 = zx.o(*rdi_4)
    int32_t var_148 = (*(arg2 + 8)).d
    zmm1_1 = *(arg2 + 0x10)
    int128_t* var_190_1 = &var_148
    var_150 = zmm0_2.q
    int32_t var_144_1 = (*(arg2 + 0xc)).d
    int32_t var_140_1 = zmm1_1.d
    zmm9_1, zmm10_1 =
        sub_140dd8200(&var_130, &var_178, &var_170, &var_f8, &var_150, var_190_1, arg2 + 0x1c)

int64_t* rbx_1 = *(arg4 + 0x18)

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_a0 = *(arg4 + 0x10)
uint128_t var_d8 = var_130
uint128_t var_c8 = var_120.o
int64_t var_100
uint64_t var_a8 = var_100
uint128_t var_110
uint128_t var_b8 = var_110

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_140d99900(arg3, &var_d8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

zmm9_1.d = zmm9_1.d f+ zmm10_1
int512_t result
result.o = zmm9_1
__security_check_cookie(rax_1 ^ &var_1b8)
return result
