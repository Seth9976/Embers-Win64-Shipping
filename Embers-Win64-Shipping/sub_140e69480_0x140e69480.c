// 函数: sub_140e69480
// 地址: 0x140e69480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t i_1 = *(arg1 + 0x188)
int64_t* rbx = *(arg1 + 0x180)
arg2[1].d = i_1

if (i_1 == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405a4be0(arg2, i_1, 0)
int64_t* rcx_1 = *arg2
int32_t i

do
    *rcx_1 = *rbx
    void* rax_3 = rbx[1]
    rcx_1[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    rcx_1 = &rcx_1[2]
    rbx = &rbx[2]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
