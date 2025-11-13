// 函数: sub_1408416a0
// 地址: 0x1408416a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t* rax_1 = sub_1407751d0(arg1, arg3 + arg5, arg4)
int64_t* rbx_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 8
    int32_t i
    
    do
        *rbx_1 = *(rdi_1 - 8)
        rax_1 = sub_140596d10(&rbx_1[1], rdi_1)
        rbx_1[3] = 0
        int64_t rbp_1 = sx.q(*(rdi_1 + 0x18))
        int64_t r12_1 = *(rdi_1 + 0x10)
        rbx_1[4].d = rbp_1.d
        
        if (rbp_1.d != 0)
            sub_1405a4be0(&rbx_1[3], rbp_1.d, 0)
            rax_1 = memcpy(rbx_1[3], r12_1, (rbp_1 << 4).d)
        else
            *(rbx_1 + 0x24) = 0
        
        rbx_1 = &rbx_1[5]
        rdi_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
