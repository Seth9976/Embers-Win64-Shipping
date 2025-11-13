// 函数: sub_142c2a970
// 地址: 0x142c2a970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rax
int32_t** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2a9b3:
    int32_t* rcx_2 = *rax_1
    rax = &data_14369a5d0
    int32_t* rdx = &data_14369a5d0
    
    if (rcx_2 != 0)
        rdx = rcx_2
    
    if (rdx[6] u>= 0xa)
        rax = *(rdx + 0x10)
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2a9b3
    
    rax = &data_14369a5d0
return sub_142c1ee70(sub_142c1ecd0(rax, arg3, arg4) + 2, arg5, arg6, arg7) __tailcall
