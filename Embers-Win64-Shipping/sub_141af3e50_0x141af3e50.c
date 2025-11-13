// 函数: sub_141af3e50
// 地址: 0x141af3e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int64_t* rdx = arg1

if (r8.d == 0)
    return 0

int32_t* rcx = *arg1
int32_t r13 = 0
int32_t rbp = 0
int64_t r14

if (*rcx != *arg2 || rcx[1] != arg2[1])
    r14.b = 1
else
    r14.b = 0

int64_t rdi = 0

do
    int64_t r10_1 = sx.q(rbp)
    rdi += 1
    rbp += 1
    
    if (rdi s< r8)
        void* rdx_1 = *rdx + rdi * 0x28
        
        do
            uint64_t rax_3
            
            if (*rdx_1 != *arg2 || *(rdx_1 + 4) != arg2[1])
                rax_3.b = 1
            else
                rax_3.b = 0
            
            if (r14.b != rax_3.b)
                break
            
            rbp += 1
            rdi += 1
            rdx_1 += 0x28
        while (rdi s< r8)
        
        rdx = arg1
    
    int32_t i_1 = rbp - r10_1.d
    
    if (r14.b != 0)
        if (r13 != r10_1.d)
            int64_t r9_1 = *rdx
            memmove(r9_1 + sx.q(r13) * 0x28, r9_1 + r10_1 * 0x28, i_1 * 0x28)
        
        r13 += i_1
        rdx = arg1
    else if (i_1 != 0)
        void* rbx_2 = *rdx + ((r10_1 * 5 + 1) << 3)
        int32_t i
        
        do
            int64_t rcx_6 = *(rbx_2 + 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *rbx_2
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_2 += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdx = arg1
    
    r14.b ^= 1
while (rdi s< r8)

rdx[1].d = r13
return zx.q(r8.d - r13)
