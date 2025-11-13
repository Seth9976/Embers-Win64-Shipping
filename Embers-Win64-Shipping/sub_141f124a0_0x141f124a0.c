// 函数: sub_141f124a0
// 地址: 0x141f124a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x82].d s<= 0 && arg1[0x84].d s<= 0 && arg1[0x87].d s<= 0)
    return 

arg1[0x82].d = 0

if (*(arg1 + 0x414) != 0)
    sub_140775d60(&arg1[0x81], 0)

arg1[0x84].d = 0

if (*(arg1 + 0x424) != 0)
    sub_1405c5660(&arg1[0x83], 0)

int32_t i_1 = arg1[0x87].d
void* rbx_1 = arg1[0x86]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *(rbx_1 + 0x10)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x87].d = 0

if (*(arg1 + 0x43c) != 0)
    sub_1405a5220(&arg1[0x86], 0)

sub_141ee8490(arg1)
