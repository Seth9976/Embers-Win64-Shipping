// 函数: sub_1424a3820
// 地址: 0x1424a3820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r14 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        char* rdi_1 = r14
        r14 = &r14[0x38]
        *rdi_1 = *(rbx_1 - 8)
        sub_140597df0(&rdi_1[8], rbx_1)
        sub_140780c40(&rdi_1[0x18], rbx_1 + 0x10)
        
        if (&rdi_1[0x28] != rbx_1 + 0x20)
            int64_t rsi_1 = sx.q(*(rbx_1 + 0x28))
            int64_t r15_1 = *(rbx_1 + 0x20)
            int32_t r8 = *(rdi_1 + 0x34)
            *(rdi_1 + 0x30) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rdi_1[0x28], rsi_1.d, r8)
                memcpy(*(rdi_1 + 0x28), r15_1, (rsi_1 << 3).d)
            else
                *(rdi_1 + 0x34) = 0
        
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
