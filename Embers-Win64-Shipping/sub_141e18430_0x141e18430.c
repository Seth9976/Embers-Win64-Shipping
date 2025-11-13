// 函数: sub_141e18430
// 地址: 0x141e18430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0xa0)
int64_t r9_1 = sx.q(arg2) * 2
int64_t* rdx = rax + (r9_1 << 3)
uint64_t result = zx.q(*(rax + (r9_1 << 3) + 8))
void* rcx

if (result.w == 0xffff || *rdx == -1)
    rcx = *arg3
label_141e18472:
    rdx[1].w = *(rcx + 0x410)
    *rdx = *(rcx + 0x408)
    *(rdx + 0xa) = *(rcx + 0x412)
    int64_t arg_8 = *arg3
    result = *(arg1 + 0x40)
    int64_t* rcx_1 = *(result + (r9_1 << 3) + 8)
    
    if (rcx_1 != 0)
        return (*(*rcx_1 + 8))(rcx_1, &arg_8)
else
    rcx = *arg3
    
    if (result.w != *(rcx + 0x410))
        goto label_141e18472
return result
