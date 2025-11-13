// 函数: sub_140b4e460
// 地址: 0x140b4e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_3 = ((*(arg2 + 0xa8) - *arg1 + 7) s>> 3).d

if (rbx_3 s<= 0)
    return 

int32_t rax_1 = arg3[1].d

if (rbx_3 s> rax_1)
    arg3[1].d = rbx_3
    
    if (rbx_3 s> *(arg3 + 0xc))
        sub_1405daba0(arg3)
else if (rbx_3 s< rax_1 && rbx_3 != rax_1)
    arg3[1].d = rbx_3
    sub_1405dac10(arg3)

*(sx.q(rbx_3) + *arg3 - 1) = 0
int32_t r9_1 = *arg1
sub_140b569b0(*arg3, 0, *(arg2 + 0x90), r9_1, *(arg2 + 0xa8) - r9_1)
