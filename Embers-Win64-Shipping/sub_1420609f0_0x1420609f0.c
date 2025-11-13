// 函数: sub_1420609f0
// 地址: 0x1420609f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0
sub_1405d16e0(&arg1[0x44], *arg3)
int64_t* arg_28
int64_t* r14 = arg_28
int32_t* rdx_1
int32_t rsi

if (r14 == 0)
    arg_28 = nullptr
    rdx_1 = &arg_28
    rsi = 2
else
    void* rax_1 = *r14
    arg_8.q = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdx_1 = &arg_8
    rsi = 1

sub_1405d1600(&arg1[0x47], rdx_1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_1405d1550(&arg_28)

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    sub_1405d1550(&arg_8)

*(arg1 + 0x13c) = 0xc00
arg1[0x26] = &arg1[0x42]
*(arg1 + 0x13f) = 2
void arg_10
void* arg_18
void* rax_3
char rbp

if (r14 == 0)
    rbp = 8
    rax_3 = *(*(*arg2 + 0x98))(arg2, &arg_10)
else
    rax_3 = r14[2]
    arg_18 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    rbp = 4

char rbp_1 = rbp | rsi.b
arg1[0x3a] = rax_3

if ((rbp_1 & 8) != 0)
    sub_1405ec8a0(&arg_10)

if ((rbp_1 & 4) != 0)
    sub_1405ec8a0(&arg_18)

arg1[0x39] = arg3[2]
arg1[0x3f] = arg4
*(arg1 + 0x140) = *(arg2 + 0x178)
*(arg1 + 0x150) = *(arg2 + 0x188)

if (r14 != 0)
    *(arg1 + 0x14c) = 0x60e1000
    arg1[0x28] = &arg1[0x45]
    arg1[0x2a] = &arg1[0x45]
    *(arg1 + 0x15c) = 0x60e1008

sub_1405d16e0(&arg1[0x40], nullptr)
sub_1419d67a0(arg1)
int64_t result = sub_1420fe4c0(arg1)
int32_t r9 = arg1[0x13].d
arg1[0x48] = -1

if (r9 s> 0)
    int64_t rdx_3 = 0
    
    do
        void* rax_8 = arg1[0x12]
        void* rcx_10 = &arg1[2]
        
        if (rax_8 != 0)
            rcx_10 = rax_8
        
        result = *arg3
        
        if (*(*(rcx_10 + rdx_3) + 0x10) == result)
            arg1[0x48].d = rdi
        
        if (r14 != 0)
            void* rax_9 = arg1[0x12]
            void* rcx_12 = &arg1[2]
            
            if (rax_9 != 0)
                rcx_12 = rax_9
            
            result = *r14
            
            if (*(*(rcx_12 + rdx_3) + 0x10) == result)
                *(arg1 + 0x244) = rdi
        
        rdi += 1
        rdx_3 += 0x10
    while (rdi s< r9)

return result
