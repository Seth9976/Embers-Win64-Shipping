// 函数: sub_140b3dbe0
// 地址: 0x140b3dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b3db50()
void* var_18
sub_140b3a6e0(&data_143de7d78, &var_18, arg1)
void* rdi = var_18
int64_t result

if (rdi != 0)
    result = *(rdi + 0x28)

if (rdi == 0 || result == 0)
    result = 0

int64_t* var_10

if (var_10 == 0)
    return result

var_10[1].d -= 1

if (var_10[1].d == 1)
    int64_t rdx_1 = *var_10
    (*rdx_1)(var_10, rdx_1)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_1 = *var_10
        (*(r8_1 + 8))(var_10, zx.q(rsi_1), r8_1)

return result
