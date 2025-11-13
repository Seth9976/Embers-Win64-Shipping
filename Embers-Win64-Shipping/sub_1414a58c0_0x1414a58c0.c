// 函数: sub_1414a58c0
// 地址: 0x1414a58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
int64_t result

if (sub_1405fba70(rdi, 3).b != 0)
    int64_t rbx_1 = *(arg1 + 0x30)
    
    if (((rbx_1.b & 2) != 0 || not(test_bit(rbx_1, 9)) || (rbx_1 & 0x400004000) == 0x400004000)
            && sub_1405fba70(rdi, 3).b != 0 && (rbx_1.b & 0x20) != 0
            && sub_1405fba70(rdi, 3).b != 0)
        result.b = 1
        return result

result.b = 0
return result
