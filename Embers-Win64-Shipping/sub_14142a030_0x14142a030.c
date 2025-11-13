// 函数: sub_14142a030
// 地址: 0x14142a030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1
int64_t var_50 = 0
int128_t var_58
*arg2 = var_58
__builtin_memset(&arg2[4], 0, 0x40)
*(arg2 + 8) = sub_1410fccd0(arg1, &data_143ec4ca0, u"SceneDepthZ", 0)
void*** rax_1

if (data_143ec4cb0 == 0)
    rax_1 = nullptr
else
    rax_1 = sub_1410fccd0(arg1, &data_143ec4cb0, u"VelocityBuffer", 0)

*(arg2 + 0x10) = rax_1
void*** rax_2

if (data_143ec4cd0 == 0)
    rax_2 = nullptr
else
    rax_2 = sub_1410fccd0(arg1, &data_143ec4cd0, u"GBufferA", 0)

*(arg2 + 0x18) = rax_2
void*** rax_3

if (data_143ec4cd8 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_1410fccd0(arg1, &data_143ec4cd8, u"GBufferB", 0)

*(arg2 + 0x20) = rax_3
void*** rax_4

if (data_143ec4ce0 == 0)
    rax_4 = nullptr
else
    rax_4 = sub_1410fccd0(arg1, &data_143ec4ce0, u"GBufferC", 0)

*(arg2 + 0x28) = rax_4
void*** rax_5

if (data_143ec4ce8 == 0)
    rax_5 = nullptr
else
    rax_5 = sub_1410fccd0(arg1, &data_143ec4ce8, u"GBufferD", 0)

*(arg2 + 0x30) = rax_5
void*** rax_6

if (data_143ec4cf0 == 0)
    rax_6 = nullptr
else
    rax_6 = sub_1410fccd0(arg1, &data_143ec4cf0, u"GBufferE", 0)

*(arg2 + 0x38) = rax_6
void*** rax_7

if (data_143ec4cf8 == 0)
    rax_7 = nullptr
else
    rax_7 = sub_1410fccd0(arg1, &data_143ec4cf8, u"GBufferF", 0)

*(arg2 + 0x40) = rax_7
int64_t* rdx = &data_1439b70c0
int64_t rcx_9 = data_143ec4cb8

if (rcx_9 != 0)
    rdx = &data_143ec4cb8

int32_t rdi
rdi.b = rcx_9 != 0
void*** result = sub_1410fccd0(arg1, rdx, u"LightingChannels", 0)
*(arg2 + 0x48) = result
*arg2 = rdi
return result
