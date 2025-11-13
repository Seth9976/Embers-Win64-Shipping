// 函数: sub_140fc10f0
// 地址: 0x140fc10f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg4
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r12

if (arg7 == 0)
    r12.b = 0x20
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
    
    if (*(arg1 + 0x190) == 0)
        r12.b = 0x20
    else
        r12.b = 0

uint128_t* var_d8
int32_t var_98
char var_64

if (*(arg1 + 0x3e0) != 0)
    int64_t* rbx_1 = data_143e243c8
    void* rax_7 =
        (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58170(&var_d8, "ColorPicker.AlphaBackground", 1), 0)
    char rcx_4 = *(arg3 + 0x34) & 1
    int128_t zmm1_1 = arg3[2].d
    int32_t zmm2_1 = arg3[1].d
    var_98 = (*(arg3 + 0xc)).d
    int32_t var_94_1 = zmm1_1.d
    var_64 = (rcx_4 * 2) | (var_64 & 0xfc)
    int64_t var_84_1 = *arg3
    int32_t var_90_1 = zmm2_1
    int64_t var_8c_1 = 0
    int128_t var_7c_1 = *(arg3 + 0x1c)
    int64_t var_6c_1 = *(arg3 + 0x2c)
    sub_140db3600(arg5, arg6, &var_98, rax_7, r12.b, &data_14399f5c0)

bool cond:1 = *(arg1 + 0x3b0) == 0
var_d8 = nullptr
int32_t var_cc = 0
uint128_t var_a8

if (not(cond:1))
    int64_t* rcx_6 = *(arg1 + 0x3a8)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (*(arg1 + 0x3b0) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x3a8)
        
        (*(*rcx_7 + 0x48))(rcx_7, &var_a8)
        *(arg1 + 0x390) = var_a8

double zmm8[0x2] = *(arg1 + 0x390)
arg4 = data_143dbb1f0.d
int128_t zmm7 = data_143dbb1f0:4.d
double var_c0[0x2] = zmm8
int32_t var_d0 = 1
sub_1405a4df0(&var_d8)
uint128_t* rdi_2 = var_d8
double temp0[0x2] = _mm_unpackhi_pd(zmm8, zmm8[0])
uint128_t zmm0_2
zmm0_2.d = arg4.d
_mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
zmm0_2.d = zmm7.d
zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
*rdi_2 = zmm0_2
rdi_2[1].q = temp0.q
uint128_t var_c8_1 = zmm0_2

if (*(arg1 + 0x3d8) != 0)
    int64_t* rcx_9 = *(arg1 + 0x3d0)
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        int64_t* rcx_10
        
        if (*(arg1 + 0x3d8) == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *(arg1 + 0x3d0)
        
        (*(*rcx_10 + 0x48))(rcx_10, &var_a8)
        *(arg1 + 0x3b8) = var_a8

int64_t r15_1 = sx.q(var_d0)
uint128_t zmm1 = *(arg1 + 0x3b8)
int32_t rbx_2 = (r15_1 + 1).d
var_c8_1.q = *arg3

if (rbx_2 s> var_cc)
    sub_1405a4df0(&var_d8)
    rdi_2 = var_d8

int64_t rcx_12 = r15_1 * 3
var_d8 = nullptr
int32_t var_d0_2 = rbx_2
*(rdi_2 + (rcx_12 << 3)) = var_c8_1
*(rdi_2 + (rcx_12 << 3) + 0x10) = zmm1:8.q

if (rbx_2 != 0)
    sub_140808f70(&var_d8, rbx_2, 0)
    memcpy(var_d8, rdi_2, rbx_2 * 0x18)
else
    int32_t var_cc_1 = 0

char rdx_8 = *(arg3 + 0x34) & 1
zmm1 = arg3[2].d
int32_t zmm2 = arg3[1].d
var_98 = (*(arg3 + 0xc)).d
r12.b |= 4
char var_64_1 = (rdx_8 * 2) | (var_64 & 0xfc)
int32_t var_94_2 = zmm1.d
int128_t* var_e0
var_e0.b = r12.b
uint64_t var_84_2 = *arg3
char var_e8
var_e8.d = *(arg1 + 0x3e4)
int32_t var_90_2 = zmm2
int64_t var_8c_2 = 0
uint128_t var_7c_2 = *(arg3 + 0x1c)
uint64_t var_6c_2 = *(arg3 + 0x2c)
sub_140db39e0(arg5, arg6 + 1, &var_98, &var_d8, var_e8, var_e0.b)

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

__security_check_cookie(rax_1 ^ &var_108)
int512_t zmm6
zmm6.o = var_38
return zx.q(arg6 + 1)
