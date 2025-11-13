// 函数: sub_141764250
// 地址: 0x141764250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
void* rax = *(arg1 + 0x18)
int32_t rdx_3 = *(rax + 0x20) + *(r8 + 0x38) + *(r8 + 0x28) + *(r8 + 0x18)

if (rdx_3 s> *(rax + 0x24))
    sub_1405a5130(rax + 0x18, rdx_3)
    r8 = *(arg1 + 0x10)

int64_t* i = *(r8 + 0x40)
int64_t result = sx.q(*(r8 + 0x48))

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    int32_t* r8_1 = *i
    int32_t rdx_4 = r8_1[4]
    int64_t rcx_1 = *(r8_1 + 8)
    int64_t r9_1 = sx.q(*r8_1)
    void* rax_2
    
    if (rdx_4 == 1)
        rax_2 = r9_1 * 0xe0 + *(rcx_1 + 0x10)
    else if (rdx_4 != 2)
        rax_2 = r9_1 * 0x140 + *(rcx_1 + 0x30)
    else
        rax_2 = r9_1 * 0xe0 + *(rcx_1 + 0x20)
    
    int64_t rax_7 = sx.q(r9_1.d)
    void* rax_9
    
    if (rdx_4 == 1)
        rax_9 = rax_7 * 0xe0 + *(rcx_1 + 0x10)
    else if (rdx_4 != 2)
        rax_9 = rax_7 * 0x140 + *(rcx_1 + 0x30)
    else
        rax_9 = rax_7 * 0xe0 + *(rcx_1 + 0x20)
    
    int32_t rdx_5 = *(arg1 + 0x20)
    int64_t var_20_1 = *(rax_9 + 0x68)
    void* rcx_3 = *(arg1 + 0x18)
    int128_t var_18 = (*(rax_2 + 0x60)).o
    result = sub_141763d70(rcx_3, rdx_5, r8_1, &var_18)

return result
