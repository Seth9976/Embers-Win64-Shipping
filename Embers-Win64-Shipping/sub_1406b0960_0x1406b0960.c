// 函数: sub_1406b0960
// 地址: 0x1406b0960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const rdx_1

if (arg3 == 1)
    rdx_1 = "broken promise"
else if (arg3 == 2)
    rdx_1 = "future already retrieved"
else if (arg3 == 3)
    rdx_1 = "promise already satisfied"
else
    if (arg3 != 4)
        char* rax = std::_Syserror_map(arg3)
        int64_t r8 = -1
        *(arg2 + 0x10) = 0
        *(arg2 + 0x18) = 0xf
        *arg2 = 0
        
        do
            r8 += 1
        while (rax[r8] != 0)
        
        sub_14058ad40(arg2, rax, r8)
        return arg2
    
    rdx_1 = "no state"

*(arg2 + 0x10) = 0
int64_t r8_1 = -1
*(arg2 + 0x18) = 0xf
*arg2 = 0

do
    r8_1 += 1
while (rdx_1[r8_1] != 0)

sub_14058ad40(arg2, rdx_1, r8_1)
return arg2
