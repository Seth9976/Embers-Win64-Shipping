// 函数: sub_140b3da90
// 地址: 0x140b3da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140b3a6e0(arg1, &var_18, arg2)
void* rcx = var_18
int64_t result = 0

if (rcx != 0)
    bool z_1
    
    if (0 == *(rcx + 0x31))
        *(rcx + 0x31) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(rcx + 0x31)
        z_1 = false
    
    uint32_t rax_2
    
    if (z_1 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (not(z_1) || data_143de5480 == 0 || rax_2.b != 0)
        result = *(var_18 + 0x28)

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
