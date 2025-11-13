// 函数: sub_1425282b0
// 地址: 0x1425282b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_1407c35c0(arg1, arg3 + arg5, arg4)
uint64_t r14_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x28
    void* rbx_1 = r14_1 + 0x28
    int32_t i
    
    do
        *r14_1 = 0
        int32_t rsi_1 = *(rdi_1 - 0x20)
        int64_t r12_1 = *(rdi_1 - 0x28)
        *(rbx_1 - 0x20) = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(r14_1, rsi_1, 0)
            memcpy(*r14_1, r12_1, rsi_1 * 2)
        else
            *(rbx_1 - 0x1c) = 0
        
        *(rbx_1 - 0x18) = *(rdi_1 - 0x18)
        *(rbx_1 - 0x10) = *(rdi_1 - 0x10)
        void* rax_4 = *(rdi_1 - 8)
        *(rbx_1 - 8) = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        r14_1 += 0x40
        *rbx_1 = *rdi_1
        *(rbx_1 + 8) = *(rdi_1 + 8)
        *(rbx_1 + 0xc) = *(rdi_1 + 0xc)
        rax_1 = *(rdi_1 + 0x10)
        rdi_1 += 0x40
        *(rbx_1 + 0x10) = rax_1
        rbx_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
