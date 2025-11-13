// 函数: sub_14296ba60
// 地址: 0x14296ba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_1428a96d0(*arg1)
int32_t* rax_8

if (rax s> 0x19)
    if (rax == 0x1a)
        return *(arg1[1] + 8) + 0x10
    
    if (rax == 0xcd)
        return *(arg1[1] + 0x28) + 8
    
    if (rax == 0x312)
        return *(arg1[1] + 0x18) + 8
    
label_14296bad1:
    rax_8 = arg1[1]
    
    if (*rax_8 != 4)
        sub_1428a5670(0x2e, 0x81, 0x98, "crypto\cms\cms_lib.c", 0xb8)
        return 0
else if (rax == 0x19)
    rax_8 = *(arg1[1] + 0x10)
else
    if (rax == 0x15)
        return &arg1[1]
    
    if (rax != 0x16)
        if (rax == 0x17)
            return *(arg1[1] + 0x18) + 0x10
        
        goto label_14296bad1
    
    rax_8 = *(arg1[1] + 0x10)

return &rax_8[2]
