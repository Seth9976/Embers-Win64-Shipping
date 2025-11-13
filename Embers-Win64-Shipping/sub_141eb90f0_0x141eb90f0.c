// 函数: sub_141eb90f0
// 地址: 0x141eb90f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg1
int32_t rcx = arg1[0x20b]
int64_t rbp

if (rcx == 0)
    rbp = zx.q(rsi[0x202])
    int32_t rax_7 = (rbp + 1).d
    rsi[0x202] = rax_7
    
    if (rax_7 s> rsi[0x203])
        sub_141eca120(rsi, rbp.d)
    
    void* rbx_1 = &rsi[0x204]
    int32_t rdi_1 = *(rbx_1 + 0x10)
    sub_141ec9600(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x10) += 1
    void* rax_8 = *(rbx_1 + 8)
    
    if (rax_8 != 0)
        rbx_1 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    int32_t* rax = *(rsi + 0x800)
    int32_t* r8_1 = rsi
    rbp = sx.q(rsi[0x20a])
    
    if (rax != 0)
        r8_1 = rax
    
    int64_t rdx = sx.q(r8_1[rbp * 8 + 1])
    rsi[0x20a] = rdx.d
    rsi[0x20b] = rcx - 1
    
    if (rcx != 1)
        int32_t* rax_4 = *(rsi + 0x800)
        int32_t* rcx_1 = rsi
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        rcx_1[rdx * 8] = 0xffffffff

void* r8_2 = &rsi[0x204]
*arg2 = rbp.d
void* rax_15 = *(r8_2 + 8)

if (rax_15 != 0)
    r8_2 = rax_15

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
int32_t* rax_20 = *(rsi + 0x800)

if (rax_20 != 0)
    rsi = rax_20

*(arg2 + 8) = &rsi[sx.q(rbp.d) * 8]
return arg2
