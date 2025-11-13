// 函数: sub_141cf1800
// 地址: 0x141cf1800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x24)
int64_t rbp

if (r10 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_5 = (rbp + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405e4030(arg1, rbp.d)
    
    sub_141cfaa70(&arg1[2], 0)
else
    rbp = sx.q(arg1[4].d)
    void* rcx = *arg1
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + arg1
    
    int64_t rdx = sx.q(*((rbp << 5) + rcx + 4))
    arg1[4].d = rdx.d
    *(arg1 + 0x24) = r10 - 1
    
    if (r10 != 1)
        void* rcx_2 = *arg1
        
        if ((rcx_2.b & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + arg1
        
        *((rdx << 5) + rcx_2) = 0xffffffff

void* r8_1 = arg1[2]

if ((r8_1.b & 1) != 0)
    r8_1 = (r8_1 s>> 1) + &arg1[2]

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rbp.b & 0x1f)
void* rax_11 = *arg1

if ((rax_11.b & 1) != 0)
    rax_11 = (rax_11 s>> 1) + arg1

int32_t* rdi = arg3[1]
int64_t* rbx_1 = *arg3
void* r14_2 = (sx.q(rbp.d) << 5) + rax_11
*r14_2 = 0
sub_140a2c970(r14_2, rbx_1)
*(r14_2 + 8) = rbx_1[1].d
*(r14_2 + 0xc) = *(rbx_1 + 0xc)
rbx_1[1] = 0
*(r14_2 + 0x10) = *rdi
*(r14_2 + 0x18) = 0xffffffff
void* rcx_9

if (*(r14_2 + 8) == 0)
    rcx_9 = &data_142d40450
else
    rcx_9 = *r14_2
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + r14_2

sub_141d008f0(arg1, arg2, sub_1405de2b0(rcx_9), r14_2, rbp.d, arg4)
return arg2
