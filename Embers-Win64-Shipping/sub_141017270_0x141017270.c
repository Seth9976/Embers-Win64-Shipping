// 函数: sub_141017270
// 地址: 0x141017270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x90)
int64_t var_38_1
__builtin_memset(&var_38_1, 0, 0x18)
int64_t* result

while (true)
    result = *(arg1 + 0x88)
    
    if (*result == 0)
        break
    
    void* rcx_2 = **(arg1 + 0x88)
    var_38_1.o = *(rcx_2 + 8)
    int128_t var_30
    var_30:8.q = *(rcx_2 + 0x18)
    result = sub_1410645f0(&var_30)
    
    if (result.b == 0)
        break
    
    void* rdx_1 = **(arg1 + 0x88)
    
    if (rdx_1 != 0)
        int64_t rcx_4 = *(arg1 + 0x88)
        var_38_1.o = *(rdx_1 + 8)
        int64_t var_18_1 = 0
        int64_t zmm1 = *(rdx_1 + 0x18)
        *(arg1 + 0x88) = rdx_1
        var_30:8.q = zmm1
        *(rdx_1 + 8) = 0.o
        *(rdx_1 + 0x18) = 0
        j_sub_140a74f90(rcx_4)
    
    *(arg1 + 0x68) = var_38_1

if (arg1 == -0x90)
    return result

return LeaveCriticalSection(arg1 + 0x90)
