// 函数: sub_141f3bf70
// 地址: 0x141f3bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[0x86]

if (result != 0)
    int64_t* rdx = *(result + 0x58)
    
    if (arg3 s>= 0 && arg3 s< rdx[1].d)
        return sub_14234b010(arg2, arg1, rdx, arg3, 0)
    
    int32_t rcx_2 = *(result + 0x1b0) + arg2[1].d
    arg2[1].d = rcx_2
    
    if (rcx_2 s> *(arg2 + 0xc))
        result = sub_1405c4fe0(arg2)
        rcx_2 = arg2[1].d
    
    int32_t i = 0
    
    if (rcx_2 s> 0)
        int64_t rcx_4 = 0
        
        do
            rcx_4 += 0x40
            result = *arg2
            i += 1
            *(result + rcx_4 - 0x40) = data_14399f6e0
            *(result + rcx_4 - 0x30) = data_14399f6f0
            *(result + rcx_4 - 0x20) = data_14399f700
            *(result + rcx_4 - 0x10) = data_14399f710
        while (i s< arg2[1].d)

return result
