// 函数: sub_1425a3ac0
// 地址: 0x1425a3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int64_t result

if (arg4 != 0)
    char* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[0xd]
        sub_141ae6560(rsi_1, &rbx_1[-0x28])
        
        if (&rsi_1[3] != &rbx_1[-0x10])
            int64_t rbp_1 = sx.q(*(rbx_1 - 8))
            int64_t r12_1 = *(rbx_1 - 0x10)
            int32_t r8 = *(rsi_1 + 0x24)
            rsi_1[4].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140808ed0(&rsi_1[3], rbp_1.d, r8)
                memcpy(rsi_1[3], r12_1, (rbp_1 * 0x50).d)
            else
                *(rsi_1 + 0x24) = 0
        
        rsi_1[5].b = *rbx_1
        *(rsi_1 + 0x2c) = *(rbx_1 + 4)
        sub_141ae6560(&rsi_1[6], &rbx_1[8])
        
        if (&rsi_1[9] != &rbx_1[0x20])
            int64_t rbp_2 = sx.q(*(rbx_1 + 0x28))
            int64_t r12_2 = *(rbx_1 + 0x20)
            int32_t r8_4 = *(rsi_1 + 0x54)
            rsi_1[0xa].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_4 != 0)
                sub_1405c4bc0(&rsi_1[9], rbp_2.d, r8_4)
                memcpy(rsi_1[9], r12_2, (rbp_2 * 0x14).d)
            else
                *(rsi_1 + 0x54) = 0
        
        rsi_1[0xb].b = rbx_1[0x30]
        *(rsi_1 + 0x5c) = *(rbx_1 + 0x34)
        result = *(rbx_1 + 0x38)
        rbx_1 = &rbx_1[0x68]
        rsi_1[0xc] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
