// 函数: sub_140cbaa10
// 地址: 0x140cbaa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] += 1
int64_t rsi
rsi.b = 0
uint64_t result

do
    int32_t* arg_8 = arg1
    int32_t** var_20_1 = &arg_8
    uint64_t (* var_28)(int64_t* arg1) = sub_140cb08f0
    sub_140a3fca0(&var_28, zx.o(0))
    EnterCriticalSection(&arg1[4])
    result = 0
    bool z_1
    
    if (0 == *arg1)
        *arg1 = 0
        z_1 = true
    else
        result = zx.q(*arg1)
        z_1 = false
    
    if (z_1)
        int64_t* rcx_2 = *(arg1 + 0x38)
        (*(*rcx_2 + 0x18))(rcx_2)
        arg1[1] += 1
        rsi.b = 1
        int32_t result_1 = arg1[2]
        arg1[2] = 0
        result = zx.q(result_1)
    
    if (arg1 != -0x10)
        result = LeaveCriticalSection(&arg1[4])
while (rsi.b == 0)

return result
