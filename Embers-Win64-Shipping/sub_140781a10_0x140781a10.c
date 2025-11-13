// 函数: sub_140781a10
// 地址: 0x140781a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* arg_18 = &arg1[1]
int32_t arg_8
sub_14077aa90(rbx + 0xc8, &arg_8, &arg_18, nullptr)
void* rbx_2 = *(rbx + 0xc8) + sx.q(arg_8) * 0x50
*(rbx_2 + 8) = arg1[2].d
*(rbx_2 + 0xc) = *(arg1 + 0x14)
*(rbx_2 + 0x10) = arg1[3].d
*(rbx_2 + 0x14) = *(arg1 + 0x1c)
*(rbx_2 + 0x18) = arg1[4]
*(rbx_2 + 0x20) = arg1[5]
sub_140780cc0(*arg1 + 0x20, &arg1[6])
sub_140780cc0(*arg1 + 0x70, &arg1[0x10])
void* result = *arg1
*(result + 0xc0) = *(rbx_2 + 0xc) * *(rbx_2 + 8)
return result
