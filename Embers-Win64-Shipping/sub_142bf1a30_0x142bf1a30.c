// 函数: sub_142bf1a30
// 地址: 0x142bf1a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0x21e].d
int32_t rbp = 0
uint32_t count_1 = arg4

if (arg2 u>= rcx)
    goto label_142bf1ac5

int32_t rcx_1 = rcx - arg2

if (rcx_1 u> arg1[0x21f].d - arg1.d - 0xf0)
    if (sub_142b97060(*arg1, 0, arg6) == 0)
        arg1[3] = 0
        arg1[6] = 0
        arg1[7].b = 0
        arg1[8] = 0
        arg1[0x12].d = 0
        *(arg1 + 0x54) = 9
        arg1[0x220] = &arg1[0x21e]
        arg1[0x21f] = &arg1[0x21e]
        arg1[0x21e].d = 0
        goto label_142bf1ac5
else
    arg1[0x21f] -= zx.q(rcx_1)
    arg1[0x21e].d = arg2
label_142bf1ac5:
    int32_t rax_6 = arg1[0x21e].d
    int32_t rax_7
    
    if (arg2 u> rax_6)
        rax_7 = sub_142bf1b80(arg1, arg2 - rax_6, arg5, arg6)
    
    if ((arg2 u<= rax_6 || rax_7 == 0) && count_1 != 0)
        int32_t i
        
        do
            uint32_t count = arg1[0x220].d - arg1[0x21f].d
            
            if (count u>= count_1)
                count = count_1
            
            int512_t zmm0 = memcpy(zx.q(rbp) + arg3, arg1[0x21f], count)
            arg1[0x21f] += zx.q(count)
            rbp += count
            arg1[0x21e].d += count
            uint32_t count_2 = count_1
            count_1 -= count
            
            if (count_2 == count)
                break
            
            arg1[0x21f] = &arg1[0x1e]
            i = sub_142bf20e0(&arg1[3], &arg1[0x1e], 0x1000, zmm0, arg6)
            arg1[0x220] = zx.q(i) + arg1[0x21f]
        while (i != 0)

return zx.q(rbp)
