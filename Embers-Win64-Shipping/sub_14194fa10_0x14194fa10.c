// 函数: sub_14194fa10
// 地址: 0x14194fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg3 + 0x38) & 1) == 0)
    return 

sub_141909ed0(*(arg3 + 0x28))

if (data_143eff5d0 != 0 || (*(arg3 + 0x38) & 2) != 0)
    data_143effd20(0x8892)
else
    sub_1419104e0(arg3, *(arg3 + 0x40), *(arg3 + 0x3c), *(arg3 + 0x48))
    
    if ((*(arg3 + 0x20) & 4) == 0)
        sub_140a74f90(*(arg3 + 0x48))
        *(arg3 + 0x38) &= 0xfffffff7
        *(arg3 + 0x3c) = 0
    else
        int64_t rcx_2 = *(arg3 + 0x50)
        int32_t rcx_3
        
        if (rcx_2 == 0)
            rcx_3 = *(arg3 + 0x58)
        else
            sub_140a74f90(rcx_2)
            rcx_3 = 0
        
        *(arg3 + 0x50) = *(arg3 + 0x48)
        int32_t rax = *(arg3 + 0x3c)
        *(arg3 + 0x3c) = 0
        
        if (rcx_3 u>= rax)
            rax = rcx_3
        
        *(arg3 + 0x38) &= 0xfffffff7
        *(arg3 + 0x58) = rax

*(arg3 + 0x48) = 0
int32_t rdx_1 = *(arg3 + 0x38)
*(arg3 + 0x30) += zx.q(not.d(rdx_1 u>> 1)) & 1
*(arg3 + 0x38) = rdx_1 & 0xfffffffe
