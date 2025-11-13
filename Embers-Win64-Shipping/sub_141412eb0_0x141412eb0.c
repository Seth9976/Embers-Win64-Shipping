// 函数: sub_141412eb0
// 地址: 0x141412eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    sub_1405a6220(sub_140a242a0(), arg1)
    int64_t* rcx_1 = *arg1
    *arg1 = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

void* rsi = arg1[2]

if (rsi != 0)
    sub_1405ae180(rsi + 0x3000)
    j_sub_140a74f90(rsi)

void* rsi_1 = arg1[1]

if (rsi_1 != 0)
    sub_1405ae180(rsi_1 + 0x3000)
    j_sub_140a74f90(rsi_1)

int64_t* rcx_6 = *arg1

if (rcx_6 == 0)
    return 

rcx_6[9].d -= 1

if (rcx_6[9].d == 1)
    sub_140a2f6e0(rcx_6)
