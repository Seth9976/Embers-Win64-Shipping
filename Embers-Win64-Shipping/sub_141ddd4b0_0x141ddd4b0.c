// 函数: sub_141ddd4b0
// 地址: 0x141ddd4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_14083a1f0(arg1, arg3 + arg5, arg4)
uint64_t rsi_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 4
    void* rbx_1 = rsi_1 + 0x1c
    int32_t i
    
    do
        *rsi_1 = *(rdi_1 - 4)
        *(rbx_1 - 0x18) = *rdi_1
        *(rbx_1 - 0x14) = *(rdi_1 + 4)
        *(rbx_1 - 0x10) = *(rdi_1 + 8)
        rax_1 = *(rdi_1 + 9)
        *(rbx_1 - 0xf) = rax_1
        *(rbx_1 - 0xc) = 0
        int64_t r15_1 = sx.q(*(rdi_1 + 0x14))
        int64_t r13_1 = *(rdi_1 + 0xc)
        *(rbx_1 - 4) = r15_1.d
        
        if (r15_1.d != 0)
            sub_140638750(rbx_1 - 0xc, r15_1.d, 0)
            rax_1 = memcpy(*(rbx_1 - 0xc), r13_1, (r15_1 << 2).d)
        else
            *rbx_1 = 0
        
        rsi_1 += 0x20
        rbx_1 += 0x20
        rdi_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
