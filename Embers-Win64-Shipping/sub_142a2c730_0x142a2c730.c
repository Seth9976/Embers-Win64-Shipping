// 函数: sub_142a2c730
// 地址: 0x142a2c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x188)
void* r9 = *(arg2 + 0x1b8)
uint32_t r10_1 = zx.d(*(zx.q(***(arg2 + 0x1a8)) + 0x1436046d0))
void* rax_3 = *(arg2 + 0x1b0)
uint32_t rdx

if (r9 == 0 || *(r9 + 3) != 0)
    rdx = r10_1
else
    rdx = zx.d(*(r9 + 2))

uint32_t rcx

if (rax_3 == 0 || *(rax_3 + 3) != 0)
    rcx = r10_1
else
    rcx = zx.d(*(rax_3 + 2))

uint32_t rsi = zx.d(arg3)

if (rax_3 == 0)
    rcx = rdx

if (r9 == 0)
    rdx = rcx

int64_t r14 = 0
int32_t r13
r13.b = rcx + rdx u> r10_1
int64_t rdx_2 = *(arg1 + 0x1168) + 0x7a3
char* rbp

if (rsi == 1)
    rbp = rdx_2 + 0xa + zx.q(r13)
else if (rsi == 2)
    rbp = rdx_2 + ((zx.q(r13) + 3) << 1)
else if (rsi == 3)
    rbp = zx.q(r13) * 3 + rdx_2
else
    rbp = nullptr

int32_t r12 = 0
uint32_t rdi_4 = ((arg4[1].d - 1) * zx.d(*rbp) + 0x100) u>> 8

if (*(arg4 + 0xc) s< 0)
    sub_142a23140(arg4)

int64_t r8 = *arg4
uint64_t rcx_6 = zx.q(rdi_4) << 0x38

if (r8 u>= rcx_6)
    r12 = 1
    rdi_4 = arg4[1].d - rdi_4
    r8 -= rcx_6

uint32_t rdx_3 = zx.d(*(zx.q(rdi_4) + &data_143603f00))
int32_t r9_2 = *(arg4 + 0xc) - rdx_3
uint32_t rdi_5 = rdi_4 << rdx_3.b
*arg4 = r8 << rdx_3.b
*(arg4 + 0xc) = r9_2
arg4[1].d = rdi_5

if (r12 != 0 && arg3 u>= 2)
    int32_t r10_2 = 0
    uint32_t r15_4 = (zx.d(rbp[1]) * (rdi_5 - 1) + 0x100) u>> 8
    
    if (r9_2 s< 0)
        sub_142a23140(arg4)
        r10_2 = 0
    
    int64_t r8_2 = *arg4
    uint64_t rcx_11 = zx.q(r15_4) << 0x38
    
    if (r8_2 u>= rcx_11)
        r10_2 = 1
        r15_4 = arg4[1].d - r15_4
        r8_2 -= rcx_11
    
    r12 += r10_2
    uint32_t rdx_4 = zx.d(*(zx.q(r15_4) + &data_143603f00))
    int32_t r9_4 = *(arg4 + 0xc) - rdx_4
    uint32_t r15_5 = r15_4 << rdx_4.b
    *arg4 = r8_2 << rdx_4.b
    *(arg4 + 0xc) = r9_4
    arg4[1].d = r15_5
    
    if (r12 != 1 && arg3 u>= 3)
        int32_t r10_3 = 0
        uint32_t rdi_9 = (zx.d(rbp[2]) * (r15_5 - 1) + 0x100) u>> 8
        
        if (r9_4 s< 0)
            sub_142a23140(arg4)
            r10_3 = 0
        
        int64_t r8_4 = *arg4
        uint64_t rcx_16 = zx.q(rdi_9) << 0x38
        
        if (r8_4 u>= rcx_16)
            r10_3 = 1
            rdi_9 = arg4[1].d - rdi_9
            r8_4 -= rcx_16
        
        uint32_t rdx_5 = zx.d(*(zx.q(rdi_9) + &data_143603f00))
        *(arg4 + 0xc) -= rdx_5
        arg4[1].d = rdi_9 << rdx_5.b
        r12 += r10_3
        *arg4 = r8_4 << rdx_5.b

if (rax != 0)
    if (rsi == 1)
        r14 = rax + ((zx.q(r13) + 0x639) << 3)
    else if (rsi == 2)
        r14 = rax + (zx.q(r13) + 0x424) * 0xc
    else if (rsi == 3)
        r14 = rax + 0x3190 + (zx.q(r13) << 4)
    
    int64_t rcx_19 = sx.q(r12)
    *(r14 + (rcx_19 << 2)) += 1

return zx.q(r12.b)
