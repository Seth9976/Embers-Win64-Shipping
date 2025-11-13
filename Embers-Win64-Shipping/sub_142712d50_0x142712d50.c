// 函数: sub_142712d50
// 地址: 0x142712d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = sub_14273b1a0()
arg1[1].d = arg2[1].d
int32_t rcx = arg1[3].d
uint64_t result = zx.q(arg2[1].d << 3)

if (result.d s> rcx)
    arg1[3].d = result.d
    
    if (result.d s> *(arg1 + 0x1c))
        result = sub_1405daba0(&arg1[2])
else if (result.d s< rcx && result.d != rcx)
    arg1[3].d = result.d
    result = sub_1405dac10(&arg1[2])

uint64_t* rsi = arg1[2]
int32_t i = 0

if (arg2[1].d s> 0)
    void** rdi_1 = nullptr
    
    do
        uint64_t result_1
        sub_140d3a3a0(&result_1, *(rdi_1 + *arg2))
        result = result_1
        i += 1
        *rsi = result
        rsi = &rsi[1]
        rdi_1 = &rdi_1[1]
    while (i s< arg2[1].d)

return result
