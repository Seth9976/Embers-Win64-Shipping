// 函数: sub_141adaec0
// 地址: 0x141adaec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
void* rbx = arg2 + 0x54
*(arg1 + 0x10) = *(arg2 + 0x10)
void* rdi_1 = arg1 + 0x50 - arg2
*(arg1 + 0x14) = *(arg2 + 0x14)
int64_t i_1 = 3
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x41) = *(arg2 + 0x41)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x48) = *(arg2 + 0x48)
int64_t i

do
    *(rdi_1 + rbx - 0x54) = *(rbx - 4)
    int64_t* r14_2 = rdi_1 - 0x3c + rbx
    *(rdi_1 + rbx - 0x50) = *rbx
    *(rdi_1 + rbx - 0x4c) = *(rbx + 4)
    *(rdi_1 + rbx - 0x48) = *(rbx + 8)
    *(rdi_1 + rbx - 0x44) = *(rbx + 0xc)
    *(rdi_1 + rbx - 0x40) = *(rbx + 0x10)
    
    if (r14_2 != rbx + 0x14)
        int64_t rsi_1 = sx.q(*(rbx + 0x1c))
        int64_t r15_1 = *(rbx + 0x14)
        int32_t r8_1 = *(rdi_1 + rbx - 0x30)
        *(rdi_1 + rbx - 0x34) = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1405c4a00(r14_2, rsi_1.d, r8_1)
            memcpy(*r14_2, r15_1, (rsi_1 << 3).d)
        else
            *(rdi_1 + rbx - 0x30) = rsi_1.d
    
    rbx += 0x28
    i = i_1
    i_1 -= 1
while (i != 1)
sub_141ada350(arg1 + 0xc8, arg2 + 0xc8)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
return arg1
