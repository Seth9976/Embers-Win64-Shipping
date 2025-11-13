// 函数: sub_142276ba0
// 地址: 0x142276ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[0x4a]

if (arg1[0x54] != rsi && arg1[0xa9] == 0)
    return 

if (rsi == 0)
    rsi = arg1[0xa9]
    
    if (rsi != 0)
        goto label_142276be0
    
    return 

label_142276be0:

if (*(rsi + 0x5f) != 2)
    return 

int32_t rcx
rcx.b = *(arg1 + 0xec) == 0

if ((rcx.b & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
    int32_t rbx_2 = *(arg1 + 0xec)
    sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    int32_t rcx_1
    rcx_1.b = rbx_2 == 0

if (sub_141dcdc50(arg1).d == 3)
    return 

void* rax = (*(*rsi + 0x628))(rsi)

if (rax == 0)
    return 

rax = sub_140d21950(rax, sub_14254d8b0())

if (rax != 0)
    int64_t rdx_2 = *rax
    (*(rdx_2 + 0x10))(rax, rdx_2)
