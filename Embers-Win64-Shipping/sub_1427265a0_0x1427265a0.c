// 函数: sub_1427265a0
// 地址: 0x1427265a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp = &rbp[4]
        *r14_1 = rdi_1[-1]
        
        if (&r14_1[1] != rdi_1)
            int32_t j_1 = rdi_1[1].d
            void* r15_1 = *rdi_1
            int32_t r8 = *(r14_1 + 0x14)
            r14_1[2].d = j_1
            
            if (j_1 != 0 || r8 != 0)
                sub_14174fdd0(&r14_1[1], j_1, r8)
                int32_t* rdx_1 = r14_1[1]
                
                if (j_1 != 0)
                    void* r8_1 = r15_1 + 4
                    int32_t j
                    
                    do
                        int32_t rax_1 = *(r8_1 - 4)
                        r8_1 += 0x3c
                        *rdx_1 = rax_1
                        rdx_1 = &rdx_1[0xf]
                        rdx_1[-0xe] = *(r8_1 - 0x3c)
                        rdx_1[-0xd] = *(r8_1 - 0x38)
                        *(rdx_1 - 0x30) = *(r8_1 - 0x34)
                        rdx_1[-0xa] = *(r8_1 - 0x2c)
                        *(rdx_1 - 0x24) = *(r8_1 - 0x28)
                        rdx_1[-7] = *(r8_1 - 0x20)
                        *(rdx_1 - 0x18) = *(r8_1 - 0x1c)
                        rdx_1[-4].b = *(r8_1 - 0x14)
                        *(rdx_1 - 0xc) = *(r8_1 - 0x10)
                        rdx_1[-1] ^= (rdx_1[-1] ^ *(r8_1 - 8)) & 1
                        int32_t rcx_4 = ((rdx_1[-1] ^ *(r8_1 - 8)) & 2) ^ rdx_1[-1]
                        rdx_1[-1] = rcx_4
                        rdx_1[-1] = ((rcx_4 ^ *(r8_1 - 8)) & 4) ^ rcx_4
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            else
                *(r14_1 + 0x14) = 0
        
        int32_t rax_16 = rdi_1[2].d
        rdi_1 = &rdi_1[4]
        r14_1[3].d ^= (rax_16 ^ r14_1[3].d) & 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
