// 函数: sub_142346790
// 地址: 0x142346790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081d930(arg1 + 0x38, *arg2)
*(arg1 + 0x40) = arg2[1].d
*(arg1 + 0x44) = *(arg2 + 0xc)
*(arg1 + 0x48) = arg2[2].d

if (arg1 + 0x50 != &arg2[3])
    void* rbx_1 = *(arg1 + 0x50)
    
    if ((rbx_1.b & 1) != 0)
        rbx_1 = (rbx_1 s>> 1) + arg1 + 0x50
    
    int32_t i_1 = *(arg1 + 0x58)
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_1405d1550(rbx_1)
            rbx_1 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rdx_2 = arg2[3]
    
    if ((rdx_2.b & 1) != 0)
        rdx_2 = (rdx_2 s>> 1) + &arg2[3]
    
    sub_1408d9350(arg1 + 0x50, rdx_2, arg2[4].d, *(arg1 + 0x5c), 0)

*(arg1 + 0x60) = arg2[5]
*(arg1 + 0x68) = arg2[6].b
char result = *(arg2 + 0x31)
*(arg1 + 0x69) = result
return result
