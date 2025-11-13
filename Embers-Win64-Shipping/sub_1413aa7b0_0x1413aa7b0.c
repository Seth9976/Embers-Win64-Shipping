// 函数: sub_1413aa7b0
// 地址: 0x1413aa7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(data_1439b70c8 + 0x10)
int64_t r15 = *(data_1439b7130 + 0x10)
void* rbp = *(data_1439b7138 + 0x10)
int64_t rcx

if (arg3 == 0)
    rcx = rsi
else
    rcx = *sub_14139d700(arg1)

*arg5 = rcx
arg5[1] = data_14395fa10
int64_t* rax_5 = sub_1410f83c0(arg1)

if (arg3 != 0)
    void* rax_6 = *rax_5
    
    if (rax_6 != 0 && (*(rax_6 + 0x40) & 0x800) == 0)
        rbp = rax_6

arg5[2] = rbp
arg5[3] = data_14395fa10
void* rax_8

if (arg3 != 0)
    rax_8 = *(arg1 + 0x60)

int64_t rcx_2

if (arg3 == 0 || rax_8 == 0)
    rcx_2 = rsi
else
    rcx_2 = *(rax_8 + 0x10)

arg5[4] = rcx_2
arg5[5] = data_14395fa10

if (arg4 != 0)
    void* rax_10 = *(arg1 + 0xe8)
    
    if (rax_10 != 0)
        r15 = *(rax_10 + 0x10)

arg5[6] = r15
arg5[7] = data_14395fa10

if (arg4 != 0)
    void* rax_12 = *(arg1 + 0xf0)
    
    if (rax_12 != 0)
        rsi = *(rax_12 + 0x10)

arg5[8] = rsi
arg5[9] = data_14395fa10
int64_t rcx_3 = *(arg1 + 0x1e8)
int64_t rax_14 = data_1439b72e0

if (rcx_3 != 0)
    rax_14 = rcx_3

arg5[0xa] = rax_14
void* result = data_143f11108
arg5[0xb] = *(result + 0x18)
return result
