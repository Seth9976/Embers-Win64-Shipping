// 函数: sub_14292e790
// 地址: 0x14292e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_1428a96d0(*(arg2 + 0x18))
void* r8_1

if (rax == 0x15)
    r8_1 = *(arg2 + 0x20)
label_14292e826:
    
    if (r8_1 == 0)
        return 0
else
    if (rax == 0x16)
        r8_1 = *(*(*(arg2 + 0x20) + 0x28) + 0x20)
        goto label_14292e826
    
    if (rax == 0x17)
        r8_1 = *(*(*(arg2 + 0x20) + 0x10) + 0x10)
        
        if (r8_1 == 0)
            r8_1 = sub_1428c35d0()
            *(*(*(arg2 + 0x20) + 0x10) + 0x10) = r8_1
            goto label_14292e826
    else
        if (rax != 0x18)
            return 0
        
        r8_1 = *(*(*(arg2 + 0x20) + 0x28) + 0x10)
        
        if (r8_1 == 0)
            void* rax_5 = sub_1428c35d0()
            r8_1 = rax_5
            *(*(*(arg2 + 0x20) + 0x28) + 0x10) = rax_5
            goto label_14292e826

*(r8_1 + 0x10) |= 0x10
*arg1 = r8_1 + 8
return 1
