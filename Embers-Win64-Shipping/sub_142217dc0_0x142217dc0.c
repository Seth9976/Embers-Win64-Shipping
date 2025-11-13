// 函数: sub_142217dc0
// 地址: 0x142217dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x628))()

if (rax_1 != 0)
    jump(*(*rax_1 + 0x430))

void* rcx_1 = arg1[0x26]

if (rcx_1 != 0)
    return sub_141f3cbf0(rcx_1) __tailcall

void* rax_4 = (*(*arg1 + 0x150))(arg1)
int64_t result = *(rax_4 + 0x100)

if (result != 0)
    return result

return sub_14243ab60(rax_4) __tailcall
