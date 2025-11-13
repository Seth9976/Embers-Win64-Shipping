// 函数: sub_14084e1b0
// 地址: 0x14084e1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x40))
void* result_1 = arg1 + 0x18
int32_t rax = (rsi + 1).d
*(result_1 + 0x28) = rax

if (rax s> *(result_1 + 0x2c))
    sub_14083a490(result_1, rsi.d)

void* result = *(result_1 + 0x20)

if (result != 0)
    result_1 = result

void* rcx_1 = result_1 + (rsi << 3)

if (rcx_1 != 0)
    result = *arg2
    *rcx_1 = result
    
    if (result != 0)
        *(result + 0x48) += 1

void* rcx_2 = *arg2

if (rcx_2 != 0)
    result = zx.q(*(rcx_2 + 0x48))
    *(rcx_2 + 0x48) -= 1
    
    if (result.d == 1)
        return sub_140a2f6e0(rcx_2)

return result
