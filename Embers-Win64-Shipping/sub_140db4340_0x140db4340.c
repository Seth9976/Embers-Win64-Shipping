// 函数: sub_140db4340
// 地址: 0x140db4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *arg1
void* rbx_2 = (sx.q(arg1[1].d) << 5) + *(result + 0x10)

if ((arg2 & 8) != 0)
    *(rbx_2 + 0x1b) |= 8
    result = sub_140db2e20(*arg1)

if (*(rbx_2 + 0x19) == 0)
    result = sub_140db8590(*arg1 + 0x20, rbx_2)

*(rbx_2 + 0x19) |= arg2
return result
