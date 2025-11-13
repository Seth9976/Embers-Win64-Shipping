// 函数: sub_14282f508
// 地址: 0x14282f508
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = 0
void** rbx = arg4
arg1[3] = 0
char* rdi = arg3
int64_t rbp = *(arg3 + 0x10)
int64_t r15 = arg4[2]
int64_t rcx = arg4[3]
int64_t r13 = r15 + rbp

if (r15 u<= *(arg3 + 0x18) - rbp && rcx u<= *(arg3 + 0x18))
    memcpy(arg1, rdi, 0x20)
    *(rdi + 0x10) = 0
    void** rax_2 = arg1
    *(rdi + 0x18) = 0xf
    *rdi = 0
    
    if (arg1[3] u>= 0x10)
        rax_2 = *arg1
    
    if (rbx[3] u>= 0x10)
        rbx = *rbx
    
    memcpy(rax_2 + rbp, rbx, r15.d + 1)
    arg1[2] = r13
else if (rbp u> rcx - r15)
    int64_t r14_1 = 0x7fffffffffffffff
    
    if (0x7fffffffffffffff - rbp u< r15)
        sub_1405871e0()
        noreturn
    
    int64_t rax_5 = r13 | 0xf
    
    if (rax_5 u<= 0x7fffffffffffffff)
        r14_1 = rax_5
        
        if (rax_5 u< 0x16)
            r14_1 = 0x16
    
    void* rax_6 = sub_14058b9f0(r14_1 + 1)
    void* arg_8 = rax_6
    sub_14058b9e0(arg1, &arg_8)
    arg1[2] = r13
    arg1[3] = r14_1
    
    if (*(rdi + 0x18) u>= 0x10)
        rdi = *rdi
    
    memcpy(rax_6, rdi, rbp.d)
    
    if (rbx[3] u>= 0x10)
        rbx = *rbx
    
    memcpy(rax_6 + rbp, rbx, r15.d + 1)
else
    memcpy(arg1, rbx, 0x20)
    rbx[2] = 0
    rbx[3] = 0xf
    *rbx = nullptr
    void* rbx_1 = *arg1
    memmove(rbx_1 + rbp, rbx_1, r15.d + 1)
    
    if (*(rdi + 0x18) u>= 0x10)
        rdi = *rdi
    
    memcpy(rbx_1, rdi, rbp.d)
    arg1[2] = r13

return arg1
