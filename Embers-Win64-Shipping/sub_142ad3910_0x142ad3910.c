// 函数: sub_142ad3910
// 地址: 0x142ad3910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 

if (arg2 != 2)
    return sub_142a6b8d0(arg1, arg2, arg3, arg4) __tailcall

int32_t rax_2 = sub_142a695b0(arg1, 2, arg4)
int32_t r9_2 = ((zx.q((sub_142a695b0(arg1, 1, arg4) * 3).d) << 2) + 0x11).d s% 0x13
int32_t rcx_5
rcx_5.b = r9_2 s>= (r9_2 s>> 0x1f & 0xffffffed) + 0xc
int32_t rdx_6 = mods.dp.d(sx.q(arg3), rcx_5 + 0xc) + rax_2

if (r9_2 s< (r9_2 s>> 0x1f & 0xffffffed) + 0xc)
    bool cond:1_1 = arg3 s>= 0
    
    if (arg3 s<= 0)
        goto label_142ad39cc
    
    if (rax_2 s>= 5 || rdx_6 s< 5)
        cond:1_1 = arg3 s>= 0
    label_142ad39cc:
        
        if (not(cond:1_1) && rax_2 s> 5 && rdx_6 s<= 5)
            rdx_6 -= 1
    else
        rdx_6 += 1

sub_142a6c030(arg1, 2, (rdx_6 + 0xd) s% 0xd)
(*(*arg1 + 0x158))(arg1, 5, arg4)
