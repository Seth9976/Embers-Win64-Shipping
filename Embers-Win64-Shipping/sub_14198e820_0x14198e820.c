// 函数: sub_14198e820
// 地址: 0x14198e820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1419ba990(arg1)
int32_t i_1 = *(arg1 + 0x18)
int64_t* rbx = *(arg1 + 0x10)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = sub_1419aa220(rcx)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    result = sub_1405c5570(arg1 + 0x10, 0)

if (*(arg1 + 0x48) != 0)
    int64_t rdi = 0
    int64_t* rbx_1 = *(arg1 + 0x40)
    result = &rbx_1[sx.q(*(arg1 + 0x48))]
    uint64_t rsi_2 = sx.q(*(arg1 + 0x48)) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_2 = *rbx_1
            result = (**rcx_2)(rcx_2, 0)
            rdi += 1
            rbx_1 = &rbx_1[1]
        while (rdi != rsi_2)
    
    *(arg1 + 0x48) = 0
    
    if (*(arg1 + 0x4c) s<= 0xffffffff)
        return sub_1405c5570(arg1 + 0x40, 0)

return result
