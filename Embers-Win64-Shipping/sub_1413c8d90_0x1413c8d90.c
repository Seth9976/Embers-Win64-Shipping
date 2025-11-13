// 函数: sub_1413c8d90
// 地址: 0x1413c8d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = arg1[1]

if (rdx[0xc].b != 0)
    return 

sub_141405ae0(*arg1, rdx, arg1[2])

if (data_143f0f21c == 0)
    return 

int64_t rsi_1 = data_143ec9428
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

if (*(rsi_1 + (rcx_1 << 2)) == 0)
    return 

int32_t* rdi_1 = arg1[1]
bool cond:1_1 = rdi_1[7] == 0
rdi_1[6] = 0

if (not(cond:1_1))
    sub_1405c5510(&rdi_1[4], 0)

bool cond:3_1 = rdi_1[0xb] == 0
rdi_1[0xa] = 0

if (not(cond:3_1))
    sub_1405c5510(&rdi_1[8], 0)

*rdi_1 = 0
rdi_1[0xc].b = 1
