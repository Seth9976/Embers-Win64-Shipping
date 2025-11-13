// 函数: sub_141f901c0
// 地址: 0x141f901c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141eefdd0(arg1)

if (*(arg1 + 0x2d1) != 0)
    uint32_t rcx = zx.d(*(arg1 + 0x27d))
    
    if (rcx == 0)
        result = sub_141f790d0(arg1)
        arg1[0x50] = result
    else
        int64_t arg_8
        
        if (rcx == 1)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_8 = 0
            result = sub_140d2dfc0(sub_1425ae5c0(), arg1, 0, 0, 0, 0, 0, 0, 0)
            int32_t rcx_10 = arg1[0x46].d
            arg1[0x50] = result
            *(result + 0x30) = rcx_10
            *(result + 0x2c) = *(arg1 + 0x22c)
            *(result + 0x28) = arg1[0x45].d
        else if (rcx == 2)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_8 = 0
            result = sub_140d2dfc0(sub_1425ae680(), arg1, 0, 0, 0, 0, 0, 0, 0)
            arg1[0x50] = result
        else if (rcx == 3)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_8 = 0
            void* rax_1 = sub_140d2dfc0(sub_1425ae740(), arg1, 0, 0, 0, 0, 0, 0, 0)
            uint128_t zmm0_1 = *(arg1 + 0x234)
            int128_t zmm1_1 = *(arg1 + 0x244)
            arg1[0x50] = rax_1
            uint128_t var_58 = zmm0_1
            int128_t var_48_1 = zmm1_1
            uint128_t var_38_1 = *(arg1 + 0x254)
            uint64_t var_18_1 = *(arg1 + 0x274)
            int128_t var_28_1 = *(arg1 + 0x264)
            result = sub_141f9bfb0(rax_1, &var_58)
    
    *(arg1 + 0x2d1) = 0

if (arg1[0x50] == 0)
    result = sub_141f790d0(arg1)
    arg1[0x50] = result

return result
