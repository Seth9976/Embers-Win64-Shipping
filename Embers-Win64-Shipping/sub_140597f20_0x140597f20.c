// 函数: sub_140597f20
// 地址: 0x140597f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t arg_8 = arg2

if ((*rax)(*(rax + 8), &arg_8) == 0)
    return 0

int32_t result = *arg1[2]

if (result != 0)
    return result

*arg1[2] = sub_140a20af0()
uint64_t rcx_2 = zx.q(*arg1[2])

if (rcx_2.d == 0)
    *8 = arg1[1]
    return zx.q(*arg1[2])

*(*(&data_143cf0bf8 + (rcx_2 u>> 0xe << 3)) + (zx.q(rcx_2.d) & 0x3fff) * 0x18 + 8) = arg1[1]
return zx.q(*arg1[2])
