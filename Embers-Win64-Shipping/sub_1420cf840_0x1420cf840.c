// 函数: sub_1420cf840
// 地址: 0x1420cf840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9

if (arg3 != 1)
    int32_t rdx = 0x10
    
    if (arg3 - 1 u< 0x10000)
        rdx = 0
    
    uint32_t rcx_1 = (arg3 - 1) u>> 0x10
    
    if (arg3 - 1 u< 0x10000)
        rcx_1 = arg3 - 1
    
    if (rcx_1 u>= 0x100)
        rcx_1 u>>= 8
        rdx += 8
    
    int32_t rax_2 = rdx + 4
    
    if (rcx_1 u< 0x10)
        rax_2 = rdx
    
    uint32_t r8_2 = rcx_1 u>> 4
    
    if (rcx_1 u< 0x10)
        r8_2 = rcx_1
    
    int32_t rdx_1 = rax_2 + 2
    
    if (r8_2 u< 4)
        rdx_1 = rax_2
    
    uint32_t rcx_3 = r8_2 u>> 2
    
    if (r8_2 u< 4)
        rcx_3 = r8_2
    
    int32_t rax_3 = rdx_1 + 1
    
    if (rcx_3 u< 2)
        rax_3 = rdx_1
    
    if (rcx_3 == 0)
        rax_3 = 0
    
    r9 = rax_3 + 1
else
    r9 = 0

int32_t r8_3 = 0xa
int32_t r10_4 = not.d(neg.d(sbb.d(arg5, arg5, arg3 != 0)) - 1) & r9

if (r10_4 u< 0xa)
    r8_3 = r10_4

int64_t zmm0 = *arg6
float zmm1 = arg6[1].d
int32_t rdx_2 = int.d(fconvert.t(arg4[2]))
int32_t var_18 = int.d(fconvert.t(*arg4))
int32_t var_10 = rdx_2
zmm0.d = zmm0.d f* 16777216f
int32_t var_14 = int.d(fconvert.t(arg4[1]))
int32_t rax_6 = int.d(zmm0.d)
zmm0 = *(arg6 + 4)
int32_t var_28 = rax_6
zmm0.d = zmm0.d f* 16777216f
int32_t var_24 = int.d(zmm0.d)
var_28.q = var_28.q
int32_t var_20 = int.d(zmm1 * 16777216f)
var_18.q = var_18.q
sub_140ad4810(arg1, arg2, r8_3, &var_18, &var_28)
return arg1
