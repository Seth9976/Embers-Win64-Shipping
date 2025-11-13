// 函数: sub_14245e6e0
// 地址: 0x14245e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_1 = arg2 - arg1
*arg1 = *arg2
void* rbx = arg1 + 0x94
int64_t i_1 = 3
arg1[1].q = arg2[1].q
int64_t i

do
    *(rbx - 0x14) = *(rdi_1 + rbx - 0x14)
    *(rbx - 0x10) = *(rdi_1 + rbx - 0x10)
    *(rbx - 0xf) = *(rdi_1 + rbx - 0xf)
    void* rax_5 = rdi_1 - 0xc + rbx
    
    if (rbx - 0xc != rax_5)
        int32_t rsi_1 = *(rbx + rdi_1 - 4)
        int64_t r15_1 = *rax_5
        int32_t r8_1 = *rbx
        *(rbx - 4) = rsi_1
        
        if (rsi_1 != 0 || r8_1 != 0)
            sub_1405c4b20(rbx - 0xc, rsi_1, r8_1)
            memcpy(*(rbx - 0xc), r15_1, rsi_1 * 0x1c)
        else
            *rbx = 0
    
    rbx -= -0x80
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
