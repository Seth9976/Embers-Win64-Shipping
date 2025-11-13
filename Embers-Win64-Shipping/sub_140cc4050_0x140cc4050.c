// 函数: sub_140cc4050
// 地址: 0x140cc4050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140cc3fa0(arg1)
int32_t i = result

if (result == 0)
    return result

void* rbp_1

if (result == 0)
    rbp_1 = nullptr
    goto label_140cc40a6

do
    rbp_1 = *(&data_143cf0bf8 + (zx.q(i) u>> 0xe << 3)) + (zx.q(i) & 0x3fff) * 0x18
label_140cc40a6:
    int64_t rsi_1 = sx.q(arg2[1].d)
    int64_t r14_1 = *(rbp_1 + 8)
    int32_t rax_3 = (rsi_1 + 1).d
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    int32_t i_1 = i
    *(*arg2 + (rsi_1 << 3)) = r14_1
    i = *(rbp_1 + 0x10)
    result = sub_140a24050(i_1)
while (i != 0)

return result
