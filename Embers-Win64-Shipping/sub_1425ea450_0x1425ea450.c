// 函数: sub_1425ea450
// 地址: 0x1425ea450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
char* rcx = *arg1
int32_t result_1 = 0
char arg_10 = 0
int32_t arg_18 = 0
int32_t arg_20 = 0

if (rcx != 0)
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (rcx[rax_1] != 0)
    
    if (rax_1 != 0)
        int32_t* var_10_1 = &arg_20
        int32_t* var_18_1 = &arg_18
        
        if (sub_1425f29b0(rcx, "%u,%u,%u,%u", &result_1) != 0)
            result_1.b = result_1.b
            result_1:1.b = arg_10
            result_1:2.b = arg_18.b
            result_1:3.b = arg_20.b
            return zx.q(result_1)

result_1 = 0xff000000
uint64_t result = zx.q(result_1)
*arg2 = 4
return result
