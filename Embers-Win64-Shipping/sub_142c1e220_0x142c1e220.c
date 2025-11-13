// 函数: sub_142c1e220
// 地址: 0x142c1e220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x80)
int32_t r14 = *(rbx + 0x28)
int32_t rsi = *(rbx + 0x2c)
int32_t arg_20 = 0
int32_t arg_10 = 0
int32_t rax_3

if (r14 != 0 || rsi != 0)
    uint32_t r9 = zx.d(*(arg1 + 6))
    arg_10 = 0
    arg_20 = 0
    void* r10_1 = *(rbx + 0x40)
    rax_3 = (*(r10_1 + 0x190))(rbx, *(rbx + 0x48), arg5, zx.q((r9 << 8) + zx.d(*(arg1 + 7))), 
        &arg_20, &arg_10, *(r10_1 + 0x80))

int32_t rbp

if ((r14 == 0 && rsi == 0) || rax_3 == 0)
    rbp.b = 0
label_142c1e31c:
    void* rcx_4 = *(rbx + 0x18)
    int32_t r12_1 = *(rbx + 0x20)
    int32_t r14_1 = sx.d(zx.w(*(arg1 + 2)) * 0x100 + zx.w(*(arg1 + 3)))
    uint32_t rdx_4 = *(rcx_4 + 0x2c)
    
    if (rdx_4 == 0)
        rdx_4 = sub_142bf7870(rcx_4)
    
    arg5.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* _mm_cvtepi32_ps(zx.o(r14_1)).d
    arg5.d = arg5.d f/ float.s(zx.q(rdx_4))
    *arg4 = arg5.d
    
    if (rbp.b != 0)
        goto label_142c1e375
else
    int32_t var_48
    int32_t var_44
    sub_142bf3a00(rbx, arg3, &var_48, &var_44)
    rbp.b = 1
    int32_t rcx_3 = arg_20 - var_48
    arg_10 -= var_44
    arg_20 = rcx_3
    
    if (r14 == 0)
        goto label_142c1e31c
    
    *arg4 = _mm_cvtepi32_ps(zx.o(rcx_3)).d
label_142c1e375:
    
    if (rsi != 0)
        *arg6 = _mm_cvtepi32_ps(zx.o(arg_10)).d
        return arg6
int32_t rsi_1 = *(rbx + 0x24)
void* rcx_5 = *(rbx + 0x18)
int32_t rdi_1 = sx.d(zx.w(*(arg1 + 4)) * 0x100 + zx.w(*(arg1 + 5)))
uint32_t rdx_7 = *(rcx_5 + 0x2c)

if (rdx_7 == 0)
    rdx_7 = sub_142bf7870(rcx_5)

arg5.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* _mm_cvtepi32_ps(zx.o(rdi_1)).d
arg5.d = arg5.d f/ float.s(zx.q(rdx_7))
*arg6 = arg5.d
return arg6
