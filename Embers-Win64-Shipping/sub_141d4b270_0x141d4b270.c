// 函数: sub_141d4b270
// 地址: 0x141d4b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t var_18 = *arg2
int64_t* rax_1 = arg2[1]

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

int64_t* arg_8 = &var_18
int32_t result = sub_141c815c0(arg1 + 0x38, &arg_8, arg3)

if (rax_1 != 0)
    result = *(rax_1 + 0xc)
    *(rax_1 + 0xc) -= 1
    
    if (result == 1 && rax_1 != 0)
        result = (*(*rax_1 + 8))(rax_1, 1)

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
