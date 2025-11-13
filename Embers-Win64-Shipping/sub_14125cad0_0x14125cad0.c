// 函数: sub_14125cad0
// 地址: 0x14125cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rbx = sx.q(arg2[1].d)
int64_t rsi = *arg2
arg1[1].d = rbx.d

if (rbx.d != 0)
    sub_141295380(arg1, zx.q(rbx.d), 0)
    memcpy(*arg1, rsi, (rbx << 3).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rsi_1 = sx.q(arg2[3].d)
int64_t rbp = arg2[2]
arg1[3].d = rsi_1.d

if (rsi_1.d != 0)
    sub_141295380(&arg1[2], zx.q(rsi_1.d), 0)
    memcpy(arg1[2], rbp, (rsi_1 << 3).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int64_t rsi_2 = sx.q(arg2[5].d)
int64_t rbp_1 = arg2[4]
arg1[5].d = rsi_2.d

if (rsi_2.d != 0)
    sub_141295380(&arg1[4], zx.q(rsi_2.d), 0)
    memcpy(arg1[4], rbp_1, (rsi_2 << 3).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int64_t rsi_3 = sx.q(arg2[7].d)
int64_t rbp_2 = arg2[6]
arg1[7].d = rsi_3.d

if (rsi_3.d != 0)
    sub_141295380(&arg1[6], zx.q(rsi_3.d), 0)
    memcpy(arg1[6], rbp_2, (rsi_3 << 3).d)
else
    *(arg1 + 0x3c) = 0

arg1[8] = 0
int64_t rsi_4 = sx.q(arg2[9].d)
int64_t rbp_3 = arg2[8]
arg1[9].d = rsi_4.d

if (rsi_4.d != 0)
    sub_141295380(&arg1[8], zx.q(rsi_4.d), 0)
    memcpy(arg1[8], rbp_3, (rsi_4 << 3).d)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int32_t i_1 = arg2[0xb].d
int64_t* rbx_1 = arg2[0xa]
arg1[0xb].d = i_1

if (i_1 != 0)
    sub_141295380(&arg1[0xa], zx.q(i_1), 0)
    int64_t* rcx_10 = arg1[0xa]
    int32_t i
    
    do
        void* rax_1 = *rbx_1
        *rcx_10 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        rcx_10 = &rcx_10[1]
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = 0
int64_t rsi_5 = sx.q(arg2[0xd].d)
int64_t rdi_1 = arg2[0xc]
arg1[0xd].d = rsi_5.d

if (rsi_5.d != 0)
    sub_141295380(&arg1[0xc], zx.q(rsi_5.d), 0)
    memcpy(arg1[0xc], rdi_1, (rsi_5 << 3).d)
else
    *(arg1 + 0x6c) = 0

return arg1
