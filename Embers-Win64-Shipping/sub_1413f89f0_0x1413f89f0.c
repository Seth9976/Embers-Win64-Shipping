// 函数: sub_1413f89f0
// 地址: 0x1413f89f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
void* rdx = *(arg3 + 0x5228)
int128_t var_588 = zx.o(0)
sub_1405d16e0(&var_588, rdx)
sub_1405d16e0(&var_588:8, *(arg3 + 0x10))
int128_t var_578
sub_1419a2ec0(*(arg3 + 0x5150), &var_578, &data_143ec8410, 0)
int128_t zmm6 = var_578
var_578 = zmm6
void var_568
memset(&var_568, 0, 0x480)
int64_t var_e8 = 0
sub_1413bd1e0(&var_568, &var_578, &var_588)
int64_t var_d8[0x10]
memset(&var_d8, 0, 0x80)
int64_t r9 = sx.q(*(zmm6.q + 0xa0))
uint32_t rbx = -1

if (r9 s> 0)
    int64_t rdx_4 = 0
    
    do
        void* rax_3 = *(zmm6.q + 0x98)
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + zmm6.q + 0x98
        
        int16_t rax_4 = *(rax_3 + (rdx_4 << 2))
        
        if (rax_4 u< 0x10)
            int64_t var_268[0x30]
            var_d8[zx.q(rax_4)] = var_268[rdx_4]
            uint32_t rax_6 = zx.d(*(rax_3 + (rdx_4 << 2)))
            
            if (rax_6 s>= rbx)
                rbx = rax_6
        
        rdx_4 += 1
    while (rdx_4 s< r9)

sub_1405d1550(&var_e8)
int64_t r15 = *(arg3 + 0x51e8)
uint64_t rsi = zx.q(rbx + 1)
int64_t r12 = *(arg3 + 0x51f0)
int64_t* rbx_1 = nullptr

if (rsi.d != 0)
    uint32_t rdx_5 = (rsi << 3).d
    int64_t r14_1 = sx.q(rdx_5)
    rbx_1 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = r14_1 + rbx_1
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_5 + 8)
        rbx_1 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = r14_1 + rbx_1
    
    *(arg2 + 0x30) = rax_7
    
    if (rsi.d != 0)
        uint64_t i_1 = zx.q(rsi.d)
        int64_t* rcx_9 = rbx_1
        uint64_t i
        
        do
            *rcx_9 = *(&var_d8 - rbx_1 + rcx_9)
            rcx_9 = &rcx_9[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_12[0xc]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x68)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_12[0xc]

*(arg2 + 0x30) = rax_9
void**** rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_12
*(arg2 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142f18bf8
rcx_12[2] = r15
rcx_12[3] = 2
rcx_12[4].d = 0
*(rcx_12 + 0x24) = 1
rcx_12[5] = r12
rcx_12[6].d = 1
*(rcx_12 + 0x34) = rsi.d
rcx_12[7] = rbx_1
rcx_12[8].d = 0
__builtin_memset(&rcx_12[9], 0, 0x18)
sub_1405d1550(&var_588:8)
int64_t result = sub_1405d1550(&var_588)
__security_check_cookie(rax_1 ^ &var_5a8)
return result
