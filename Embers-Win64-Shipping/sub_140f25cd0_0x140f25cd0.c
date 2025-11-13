// 函数: sub_140f25cd0
// 地址: 0x140f25cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rsi = nullptr
int32_t var_178

if (*(arg2 + 0x48) != 0)
    int64_t* rcx = *(arg2 + 0x40)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg2 + 0x48) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg2 + 0x40)
        
        (*(*rcx_1 + 0x48))(rcx_1, &var_178)
        *(arg2 + 0x28) = var_178.o

float zmm8[0x4] = *(arg2 + 0x28)
float zmm7[0x4] = *(arg2 + 0x30)
float zmm6[0x4] = arg3[2]
zmm8[0] = zmm8[0] + zmm7[0]
int32_t rdi = *(arg2 + 0x20)
float zmm10[0x4] = zmm6
zmm10[0] = zmm10[0] - zmm8[0]
uint64_t var_180

if (rdi != 0)
    float temp0_1[0x4] = _mm_min_ss((*sub_140e13cf0(*(arg2 + 0x10), &var_180))[0], zmm10[0])
    
    if (rdi == 1)
        zmm10 = temp0_1
    else if (rdi == 2)
        zmm6[0] = zmm6[0] - temp0_1[0]
        zmm6[0] = zmm6[0] * 0.5f
        zmm6[0] = zmm6[0] + zmm8[0]
        zmm8 = zmm6
        zmm8[0] = zmm8[0] - zmm7[0]
        zmm10 = temp0_1
    else if (rdi == 3)
        zmm8 = zmm6
        zmm8[0] = zmm8[0] - temp0_1[0]
        zmm8[0] = zmm8[0] - zmm7[0]
        zmm10 = temp0_1

if (*(arg2 + 0x48) != 0)
    int64_t* rcx_3 = *(arg2 + 0x40)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (*(arg2 + 0x48) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg2 + 0x40)
        
        (*(*rcx_4 + 0x48))(rcx_4, &var_178)
        *(arg2 + 0x28) = var_178.o

zmm7 = *(arg2 + 0x2c)
int128_t zmm11 = *(arg2 + 0x34)
float zmm9[0x4] = arg3[3]
zmm7[0] = zmm7[0] f+ zmm11.d
int32_t rdi_3 = *(arg2 + 0x24)
zmm6 = zmm9
zmm6[0] = zmm6[0] - zmm7[0]

if (rdi_3 != 0)
    float temp0_3[0x4] = _mm_min_ss((*(sub_140e13cf0(*(arg2 + 0x10), &var_180) + 4))[0], zmm6[0])
    
    if (rdi_3 == 1)
        zmm6 = temp0_3
    else if (rdi_3 == 2)
        zmm9[0] = zmm9[0] - temp0_3[0]
        zmm9[0] = zmm9[0] * 0.5f
        zmm9[0] = zmm9[0] + zmm7[0]
        zmm7 = zmm9
        zmm7[0] = zmm7[0] f- zmm11.d
        zmm6 = temp0_3
    else if (rdi_3 == 3)
        zmm7 = zmm9
        zmm7[0] = zmm7[0] - temp0_3[0]
        zmm7[0] = zmm7[0] f- zmm11.d
        zmm6 = temp0_3

zmm8[0] = zmm8[0] f+ *arg3
zmm7[0] = zmm7[0] f+ arg3[1]
int128_t* rcx_7 = *(arg2 + 0x10) + 0x1c8
bool cond:0 = data_143e20cf4 != 0
void* r14_1 = arg1[1]
float var_174 = zmm8[0]
float var_170 = zmm7[0]
float var_188 = zmm10[0]
float var_184 = zmm6[0]
var_178 = 0x3f800000
uint128_t var_148
uint64_t var_138
uint128_t var_110
uint128_t zmm0_1
uint128_t zmm1_1

if (cond:0)
    uint128_t* rax_11 = sub_140e111c0(rcx_7)
    char rcx_8 = 0
    
    if (*(rax_11 + 0x18) == 0)
        zmm1_1 = var_148
    else
        zmm0_1 = zx.o(rax_11[1].q)
        rcx_8 = 1
        zmm1_1 = *rax_11
        var_138 = zmm0_1.q
        var_138.d = (zmm0_1 ^ data_142d3f780).d
    
    if (rcx_8 == 0)
        goto label_140f25ffc
    
    uint64_t var_100_2 = var_138
    var_110 = zmm1_1
    goto label_140f25f3b

int128_t* rax_10 = sub_140e111c0(rcx_7)

if (*(rax_10 + 0x18) == 0)
label_140f25ffc:
    zmm6 = *(r14_1 + 8)
    var_148.q = var_188.q
    var_178.o = data_142d8c9b0
    float var_168_1 = zmm8[0]
    float var_164_1 = zmm7[0]
    int32_t var_12c
    int32_t zmm7_1
    int32_t zmm8_1
    zmm7_1, zmm8_1 = sub_1408b8950(&var_12c, &var_178, r14_1 + 0x1c)
    zmm1_1.d = zmm6.d f* zmm8_1
    uint128_t zmm0_2
    zmm0_2.d = zmm6.d f* zmm7_1
    char var_114
    char var_114_1 = var_114 ^ ((*(r14_1 + 0x34) ^ var_114) & 1)
    zmm1_1.d = zmm1_1.d f+ *(r14_1 + 0xc)
    var_148:8.d = zmm6[0]
    zmm0_2.d = zmm0_2.d f+ *(r14_1 + 0x10)
    var_138:4.d = zmm8_1
    int32_t var_130_1 = zmm7_1
    var_148:0xc.d = zmm1_1.d
    var_138.d = zmm0_2.d
else
    zmm1_1 = zx.o(rax_10[1].q)
    var_110 = *rax_10
    uint64_t var_100_1 = zmm1_1.q
label_140f25f3b:
    uint64_t* rdi_7 = *(arg2 + 0x10) + 0x1f8
    char var_f8_1 = 1
    
    if (rdi_7[3].d != 0)
        int64_t* rcx_9 = rdi_7[2]
        
        if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
            if (rdi_7[3].d != 0)
                rsi = rdi_7[2]
            
            int64_t var_154
            (*(*rsi + 0x48))(rsi, &var_154)
            *rdi_7 = var_154
    
    zmm0_1 = zx.o(*rdi_7)
    int32_t var_160 = (*(r14_1 + 8)).d
    zmm1_1 = *(r14_1 + 0x10)
    int128_t* var_1a0_1 = &var_160
    var_180 = zmm0_1.q
    int32_t var_15c_1 = (*(r14_1 + 0xc)).d
    int32_t var_158_1 = zmm1_1.d
    sub_140dd8200(&var_148, &var_188, &var_178, &var_110, &var_180, var_1a0_1, r14_1 + 0x1c)

int64_t* rbx_1 = *(arg2 + 0x18)

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_b0 = *(arg2 + 0x10)
uint128_t var_e8 = var_148
uint128_t var_d8 = var_138.o
int64_t var_118
uint64_t var_b8 = var_118
uint128_t var_128
uint128_t var_c8 = var_128

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

uint64_t result = sub_140d99900(*arg1, &var_e8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
