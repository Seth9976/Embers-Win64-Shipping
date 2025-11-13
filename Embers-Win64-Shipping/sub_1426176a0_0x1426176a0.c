// 函数: sub_1426176a0
// 地址: 0x1426176a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s> *arg1)
    return 

void* rbp_1 = *(arg1 + 8)
int64_t rsi_1 = sx.q(arg2) * 0x328
int128_t* rcx_1 = rbp_1 + 0x270 + rsi_1
*(rsi_1 + rbp_1 + 0x268) = *arg3
int64_t* rbx_1 = arg3[2]
int64_t var_28 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_28 != rcx_1)
    var_28.o = *rcx_1
    *rcx_1 = var_28.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*(rsi_1 + rbp_1 + 0x280) = arg3[3].d
*(rsi_1 + rbp_1 + 0x284) = *(arg3 + 0x1c)
*(rsi_1 + rbp_1 + 0x288) = arg3[4].d
*(rsi_1 + rbp_1 + 0x28c) = *(arg3 + 0x24)
*(rsi_1 + rbp_1 + 0x290) = arg3[5].d
*(rsi_1 + rbp_1 + 0x294) = *(arg3 + 0x2c)
*(rsi_1 + rbp_1 + 0x298) = arg3[6].d
*(rsi_1 + rbp_1 + 0x29c) = *(arg3 + 0x34)
*(rsi_1 + rbp_1 + 0x2a0) = arg3[7].d
*(rsi_1 + rbp_1 + 0x2a4) = *(arg3 + 0x3c)
*(rsi_1 + rbp_1 + 0x2a8) = arg3[8].d
*(rsi_1 + rbp_1 + 0x2ac) = *(arg3 + 0x44)
*(rsi_1 + rbp_1 + 0x2ae) = *(arg3 + 0x46)
*(rsi_1 + rbp_1 + 0x2af) = *(arg3 + 0x47)
