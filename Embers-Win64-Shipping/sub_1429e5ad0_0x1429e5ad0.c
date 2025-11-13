// 函数: sub_1429e5ad0
// 地址: 0x1429e5ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x4578)
void* rdi = &arg1[0x78]
int32_t r15 = 0
int32_t rbp = 0
int64_t rsi = 0
int32_t rsi_1
int64_t r9_1
int32_t r14

while (true)
    int32_t rax_1
    rax_1, r9_1 = sub_1429e0b80(arg2, arg3)
    
    if (rax_1 != 0)
        if (*rdi != 0xffffffff)
            void* rax_9 = *(sx.q(rbp) * 0x70 + arg1 + 0x1e8)
            r14 = *(rax_9 + 8)
            rsi_1 = *(rax_9 + 0xc)
            break
        
        sub_1429da010(arg1, 7, "Failed to decode frame size", r9_1)
    
    rbp += 1
    rsi += 1
    rdi += 0x70
    
    if (rsi s>= 3)
        r14 = sub_1429e0bd0(arg2, 0x10) + 1
        int32_t rax_3
        rax_3, r9_1 = sub_1429e0bd0(arg2, 0x10)
        rsi_1 = rax_3 + 1
        break

if (r14 s<= 0 || rsi_1 s<= 0)
    sub_1429da010(arg1, 7, "Invalid frame size", r9_1)

void* rdi_1 = &arg1[0x7a]
int64_t i_2 = 3
void* r8 = rdi_1
int64_t i_3 = 3
int64_t i

do
    int32_t rcx_5
    int32_t rdx
    
    if (*(r8 - 8) != 0xffffffff)
        void* rax_4 = *r8
        rdx = *(rax_4 + 8)
        rcx_5 = *(rax_4 + 0xc)
    
    int32_t rax_7
    
    if (*(r8 - 8) == 0xffffffff || r14 * 2 s< rdx || rsi_1 * 2 s< rcx_5 || r14 s> rdx << 4
            || rsi_1 s> rcx_5 << 4)
        rax_7 = 0
    else
        rax_7 = 1
    
    r15 |= rax_7
    r8 += 0x70
    i = i_3
    i_3 -= 1
while (i != 1)

if (r15 == 0)
    i_3 = sub_1429da010(arg1, (i_3 + 7).d, "Referenced frame has invalid size", i_3)

int64_t i_1

do
    void* rcx_9
    
    if (*(rdi_1 - 8) != 0xffffffff)
        rcx_9 = *rdi_1
    
    if (*(rdi_1 - 8) == 0xffffffff || *(rcx_9 + 0x74) != arg1[0x114b]
            || *(rcx_9 + 0x6c) != arg1[0x60] || *(rcx_9 + 0x70) != arg1[0x61])
        i_3 = sub_1429da010(arg1, 7, "Referenced frame has incompatible color format", i_3)
    
    rdi_1 += 0x70
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
sub_1429e54c0(arg1, r14, rsi_1)
arg1[0x5c] = arg1[0x5a]
arg1[0x5d] = arg1[0x5b]

if (sub_1429e0b80(arg2, arg3) != 0)
    arg1[0x5c] = sub_1429e0bd0(arg2, (i_2 + 0x10).d) + 1
    arg1[0x5d] = sub_1429e0bd0(arg2, (i_2 + 0x10).d) + 1

EnterCriticalSection(lpCriticalSection)
int64_t rdx_6 = sx.q(arg1[0xcc]) * 0xd0
int32_t rax_25 = sub_142a1cfa0(*(arg1 + 0x4578) + 0x70 + rdx_6, arg1[0x5a], arg1[0x5b], arg1[0x60], 
    arg1[0x61], 0x20, arg1[0x1151], lpCriticalSection + 0x58 + rdx_6, 
    lpCriticalSection->__offset(0x30).q, lpCriticalSection->__offset(0x28).q)

if (rax_25 != 0)
    sub_1429da010(arg1, 2, "Failed to allocate frame buffer", 
        LeaveCriticalSection(lpCriticalSection))

LeaveCriticalSection(lpCriticalSection)
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xdc) = arg1[0x60]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe0) = arg1[0x61]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe4) = arg1[0x114b]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xe8) = arg1[0x58]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xec) = arg1[0x59]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xf0) = arg1[0x5c]
int32_t result = arg1[0x5d]
*(sx.q(arg1[0xcc]) * 0xd0 + lpCriticalSection + 0xf4) = result
return result
