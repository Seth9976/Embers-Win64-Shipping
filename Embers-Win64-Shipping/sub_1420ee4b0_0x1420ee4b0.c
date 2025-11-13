// 函数: sub_1420ee4b0
// 地址: 0x1420ee4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d16af0(&arg1[7], &arg2[2])

if (result == 0)
    arg1[5] = *arg2
    arg1[6].d = arg2[1].d
    arg1[7] = arg2[2]
    sub_140597df0(&arg1[8], &arg2[3])
    *(arg1 + 0xba) &= 0xf9
    
    if (arg1[0x17].b == 2)
        arg1[0x17].b = 1
    
    result = sub_140d23dc0(arg1, 0x30)
    
    if (result == 0)
        void* rcx_3 = arg1[4]
        
        if (rcx_3 != 0)
            return sub_14244a940(rcx_3, arg1)

return result
