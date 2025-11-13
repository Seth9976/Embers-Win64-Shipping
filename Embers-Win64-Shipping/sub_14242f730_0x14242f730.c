// 函数: sub_14242f730
// 地址: 0x14242f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x80)
char* rdi = *(r8 + 0x158)
char* rbx = rdi
void* rax_2 = sx.q(*(r8 + 0x160)) * 0x78 + rdi

if (rdi == rax_2)
label_14242f786:
    rbx = nullptr
else
    while (*rbx != 0)
        rbx = &rbx[0x78]
        
        if (rbx == rax_2)
            goto label_14242f786

if (rdi == rax_2)
label_14242f79e:
    rdi = nullptr
else
    while (*rdi != 2)
        rdi = &rdi[0x78]
        
        if (rdi == rax_2)
            goto label_14242f79e

void* rax_3 = *(arg1 + 0x88)
char* rsi = *(rax_3 + 0x158)
char* rbp = rsi
void* rax_6 = sx.q(*(rax_3 + 0x160)) * 0x78 + rsi

if (rsi == rax_6)
label_14242f7d4:
    rbp = nullptr
else
    while (*rbp != 0)
        rbp = &rbp[0x78]
        
        if (rbp == rax_6)
            goto label_14242f7d4

if (rsi == rax_6)
label_14242f7ee:
    rsi = nullptr
else
    while (*rsi != 2)
        rsi = &rsi[0x78]
        
        if (rsi == rax_6)
            goto label_14242f7ee

void* rcx = *(r8 + 0xf0)
char rax_7
int64_t* r15_1

if (rcx != 0)
    rax_7 = sub_141fba5f0(rcx)
    r8 = *(arg1 + 0x80)
    r15_1 = *(r8 + 0xf0)

if (rcx != 0 && (rax_7 != 0 || r15_1[0x161].b != 0))
    *(r8 + 0xf0) = 0
    sub_14217ba70(r15_1, *(arg1 + 0x88))
    *(*(arg1 + 0x88) + 0xf0) = r15_1
    
    if (rbx != 0 && rbp != 0)
        *(rbp + 0x18) = r15_1
        *(rbx + 0x18) = 0
else
    sub_142430a60(r8)
    
    if (rbx != 0)
        *(rbx + 0x10) = 0

int64_t* r15_2 = *(*(arg1 + 0x80) + 0x38)
*(*(arg1 + 0x88) + 0x38) = r15_2

if (rbx != 0 && rbp != 0)
    *(rbp + 0x10) = r15_2
    *(rbx + 0x10) = 0

if (rdi != 0 && rsi != 0)
    *(rsi + 0x10) = r15_2
    *(rdi + 0x10) = 0

if (r15_2 != 0)
    *(*(arg1 + 0x80) + 0x38) = 0
    sub_14217ba70(r15_2, *(arg1 + 0x88))

*(*(arg1 + 0x88) + 0x11a) = *(*(arg1 + 0x80) + 0x11a)
*(*(arg1 + 0x88) + 0x188) = *(*(arg1 + 0x80) + 0x188)
*(*(arg1 + 0x88) + 0x520) = *(*(arg1 + 0x80) + 0x520)
*(*(arg1 + 0x88) + 0x524) = *(*(arg1 + 0x80) + 0x524)
*(*(arg1 + 0x88) + 0x528) = *(*(arg1 + 0x80) + 0x528)
int32_t result = *(*(arg1 + 0x80) + 0x52c)
*(*(arg1 + 0x88) + 0x52c) = result

if (r15_2 != 0)
    result = r15_2[0xd].d
    *(*(arg1 + 0x88) + 0x55c) = result

return result
