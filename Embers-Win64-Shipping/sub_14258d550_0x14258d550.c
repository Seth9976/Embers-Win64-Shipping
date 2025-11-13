// 函数: sub_14258d550
// 地址: 0x14258d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rsi_1 = r14
        r14 = &r14[0x2e]
        *rsi_1 = rbx_1[-1].d
        rsi_1[1] = *(rbx_1 - 4)
        
        if (&rsi_1[2] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = rsi_1[5]
            rsi_1[4] = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140638750(&rsi_1[2], rbp_1.d, r8)
                memcpy(*(rsi_1 + 8), r15_1, (rbp_1 << 2).d)
            else
                rsi_1[5] = 0
        
        *(rsi_1 + 0x18) = *(rbx_1 + 0x10)
        rsi_1[0xa] = rbx_1[4].d
        *(rsi_1 + 0x2c) = *(rbx_1 + 0x24)
        *(rsi_1 + 0x3c) = *(rbx_1 + 0x34)
        *(rsi_1 + 0x4c) = *(rbx_1 + 0x44)
        *(rsi_1 + 0x5c) = *(rbx_1 + 0x54)
        rsi_1[0x19] = *(rbx_1 + 0x5c)
        sub_1405b0be0(&rsi_1[0x1a], &rbx_1[0xc])
        sub_1405b0be0(&rsi_1[0x1e], &rbx_1[0xe])
        rsi_1[0x22] = rbx_1[0x10].d
        *(rsi_1 + 0x90) = rbx_1[0x11]
        *(rsi_1 + 0x98) = rbx_1[0x12]
        sub_140597df0(&rsi_1[0x28], &rbx_1[0x13])
        rsi_1[0x2c].b = rbx_1[0x15].b
        *(rsi_1 + 0xb1) ^= (*(rsi_1 + 0xb1) ^ *(rbx_1 + 0xa9)) & 1
        char rax_10 = *(rsi_1 + 0xb1)
        char rcx_5 = ((rax_10 ^ *(rbx_1 + 0xa9)) & 2) ^ rax_10
        *(rsi_1 + 0xb1) = rcx_5
        char rdx_5 = ((rcx_5 ^ *(rbx_1 + 0xa9)) & 4) ^ rcx_5
        *(rsi_1 + 0xb1) = rdx_5
        char rax = rdx_5 ^ *(rbx_1 + 0xa9)
        rbx_1 = &rbx_1[0x17]
        *(rsi_1 + 0xb1) = (rax & 8) ^ rdx_5
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
