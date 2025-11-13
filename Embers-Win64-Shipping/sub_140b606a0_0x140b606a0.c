// 函数: sub_140b606a0
// 地址: 0x140b606a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* arg_8 = arg1
int64_t* rax = *arg3
int64_t rbp = 0
void* rsi = *arg2
int64_t r13 = *rax
void* r14 = &rax[1]
void* r15_1 = sx.q(arg2[1].d) + rsi
int32_t r12_2 = (sx.q(arg3[1].d) u>> 3).d - 1
int64_t* arg_10 = rax
arg1[1].d = 0

if (*(arg1 + 0xc) != r12_2)
    sub_1405dadb0(arg1, r12_2)

for (void* SRWLock = &data_143e151c0; SRWLock != &data_143e155c0; SRWLock += 0x40)
    AcquireSRWLockExclusive(SRWLock)

AcquireSRWLockExclusive(&data_143e05180)
uint64_t* rdi = arg_8

if (r13 == 0xc1640000)
    uint64_t r15_3 = sx.q(r12_2) << 3 u>> 3
    
    if (r14 u> &arg_10[1 + sx.q(r12_2)])
        r15_3 = 0
    
    if (r15_3 != 0)
        do
            uint32_t r10_1 = zx.d(*rsi)
            void* rdx_1 = rsi + 2
            uint64_t** rcx_1 = &arg_8
            int64_t r9_1 = *r14
            uint64_t r8_3 = zx.q(((r10_1 & 0x7f) << 8) + zx.d(*(rsi + 1)))
            
            if (r10_1.b s>= 0)
                rsi = r8_3 + rdx_1
                sub_140b56f10(rcx_1, rdx_1, r8_3.d, r9_1)
            else
                void* rdx_2 = rdx_1 + (zx.q(rdx_1.d) & 1)
                rsi = rdx_2 + (r8_3 << 1)
                sub_140b571e0(rcx_1, rdx_2, r8_3.d, r9_1)
            
            int64_t rbx = sx.q(rdi[1].d)
            int32_t rax_8 = (rbx + 1).d
            rdi[1].d = rax_8
            
            if (rax_8 s> *(rdi + 0xc))
                sub_1405a4cf0(rdi)
            
            r14 += 8
            rbp += 1
            *(*rdi + (rbx << 2)) = arg_8.d
        while (rbp != r15_3)
else
    while (rsi u< r15_1)
        uint32_t r9_2 = zx.d(*rsi)
        void* rdx_4 = rsi + 2
        uint64_t r8_7 = zx.q(((r9_2 & 0x7f) << 8) + zx.d(*(rsi + 1)))
        int32_t* rax_13
        
        if (r9_2.b s>= 0)
            rsi = r8_7 + rdx_4
            rax_13 = sub_140b5c910(&arg_10, rdx_4, r8_7.d)
        else
            void* rdx_5 = rdx_4 + (zx.q(rdx_4.d) & 1)
            rsi = rdx_5 + (r8_7 << 1)
            rax_13 = sub_140b5cbb0(&arg_8, rdx_5, r8_7.d)
        
        int64_t rbp_1 = sx.q(rdi[1].d)
        int32_t rbx_1 = *rax_13
        int32_t rax_14 = (rbp_1 + 1).d
        rdi[1].d = rax_14
        
        if (rax_14 s> *(rdi + 0xc))
            sub_1405a4cf0(rdi)
        
        *(*rdi + (rbp_1 << 2)) = rbx_1

ReleaseSRWLockExclusive(&data_143e05180)
int32_t rbx_2 = 0xf
void* SRWLock_1 = &data_143e15580
int64_t result
int32_t temp0_1

do
    result = ReleaseSRWLockExclusive(SRWLock_1)
    SRWLock_1 -= 0x40
    temp0_1 = rbx_2
    rbx_2 -= 1
while (temp0_1 - 1 s>= 0)
return result
