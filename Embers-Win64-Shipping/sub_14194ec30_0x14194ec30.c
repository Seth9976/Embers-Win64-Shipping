// 函数: sub_14194ec30
// 地址: 0x14194ec30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 1) == 0)
    return 

sub_141909fb0(*(arg1 + 0x18))

if (data_143eff5d0 != 0 || (*(arg1 + 0x28) & 2) != 0)
    data_143effd20(0x88ec)
else
    sub_14193fc80(arg1, *(arg1 + 0x30), *(arg1 + 0x2c), *(arg1 + 0x38))
    
    if ((*(arg1 + 0x14) & 4) == 0)
        sub_140a74f90(*(arg1 + 0x38))
        *(arg1 + 0x28) &= 0xfffffff7
        *(arg1 + 0x2c) = 0
    else
        int64_t rcx_2 = *(arg1 + 0x40)
        int32_t rcx_3
        
        if (rcx_2 == 0)
            rcx_3 = *(arg1 + 0x48)
        else
            sub_140a74f90(rcx_2)
            rcx_3 = 0
        
        *(arg1 + 0x40) = *(arg1 + 0x38)
        int32_t rax = *(arg1 + 0x2c)
        *(arg1 + 0x2c) = 0
        
        if (rcx_3 u>= rax)
            rax = rcx_3
        
        *(arg1 + 0x28) &= 0xfffffff7
        *(arg1 + 0x48) = rax

*(arg1 + 0x38) = 0
int32_t rdx_2 = *(arg1 + 0x28)
*(arg1 + 0x20) += zx.q(not.d(rdx_2 u>> 1)) & 1
*(arg1 + 0x28) = rdx_2 & 0xfffffffe
