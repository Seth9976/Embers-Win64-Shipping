// 函数: sub_142b91b70
// 地址: 0x142b91b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x24).d)

void* rdi = *arg1

if (rdi == 0)
    return zx.q((rdi + 0x23).d)

void* r14 = *(rdi + 0x90)

if (r14 == 0)
    return zx.q((r14 + 0x22).d)

int32_t rbp = 0
void* r15 = *(r14 + 0x10)
int64_t* rdx_1

if (rdi != -0xa8)
    rdx_1 = *(rdi + 0xa8)

if (rdi == -0xa8 || rdx_1 == 0)
label_142b91bff:
    rbp = 0x24
else
    while (rdx_1[2] != arg1)
        rdx_1 = rdx_1[1]
        
        if (rdx_1 == 0)
            goto label_142b91bff
    
    if (rdi != -0xa8)
        void* rcx = *rdx_1
        void** rax_5 = rdx_1[1]
        
        if (rcx == 0)
            *(rdi + 0xa8) = rax_5
        else
            *(rcx + 8) = rax_5
        
        if (rax_5 == 0)
            *(rdi + 0xb0) = rcx
        else
            *rax_5 = rcx
    
    (*(r15 + 0x10))(r15)
    
    if (*(rdi + 0x80) == arg1)
        void* rax_6 = *(rdi + 0xa8)
        *(rdi + 0x80) = 0
        
        if (rax_6 != 0)
            *(rdi + 0x80) = *(rax_6 + 0x10)
    
    sub_142b98690(r15, arg1, r14)

return zx.q(rbp)
