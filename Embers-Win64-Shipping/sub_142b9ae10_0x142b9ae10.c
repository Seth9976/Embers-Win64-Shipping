// 函数: sub_142b9ae10
// 地址: 0x142b9ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
void* r15 = nullptr
int64_t rsi = *(arg1 + 0x10)
int32_t rdi = 0
void* const rbx = nullptr
int64_t count = sx.q(*(rax + 0x38))
int32_t temp0 = count.d

if (temp0 s> 0)
    void* rax_1 = (*(rsi + 8))(rsi, zx.q(count.d))
    rbx = rax_1
    
    if (rax_1 != 0)
        memset(rax_1, 0, count)
    else
        rdi = (rax_1 + 0x40).d
else if (temp0 s< 0)
    rdi = 6

void* rbp

if (rdi != 0)
label_142b9af8e:
    rbp = rax
label_142b9af99:
    sub_142b983d0(rbx, rsi)
    int64_t rax_10 = *(rbp + 0x50)
    
    if (rax_10 != 0)
        rax_10(rbx)
    
    if (r15 != 0)
        (*(rsi + 0x10))(rsi, r15)
    
    if (rbx != 0)
        (*(rsi + 0x10))(rsi, rbx)
    
    *arg7 = nullptr
else
    *(rbx + 0x90) = arg1
    *(rbx + 0x98) = rsi
    *(rbx + 0xa0) = *arg2
    
    if (arg3 != 0)
        *(rbx + 8) |= 0x400
    
    rdi = 0
    void* rax_3 = (*(rsi + 8))(rsi, 0x68)
    r15 = rax_3
    
    if (rax_3 != 0)
        memset(r15, 0, 0x68)
    else
        rdi = (rax_3 + 0x40).d
    
    if (rdi != 0)
        goto label_142b9af8e
    
    int64_t r9 = sx.q(arg5)
    int64_t rdx_1 = 0
    *(rbx + 0xd0) = r15
    *(r15 + 0x50) = 0
    
    if (r9.d s> 0)
        int32_t* rcx_4 = arg6
        
        do
            void* r8_1 = *(rbx + 0xd0)
            
            if (*(r8_1 + 0x50) != 0)
                break
            
            if (*rcx_4 == 0x696e6372)
                *(r8_1 + 0x50) = *(rcx_4 + 8)
            
            rdx_1 += 1
            rcx_4 = &rcx_4[4]
        while (rdx_1 s< r9)
    
    rbp = rax
    *(*(rbx + 0xd0) + 0x5c) = 0xffffffff
    int64_t rax_6 = *(rbp + 0x48)
    
    if (rax_6 != 0)
        rdi = rax_6(*arg2, rbx, zx.q(arg4), r9, arg6)
    
    *arg2 = *(rbx + 0xa0)
    
    if (rdi != 0)
        goto label_142b9af99
    
    int32_t rax_8 = sub_142b98700(rbx)
    
    if (rax_8 != 0 && rax_8.b != 0x26)
        rdi = rax_8
        goto label_142b9af99
    
    *arg7 = rbx
return zx.q(rdi)
