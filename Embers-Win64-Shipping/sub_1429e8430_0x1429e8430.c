// 函数: sub_1429e8430
// 地址: 0x1429e8430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (arg2 == 1)
    rax = arg1[0x68]
else if (arg2 != 2)
    if (arg2 != 4)
        sub_1429da010(arg1, 1, "Invalid reference frame", arg4)
        return zx.q(*arg1)
    
    rax = arg1[0x6a]
else
    rax = arg1[0x69]

if (rax u> 0xe)
    sub_1429da010(arg1, 1, "Invalid reference frame map", arg4)
    return zx.q(*arg1)

int32_t* rdx_2 = *(arg1 + 0x4578) + 0x70 + sx.q(rax) * 0xd0

if (rdx_2[1] == arg3[1] && *rdx_2 == *arg3 && rdx_2[6] == arg3[6] && rdx_2[5] == arg3[5])
    sub_142a216f0(arg3, rdx_2)
    return zx.q(*arg1)

sub_1429da010(arg1, 1, "Incorrect buffer dimensions", arg4)
return zx.q(*arg1)
