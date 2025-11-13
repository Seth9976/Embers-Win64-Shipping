// 函数: sub_141554790
// 地址: 0x141554790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_1407751d0(arg1, arg3 + arg5, arg4)
int64_t* rbx_1 = *arg1

if (i_1 != 0)
    int32_t* rsi_1 = arg2 + 8
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t j_1 = *rsi_1
        void* r14_1 = *(rsi_1 - 8)
        rbx_1[1].d = j_1
        
        if (j_1 != 0)
            sub_1405c4b20(rbx_1, j_1, 0)
            int32_t* r8_1 = *rbx_1
            int64_t* rax_2 = r14_1 + 4
            void* rdx_2 = &r8_1[1]
            int32_t j
            
            do
                rdx_2 += 0x1c
                *r8_1 = *(rax_2 - 4)
                r8_1 = &r8_1[7]
                int64_t zmm0_1 = *rax_2
                rax_2 += 0x1c
                *(rdx_2 - 0x1c) = zmm0_1
                *(rdx_2 - 0x14) = *(rax_2 - 0x14)
                *(rdx_2 - 0x10) = rax_2[-2]
                *(rdx_2 - 8) = rax_2[-1].d
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1[2] = *(rsi_1 + 8)
        rbx_1[3].d = rsi_1[4]
        *(rbx_1 + 0x1c) = *(rsi_1 + 0x14)
        rax_1 = rsi_1[7]
        rsi_1 = &rsi_1[0xa]
        *(rbx_1 + 0x24) = rax_1
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
