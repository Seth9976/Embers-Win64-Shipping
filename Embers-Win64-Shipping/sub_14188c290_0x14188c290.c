// 函数: sub_14188c290
// 地址: 0x14188c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
sub_140a98020(&arg2[8])
*arg2 = arg3

if (&arg2[2] != arg4)
    int64_t rcx_1 = *(arg2 + 8)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 8) = *arg4
    *arg4 = 0
    arg2[4] = arg4[1].d
    arg2[5] = *(arg4 + 0xc)
    arg4[1] = 0

arg2[6].b = 0
arg2[7] = 0xffffffff
int64_t rax_4 = _Query_perf_frequency()
*(arg2 + 0x20) = rax_4
*(arg2 + 0x28) = rax_4
*(arg2 + 0x30) = 0
int64_t rcx_2 = *arg4

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
