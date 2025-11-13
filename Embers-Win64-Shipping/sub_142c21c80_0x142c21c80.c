// 函数: sub_142c21c80
// 地址: 0x142c21c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = arg5
void* rbx = *(arg1 + 0x90)
int32_t rdx = *(rbx + 0x5c)
int32_t r8 = rdx + arg4

if (r8 - rdx u>= 2)
    sub_142bf5140(rbx, rdx, r8)

int32_t rdx_1 = 1
int64_t r8_1 = *(rbx + 0x70)
int16_t rax_3 = *(r8_1 + zx.q(*arg3) * 0x14 + 0xc)
uint8_t r9 = rax_3.b
rax_3.b u>>= 3
rax_3.b &= 1
int16_t arg_10 = rax_3
int64_t r12

if (arg2 u> 1)
    do
        if ((*(r8_1 + zx.q(arg3[zx.q(rdx_1)]) * 0x14 + 0xc) u>> 3 & 1) == 0)
            arg_10.b = 0
            r12.b = 1
            goto label_142c21d3b
        
        rdx_1 += 1
    while (rdx_1 u< arg2)
    
    rax_3 = arg_10

if ((r9 u>> 1 & 1) != 0 || rax_3.b != 0)
    r12.b = 0
else
    r12.b = 1

label_142c21d3b:
char r8_2

if (r12.b == 0)
    r8_2 = 0
else
    uint32_t rcx_4 = *(rbx + 0x88)
    *(rbx + 0x88) = rcx_4 + 1
    rcx_4.b &= 7
    
    if (rcx_4.b == 0)
        rcx_4 = zx.d(sub_142c19220(rbx))
    
    r8_2 = rcx_4.b

uint64_t rcx_6 = zx.q(*(rbx + 0x5c)) * 5
int64_t rax_10 = *(rbx + 0x70)
void* rdx_2 = rax_10 + (rcx_6 << 2)
uint32_t rsi_1 = zx.d(*(rax_10 + (rcx_6 << 2) + 0xe)) u>> 5
char rax_11

if ((*(rdx_2 + 0xc) & 4) != 0)
    rax_11 = *(rdx_2 + 0xe)

int32_t rdi_1

if ((*(rdx_2 + 0xc) & 4) == 0 || (rax_11 & 0x10) == 0)
    rdi_1 = 1
else
    rdi_1 = zx.d(rax_11) & 0xf

int32_t arg_20 = rdi_1

if (r12.b != 0)
    *(rdx_2 + 0xe) = (arg7 & 0xf) | r8_2 << 5 | 0x10
    uint64_t rcx_8 = zx.q(*(rbx + 0x5c)) * 5
    int64_t rax_14 = *(rbx + 0x70)
    void* rdx_3 = rax_14 + (rcx_8 << 2)
    
    if ((*(rax_14 + (rcx_8 << 2) + 0x10) & 0x1f) == 0xc)
        *(rdx_3 + 0x10) &= 0xe0
        *(rdx_3 + 0x10) |= 7

sub_142c22ec0(arg1, arg6, sbb.d(arg5.d, arg5.d, r12.b != 0) & 4)
int32_t r9_1 = arg_20
char rbp_1

if (arg2 u<= 1)
    rbp_1 = r8_2
else
    uint64_t i_2 = zx.q(arg2 - 1)
    void* r14_1 = &arg3[1]
    rbp_1 = r8_2
    uint64_t i
    
    do
        if (*(rbx + 0x5c) u< *r14_1)
            while (*(rbx + 0x58) != 0)
                if (r12.b != 0)
                    uint64_t rcx_10 = zx.q(*(rbx + 0x5c)) * 5
                    int64_t rax_18 = *(rbx + 0x70)
                    char rax_19 = *(rax_18 + (rcx_10 << 2) + 0xe)
                    int32_t rcx_12
                    
                    if ((rax_19 & 0x10) == 0)
                        rcx_12 = zx.d(rax_19) & 0xf
                    
                    if ((rax_19 & 0x10) != 0 || rcx_12 == 0 || rcx_12 u>= rdi_1)
                        rcx_12 = rdi_1
                    
                    rcx_12.b -= rdi_1.b
                    rcx_12.b += r9_1.b
                    rcx_12.b &= 0xf
                    rcx_12.b |= rbp_1 << 5
                    *(rax_18 + (rcx_10 << 2) + 0xe) = rcx_12.b
                
                if (*(rbx + 0x59) == 0)
                    *(rbx + 0x5c) += 1
                else if (*(rbx + 0x78) != *(rbx + 0x70) || *(rbx + 0x64) != *(rbx + 0x5c))
                    if (sub_142bf50b0(rbx, 1, 1) != 0)
                        int64_t rdx_6 = *(rbx + 0x70)
                        uint64_t r9_2 = zx.q(*(rbx + 0x5c)) * 5
                        uint64_t rcx_14 = zx.q(*(rbx + 0x64)) * 5
                        int64_t rax_26 = *(rbx + 0x78)
                        *(rax_26 + (rcx_14 << 2)) = *(rdx_6 + (r9_2 << 2))
                        *(rax_26 + (rcx_14 << 2) + 0x10) = *(rdx_6 + (r9_2 << 2) + 0x10)
                        *(rbx + 0x64) += 1
                        *(rbx + 0x5c) += 1
                else
                    *(rbx + 0x64) += 1
                    *(rbx + 0x5c) += 1
                
                r9_1 = arg_20
                
                if (*(rbx + 0x5c) u>= *r14_1)
                    break
        
        int64_t rax_29 = *(rbx + 0x70)
        uint64_t r8_5 = zx.q(*(rbx + 0x5c))
        uint64_t rcx_15 = r8_5 * 5
        rsi_1 = zx.d(*(rax_29 + (rcx_15 << 2) + 0xe)) u>> 5
        char rdx_7
        
        if ((*(rax_29 + (rcx_15 << 2) + 0xc) & 4) != 0)
            rdx_7 = *(rax_29 + (rcx_15 << 2) + 0xe)
        
        if ((*(rax_29 + (rcx_15 << 2) + 0xc) & 4) == 0 || (rdx_7 & 0x10) == 0)
            rdi_1 = 1
        else
            rdi_1 = zx.d(rdx_7) & 0xf
        
        r9_1 = arg_20 + rdi_1
        *(rbx + 0x5c) = (r8_5 + 1).d
        r14_1 += 4
        arg_20 = r9_1
        i = i_2
        i_2 -= 1
    while (i != 1)

uint32_t result

if (arg_10.b == 0 && rsi_1 != 0)
    int32_t i_1 = *(rbx + 0x5c)
    
    while (i_1 u< *(rbx + 0x60))
        uint64_t rcx_16 = zx.q(i_1) * 5
        int64_t rax_31 = *(rbx + 0x70)
        void* rdx_8 = rax_31 + (rcx_16 << 2)
        
        if (rsi_1 != zx.d(*(rax_31 + (rcx_16 << 2) + 0xe)) u>> 5)
            break
        
        result = zx.d(*(rdx_8 + 0xe))
        
        if ((result.b & 0x10) != 0)
            break
        
        result = zx.d(result.b) & 0xf
        
        if (result == 0)
            break
        
        char rcx_17 = rdi_1.b
        
        if (result u< rdi_1)
            rcx_17 = result.b
        
        result.b = rbp_1 << 5
        i_1 += 1
        *(rdx_8 + 0xe) = ((rcx_17 - rdi_1.b + r9_1.b) & 0xf) | result.b

result.b = 1
return result
