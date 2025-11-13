// 函数: sub_1410a16f0
// 地址: 0x1410a16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14122cca0(arg1, arg2)

if (sub_1414c37f0(*arg1) != 0)
    bool cond:0_1 = sub_1410a09e0(*arg1) != 0
    char arg_8 = 0xe
    int32_t rcx_2 = 4
    
    if (cond:0_1)
        rcx_2 = 1
    
    int32_t arg_18 = rcx_2
    sub_14107b990(arg2 + 0xc0, &arg_18, &arg_8)

sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
return sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308)) __tailcall
