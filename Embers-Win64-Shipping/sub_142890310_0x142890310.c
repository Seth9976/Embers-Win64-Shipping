// 函数: sub_142890310
// 地址: 0x142890310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* r15 = nullptr
int64_t rbx = sx.q(arg2)
int64_t* rdi = arg3

if (arg3 == 0)
    int64_t* rax_1 = sub_142890500()
    r15 = rax_1
    rdi = rax_1
    
    if (rax_1 == 0)
        return rax_1

void* rsi_1 = arg1 + rbx
int32_t temp0 = rbx.d
bool cond:0 = temp0 != 0

if (temp0 s> 0)
    while (*(rsi_1 - 1) == 0)
        rsi_1 -= 1
        rbx = zx.q(rbx.d - 1)
        
        if (rbx.d s<= 0)
            break
    
    cond:0 = rbx.d != 0

if (not(cond:0))
    rdi[1].d = 0
    return rdi

int32_t r14 = (rbx - 1).d
int32_t r14_1 = r14 & 7
uint64_t rbp_2 = zx.q((r14 u>> 3) + 1)
int64_t* rax_3

if (rbp_2.d s> *(rdi + 0xc))
    rax_3 = sub_142890d10(rdi, rbp_2.d)
else
    rax_3 = rdi

if (rax_3 == 0)
    sub_1428901a0(r15)
    return nullptr

rdi[1].d = rbp_2.d
int64_t rdx_1 = 0
rdi[2].d = 0

do
    uint64_t rax_5 = zx.q(*(rsi_1 - 1))
    rsi_1 -= 1
    rbx = zx.q(rbx.d - 1)
    rdx_1 = rdx_1 << 8 | rax_5
    int32_t rax_6 = r14_1
    r14_1 -= 1
    
    if (rax_6 == 0)
        rbp_2 = zx.q(rbp_2.d - 1)
        *(*rdi + (rbp_2 << 3)) = rdx_1
        rdx_1 = 0
        r14_1 = 7
while (rbx.d != 0)

int64_t rdx_3 = sx.q(rdi[1].d)
int32_t temp1_1 = rdx_3.d
bool cond:1_1 = temp1_1 != 0

if (temp1_1 s> 0)
    int64_t r8 = *rdi + (rdx_3 << 3)
    
    do
        bool cond:2_1 = *(r8 - 8) != 0
        r8 -= 8
        
        if (cond:2_1)
            break
        
        rdx_3 = zx.q(rdx_3.d - 1)
    while (rdx_3.d s> 0)
    
    rdi[1].d = rdx_3.d
    cond:1_1 = rdx_3.d != 0

if (not(cond:1_1))
    rdi[2].d = 0

return rdi
