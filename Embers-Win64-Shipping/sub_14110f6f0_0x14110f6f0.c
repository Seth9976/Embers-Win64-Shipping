// 函数: sub_14110f6f0
// 地址: 0x14110f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x14)

if (rsi s<= 0)
    return 

int32_t rdi_1

if (data_143f0f1c7 == 0 || *(data_143ed2e18 + 4) == 0)
    rdi_1 = 0
else
    rdi_1 = 0x2000

int32_t rdi_2 = rdi_1 | data_143ed342c
sub_1407b4d10(arg1 + 0x18, 4, 5, 0x1c, 0x101, 
    FDistanceFieldCulledObjectBuffers_ObjectIndirectArguments", 0)
sub_1407b4d10(arg1 + 0x38, 4, 3, 0x1c, 0x101, 
    FDistanceFieldCulledObjectBuffers_ObjectIndirectDispatch", 0)
int32_t rdi_3 = rdi_2 | 1
sub_140834200(arg1 + 0x58, 0x10, rsi, rdi_3, u"FDistanceFieldCulledObjectBuffers_Bounds", 0, 0)
sub_140834200(arg1 + 0x78, 0x10, *(arg1 + 0x14) * data_1439b5bc8, rdi_3, 
    FDistanceFieldCulledObjectBuffers_Data", 0, 0)

if (*(arg1 + 0x10) != 0)
    sub_140834200(arg1 + 0x98, 0x10, *(arg1 + 0x14) * data_1439b5bcc, rdi_3, 
        FDistanceFieldCulledObjectBuffers_BoxBounds", 0, 0)
