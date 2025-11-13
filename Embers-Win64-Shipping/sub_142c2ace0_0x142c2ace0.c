// 函数: sub_142c2ace0
// 地址: 0x142c2ace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx
void** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2ad33:
    int128_t* rcx_2 = *rax_1
    rbx = &data_14369a5d0
    int128_t* const rax_2 = &data_14369a5d0
    
    if (rcx_2 != 0)
        rax_2 = rcx_2
    
    if (*(rax_2 + 0x18) u>= 0xa)
        rbx = rax_2[1].q
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2ad33
    
    rbx = &data_14369a5d0
void* rax_4 = sub_142c1f430(sub_142c1f570(rbx, arg3), arg4)
uint32_t rdx_2

if (zx.w(*(rax_4 + 2)) * 0x100 + zx.w(*(rax_4 + 3)) != 0xffff)
    rdx_2 = (zx.d(*(rax_4 + 2)) << 8) + zx.d(*(rax_4 + 3))
else
    rdx_2 = 0xffff

if (arg5 != 0)
    *arg5 = rdx_2

if (arg6 != 0)
    *arg6 = sub_142c1ec40(rbx, rdx_2)

int64_t result
result.b = zx.w(*(rax_4 + 2)) * 0x100 + zx.w(*(rax_4 + 3)) != 0xffff
return result
