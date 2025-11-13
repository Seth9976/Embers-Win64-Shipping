// 函数: sub_140e20310
// 地址: 0x140e20310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t result_1 = 0
char r15 = 0
uint128_t zmm8 = arg2
sub_140d9a700(arg4)
float* rbx = &arg1[0xf5]
float* rax_2 = rbx

if (not(0f != *rbx))
    rax_2 = &arg1[0xf4]

arg2 = zx.o(arg1[0xf2])
int64_t* rcx_1 = arg1[0x124]
int64_t var_f0 = *rax_2
uint64_t var_150 = arg2.q
sub_140dbd970(rcx_1, &var_150, &var_f0, &data_143dbb1f0)
int64_t rax_3 = arg1[0x124]
char var_a4
char var_a4_1 = var_a4 | 1
bool cond:1 = (*(arg1 + 0x77a) & 8) == 0
float zmm0_1[0x4] = arg1[0xf2].d
int32_t zmm1 = *(arg1 + 0x794)
int64_t var_d0 = rax_3
int64_t var_c8 = rax_3
int64_t var_110 = arg5
char var_f8 = arg6
float var_c0 = zmm0_1[0]
int32_t var_bc = zmm1
int64_t var_b0 = zmm8.q
float var_a8 = arg3[0]
int64_t var_b8 = 0
void* var_108 = arg4
char var_f7_1

if (not(cond:1))
    var_f7_1 = 1

if (cond:1 || data_143e24360 == 0)
    var_f7_1 = 0

int64_t* rcx_2 = arg1[0x122]
int64_t* rsi = data_143e20d08
float zmm6[0x4]

if (rcx_2 == 0)
    zmm6 = 0x3f800000
else
    (*(*rcx_2 + 0xf8))(rcx_2)
    zmm6 = zmm0_1

(*(*rsi + 0x48))(rsi)
bool cond:3 = 0f != *rbx
int32_t var_fc = 0
int64_t* var_118 = &var_d0
float* rax_8 = rbx
zmm0_1[0] = zmm0_1[0] * zmm6[0]
float var_100 = zmm0_1[0]

if (not(cond:3))
    rax_8 = &arg1[0xf4]

zmm0_1 = *rax_8
float var_120 = zmm0_1[0]
int32_t var_11c = rax_8[1]
int64_t var_128 = 0
int64_t var_a0[0x5]
int64_t* rax_9
int32_t zmm7
rax_9, zmm7 = sub_140e191a0(arg1, &var_a0, zmm0_1)
sub_140d96150(&arg1[0x11], rax_9)

if (not(zmm7 f!= *rbx))
    rbx = &arg1[0xf4]

float zmm0_2 = *rbx
int32_t zmm1_1 = rbx[1]
var_150 = 0
float zmm2[0x4] = var_150.o
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
temp0[0] = zmm0_2
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x27)
temp0_1[0] = zmm1_1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
*(arg1 + 0xf8) = temp0_2
var_150.o = temp0_2

if (arg1[0x37].d == 0)
label_140e20524:
    int64_t* var_148
    char rax_19
    char rbx_2
    
    if (((*(arg1 + 0x734) - 2) & 0xfffffffd) == 0)
        int64_t* rbx_1 = arg1[2]
        uint64_t rcx_7 = 0
        int64_t* rsi_1 = data_143e20d08
        
        if (rbx_1 != 0)
            int32_t rax_14 = rbx_1[1].d
            
            if (rax_14 != 0)
                rbx_1[1].d = rax_14 + 1
                rax_14.b = 1
            
            if (rax_14.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rcx_7 = arg1[1]
        
        var_150 = rcx_7
        var_148 = rbx_1
        
        if (rbx_1 != 0)
            int32_t rax_15 = rbx_1[1].d
            rbx_1[1].d = rax_15
            
            if (rax_15 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r15 = 1
        rax_19 = (*(*rsi_1 + 0x108))(rsi_1, &var_150)
        rbx_2 = data_1439ae51f
    
    if (((*(arg1 + 0x734) - 2) & 0xfffffffd) != 0 || rax_19 != 0)
        rbx_2 = data_1439ae51c
    
    if ((r15 & 1) != 0 && var_148 != 0)
        var_148[1].d -= 1
        
        if (var_148[1].d == 1)
            (**var_148)(var_148)
            int32_t temp2_1 = *(var_148 + 0xc)
            *(var_148 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_148 + 8))(var_148, 1)
    
    char var_e8_1 = rbx_2
    char var_e7_1 = 1
    int64_t var_e0 = 0
    int32_t var_d8_1 = 0
    char var_140 = rbx_2
    char var_13f_1 = 1
    int64_t var_138 = 0
    int32_t var_130_1 = 0
    sub_1407473e0(&var_138, &var_e0)
    sub_140dd54d0(arg1, &arg1[0x35], &var_140, 0x20)
    sub_140745b20(&var_138)
    sub_140745b20(&var_e0)
else
    int64_t* rcx_6 = arg1[0x36]
    
    if (rcx_6 == 0)
        goto label_140e20524
    
    if ((*(*rcx_6 + 0x28))(rcx_6) == 0)
        goto label_140e20524

sub_140db57d0(&arg1[0x72], &result_1, &var_128)
sub_140d9f530(arg4)

if (var_f7_1 != 0)
    sub_140db8680(arg4, arg1[0xde])

int32_t result

if (*(arg4 + 0xd8) == 0)
    result = result_1
else
    result = sub_140db54a0(arg4, result_1, &var_128)
    result_1 = result

if (var_f7_1 != 0)
    sub_140db7b40(arg4)
    result = result_1

__security_check_cookie(rax_1 ^ &var_178)
return result
