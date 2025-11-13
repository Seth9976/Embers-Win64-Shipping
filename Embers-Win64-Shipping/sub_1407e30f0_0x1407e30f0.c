// 函数: sub_1407e30f0
// 地址: 0x1407e30f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 2
arg1[5].d &= 0xfffffffe
arg1[4] = 0
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_1 = *arg1 + 0x18
    int32_t i
    
    do
        int64_t rcx = *rdi_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rdi_1 = &rdi_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c5660(arg1, 0)

sub_1407ecc50(&arg1[2], 0)
*(arg1 + 0x2c) = 0
arg1[7].b = 0
*(arg1 + 0x34) = 2.d
return arg1
