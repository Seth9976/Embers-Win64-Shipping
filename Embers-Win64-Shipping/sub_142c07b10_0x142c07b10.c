// 函数: sub_142c07b10
// 地址: 0x142c07b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_8 = zx.q(arg3)
void* rsi = arg2
sub_142c36b10(arg1 + 0x28, 0x7276726e, 1, 1)
sub_142c36dd0(arg1 + 0x28, 0, 0)
int32_t rcx_2 = *(arg1 + 8)

if (rcx_2 == 4)
    sub_142c36b10(arg1 + 0x28, 0x6c747261, 1, 1)
    sub_142c36b10(arg1 + 0x28, 0x6c74726d, 1, 1)
else if (rcx_2 == 5)
    sub_142c36b10(arg1 + 0x28, 0x72746c61, rcx_2 - 4, rcx_2 - 4)
    sub_142c36b10(arg1 + 0x28, 0x72746c6d, 0, 1)

sub_142c36b10(arg1 + 0x28, 0x66726163, 0, 1)
sub_142c36b10(arg1 + 0x28, 0x6e756d72, 0, 1)
sub_142c36b10(arg1 + 0x28, 0x646e6f6d, 0, 1)
sub_142c36b10(arg1 + 0x28, 0x72616e64, 0x21, 0xff)
sub_142c36b10(arg1 + 0x28, 0x7472616b, 3, 1)
sub_142c36b10(arg1 + 0x28, 0x48415246, 1, 1)
int64_t rdx_1 = **(arg1 + 0xc8)

if (rdx_1 != 0)
    rdx_1(arg1)

sub_142c36b10(arg1 + 0x28, 0x42555a5a, 1, 1)
char const* const rbx = "pmcc"
int64_t i_5 = 5
int64_t i

do
    sub_142c36b10(arg1 + 0x28, *rbx, *(rbx + 4), 1)
    rbx = &rbx[8]
    i = i_5
    i_5 -= 1
while (i != 1)
int32_t rax_2 = *(arg1 + 8) & 0xfffffffe

if (rax_2 != 4)
    sub_142c36b10(arg1 + 0x28, 0x76657274, 0x11, 1)
else
    char const* const rbx_1 = "tlac"
    uint64_t i_6 = zx.q(rax_2 + 2)
    uint64_t i_1
    
    do
        sub_142c36b10(arg1 + 0x28, *rbx_1, *(rbx_1 + 4), 1)
        rbx_1 = &rbx_1[8]
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

if (i_8.d != 0)
    void* rbx_2 = rsi + 0xc
    uint64_t i_7 = i_8
    uint64_t i_2
    
    do
        int32_t r8_4
        
        if (*(rbx_2 - 4) != 0 || *rbx_2 != 0xffffffff)
            r8_4 = 0
        else
            r8_4 = 1
        
        sub_142c36b10(arg1 + 0x28, *(rbx_2 - 0xc), r8_4, *(rbx_2 - 8))
        rbx_2 += 0x10
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

if ((*(arg1 + 0xc0) & 1) != 0 && i_8.d != 0)
    uint64_t i_4 = i_8
    uint64_t i_3
    
    do
        sub_142c38260(arg1 + 0xa8, *rsi, *(rsi + 4))
        rsi += 0x10
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)

void* result = *(arg1 + 0xc8)
int64_t rdx_6 = *(result + 8)

if (rdx_6 == 0)
    return result

return rdx_6(arg1)
