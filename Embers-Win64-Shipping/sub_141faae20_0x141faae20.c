// 函数: sub_141faae20
// 地址: 0x141faae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0xd68)
int64_t* rbx = *(arg1 + 0xd60)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0xd68) = 0

if (*(arg1 + 0xd6c) != 0)
    sub_1405a5130(arg1 + 0xd60, 0)

sub_141fb0670(arg1 + 0xd70, 0)
*(arg1 + 0xe18) = 0

if (*(arg1 + 0xe1c) != 0)
    sub_1405dadb0(arg1 + 0xe10, 0)

*(arg1 + 0xe38) = 0

if (*(arg1 + 0xe3c) != 0)
    sub_1405a5410(arg1 + 0xe30, 0)

*(arg1 + 0xe60) = 0xffffffff
*(arg1 + 0xe64) = 0
sub_14059a8e0(arg1 + 0xe40, 0)
int32_t i_4 = *(arg1 + 0xe78)

if (i_4 s> 0)
    int64_t r8_1 = 0
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        void* rcx_6 = *(arg1 + 0xe70)
        void* rax = arg1 + 0xe68
        int64_t rdx_3 = (sx.q(*(arg1 + 0xe78)) - 1) & r8_1
        
        if (rcx_6 != 0)
            rax = rcx_6
        
        r8_1 += 1
        *(rax + (rdx_3 << 2)) = 0xffffffff
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0xe80) = 0
return sub_1408d84f0(arg1 + 0xdc0) __tailcall
