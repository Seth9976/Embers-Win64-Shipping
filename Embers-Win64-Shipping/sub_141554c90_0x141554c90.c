// 函数: sub_141554c90
// 地址: 0x141554c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3
void* rsi = arg2

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

void* rax_1 = sub_1405a4be0(arg1, arg3 + arg5, arg4)
uint64_t rbx_1 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t j_1 = *(rsi + 8)
        void* r15_1 = *rsi
        *(rbx_1 + 8) = j_1
        
        if (j_1 != 0)
            sub_14174fe60(rbx_1, j_1, 0)
            int64_t* rdx_2 = *rbx_1
            rax_1 = r15_1 + 0x18
            int32_t j
            
            do
                int64_t zmm0_1 = *(rax_1 - 0x18)
                rax_1 += 0x34
                *rdx_2 = zmm0_1
                rdx_2 += 0x34
                *(rdx_2 - 0x2c) = *(rax_1 - 0x44)
                rdx_2[-5] = *(rax_1 - 0x40)
                rdx_2[-4].d = *(rax_1 - 0x38)
                *(rdx_2 - 0x1c) = *(rax_1 - 0x34)
                rdx_2[-3] = *(rax_1 - 0x30)
                rdx_2[-2].d = *(rax_1 - 0x28)
                *(rdx_2 - 0xc) = *(rax_1 - 0x24)
                *(rdx_2 - 4) = *(rax_1 - 0x1c)
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 += 0x10
        rsi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
