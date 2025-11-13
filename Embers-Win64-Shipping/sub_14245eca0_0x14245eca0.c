// 函数: sub_14245eca0
// 地址: 0x14245eca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x58
    int32_t i
    
    do
        int64_t* rsi_1 = r12
        r12 = &r12[0xd]
        *rsi_1 = *(rbx_1 - 0x58)
        rsi_1[1] = *(rbx_1 - 0x50)
        rsi_1[2].d = rbx_1[-0x12]
        sub_140780c40(&rsi_1[3], &rbx_1[-0x10])
        sub_14090a0d0(&rsi_1[5], &rbx_1[-0xc])
        rsi_1[7] = *(rbx_1 - 0x20)
        
        if (&rsi_1[8] != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r15_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rsi_1 + 0x4c)
            rsi_1[9].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[8], rbp_1.d, r8)
                memcpy(rsi_1[8], r15_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x4c) = 0
        
        if (&rsi_1[0xa] != &rbx_1[-2])
            int64_t rbp_2 = sx.q(*rbx_1)
            int64_t r15_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rsi_1 + 0x5c)
            rsi_1[0xb].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405c4a00(&rsi_1[0xa], rbp_2.d, r8_3)
                memcpy(rsi_1[0xa], r15_2, (rbp_2 << 3).d)
            else
                *(rsi_1 + 0x5c) = 0
        
        char rax = rbx_1[2].b
        rbx_1 = &rbx_1[0x1a]
        rsi_1[0xc].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
