// 函数: sub_1420cf6e0
// 地址: 0x1420cf6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10

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
    
    r10 = rax_3 + 1
else
    r10 = 0

float zmm1 = arg5 * 16777216f
int32_t r9_4 = not.d(neg.d(sbb.d(arg4.d, arg4.d, arg3 != 0)) - 1) & r10
int32_t r8_3 = 0xf

if (r9_4 u< 0xf)
    r8_3 = r9_4

int32_t rax_4 = int.d(zmm1 + zmm1 + 0.5f)
zmm1 = arg6 * 16777216f
int32_t var_14 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
arg6 = int.d(arg4:4.d * 2f + 0.5f) s>> 1
sub_140ad4690(arg1, arg2, r8_3, (int.d(arg4.d * 2f + 0.5f) s>> 1).q, (rax_4 s>> 1).q)
return arg1
