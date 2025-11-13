// 函数: sub_1408f4c10
// 地址: 0x1408f4c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s<= 0)
    return 

int64_t r14_1 = 0

do
    int32_t* rbp_2 = *arg1 + r14_1
    int32_t rbx_1 = rbp_2[3]
    char rax_1 = sub_140b5b8a0(rbp_2[2], 0)
    int64_t rax
    
    if ((rbx_1 == 0 & rax_1) == 0)
        rax = sub_140d3c740(rbp_2, 1)
    
    if ((rbx_1 == 0 & rax_1) != 0 || rax == 0)
        int32_t rcx_6 = arg1[1].d
        int32_t rax_4 = rcx_6 - i - 1
        
        if (rax_4 s>= 1)
            rax_4 = 1
        
        if (rax_4 != 0)
            memcpy((sx.q(i) << 4) + *arg1, (sx.q(rcx_6 - rax_4) << 4) + *arg1, rax_4 << 4)
            rcx_6 = arg1[1].d
        
        arg1[1].d = rcx_6 - 1
        sub_1405a5010(arg1)
    else
        i += 1
        r14_1 += 0x10
while (i s< arg1[1].d)
