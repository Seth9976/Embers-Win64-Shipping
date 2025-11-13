// 函数: sub_14221ace0
// 地址: 0x14221ace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = 0
sub_140597df0(arg1 + 0x40, arg2)
sub_140597df0(arg1 + 0x50, &arg2[2])
*(arg1 + 0x60) = arg2[4].d
*(arg1 + 0x64) = *(arg2 + 0x24)
sub_140597df0(arg1 + 0x68, &arg2[5])
sub_140597df0(arg1 + 0x78, &arg2[7])

if (arg1 + 0x88 != &arg2[9])
    int64_t* rbx_1 = *(arg1 + 0x88)
    int32_t i_1 = *(arg1 + 0x90)
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1405967a0(arg1 + 0x88, arg2[9], arg2[0xa].d, *(arg1 + 0x94), 0)

int64_t* result = sub_140597df0(arg1 + 0x98, &arg2[0xb])
*(arg1 + 0xa8) = 0
return result
