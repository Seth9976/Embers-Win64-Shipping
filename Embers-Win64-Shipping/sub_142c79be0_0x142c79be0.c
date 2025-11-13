// 函数: sub_142c79be0
// 地址: 0x142c79be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_10 = rsi
void* rcx = *(*arg1 + 0x250)
int32_t rsi_1

if (*(rcx + 0x38) == 0)
    char* rcx_2 = *(rcx + 8)
    char* rax_3
    
    if (rcx_2 == 0)
        rax_3 = data_143ccb8b0(&data_1434cce10)
    else
        rax_3 = sub_142c78cd0(rcx_2, 1, rsi)
    
    if (rax_3 == 0)
        return zx.q((&rax_3[0x1b]).d)
    
    rsi_1 = sub_142c79fe0(arg1)
    data_143ccb8a0(rax_3)
else
    *(rcx + 0x40)
    rsi_1 = sub_142c79fe0(arg1)

if (rsi_1 == 0)
    arg1[0xe1].d = 7

return zx.q(rsi_1)
