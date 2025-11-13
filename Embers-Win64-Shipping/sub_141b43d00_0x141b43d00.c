// 函数: sub_141b43d00
// 地址: 0x141b43d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* result = arg2

if (arg4 != 0)
    void* r15_1 = arg3 + 0x38
    int32_t i
    
    do
        *(result + 8) = *(r15_1 - 0x30)
        *(result + 0x10) = *(r15_1 - 0x28)
        *(result + 0x14) = *(r15_1 - 0x24)
        *(result + 0x20) = *(r15_1 - 0x18)
        sub_140597df0(result + 0x28, r15_1 - 0x10)
        void* rbx_1 = result + 0x74
        *(result + 0x38) = *r15_1
        void* rdi_2 = r15_1 - result
        *(result + 0x40) = *(r15_1 + 8)
        int64_t j_1 = 4
        int64_t j
        
        do
            *(rbx_1 - 0x24) = *(rdi_2 + rbx_1 - 0x5c)
            *(rbx_1 - 0x23) = *(rdi_2 + rbx_1 - 0x5b)
            sub_14086c240(rbx_1 - 0x1c, rbx_1 - 0x54 + rdi_2)
            int64_t* rax_10 = rbx_1 - 0x44 + rdi_2
            
            if (rbx_1 - 0xc != rax_10)
                int32_t rsi_1 = *(rbx_1 + rdi_2 - 0x3c)
                int64_t rbp_1 = *rax_10
                int32_t r8 = *rbx_1
                *(rbx_1 - 4) = rsi_1
                
                if (rsi_1 != 0 || r8 != 0)
                    sub_1405c4b20(rbx_1 - 0xc, rsi_1, r8)
                    memcpy(*(rbx_1 - 0xc), rbp_1, rsi_1 * 0x1c)
                else
                    *rbx_1 = rsi_1
            
            *(rbx_1 + 4) = *(rbx_1 + rdi_2 - 0x34)
            *(rbx_1 + 8) = *(rbx_1 + rdi_2 - 0x30)
            sub_141f98dc0(rbx_1 + 0xc)
            *(rbx_1 + 0x6c) = *(rbx_1 + rdi_2 + 0x34)
            rbx_1 += 0xa0
            j = j_1
            j_1 -= 1
        while (j != 1)
        *(result + 0x2c8) = *(r15_1 + 0x290)
        char rax_15 = *(r15_1 + 0x294)
        r15_1 += 0x2d0
        i = i_1
        i_1 -= 1
        *(result + 0x2cc) = rax_15
        result += 0x2d0
    while (i != 1)

result.b = 1
return result
