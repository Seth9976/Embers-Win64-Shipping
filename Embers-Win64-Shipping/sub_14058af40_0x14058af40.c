// 函数: sub_14058af40
// 地址: 0x14058af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg1
void* result = *rdx
int64_t* rcx_1 = *(sx.q(*(result + 4)) + rdx + 0x48)

if (rcx_1 == 0)
    return result

return (*(*rcx_1 + 0x10))(rcx_1)
