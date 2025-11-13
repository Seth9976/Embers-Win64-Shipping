// 函数: sub_14174d330
// 地址: 0x14174d330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 8)
int64_t r15_1 = sx.q(arg2)
void* rdi_1 = arg1

if (r10_1 != 0)
    rdi_1 = r10_1

int32_t i_1 = arg3
int64_t r13_1 = r15_1 << 3
void* rdi_2 = rdi_1 + r13_1
int32_t i

do
    void* rbx_1 = *rdi_2
    
    if (rbx_1 != 0)
        int64_t rcx = *(rbx_1 + 0x78)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rbx_1 + 0x68)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(rbx_1 + 0x58)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 + 0x48)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(rbx_1)
    
    rdi_2 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = *(arg1 + 0x10)
int32_t rcx_6 = rax_1 - r15_1.d

if (rcx_6 != arg3)
    void* rax_2 = *(arg1 + 8)
    void* r9 = arg1
    
    if (rax_2 != 0)
        r9 = rax_2
    
    memmove(r9 + r13_1, r9 + (sx.q(r15_1.d + arg3) << 3), (rcx_6 - arg3) << 3)
    rax_1 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_1 - arg3

if (arg4 != 0)
    sub_140d3e790(arg1)
