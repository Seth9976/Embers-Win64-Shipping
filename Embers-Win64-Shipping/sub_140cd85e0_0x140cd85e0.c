// 函数: sub_140cd85e0
// 地址: 0x140cd85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1].d
uint8_t result = (rcx u>> 0xc).b

if ((result & 1) == 0)
    return result

arg1[1].d = rcx & 0xffffefff
void* rax_1 = sub_140d209c0(arg1)

if (rax_1 != 0)
    sub_140cd85e0(rax_1)

int32_t rcx_5 = arg1[1].d

if (((rcx_5 u>> 0xd).b & 1) != 0)
    (*(*arg1 + 0x78))(arg1, 0)
    rcx_5 = arg1[1].d

if (((rcx_5 u>> 4).b & 1) == 0)
    jump(*(*arg1 + 0x70))

jump(*(*arg1[2] + 0x350))
