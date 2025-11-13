// 函数: sub_1424112d0
// 地址: 0x1424112d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0

if (*(arg1 + 0x260) == 0 || arg2.d != *(arg1 + 0x258) || (arg2 u>> 0x20).d != *(arg1 + 0x25c))
    char arg_8
    zmm0 = sub_142402fb0(arg1, arg2, &arg_8)
    
    if (arg_8 == 0)
        *(arg1 + 0x264) = zmm0
        void arg_10
        
        if (&arg_10 != arg1 + 0x258)
            *(arg1 + 0x258) = arg2
            *(arg1 + 0x260) = 1
else
    zmm0 = *(arg1 + 0x264)

return __maxss_xmmss_memss(zmm0 f* *(arg1 + 0x188), 0x3c23d70a)
