// 函数: sub_142136860
// 地址: 0x142136860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t var_18
(*(*arg1 + 0x358))(arg1, &var_18)
int32_t var_10
char rax_1

if (rbx.d s< 0 || rbx.d s>= var_10)
    rax_1 = 0
else
    rax_1 = 1

void* result

if (rax_1 != 0)
    result = *(var_18 + (rbx << 3))

if (rax_1 != 0 && result != 0)
    void* rax_3 = sub_142582280()
    void* rcx = *(result + 0x10)
    int64_t rdx_1 = sx.q(*(rax_3 + 0x38))
    
    if (rdx_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_1 << 3)) == rax_3 + 0x30)
        return result
else if (data_143f4ce49 == 0)
    data_143f4ce49 = 1

return 0
