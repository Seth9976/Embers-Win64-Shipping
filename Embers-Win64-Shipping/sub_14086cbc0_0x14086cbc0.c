// 函数: sub_14086cbc0
// 地址: 0x14086cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbp = arg3
void* result = arg2

if (arg4 != 0)
    int32_t i
    
    do
        *(result + 8) = *(rbp + 8)
        *(result + 0x10) = *(rbp + 0x10)
        *(result + 0x14) = *(rbp + 0x14)
        sub_140747710(result + 0x20, rbp + 0x20)
        void* rbx_1 = result + 0x74
        int64_t rdi_2 = rbp - result
        int64_t j_1 = 4
        int64_t j
        
        do
            *(rbx_1 - 0x24) = *(rdi_2 + rbx_1 - 0x24)
            *(rbx_1 - 0x23) = *(rdi_2 + rbx_1 - 0x23)
            sub_14086c240(rbx_1 - 0x1c, rbx_1 - 0x1c + rdi_2)
            void* rax_7 = rbx_1 - 0xc + rdi_2
            
            if (rbx_1 - 0xc != rax_7)
                int32_t rsi_1 = *(rbx_1 + rdi_2 - 4)
                int64_t r15_1 = *rax_7
                int32_t r8 = *rbx_1
                *(rbx_1 - 4) = rsi_1
                
                if (rsi_1 != 0 || r8 != 0)
                    sub_1405c4b20(rbx_1 - 0xc, rsi_1, r8)
                    memcpy(*(rbx_1 - 0xc), r15_1, rsi_1 * 0x1c)
                else
                    *rbx_1 = rsi_1
            
            *(rbx_1 + 4) = *(rdi_2 + rbx_1 + 4)
            *(rbx_1 + 8) = *(rbx_1 + rdi_2 + 8)
            sub_141f98dc0(rbx_1 + 0xc)
            *(rbx_1 + 0x6c) = *(rbx_1 + rdi_2 + 0x6c)
            rbx_1 += 0xa0
            j = j_1
            j_1 -= 1
        while (j != 1)
        int32_t rax_11 = *(rbp + 0x2c8)
        rbp += 0x2d0
        i = i_1
        i_1 -= 1
        *(result + 0x2c8) = rax_11
        result += 0x2d0
    while (i != 1)

result.b = 1
return result
