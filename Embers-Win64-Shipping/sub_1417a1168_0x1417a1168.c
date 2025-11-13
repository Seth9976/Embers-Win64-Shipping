// 函数: sub_1417a1168
// 地址: 0x1417a1168
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0 = arg3
bool c
arg3 = adc.b(temp0, 0x11, c)
bool c_4 = adc.b(temp0, 0x11, c) u< temp0 || (c && adc.b(temp0, 0x11, c) == temp0)
bool p_4 = unimplemented  {adc al, 0x11}
bool c_1
bool c_2

if (p_4)
    int32_t temp1_1 = *(arg2 + 1)
    *(arg2 + 1) = adc.d(temp1_1, arg4, c_4)
    c_1 = adc.d(temp1_1, arg4, c_4) u< temp1_1 || (c_4 && adc.d(temp1_1, arg4, c_4) == temp1_1)
label_1417a1170:
    char temp3_1 = arg3
    arg3 = adc.b(temp3_1, 0x11, c_1)
    c_2 = adc.b(temp3_1, 0x11, c_1) u< temp3_1 || (c_1 && adc.b(temp3_1, 0x11, c_1) == temp3_1)
    bool p_1 = unimplemented  {adc al, 0x11}
    
    if (not(p_1))
        goto label_1417a1174
    
    *(arg2 + 1) = adc.d(*(arg2 + 1), arg4, c_2)
label_1417a1178:
    bool p_3 = unimplemented  {adc al, 0x11}
    
    if (p_3)
        breakpoint
else
    char temp2_1 = arg3
    arg3 = adc.b(temp2_1, 0x11, c_4)
    c_1 = adc.b(temp2_1, 0x11, c_4) u< temp2_1 || (c_4 && adc.b(temp2_1, 0x11, c_4) == temp2_1)
    bool p = unimplemented  {adc al, 0x11}
    
    if (not(p))
        goto label_1417a1170
    
    int32_t temp4_1 = *(arg2 + 1)
    *(arg2 + 1) = adc.d(temp4_1, arg4, c_1)
    c_2 = adc.d(temp4_1, arg4, c_1) u< temp4_1 || (c_1 && adc.d(temp4_1, arg4, c_1) == temp4_1)
label_1417a1174:
    bool p_2 = unimplemented  {adc al, 0x11}
    
    if (not(p_2))
        goto label_1417a1178
    
    *(arg2 + 1) = adc.d(*(arg2 + 1), arg4, 
        adc.b(arg3, 0x11, c_2) u< arg3 || (c_2 && adc.b(arg3, 0x11, c_2) == arg3))
breakpoint
