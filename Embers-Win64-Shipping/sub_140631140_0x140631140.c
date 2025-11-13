// 函数: sub_140631140
// 地址: 0x140631140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1
result_1.b = 0
void* rax = sub_1423de540(data_143f5b298, arg1, 0)

if (rax != 0)
    char result = sub_14226ca40(sub_142436900(rax), *arg2, arg3, arg4, arg5)
    result_1 = zx.q(result)
    
    if (result != 0)
        return result

int128_t var_98
__builtin_memset(&var_98, 0, 0x80)
var_98:8.d = 0x3f800000
*arg5 = var_98
__builtin_memset(&arg5[1], 0, 0x78)
return result_1.b
