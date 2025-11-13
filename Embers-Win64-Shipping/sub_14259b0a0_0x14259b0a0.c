// 函数: sub_14259b0a0
// 地址: 0x14259b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_14083a1f0(arg1, arg3 + arg5, arg4)
uint64_t rbx_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_1 - 8)
        *(rbx_1 + 8) = 0
        int64_t rsi_1 = sx.q(*(rdi_1 + 8))
        int64_t r12_1 = *rdi_1
        *(rbx_1 + 0x10) = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405a4be0(rbx_1 + 8, rsi_1.d, 0)
            memcpy(*(rbx_1 + 8), r12_1, (rsi_1 << 4).d)
        else
            *(rbx_1 + 0x14) = 0
        
        rax_1 = *(rdi_1 + 0x10)
        rdi_1 += 0x20
        *(rbx_1 + 0x18) = rax_1
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
