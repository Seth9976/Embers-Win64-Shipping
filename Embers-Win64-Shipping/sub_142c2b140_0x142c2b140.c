// 函数: sub_142c2b140
// 地址: 0x142c2b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rdx
int128_t* const r10
int32_t** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2b186:
    int32_t* rcx_2 = *rax_1
    r10 = &data_14369a5d0
    int32_t* rdx_1 = &data_14369a5d0
    
    if (rcx_2 != 0)
        rdx_1 = rcx_2
    
    if (rdx_1[6] u>= 0xa)
        rdx = *(rdx_1 + 0x10)
    else
        rdx = &data_14369a5d0
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2b186
    
    r10 = &data_14369a5d0
    rdx = &data_14369a5d0
uint16_t r8 = zx.w(*(rdx + 4))
uint64_t r9 = zx.q(*(rdx + 5))

if (0 != r8 * 0x100 + r9.w)
    r10 = &rdx[zx.q(r8.b) * 0x10] + r9

return sub_142c1fb00(r10, arg3, arg4, arg5) __tailcall
