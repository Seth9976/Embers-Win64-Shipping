// 函数: sub_1409cd3e0
// 地址: 0x1409cd3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *arg3
int64_t result = sx.q(arg3[1].d)
void* r15 = &rsi[result]

while (rsi != r15)
    int64_t rdi_1 = sx.q(*rsi)
    int32_t rbx_1 = data_143a1c6b0
    int32_t var_38[0x4]
    int32_t* rax_1 = *(sub_1409ca9d0(arg1 + 0x40, &var_38, rdi_1.d) + 8)
    
    if (rax_1 != 0)
        *rax_1 = rbx_1
        *(rax_1 + 8) = 0
        *(rax_1 + 0x10) = 0
    
    rsi = &rsi[1]
    result = zx.q(*(*(*(arg2 + 0x28) + 0xe0) + rdi_1 * 0x28 + 0x20))
    *(*(arg1 + 0x40) + rdi_1 * 0x18) = result.d
    *(arg1 + 0xdc) = 1

return result
