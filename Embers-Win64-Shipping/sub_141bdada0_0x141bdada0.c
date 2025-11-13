// 函数: sub_141bdada0
// 地址: 0x141bdada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg1[4].d)
int64_t* r13 = arg1

if (r12.d == 0)
    return 0

int64_t* rax_1 = arg1[3]
int32_t rdi = 0
int32_t r14 = 0

if (rax_1 != 0)
    arg1 = rax_1

int64_t r15
r15.b = *arg1 != *arg2
int64_t rbx = 0

do
    int64_t r9_1 = sx.q(rdi)
    rbx += 1
    rdi += 1
    
    if (rbx s< r12)
        int64_t* rax_3 = r13[3]
        int64_t* rcx = r13
        
        if (rax_3 != 0)
            rcx = rax_3
        
        do
            int32_t rax_4
            rax_4.b = rcx[rbx] != *arg2
            
            if (zx.d(r15.b) != rax_4)
                break
            
            rdi += 1
            rbx += 1
        while (rbx s< r12)
    
    int32_t rbp_2 = rdi - r9_1.d
    
    if (r15.b != 0)
        if (r14 != r9_1.d)
            int64_t* rax_5 = r13[3]
            int64_t* rcx_1 = r13
            
            if (rax_5 != 0)
                rcx_1 = rax_5
            
            memmove(&rcx_1[sx.q(r14)], &rcx_1[r9_1], rbp_2 << 3)
        
        r14 += rbp_2
    
    r15.b ^= 1
while (rbx s< r12)

r13[4].d = r14
return zx.q(r12.d - r14)
