// 函数: sub_142908730
// 地址: 0x142908730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i_4 = sx.q(arg4[1].d)
int64_t i_2 = i_4
int64_t* result = sub_142890e60(arg1, i_4.d)

if (result == 0)
    return result

void* rcx = *arg2
void* rax = *arg1
void* rbp = rax

if (rcx != 0)
    rbp = rcx

void* rcx_1 = *arg3
void* r12 = rax

if (rcx_1 != 0)
    r12 = rcx_1

int64_t r8 = 0
int64_t r11 = 0
int64_t rdi = 0
int64_t r10 = 0

if (i_2 != 0)
    do
        int64_t rdx_5 = neg.q((r8 - sx.q(arg2[1].d)) u>> 0x3f) & *(rbp + (r11 << 3))
        int64_t r9_4 = neg.q((r8 - sx.q(arg3[1].d)) u>> 0x3f) & *(r12 + (rdi << 3))
        *(rax + (r8 << 3)) = rdx_5 - r9_4 - r10
        
        if (rdx_5 != r9_4)
            r10.b = rdx_5 u< r9_4
        
        r8 += 1
        r11 += (r8 - sx.q(*(arg2 + 0xc))) u>> 0x3f
        rdi += (r8 - sx.q(*(arg3 + 0xc))) u>> 0x3f
    while (r8 u< i_2)

int64_t r11_1 = *arg4
int64_t r8_1 = 0

if (i_2 != 0)
    void* r9_5 = rax
    int64_t i_3 = i_2
    int64_t i
    
    do
        int64_t rdx_12 = *(r11_1 - rax + r9_5)
        r9_5 += 8
        int64_t rdx_14 = (rdx_12 & neg.q(r10)) + r8_1
        *(r9_5 - 8) += rdx_14
        int64_t rcx_9
        rcx_9.b = rdx_14 u< r8_1
        r8_1 = adc.q(rcx_9, 0, *(r9_5 - 8) u< rdx_14)
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t r9_6 = 0

if (i_2 != 0)
    void* r11_2 = r11_1 - rax
    int64_t i_1
    
    do
        int64_t rdx_15 = *(rax + r11_2)
        rax += 8
        int64_t rdx_17 = (rdx_15 & (r8_1 - r10)) + r9_6
        *(rax - 8) += rdx_17
        int64_t rcx_10
        rcx_10.b = rdx_17 u< r9_6
        r9_6 = adc.q(rcx_10, 0, *(rax - 8) u< rdx_17)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

arg1[1].d = i_4.d
arg1[2].d = 0
return 1
