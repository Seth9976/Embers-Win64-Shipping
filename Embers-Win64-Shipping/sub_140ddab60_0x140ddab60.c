// 函数: sub_140ddab60
// 地址: 0x140ddab60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9760
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3] = 0
arg1[4] = 0
arg1[5] = 2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 2
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 2
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 2
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 2
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
void* rsi = arg1[1]
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_142d3fe58
    rax_2[2] = DBIQueryLazyTypes
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142d3feb0

if (rax_2 != 0)
    sub_140599630(rsi + 0x40, 1)
    void arg_8
    (*rax_2)[6](rax_2, &arg_8)
    int64_t rbp_1 = sx.q(*(rsi + 0x48))
    int32_t rax_5 = (rbp_1 + 1).d
    *(rsi + 0x48) = rax_5
    
    if (rax_5 s> *(rsi + 0x4c))
        sub_1405a4f90(rsi + 0x40)
    
    void**** rax_8 = (rbp_1 << 4) + *(rsi + 0x40)
    *rax_8 = rax_2
    rax_8[1].d = 3

return arg1
