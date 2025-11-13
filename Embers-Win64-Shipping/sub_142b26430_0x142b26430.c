// 函数: sub_142b26430
// 地址: 0x142b26430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg3
int64_t* rbx = arg1

if (result s<= 0)
    arg1[0x5f].d = result
    
    if (arg2[4] != 0)
        *(arg1 + 0x21) = 0xff
    
    *arg1 = arg2
    sub_142a95970(*arg2, nullptr, sub_142b26d50, rbx)
    
    if (arg2[4] != 0 && rbx[0x5f].d s<= 0)
        sub_142a9f940(&rbx[5])
        *(rbx + 0x21) = 1
        int64_t** rcx_2 = arg2[4]
        *rbx = rcx_2
        sub_142a95970(*rcx_2, nullptr, sub_142b26d50, rbx)
    
    result = rbx[0x5f].d
    *arg3 = result

return result
