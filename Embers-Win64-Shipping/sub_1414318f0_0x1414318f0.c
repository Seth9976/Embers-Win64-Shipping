// 函数: sub_1414318f0
// 地址: 0x1414318f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
char var_1e8
char* var_1b0 = &var_1e8
var_1e8 = 0
void*** (* var_1b8)() = j_sub_140597fc0
int64_t* rax_4 = sub_140a756e0(&var_1b8, &data_143958018) + 0x10
int64_t* var_1e0 = rax_4
int64_t rcx_1 = *rax_4
int64_t rcx_2 = rax_4[2]
char var_1c8 = 0
int64_t result_1 = rax_4[3]
rax_4[3] = &var_1e0
int64_t* rax_5 = var_1e0
rax_5[4].d += 1
sub_1423cc240(arg1)
int64_t* r12 = arg2[5]
var_1b8 = arg2[0x14]
int64_t* rax_8 = (*(*r12 + 8))(r12)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_5 = *rax_8
int64_t var_188 = rcx_5
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x1a)
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x100
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
int16_t var_70
var_70:1.b = *(rcx_5 + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
var_b0.o = *arg5
int128_t var_a8 = arg5[1]
var_98 = arg5[2]
sub_1410e0180(arg1, &var_188)
int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_9 = rbx_2 + 0x32

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x34)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_9 = rbx_2 + 0x32

wchar16 const* const rcx_9 = u"ClearSceneCaptureContent"
*(arg1 + 0x30) = rax_9
wchar16 const i

do
    i = *rcx_9
    *(rcx_9 + rbx_2 - u"ClearSceneCaptureContent") = i
    rcx_9 = &rcx_9[1]
while (i != 0)
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_12[0x27]

if (rax_10 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x140)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_12[0x27]

*(arg1 + 0x30) = rax_10
void**** rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_12
*(arg1 + 8) = &rcx_12[1]
sub_1405d11b0(rcx_12, &var_188, rbx_2)
arg1[0x1c4] = 1
sub_1405d19b0(arg1, &var_188)
int64_t var_78
arg1[0x178] = var_78:7.b
void*** (* rax_14)() = var_1b8
arg1[0x179] = 0
arg1[0x1c4] = 1
int128_t zmm6 = *(rax_14 + 0x258)
int64_t* rax_16 = (*(*r12 + 0x18))(r12, &var_1b8)
int128_t var_198 = zmm6
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14199cee0(arg1, 1, 1, &data_14399f5e0, 0, 0, 0, 0, *rax_16, &var_198)
sub_141096650(arg1)
(*(*arg2 + 8))(arg2, arg1)

if (arg6 != 0)
    char var_218_1 = 0
    zmm3 = sub_14199f740(arg1, *(*(*arg3 + 8))(arg3), arg7, nullptr, zmm2, zmm3)

int64_t r12_2 = *(arg4 + 0x10)
int64_t* rax_22 = (*(*arg3 + 8))(arg3)
void*** rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* r15_1 = *rax_22
void* rax_23 = &rbx_7[0xa]

if (rax_23 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x58)
    rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rbx_7[0xa]

*(arg1 + 0x30) = rax_23
*(arg1 + 0x14) += 1
**(arg1 + 8) = rbx_7
*(arg1 + 8) = &rbx_7[1]
rbx_7[1] = 0
*rbx_7 = &data_142d56628
rbx_7[2].d = *arg5
*(rbx_7 + 0x14) = *(arg5 + 4)
rbx_7[3].d = *(arg5 + 8)
*(rbx_7 + 0x1c) = *(arg5 + 0xc)
rbx_7[4].d = arg5[1].d
*(rbx_7 + 0x24) = *(arg5 + 0x14)
rbx_7[5].d = *(arg5 + 0x18)
*(rbx_7 + 0x2c) = *(arg5 + 0x1c)
rbx_7[6].d = arg5[2].d
*(rbx_7 + 0x34) = *(arg5 + 0x24)
rbx_7[7].d = *(arg5 + 0x28)
*(rbx_7 + 0x3c) = *(arg5 + 0x2c)
rbx_7[8] = r15_1
rbx_7[9] = r12_2

if ((*(*r15_1 + 8))(r15_1) == 0)
    int64_t* rcx_26 = rbx_7[8]
    
    if ((*(*rcx_26 + 0x18))(rcx_26) == 0)
        int64_t* rcx_27 = rbx_7[8]
        
        if ((*(*rcx_27 + 0x20))(rcx_27) == 0)
            int64_t* rcx_28 = rbx_7[8]
            (*(*rcx_28 + 0x10))(rcx_28)

int64_t* rcx_29 = rbx_7[9]

if ((*(*rcx_29 + 8))(rcx_29) == 0)
    int64_t* rcx_30 = rbx_7[9]
    
    if ((*(*rcx_30 + 0x18))(rcx_30) == 0)
        int64_t* rcx_31 = rbx_7[9]
        
        if ((*(*rcx_31 + 0x20))(rcx_31) == 0)
            int64_t* rcx_32 = rbx_7[9]
            (*(*rcx_32 + 0x10))(rcx_32)

int64_t var_80
sub_1405d1550(&var_80)
int64_t result = sub_1414336b0(arg1, arg2, 1, zmm3)

if (var_1c8 == 0)
    int64_t* rax_52 = var_1e0
    char var_1c8_1 = 1
    rax_52[4].d -= 1
    int64_t* rcx_35 = var_1e0
    
    if (rcx_2 != rcx_35[2])
        sub_140b16b40(rcx_35, rcx_2)
        rcx_35 = var_1e0
    
    *rcx_35 = rcx_1
    result = result_1
    var_1e0[3] = result

__security_check_cookie(rax_1 ^ &var_238)
return result
