// 函数: sub_141ca1840
// 地址: 0x141ca1840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t rbp = sx.q(*(arg1 + 0x68))

if (rbp.d != 0)
    int32_t rax_1 = *(arg2 + 0x10)
    int32_t rdx = rax_1 + rbp.d
    
    if (rdx s> *(arg2 + 0x14))
        sub_1405c5570(arg2 + 8, rdx)
        rax_1 = *(arg2 + 0x10)
    
    memmove(*(arg2 + 8) + (sx.q(rax_1) << 3), *(arg1 + 0x60), (rbp << 3).d)
    *(arg1 + 0x68) = 0
    *(arg2 + 0x10) += rbp.d

int32_t rax_3 = *(arg1 + 0x6c)
*(arg1 + 0x68) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405c5570(arg1 + 0x60, 0)

int64_t rsi = sx.q(*(arg1 + 0xa8))

if (rsi.d != 0)
    int32_t rax_4 = *(arg3 + 0x10)
    int32_t rdx_2 = rax_4 + rsi.d
    
    if (rdx_2 s> *(arg3 + 0x14))
        sub_14061cd70(arg3 + 8, rdx_2)
        rax_4 = *(arg3 + 0x10)
    
    memmove((sx.q(rax_4) << 4) + *(arg3 + 8), *(arg1 + 0xa0), (rsi << 4).d)
    *(arg1 + 0xa8) = 0
    *(arg3 + 0x10) += rsi.d

int32_t rax_5 = *(arg1 + 0xac)
int64_t* rdi_2 = *(arg1 + 0xa0)
int32_t i_4 = *(arg1 + 0xa8)

if (rax_5 s< 0)
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t rcx_10 = *rdi_2
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rdi_2 = &rdi_2[2]
            i = i_4
            i_4 -= 1
        while (i != 1)
        rax_5 = *(arg1 + 0xac)
    
    *(arg1 + 0xa8) = 0
    
    if (rax_5 != 0)
        sub_14061cd70(arg1 + 0xa0, 0)
else
    if (i_4 != 0)
        int32_t i_1
        
        do
            int64_t rcx_9 = *rdi_2
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdi_2 = &rdi_2[2]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0xa8) = 0

sub_141c8f050(arg4 + 8, arg1 + 0x70)
sub_141cabd20(arg1 + 0x70, 0)
int64_t rsi_1 = sx.q(*(arg1 + 0x88))

if (rsi_1.d != 0)
    int32_t rax_6 = *(arg5 + 0x10)
    int32_t rdx_5 = rax_6 + rsi_1.d
    
    if (rdx_5 s> *(arg5 + 0x14))
        sub_14061cd70(arg5 + 8, rdx_5)
        rax_6 = *(arg5 + 0x10)
    
    memmove((sx.q(rax_6) << 4) + *(arg5 + 8), *(arg1 + 0x80), (rsi_1 << 4).d)
    *(arg1 + 0x88) = 0
    *(arg5 + 0x10) += rsi_1.d

int32_t rax_7 = *(arg1 + 0x8c)
int64_t* rdi_4 = *(arg1 + 0x80)
int32_t i_5 = *(arg1 + 0x88)

if (rax_7 s< 0)
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_19 = *rdi_4
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rdi_4 = &rdi_4[2]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        rax_7 = *(arg1 + 0x8c)
    
    *(arg1 + 0x88) = 0
    
    if (rax_7 != 0)
        sub_14061cd70(arg1 + 0x80, 0)
else
    if (i_5 != 0)
        int32_t i_3
        
        do
            int64_t rcx_18 = *rdi_4
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            rdi_4 = &rdi_4[2]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    *(arg1 + 0x88) = 0

int64_t rbp_1 = sx.q(*(arg1 + 0x98))

if (rbp_1.d != 0)
    int32_t rax_8 = arg6[1].d
    int32_t rdx_7 = rax_8 + rbp_1.d
    
    if (rdx_7 s> *(arg6 + 0xc))
        sub_1405c5570(arg6, rdx_7)
        rax_8 = arg6[1].d
    
    memmove(*arg6 + (sx.q(rax_8) << 3), *(arg1 + 0x90), (rbp_1 << 3).d)
    *(arg1 + 0x98) = 0
    arg6[1].d += rbp_1.d

int32_t rax_10 = *(arg1 + 0x9c)
*(arg1 + 0x98) = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405c5570(arg1 + 0x90, 0)

*arg7 = *(arg1 + 0x48)
*arg8 = *(arg1 + 0xb4)
*arg9 = *(arg1 + 0x55)
void* rdi_5

if ((zx.o(0)).q f< *(arg1 + 0x58) || *(arg1 + 0x55) != 0)
    rdi_5.b = 1
else
    rdi_5.b = 0

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_5.b)
