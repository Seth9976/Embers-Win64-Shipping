// 函数: sub_14137c070
// 地址: 0x14137c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t rax_3 = arg3[2].d - arg3[1].d
int32_t var_194 = *(arg3 + 0x14) - *(arg3 + 0xc)
void* rdi = *arg2
void* rcx = *(*arg3 + 0x10)
void* var_190 = rcx
void* rax_7 = rcx

if (rcx != 0)
    *(rcx + 8) += 1
    rax_7 = var_190

int64_t var_180 = 0
void** const var_188 = &data_142f18ee0
void* var_178 = rax_7

if (rcx != 0)
    *(rcx + 8) += 1

int64_t var_170 = rax_3.q
sub_1405d1550(&var_190, &data_142f18ee0)
void var_158
sub_1423fa870(&var_158, &var_188, 0, *(rdi + 0x38), *(rdi + 0x30), *(rdi + 0x34), arg2[0x2a9].d, 
    0x3f800000)
sub_142420170(&var_158, &arg3[1])
int64_t* i = *arg4
int64_t rax_10 = sx.q(arg4[1].d)
int128_t var_168 = data_142f2cb30

for (; i != &i[rax_10 * 3]; i = &i[3])
    int16_t* rdi_1
    
    if (i[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *i
    
    int64_t rax_11 = sub_1423de050()
    uint128_t zmm1_1 = zx.o(i[2].d)
    int32_t var_1a8
    var_1a8.q = &data_14399f5e0
    int32_t var_1b0
    var_1b0.q = &var_168
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(*(i + 0x14)))
    int32_t var_1b8
    var_1b8.q = rax_11
    sub_142409910(&var_158, _mm_cvtepi32_ps(zmm1_1), zmm2_1, rdi_1, var_1b8, var_1b0, var_1a8)

sub_14240e4b0(&var_158, arg1, 0, 1)
sub_1423fef60(&var_158)
sub_1405d1550(&var_178)
var_188 = &data_142f18c08
int64_t result = sub_1405d1550(&var_180)
int32_t i_2 = arg4[1].d
int64_t* rbx_1 = *arg4

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_1
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_1 = &rbx_1[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_1 = *arg4

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
