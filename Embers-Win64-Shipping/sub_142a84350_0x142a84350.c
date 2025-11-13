// 函数: sub_142a84350
// 地址: 0x142a84350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (arg3 != 0)
    int16_t var_48
    int32_t arg_8
    int512_t zmm0
    
    if (arg2 s<= 1)
        int64_t rax_1 = arg1[1]
        
        if (rax_1 != sub_142af71d0)
            var_48 = 0x38
            int32_t var_60
            var_60.q = &arg_8
            zmm0.o = zx.o(0)
            char var_46_1 = 1
            int128_t var_38
            __builtin_memset(&var_38, 0, 0x28)
            int64_t* var_40_1 = arg1
            arg_8 = 0
            rax_1(zmm0, zx.o(0), 0, 0, 3, var_60)
    
    if (arg2 s> 1 || arg2 != 1)
        int64_t rax_2 = *arg1
        
        if (rax_2 != sub_142af70a0)
            var_48 = 0x38
            zmm0.o = zx.o(0)
            char var_46_2 = 1
            int128_t var_38_1
            __builtin_memset(&var_38_1, 0, 0x28)
            int64_t* var_40_2 = arg1
            arg_8 = 0
            rax_2(zmm0, &var_48, 0, 0, 0, 3, &arg_8)

if (arg2 s<= 1)
    arg1[9].d = *(arg1[6] + 0x28)
    *(arg1 + 0x4c) = 0
    arg1[8].b = 0
    *(arg1 + 0x5d) = 0
    *(arg1 + 0x5a) = 0
    *(arg1 + 0x11a) = 0

if (arg2 s> 1 || arg2 != 1)
    arg1[0xa] = 0
    *(arg1 + 0x5b) = 0
    arg1[0x1a].d = 0xffffffff
    *(arg1 + 0x119) = 0

int64_t rax = *(*(arg1[6] + 0x20) + 0x28)

if (rax != 0)
    rax(arg1, zx.q(arg2))
