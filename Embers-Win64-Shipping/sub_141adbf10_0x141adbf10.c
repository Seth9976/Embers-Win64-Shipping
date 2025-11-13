// 函数: sub_141adbf10
// 地址: 0x141adbf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* result = arg2

if (arg4 != 0)
    void* r15_1 = arg3 + 0x10
    int32_t i
    
    do
        int32_t* rbx_1 = r15_1 + 0x44
        int64_t j_1 = 3
        *(result + 8) = *(r15_1 - 8)
        void* rdi_2 = result + 0x50 - r15_1
        *(result + 0x10) = *r15_1
        *(result + 0x14) = *(r15_1 + 4)
        *(result + 0x15) = *(r15_1 + 5)
        *(result + 0x16) = *(r15_1 + 6)
        *(result + 0x18) = *(r15_1 + 8)
        *(result + 0x1c) = *(r15_1 + 0xc)
        *(result + 0x20) = *(r15_1 + 0x10)
        *(result + 0x30) = *(r15_1 + 0x20)
        *(result + 0x34) = *(r15_1 + 0x24)
        *(result + 0x38) = *(r15_1 + 0x28)
        *(result + 0x3c) = *(r15_1 + 0x2c)
        *(result + 0x40) = *(r15_1 + 0x30)
        *(result + 0x41) = *(r15_1 + 0x31)
        *(result + 0x44) = *(r15_1 + 0x34)
        *(result + 0x48) = *(r15_1 + 0x38)
        int64_t j
        
        do
            *(rbx_1 + rdi_2 - 0x44) = rbx_1[-1]
            void* r14_2 = rdi_2 - 0x2c + rbx_1
            *(rbx_1 + rdi_2 - 0x40) = *rbx_1
            *(rbx_1 + rdi_2 - 0x3c) = rbx_1[1]
            *(rbx_1 + rdi_2 - 0x38) = rbx_1[2]
            *(rbx_1 + rdi_2 - 0x34) = rbx_1[3]
            *(rbx_1 + rdi_2 - 0x30) = rbx_1[4]
            
            if (r14_2 != &rbx_1[5])
                int64_t rsi_1 = sx.q(rbx_1[7])
                int64_t r12_1 = *(rbx_1 + 0x14)
                int32_t r8 = *(rbx_1 + rdi_2 - 0x20)
                *(rbx_1 + rdi_2 - 0x24) = rsi_1.d
                
                if (rsi_1.d != 0 || r8 != 0)
                    sub_1405c4a00(r14_2, rsi_1.d, r8)
                    memcpy(*r14_2, r12_1, (rsi_1 << 3).d)
                else
                    *(rbx_1 + rdi_2 - 0x20) = rsi_1.d
            
            rbx_1 = &rbx_1[0xa]
            j = j_1
            j_1 -= 1
        while (j != 1)
        sub_141ada350(result + 0xc8, r15_1 + 0xb8)
        int64_t rax_23 = *(r15_1 + 0xc8)
        r15_1 += 0xe0
        i = i_1
        i_1 -= 1
        *(result + 0xd8) = rax_23
        result += 0xe0
    while (i != 1)

result.b = 1
return result
