// 函数: sub_1413a3620
// 地址: 0x1413a3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[8].d
int32_t rax_2 = *(sx.q(arg2) * 0xf8 + *arg1 + 0xf0)
int64_t rdi_1 = arg1[4]
int32_t rcx_1 = r8 & rax_2
int64_t rax_3 = sx.q(rcx_1)

while (arg2 != *(rdi_1 + (rax_3 << 2)))
    rcx_1 = (rcx_1 + 1) & r8
    
    if (rcx_1 == ((*(arg1 + 0x44) + 1 + rax_2) & r8))
        rax_3.b = 0
        return rax_3
    
    rax_3 = sx.q(rcx_1)

int64_t rbp = sx.q(*(rdi_1 + (rax_3 << 2)))
int32_t rsi = 0
int64_t rax_4 = sx.q(arg1[3].d)

if (rax_4.d s> 0)
    int64_t rcx_3 = 0
    int32_t* rax_5 = arg1[2]
    
    while (*rax_5 u>= rbp.d)
        rsi += 1
        rcx_3 += 1
        rax_5 = &rax_5[1]
        
        if (rcx_3 s>= rax_4)
            break

int32_t r15 = arg1[3].d
arg1[3].d = r15 + 1

if (r15 + 1 s> *(arg1 + 0x1c))
    sub_1405a4cf0(&arg1[2])

int32_t* rdi_2 = sx.q(rsi) << 2
void* rdx_3 = arg1[2] + rdi_2
memmove(rdx_3 + 4, rdx_3, (r15 - rsi) << 2)
*(rdi_2 + arg1[2]) = rbp.d
void* rdi_4 = rbp * 0xf8 + *arg1
int64_t rcx_6 = *(rdi_4 + 0xa8)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_14125cf90(rdi_4)
*((rax_3 << 2) + arg1[6]) = 0x80000000
uint64_t rax_12

if ((sx.q(arg1[1].d) - sx.q(arg1[3].d)) * 0x14 u< zx.q(arg1[8].d * 3))
    int64_t r14_1 = arg1[4]
    __builtin_memset(&arg1[4], 0, 0x20)
    int64_t r15_2 = arg1[6]
    int32_t r12_1 = arg1[8].d
    uint32_t rax_14 = r12_1 u>> 1
    arg1[8].d = rax_14
    *(arg1 + 0x44) = 0
    int64_t arg_8 = r14_1
    
    if (rax_14 + 1 s> *(arg1 + 0x2c))
        sub_1405dadb0(&arg1[4], rax_14 + 1)
        rax_14 = arg1[8].d
    
    int32_t rax_16 = rax_14 + 1 + arg1[5].d
    arg1[5].d = rax_16
    
    if (rax_16 s> *(arg1 + 0x2c))
        sub_1405a4cf0(&arg1[4])
    
    int32_t rax_17 = arg1[8].d
    
    if (rax_17 + 1 s> *(arg1 + 0x3c))
        sub_1405dadb0(&arg1[6], rax_17 + 1)
        rax_17 = arg1[8].d
    
    int64_t rdi_5 = sx.q(arg1[7].d)
    int32_t rax_18 = rdi_5.d + rax_17 + 1
    arg1[7].d = rax_18
    
    if (rax_18 s> *(arg1 + 0x3c))
        sub_1405a4cf0(&arg1[6])
    
    int64_t rcx_15
    int64_t rdi_7
    
    if (rax_17 != 0xffffffff)
        rdi_7, rcx_15 = __memfill_u32(arg1[6] + (rdi_5 << 2), 0x80000000, zx.q(rax_17 + 1))
    int32_t rbp_2 = 0
    
    do
        rax_12 = sx.q(rbp_2)
        int32_t rcx_16 = *(r15_2 + (rax_12 << 2))
        
        if (rcx_16 != 0x80000000)
            int64_t r9_4 = arg1[6]
            int32_t rdx_10 = 0
            int32_t r14_2 = *(r14_1 + (rax_12 << 2))
            int32_t r10_2 = arg1[8].d & rcx_16
            int64_t r11_1 = sx.q(r10_2) << 2
            int32_t r8_5 = (r10_2 - *(r11_1 + r9_4)) & arg1[8].d
            
            while (*(r11_1 + r9_4) != 0x80000000)
                if (r8_5 u< rdx_10)
                    if (rdx_10 u> *(arg1 + 0x44))
                        r9_4 = arg1[6]
                        *(arg1 + 0x44) = rdx_10
                    
                    int32_t* rdx_11 = arg1[4]
                    int32_t rax_21 = *(r11_1 + r9_4)
                    int32_t rdi_8 = *(rdx_11 + r11_1)
                    *(rdx_11 + r11_1) = r14_2
                    r14_2 = rdi_8
                    *(r11_1 + arg1[6]) = rcx_16
                    rdx_10 = r8_5
                    r9_4 = arg1[6]
                    rcx_16 = rax_21
                
                rdx_10 += 1
                r10_2 = (r10_2 + 1) & arg1[8].d
                r11_1 = sx.q(r10_2) << 2
                r8_5 = (r10_2 - *(r11_1 + r9_4)) & arg1[8].d
            
            if (rdx_10 u> *(arg1 + 0x44))
                *(arg1 + 0x44) = rdx_10
            
            int64_t rdx_13 = sx.q(r10_2) << 2
            *(rdx_13 + arg1[4]) = r14_2
            r14_1 = arg_8
            *(rdx_13 + arg1[6]) = rcx_16
        
        rbp_2 += 1
    while (rbp_2 u<= r12_1)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

rax_12.b = 1
return rax_12
