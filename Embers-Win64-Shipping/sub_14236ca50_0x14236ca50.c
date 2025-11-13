// 函数: sub_14236ca50
// 地址: 0x14236ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (data_143a2ff1c != 0)
    rax_1 = sub_140d3e110(&arg1[0x5a])

int32_t rcx_3

if (data_143a2ff1c == 0 || rax_1 == 0)
    rcx_3 = -1
else
    void* rax_2 = sub_140d3c6e0(&arg1[0x5a])
    rcx_3 = sub_140e69900(data_143e29f28, zx.q(*(rax_2 + 0xb8)))

void* rax_4 = *(arg2 + 8)
int32_t rbx = *(rax_4 + 0xb8)
*(rax_4 + 0xb8) = rcx_3
uint64_t result = sub_140e1ee50(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
*(*(arg2 + 8) + 0xb8) = rbx
return result
