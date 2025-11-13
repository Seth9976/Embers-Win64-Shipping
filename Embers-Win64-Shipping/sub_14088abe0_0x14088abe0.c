// 函数: sub_14088abe0
// 地址: 0x14088abe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        char* rdi_1 = r15
        r15 = &r15[0x48]
        *rdi_1 = *(rbx_1 - 8)
        sub_140597df0(&rdi_1[8], rbx_1)
        *(rdi_1 + 0x18) = *(rbx_1 + 0x10)
        *(rdi_1 + 0x28) = *(rbx_1 + 0x20)
        
        if (&rdi_1[0x38] != rbx_1 + 0x30)
            int64_t rsi_1 = sx.q(*(rbx_1 + 0x38))
            int64_t r14_1 = *(rbx_1 + 0x30)
            int32_t r8 = *(rdi_1 + 0x44)
            *(rdi_1 + 0x40) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rdi_1[0x38], rsi_1.d, r8)
                memcpy(*(rdi_1 + 0x38), r14_1, (rsi_1 << 4).d)
            else
                *(rdi_1 + 0x44) = 0
        
        rbx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
