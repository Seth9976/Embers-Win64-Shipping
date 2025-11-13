// 函数: sub_142102870
// 地址: 0x142102870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int512_t zmm0
zmm0.o = zx.o(0)
int128_t var_28 = zx.o(0)
char rax_1 = (*(rax + 0xd0))(zmm0, &var_28)
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_2[5]

if (rax_1 == 0)
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_2
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142f18bc8
    void** const rax_10
    rax_10.b = 0
    rcx_2[2].b = 0
    *(rcx_2 + 0x14) = 0
    *(rcx_2 + 0x1c) = 0
    return &(*u"/Engine/Private/EvaluateSurfelMaterial.usf")[0x20]

int32_t rbp = var_28:8.d
int32_t rsi = var_28:0xc.d
int32_t r14 = var_28:4.d
int32_t r15 = var_28.d

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_2[5]

*(arg2 + 0x30) = rax_2
int64_t* rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_2
*(arg2 + 8) = &rcx_2[1]
*(rcx_2 + 0x14) = r15
rcx_2[3].d = r14
*(rcx_2 + 0x1c) = rbp
rcx_2[4].d = rsi
rcx_2[1] = 0
*rcx_2 = &data_142f18bc8
rcx_2[2].b = 1

if (arg3 != 0)
    *arg3 = var_28.d
    arg3[1] = var_28:4.d
    arg3[2] = var_28:8.d
    arg3[3] = var_28:0xc.d

int32_t result
result.b = 1
return result
