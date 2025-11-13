// 函数: sub_1427479f0
// 地址: 0x1427479f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xd0] == 0)
    return 

char rax_2 = (*(*arg1 + 0x4d8))()
int64_t r9_1 = *arg1

if ((*(r9_1 + 0x4c8))(arg1, arg4, arg5, r9_1) == 0)
    return 

int64_t rdx = *arg2
void* rbx_1 = arg1[0x14]
char rax_4
int512_t zmm2
rax_4, zmm2 = sub_1427457d0(arg1, (*(rdx + 0x80))(arg2, rdx))
void* const r9_2 = 0x6b8

if (rax_4 != 0)
    r9_2 = 0x688

int32_t rbp_1

if (rbx_1 == 0)
    rbp_1 = 0
else
    rbp_1 = *(rbx_1 + 0xc)

int32_t r12_1 = *(arg1 + 0xc)
char rbx_2 = *(arg1 + 0x2b4)
int32_t var_58
sub_141eb5f10(&var_58, rax_2, 0, r9_2 + arg1)
int32_t var_50
int32_t rdx_3 = var_50

if ((rbx_2 & 1) != 0)
    rdx_3 |= 4

if ((rbx_2 & 4) != 0)
    rdx_3 |= 8

int32_t rdx_4 = rdx_3 | 0x43
int32_t rcx_4 = var_58
int32_t var_54
int32_t var_38_1 = var_54
uint32_t var_30 = zx.d(arg3 + 1)
int64_t rax_7 = *arg2
int32_t var_3c_1 = rcx_4
int32_t var_2c_1 = rcx_4
int32_t var_40 = rbp_1
int32_t var_28_1 = r12_1
int32_t var_34_1 = rdx_4
int32_t var_24_1 = rdx_4
int64_t* rax_8 = (*(rax_7 + 0x80))(arg2)
int64_t rdx_5 = *rax_8
int64_t* rax_9 = (*(rdx_5 + 0x30))(rax_8, rdx_5)

if (rax_9 != 0)
    (*(*rax_9 + 0x358))(rax_9, 
        "D:"
    "/Build/++UE4/Sync/Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Private/DestructibleComponent."
    "cpp", 
        0x649)

int64_t* rax_12 = (*(*arg2 + 0x80))(arg2)
zmm2.o = 0x3f8147ae
int64_t r8 = *rax_12
float* rax_13 = (*(r8 + 0x48))(rax_12, &var_58, r8)
zmm2.o = 0x3f000000
float zmm4_1 = *(arg1 + 0x70c)
float zmm3_1 = _mm_min_ss(
    _mm_min_ss((rax_13[5] - rax_13[2]) * 0.5f, (rax_13[4] - rax_13[1]) * 0.5f), 
    (rax_13[3] - *rax_13) * 0.5f) f* arg1[0xe1].d

if (not(zmm3_1 < zmm4_1))
    zmm4_1 = _mm_min_ss(arg1[0xe2].d, zmm3_1)

(*(*arg2 + 0xd8))(arg2, zmm4_1, zmm2, zmm3_1)
(*(*arg2 + 0xa8))(arg2, sub_140acc970(&var_58, &var_40))
(*(*arg2 + 0x98))(arg2, sub_140acc970(&var_58, &var_30))
int64_t r8_1
r8_1.b = 1
(*(*arg2 + 0xf8))(arg2, 2, r8_1)
int64_t r8_2
r8_2.b = 1
(*(*arg2 + 0xf8))(arg2, 1, r8_2)
int64_t r8_3
r8_3.b = 1
(*(*arg2 + 0xf8))(arg2, 8, r8_3)

if (rax_9 != 0)
    (*(*rax_9 + 0x360))(rax_9)
