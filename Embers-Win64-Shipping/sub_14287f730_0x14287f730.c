// 函数: sub_14287f730
// 地址: 0x14287f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *(arg1 + 0x508)
int32_t rcx

if (*(arg1 + 0x38) != 0)
    rcx = *(arg1 + 0x16e4)
    
    if (*(arg1 + 0x6e8) == 2)
        int32_t rax_2 = *(rax + 0x19c)
        
        if (rcx u>= rax_2)
            rcx = rax_2
else
    if (*(rax + 0x19c) == 0)
        rax = *(arg1 + 0x510)
        
        if (rax == 0 || *(rax + 0x19c) u<= 0)
            sub_142856580(arg1, 0x50, 0x214, 0x44, "ssl\record\ssl3_record.c", 0x76)
            return 0
    
    rcx = *(rax + 0x19c)

int32_t var_10

if (rcx != 0)
    uint64_t r8 = zx.q(*(arg1 + 0x16e8))
    
    if (arg2 + r8 u<= zx.q(rcx + arg3))
        *(arg1 + 0x16e8) = r8.d + arg2.d
        return 1
    
    var_10 = 0x8f
else
    var_10 = 0x86

int32_t rdx = 0xa

if (arg4 != 0)
    rdx = 0x50

sub_142856580(arg1, rdx, 0x214, 0xa4, "ssl\record\ssl3_record.c", var_10)
return 0
