// 函数: sub_141aedb10
// 地址: 0x141aedb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t* rax_1 = sub_1405a4b40(arg1, arg3 + arg5, arg4)
int64_t* rsi_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x10
    void* rbx_1 = &rsi_1[4]
    int32_t i
    
    do
        *rsi_1 = *(rdi_1 - 0x10)
        *(rbx_1 - 0x18) = *(rdi_1 - 8)
        rax_1 = sub_140596d10(rbx_1 - 0x10, rdi_1)
        *rbx_1 = 0
        uint32_t count = *(rdi_1 + 0x18)
        int64_t r12_1 = *(rdi_1 + 0x10)
        *(rbx_1 + 8) = count
        
        if (count != 0)
            sub_1405da9e0(rbx_1, count, 0)
            rax_1 = memcpy(*rbx_1, r12_1, count)
        else
            *(rbx_1 + 0xc) = 0
        
        rsi_1 = &rsi_1[6]
        rbx_1 += 0x30
        rdi_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
