// 函数: sub_140aac150
// 地址: 0x140aac150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
void* var_18
sub_140aac030(arg1, &var_18, arg2)
void* rcx = var_18

if (rcx != 0)
    result = sub_1405948b0(rcx)

int64_t* var_10

if (var_10 == 0)
    return result

var_10[1].d -= 1

if (var_10[1].d == 1)
    (**var_10)(var_10)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return result
