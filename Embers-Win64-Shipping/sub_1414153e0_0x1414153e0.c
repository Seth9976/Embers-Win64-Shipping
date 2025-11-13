// 函数: sub_1414153e0
// 地址: 0x1414153e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (*arg2 != 0)
    sub_1405a6220(sub_140a242a0(), arg2)
    int64_t* rcx_1 = *arg2
    *arg2 = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

void* rsi_1 = arg2[2]

if (rsi_1 != 0)
    sub_1405ae180(rsi_1 + 0x3000)
    j_sub_140a74f90(rsi_1)

void* rsi_2 = arg2[1]

if (rsi_2 != 0)
    sub_1405ae180(rsi_2 + 0x3000)
    j_sub_140a74f90(rsi_2)

int64_t* rcx_6 = *arg2

if (rcx_6 != 0)
    rcx_6[9].d -= 1
    
    if (rcx_6[9].d == 1)
        sub_140a2f6e0(rcx_6)

j_sub_140a74f90(arg2)
