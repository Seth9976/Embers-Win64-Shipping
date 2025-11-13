// 函数: sub_1417fbf00
// 地址: 0x1417fbf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *arg2
int16_t* r11 = *arg1
bool cond:0 = *rbx == 0x2e
int16_t r9 = *r11

if (r9 == 0x2e != cond:0)
    return zx.q(cond:0)

if (r9 != 0x2e)
    int16_t* rcx_5 = &data_142d40450
    int16_t* rdx_2 = &data_142d40450
    
    if (arg2[1].d != 0)
        rdx_2 = rbx
    
    if (arg1[1].d != 0)
        rcx_5 = r11
    
    int32_t rax_5
    rax_5.b = sub_140a54510(rcx_5, rdx_2) s< 0
    return rax_5

void* rdx = nullptr
int64_t rsi = sx.q(arg1[1].d)
int64_t r8_1 = 0
int16_t* r9_1 = r11
void* rcx = &r11[rsi]
void* rax_1 = rcx - 2

if (rsi.d == 0)
    rax_1 = rcx

int64_t rcx_1 = 0
uint64_t r10_4 = (rax_1 - r11 + 1) u>> 1

if (r11 u> rax_1)
    r10_4 = 0

if (r10_4 != 0)
    do
        int64_t rax_2 = r8_1
        r9_1 = &r9_1[1]
        r8_1 += 1
        
        if (r9_1[-1] != 0x2e)
            r8_1 = rax_2
        
        rcx_1 += 1
    while (rcx_1 != r10_4)

int64_t rdi_1 = sx.q(arg2[1].d)
void* r9_2 = rbx
void* rcx_2 = &rbx[rdi_1]
void* rax_3 = rcx_2 - 2

if (rdi_1.d == 0)
    rax_3 = rcx_2

int64_t rcx_3 = 0
uint64_t r10_8 = (rax_3 - rbx + 1) u>> 1

if (rbx u> rax_3)
    r10_8 = 0

if (r10_8 != 0)
    do
        rax_3 = rdx
        r9_2 += 2
        rdx += 1
        
        if (*(r9_2 - 2) != 0x2e)
            rdx = rax_3
        
        rcx_3 += 1
    while (rcx_3 != r10_8)

if (r8_1.d != rdx.d)
    rax_3.b = r8_1.d s> rdx.d
    return rax_3

int16_t* rcx_4 = &data_142d40450
int16_t* rdx_1 = &data_142d40450

if (rdi_1.d != 0)
    rdx_1 = rbx

if (rsi.d != 0)
    rcx_4 = r11

int32_t rax_4
rax_4.b = sub_140a54510(rcx_4, rdx_1) s< 0
return rax_4
