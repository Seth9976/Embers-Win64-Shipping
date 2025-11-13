// 函数: sub_1413aab70
// 地址: 0x1413aab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(data_1439b70c0 + 0x10)
int64_t r13 = *(data_1439b70c8 + 0x10)
int64_t r14 = *(data_1439b7138 + 0x10)
char rsi = arg3.b & 1
int64_t rcx

if (rsi == 0)
    rcx = r13
else
    rcx = *sub_14139d700(arg1)

*arg4 = rcx
arg4[1] = data_14395fa10
int64_t* rax_5 = sub_1410f83c0(arg1)
int64_t rax_6

if (rsi != 0)
    rax_6 = *rax_5

if (rsi == 0 || rax_6 == 0)
    rax_6 = r14

arg4[2] = rax_6

if (rsi != 0 && *(arg1 + 0x379) != 0)
    void* rax_7 = *(arg1 + 0x1c8)
    
    if (rax_7 != 0 && not(1f f<= *(arg1 + 0x39c)))
        arg4[2] = *(rax_7 + 8)

int64_t rcx_3

if (rsi == 0 || rsi == 0)
    rcx_3 = r14
else
    rcx_3 = *sub_1410f83c0(arg1)

arg4[4] = rcx_3
arg4[3] = data_14395fa10
int64_t rax_11

if (rsi != 0)
    rax_11 = *(arg1 + 0x48)

if (rsi == 0 || rax_11 == 0)
    rax_11 = data_1439b7178

arg4[0x20] = rax_11
int32_t r15_1 = (*U"1111")[sx.q(arg2)]
char rax_12

if (sub_1410a09e0(r15_1) != 0)
    rax_12 = 1
else
    rax_12 = sub_1419a4830(r15_1)
    
    if (rax_12 != 0)
        rax_12 = 1

char rax_13

if (((arg3 u>> 1).b & 1) != 0 && rax_12 != 0)
    rax_13 = sub_1419a4830(r15_1)

void* rax_15
char rcx_5
void* rsi_3
void* r11_1

if (((arg3 u>> 1).b & 1) == 0 || (rax_12 != 0 && rax_13 == 0))
    rcx_5 = 0
label_1413aacc9:
    rax_15 = data_1439b70c8
    rsi_3 = rax_15 + 8
    
    if (rcx_5 != 0)
        goto label_1413aacd8
    
    r11_1 = rax_15 + 8
else
    void* rax_14 = *(arg1 + 0x70)
    rcx_5 = 1
    
    if (rax_14 == 0)
        goto label_1413aacc9
    
    rsi_3 = rax_14 + 8
    rax_15 = data_1439b70c8
label_1413aacd8:
    void* rdx = *(arg1 + 0x78)
    r11_1 = rdx + 8
    
    if (rdx == 0)
        r11_1 = rax_15 + 8

void* rdx_1
void* r10_1

if (rcx_5 != 0)
    rdx_1 = *(arg1 + 0x80)
    r10_1 = rdx_1 + 8

if (rcx_5 == 0 || rdx_1 == 0)
    r10_1 = rax_15 + 8

void* rdx_2
void* r9

if (rcx_5 != 0)
    rdx_2 = *(arg1 + 0x88)
    r9 = rdx_2 + 8

if (rcx_5 == 0 || rdx_2 == 0)
    r9 = rax_15 + 8

void* rdx_3
void* r8

if (rcx_5 != 0)
    rdx_3 = *(arg1 + 0x90)
    r8 = rdx_3 + 8

if (rcx_5 == 0 || rdx_3 == 0)
    r8 = rax_15 + 8

void* rdx_4

if (rcx_5 != 0)
    rdx_4 = *(arg1 + 0x98)

void* rdx_5

if (rcx_5 == 0 || rdx_4 == 0)
    rdx_5 = rax_15 + 8
else
    rdx_5 = rdx_4 + 8

void* rcx_8

if (rcx_5 != 0)
    rcx_8 = *(arg1 + 0x50)

void* rcx_9

if (rcx_5 == 0 || rcx_8 == 0)
    rcx_9 = rax_15 + 8
else
    rcx_9 = rcx_8 + 8

arg4[5] = *(rsi_3 + 8)
arg4[6] = *(r11_1 + 8)
arg4[7] = *(r10_1 + 8)
arg4[8] = *(r9 + 8)
arg4[9] = *(r8 + 8)
arg4[0xa] = *(rdx_5 + 8)
arg4[0xb] = *(rcx_9 + 8)
arg4[0xc] = *(rsi_3 + 8)
arg4[0xd] = *(r11_1 + 8)
arg4[0xe] = *(r10_1 + 8)
arg4[0xf] = *(r9 + 8)
arg4[0x10] = *(r8 + 8)
arg4[0x11] = *(rdx_5 + 8)
arg4[0x12] = *(rcx_9 + 8)
arg4[0x13] = data_14395fa10
arg4[0x14] = data_14395fa10
arg4[0x15] = data_14395fa10
arg4[0x16] = data_14395fa10
arg4[0x17] = data_14395fa10
arg4[0x18] = data_14395fa10
arg4[0x19] = data_14395fa10

if (((arg3 u>> 2).b & 1) != 0 && *(arg1 + 0x1d8) != 0)
    r12 = *(*(arg1 + 0xc0) + 0x10)

arg4[0x1a] = r12
arg4[0x1b] = data_14395fa10
char rdx_6 = *(arg1 + 0x1d9)
int64_t rcx_10 = data_1439b7178
void* const rax_41

if (rdx_6 == 0)
    rax_41 = nullptr
else
    rax_41 = *(arg1 + 0xe0)

if (((arg3 u>> 3).b & 1) != 0)
    if (rax_41 != 0)
        r14 = *(rax_41 + 0x10)
    
    if (rdx_6 != 0)
        int64_t rax_42 = *(arg1 + 0xf8)
        
        if (rax_42 != 0)
            rcx_10 = rax_42

arg4[0x1d] = r14
arg4[0x1e] = data_14395fa10
arg4[0x1c] = r14
arg4[0x1f] = rcx_10
arg4[0x21] = *(data_143f10dc8 + 0x10)
arg4[0x22] = r13
int64_t result = data_14395f4d0
arg4[0x23] = result
return result
