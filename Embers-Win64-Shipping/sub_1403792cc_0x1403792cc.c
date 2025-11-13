// 函数: sub_1403792cc
// 地址: 0x1403792cc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax
int64_t r9
rax, r9 = sub_140378d54(arg1)

if (rax == 0x165)
    return sub_140378724(arg2, arg3, "XMA1", r9)

int16_t rax_2 = arg1[1]
char const* const r8

if (rax_2 == 1)
    r8 = "Mono"
else if (rax_2 == 2)
    r8 = "Stereo"
else if (rax_2 == 3)
    r8 = &data_1435fc348
else if (rax_2 == 4)
    r8 = "Quad"
else if (rax_2 == 5)
    r8 = &data_1435fc354
else if (rax_2 == 6)
    r8 = &data_1435fc358
else if (rax_2 != 7)
    r8 = "ManyChannels"
    
    if (rax_2 == 8)
        r8 = &data_1435fc360
else
    r8 = &data_1435fc35c

char const* const rcx_1

switch (rax)
    case 1
        int16_t rax_3 = arg1[7]
        
        if (rax_3 == 8)
            rcx_1 = "Pcm8Bit"
        else if (rax_3 == 0x10)
            rcx_1 = "Pcm16Bit"
        else if (rax_3 != 0x18)
            rcx_1 = "BadBitsPerSample"
            
            if (rax_3 == 0x20)
                rcx_1 = "Pcm32Bit"
        else
            rcx_1 = "Pcm24Bit"
    case 2
        rcx_1 = "Adpcm"
    case 3
        rcx_1 = "Float"
    case 0x92
        rcx_1 = "AC3Spdif"
    case 0x161
        rcx_1 = "WMAStd"
    case 0x162
        rcx_1 = "WMAPro"
    case 0x164
        rcx_1 = "WMASpdif"
    case 0x166
        rcx_1 = "XMA2"
    default
        rcx_1 = "Unknown"

char const* const var_10_1 = r8
char const* const var_18_1 = rcx_1
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = mulu.dp.d(0x10624dd3, *(arg1 + 4))
return sub_140378724(arg2, arg3, "%luk%s%s", zx.q(temp0_1 u>> 6))
