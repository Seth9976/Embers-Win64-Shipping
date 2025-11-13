// 函数: sub_140748960
// 地址: 0x140748960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9ef48
EnterCriticalSection(&data_143cdfd68)
int64_t rax = sx.q(data_143cdfd98)

if (rax.d != 0)
    int64_t r9_1 = data_143cdfd90
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = *r9_1 != arg1
    int64_t i = 0
    
    do
        int64_t rdx = sx.q(rdi_1)
        i += 1
        rdi_1 += 1
        
        for (; i s< rax; i += 1)
            int32_t rax_1
            rax_1.b = *(r9_1 + (i << 3)) != arg1
            
            if (zx.d(r15.b) != rax_1)
                break
            
            rdi_1 += 1
        
        int32_t r14_2 = rdi_1 - rdx.d
        
        if (r15.b != 0)
            if (r12_1 != rdx.d)
                memmove(r9_1 + (sx.q(r12_1) << 3), r9_1 + (rdx << 3), r14_2 << 3)
                r9_1 = data_143cdfd90
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (i s< rax)
    
    data_143cdfd98 = r12_1

LeaveCriticalSection(&data_143cdfd68)
int32_t i_2 = arg1[7].d
int64_t* rbx_1 = arg1[6]

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[6]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[2]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
