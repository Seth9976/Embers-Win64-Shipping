// 函数: sub_1408cde60
// 地址: 0x1408cde60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
void* i = *(arg1 + 0x38)

for (void* r15_2 = (sx.q(*(arg1 + 0x40)) << 6) + i; i != r15_2; i += 0x40)
    int64_t rdi_1 = 0
    int32_t* rbx_1 = *(i + 0x20)
    uint64_t rsi_2 = sx.q(*(i + 0x28)) << 2 u>> 2
    
    if (rbx_1 u> &rbx_1[sx.q(*(i + 0x28))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int32_t r8
            r8.b = 1
            sub_141f70fe0(*(*(arg1 + 0x48) + sx.q(*rbx_1) * 0x10), nullptr, r8)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    sub_140638c50(arg1 + 0x28, 0)

sub_1408ce330(arg1 + 0x38, 0)
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != 0)
    sub_1405a5410(arg1 + 0x48, 0)

int64_t result = sub_1408ce3b0(arg1 + 0x58, 0)
*(arg1 + 0xa8) = 0
*(arg1 + 0x108) = 0
int32_t i_3 = *(arg1 + 0xc0)

if (i_3 != 0)
    int64_t* rbx_3 = *(arg1 + 0xb8) + 0x20
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_3
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_3 = &rbx_3[7]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0xc0) = 0

if (*(arg1 + 0xc4) != 0)
    result = sub_1408cf3a0(arg1 + 0xb8, 0)

int32_t i_4 = *(arg1 + 0xd0)

if (i_4 != 0)
    int64_t* rbx_5 = *(arg1 + 0xc8) + 0x20
    int32_t i_2
    
    do
        int64_t rcx_8 = *rbx_5
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        rbx_5 = &rbx_5[6]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

*(arg1 + 0xd0) = 0

if (*(arg1 + 0xd4) == 0)
    return result

return sub_1405a5220(arg1 + 0xc8, 0)
