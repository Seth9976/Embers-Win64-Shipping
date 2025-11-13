// 函数: sub_1408d9350
// 地址: 0x1408d9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

sub_1405e3e00(arg1, arg3 + arg5, arg4)
void* rax_1 = *arg1

if ((rax_1.b & 1) != 0)
    rax_1 = (rax_1 s>> 1) + arg1

if (i_1 != 0)
    void* rdx_1 = arg2 + 0xc
    rax_1 += 0xc
    int32_t i
    
    do
        void* rcx = *(rdx_1 - 0xc)
        *(rax_1 - 0xc) = rcx
        
        if (rcx != 0)
            *(rcx + 8) += 1
        
        *(rax_1 - 4) = *(rdx_1 - 4)
        *rax_1 = *rdx_1
        *(rax_1 + 4) = *(rdx_1 + 4)
        *(rax_1 + 8) = *(rdx_1 + 8)
        *(rax_1 + 0xc) = *(rdx_1 + 0xc)
        *(rax_1 + 0x10) = *(rdx_1 + 0x10)
        *(rax_1 + 0x11) = *(rdx_1 + 0x11)
        char rcx_8 = *(rdx_1 + 0x12)
        rdx_1 += 0x20
        *(rax_1 + 0x12) = rcx_8
        rax_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
