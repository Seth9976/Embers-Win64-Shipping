// 函数: sub_141ca1b30
// 地址: 0x141ca1b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(*arg1, 0) == 0

if ((arg1[1] != 0 | rdx) == 0)
    return 0

int64_t var_28
int64_t* rax_2 = sub_140b63b70(arg1, &var_28)
int16_t* const rdi = &data_142d40450
int16_t* rsi

if (rax_2[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax_2

void* result_1 = sub_140d2ee50(sub_140d41340(), nullptr, rsi, 0)
int64_t rcx_3 = var_28
void* result = result_1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (result == 0)
    int64_t var_18
    int16_t** rax_4 = sub_140b63b70(arg1, &var_18)
    
    if (rax_4[1].d != result.d)
        rdi = *rax_4
    
    void* result_2 = sub_140d2f6f0(sub_140d41340(), 0, rdi, 0, 0, 0, 1, 0)
    int64_t rcx_6 = var_18
    result = result_2
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return result
