// 函数: sub_14276e260
// 地址: 0x14276e260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
char* rax = *(r8 + 0x10)
uint32_t rdx = zx.d(*rax)
*(r8 + 0x10) = &rax[1]
int64_t rdi_1

if (rdx.b == 0)
    int64_t* rcx_2 = arg1[1]
    rdi_1 = sx.q(rcx_2[1].d)
    int32_t rax_6 = (rdi_1 + 8).d
    rcx_2[1].d = rax_6
    
    if (rax_6 s> *(rcx_2 + 0xc))
        sub_1405daba0(rcx_2)
    
    *(rdi_1 + *arg1[1]) = sub_14274a890
else if (rdx == 1)
    int64_t* rcx = arg1[1]
    rdi_1 = sx.q(rcx[1].d)
    int32_t rax_3 = (rdi_1 + 8).d
    rcx[1].d = rax_3
    
    if (rax_3 s> *(rcx + 0xc))
        sub_1405daba0(rcx)
    
    *(rdi_1 + *arg1[1]) = sub_14274a870
void* rcx_3 = *arg1
int16_t* rax_8 = *(rcx_3 + 0x10)
int16_t rsi = *rax_8
*(rcx_3 + 0x10) = &rax_8[1]
int64_t* rcx_4 = arg1[1]
int64_t rdi_2 = sx.q(rcx_4[1].d)
int32_t rax_10 = (rdi_2 + 2).d
rcx_4[1].d = rax_10

if (rax_10 s> *(rcx_4 + 0xc))
    sub_1405daba0(rcx_4)

*(rdi_2 + *arg1[1]) = rsi
void* rcx_5 = *arg1
int16_t* rax_13 = *(rcx_5 + 0x10)
int16_t rsi_1 = *rax_13
*(rcx_5 + 0x10) = &rax_13[1]
int64_t* rcx_6 = arg1[1]
int64_t rdi_3 = sx.q(rcx_6[1].d)
int32_t rax_15 = (rdi_3 + 2).d
rcx_6[1].d = rax_15

if (rax_15 s> *(rcx_6 + 0xc))
    sub_1405daba0(rcx_6)

*(rdi_3 + *arg1[1]) = rsi_1
void* rcx_7 = *arg1
int16_t* rax_18 = *(rcx_7 + 0x10)
int16_t rsi_2 = *rax_18
*(rcx_7 + 0x10) = &rax_18[1]
int64_t* rcx_8 = arg1[1]
int64_t rdi_4 = sx.q(rcx_8[1].d)
int32_t rax_20 = (rdi_4 + 2).d
rcx_8[1].d = rax_20

if (rax_20 s> *(rcx_8 + 0xc))
    sub_1405daba0(rcx_8)

int64_t result = *arg1[1]
*(rdi_4 + result) = rsi_2
return result
