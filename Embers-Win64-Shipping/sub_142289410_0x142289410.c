// 函数: sub_142289410
// 地址: 0x142289410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
sub_142289700(&arg1[2], &arg2[2])
void* r14 = &arg1[9]
void* r12_1 = arg1 - arg2
void* rbx = &arg2[0xa]

for (int64_t i = 6; i != 0; )
    *r14 = &data_143314ec0
    void* rsi_1 = r12_1 + rbx
    *rsi_1 = 0
    i -= 1
    uint32_t count = *(rbx + 8)
    int64_t r15_1 = *rbx
    *(r12_1 + rbx + 8) = count
    
    if (count != 0)
        sub_1405da9e0(rsi_1, count, 0)
        memcpy(*rsi_1, r15_1, count)
    else
        *(r12_1 + rbx + 0xc) = 0
    
    *(r12_1 + rbx + 0x10) = *(rbx + 0x10)
    *(r12_1 + rbx + 0x14) = *(rbx + 0x14)
    void* rax_3 = *(rbx + 0x18)
    *(r12_1 + rbx + 0x18) = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    void* rax_4 = *(rbx + 0x20)
    *(r12_1 + rbx + 0x20) = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    r14 += 0x38
    *(r12_1 + rbx + 0x28) = *(rbx + 0x28)
    rbx += 0x38

sub_142289700(&arg1[0x33], &arg2[0x33])
sub_142289700(&arg1[0x3a], &arg2[0x3a])
return arg1
