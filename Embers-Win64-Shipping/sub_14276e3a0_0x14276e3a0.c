// 函数: sub_14276e3a0
// 地址: 0x14276e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
char* rax = *(r8 + 0x10)
uint32_t r9 = zx.d(*rax)
uint32_t rbp = r9
*(r8 + 0x10) = &rax[1]
r9.b &= 1
arg1[3].b = r9.b
int64_t rsi_1

if (rbp == 0)
    int64_t* rcx_2 = arg2[1]
    rsi_1 = sx.q(rcx_2[1].d)
    int32_t rax_6 = (rsi_1 + 8).d
    rcx_2[1].d = rax_6
    
    if (rax_6 s> *(rcx_2 + 0xc))
        sub_1405daba0(rcx_2)
    
    *(rsi_1 + *arg2[1]) = sub_14274ad90
else if (rbp == 1)
    int64_t* rcx = arg2[1]
    rsi_1 = sx.q(rcx[1].d)
    int32_t rax_3 = (rsi_1 + 8).d
    rcx[1].d = rax_3
    
    if (rax_3 s> *(rcx + 0xc))
        sub_1405daba0(rcx)
    
    *(rsi_1 + *arg2[1]) = sub_14274ac40
void* rdx_2 = *arg2
int16_t* rax_8 = *(rdx_2 + 0x10)
int16_t rcx_3 = *rax_8
*(rdx_2 + 0x10) = &rax_8[1]
*arg1 = rcx_3
void* rdx_3 = *arg2
int16_t* rax_10 = *(rdx_3 + 0x10)
int16_t rcx_4 = *rax_10
*(rdx_3 + 0x10) = &rax_10[1]
arg1[1] = rcx_4
void* rdx_4 = *arg2
int16_t* rax_12 = *(rdx_4 + 0x10)
int16_t rcx_5 = *rax_12
*(rdx_4 + 0x10) = &rax_12[1]
arg1[2] = rcx_5
int64_t* rcx_6 = arg2[1]
int64_t rsi_2 = sx.q(rcx_6[1].d)
int32_t rax_14 = (rsi_2 + 2).d
rcx_6[1].d = rax_14

if (rax_14 s> *(rcx_6 + 0xc))
    sub_1405daba0(rcx_6)

*(rsi_2 + *arg2[1]) = *arg1
int64_t* rcx_8 = arg2[1]
int64_t rsi_3 = sx.q(rcx_8[1].d)
int32_t rax_17 = (rsi_3 + 2).d
rcx_8[1].d = rax_17

if (rax_17 s> *(rcx_8 + 0xc))
    sub_1405daba0(rcx_8)

int16_t result = arg1[1]
*(rsi_3 + *arg2[1]) = result

if (rbp == 0)
    int64_t* rcx_10 = arg2[1]
    int64_t rsi_4 = sx.q(rcx_10[1].d)
    int32_t rax_19 = (rsi_4 + 2).d
    rcx_10[1].d = rax_19
    
    if (rax_19 s> *(rcx_10 + 0xc))
        sub_1405daba0(rcx_10)
    
    result = arg1[2]
    *(rsi_4 + *arg2[1]) = result

return result
