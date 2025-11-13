// 函数: sub_14101f500
// 地址: 0x14101f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)
int512_t zmm0 = sub_14105b290(rbx + 0x70, arg1 + 0x18, arg2)

if (data_1439c7a34 u> 1)
    for (void* i = *(rbx + 0xe0); i != 0; i = *(i + 0xe0))
        zmm0 = sub_141059540(*(i + 0x30), i + 0x70, rbx + 0x70, zmm0)

return j_sub_141059a80(arg1 + 0x18, zmm0) __tailcall
