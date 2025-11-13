// 函数: sub_1423b7130
// 地址: 0x1423b7130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = data_143f5a118
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

*arg1 = *(rdi + (rcx << 2))
int64_t rdi_1 = data_143f5a178
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

arg1[1] = *(rdi_1 + (rcx_1 << 2))
int64_t rdi_2 = data_143f5a1a8
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

arg1[3] = *(rdi_2 + (rcx_2 << 2))
int64_t rdi_3 = data_143f5a208
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

float temp0 = _mm_max_ss(*(rdi_3 + (rcx_3 << 2)), 0)
arg1[7] = int.d(temp0 + temp0 - 0.5f) s>> 1
int64_t rdi_4 = data_143f5a160
int64_t rcx_4

if (data_143de5480 == 0)
    rcx_4 = 0
else
    rcx_4.b = GetCurrentThreadId() != data_143de5470

arg1[8] = *(rdi_4 + (rcx_4 << 2))
int64_t rdi_5 = data_143f5a220
int64_t rcx_5

if (data_143de5480 == 0)
    rcx_5 = 0
else
    rcx_5.b = GetCurrentThreadId() != data_143de5470

uint32_t rax_11
rax_11.b = *(rdi_5 + (rcx_5 << 2)) != 0
arg1[0xa].b = rax_11.b
int64_t rdi_6 = data_143f5a0d0
int64_t rcx_6

if (data_143de5480 == 0)
    rcx_6 = 0
else
    rcx_6.b = GetCurrentThreadId() != data_143de5470

rax_11.b = *(rdi_6 + (rcx_6 << 2)) != 0
*(arg1 + 0x25) = rax_11.b
int64_t rdi_7 = data_143f5a268
int64_t rcx_7

if (data_143de5480 == 0)
    rcx_7 = 0
else
    rcx_7.b = GetCurrentThreadId() != data_143de5470

rax_11.b = *(rdi_7 + (rcx_7 << 2)) != 0
arg1[9].b = rax_11.b
int64_t rdi_8 = data_143f5a238
int64_t rcx_8

if (data_143de5480 == 0)
    rcx_8 = 0
else
    rcx_8.b = GetCurrentThreadId() != data_143de5470

rax_11.b = *(rdi_8 + (rcx_8 << 2)) != 0
*(arg1 + 0x26) = rax_11.b
int64_t rdi_9 = data_143f5a250
int64_t rcx_9

if (data_143de5480 == 0)
    rcx_9 = 0
else
    rcx_9.b = GetCurrentThreadId() != data_143de5470

rax_11.b = *(rdi_9 + (rcx_9 << 2)) != 0
*(arg1 + 0x27) = rax_11.b
int64_t rdi_10 = data_143f5a2e0
int64_t rcx_10

if (data_143de5480 == 0)
    rcx_10 = 0
else
    rcx_10.b = GetCurrentThreadId() != data_143de5470

arg1[0xb] = *(rdi_10 + (rcx_10 << 2))
int64_t rdi_11 = data_143f5a1c0
int64_t rcx_11

if (data_143de5480 == 0)
    rcx_11 = 0
else
    rcx_11.b = GetCurrentThreadId() != data_143de5470

arg1[5] = *(rdi_11 + (rcx_11 << 2))
int64_t rdi_12 = data_143f5a1d8
int64_t rcx_12

if (data_143de5480 == 0)
    rcx_12 = 0
else
    rcx_12.b = GetCurrentThreadId() != data_143de5470

int128_t zmm6 = 0x3f800000
arg1[6] = _mm_max_ss(*(rdi_12 + (rcx_12 << 2)), 0x3f800000)
int64_t rdi_13 = data_143f5a2f8
int64_t rcx_13

if (data_143de5480 == 0)
    rcx_13 = 0
else
    rcx_13.b = GetCurrentThreadId() != data_143de5470

arg1[0xc] = *(rdi_13 + (rcx_13 << 2))
int64_t rdi_14 = data_143f5a310
int64_t rcx_14

if (data_143de5480 == 0)
    rcx_14 = 0
else
    rcx_14.b = GetCurrentThreadId() != data_143de5470

char rcx_15 = *(arg1 + 0x25)
arg1[0xd] = *(rdi_14 + (rcx_14 << 2))
uint32_t rax_20

if (rcx_15 == 0)
    rax_20.b = 0
else
    int64_t rdi_15 = data_143f5a298
    int64_t rdx_1
    
    if (data_143de5480 == 0)
        rdx_1 = 0
    else
        rax_20 = GetCurrentThreadId()
        rcx_15 = *(arg1 + 0x25)
        rdx_1.b = rax_20 != data_143de5470
    
    if (*(rdi_15 + (rdx_1 << 2)) == 0)
        rax_20.b = 0
    else
        rax_20.b = 1

*(arg1 + 0x29) = rax_20.b

if (rcx_15 != 0)
    int64_t rdi_16 = data_143f5a1f0
    int64_t rcx_16
    
    if (data_143de5480 == 0)
        rcx_16 = 0
    else
        rcx_16.b = GetCurrentThreadId() != data_143de5470
    
    zmm6 = *(rdi_16 + (rcx_16 << 2))

arg1[4] = zmm6.d
int64_t rdi_17 = data_143f5a328
int64_t rcx_17

if (data_143de5480 == 0)
    rcx_17 = 0
else
    rcx_17.b = GetCurrentThreadId() != data_143de5470

rax_20.b = *(rdi_17 + (rcx_17 << 2)) != 0
arg1[0x10].b = rax_20.b
int64_t rdi_18 = data_143f5a358
int64_t rcx_18

if (data_143de5480 == 0)
    rcx_18 = 0
else
    rcx_18.b = GetCurrentThreadId() != data_143de5470

rax_20.b = *(rdi_18 + (rcx_18 << 2)) != 0
*(arg1 + 0x41) = rax_20.b
int64_t rdi_19 = data_143f5a3b8
int64_t rcx_19

if (data_143de5480 == 0)
    rcx_19 = 0
else
    rcx_19.b = GetCurrentThreadId() != data_143de5470

arg1[0x11] = *(rdi_19 + (rcx_19 << 2))
bool cond:20 = arg1[0xb] s> 0
arg1[0xe] = data_143a30368:0xc.d

if (not(cond:20))
    arg1[0xb] = 0xf

if (*(arg1 + 0x27) != 0)
    arg1[0xa].b = 0
    arg1[7] = 0

arg1[0x12].b = 0
int64_t rdi_20 = data_143f5a340
int64_t rcx_21

if (data_143de5480 == 0)
    rcx_21 = 0
else
    rcx_21.b = GetCurrentThreadId() != data_143de5470

int32_t rax_24 = *(rdi_20 + (rcx_21 << 2))
int32_t rcx_22 = 0

if (rax_24 s>= 0)
    rcx_22 = rax_24

arg1[0xf] = rcx_22
int64_t rdi_21 = data_143f5a190
int64_t rcx_23

if (data_143de5480 == 0)
    rcx_23 = 0
else
    rcx_23.b = GetCurrentThreadId() != data_143de5470

int32_t result = *(rdi_21 + (rcx_23 << 2))
arg1[2] = result
data_143f5a094 = 0
return result
