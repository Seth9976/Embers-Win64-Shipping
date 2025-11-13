// 函数: sub_141d20ca0
// 地址: 0x141d20ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r12_1 = r15_1 << 3
int64_t* rdi_2 = *arg1 + r12_1
int32_t i

do
    int64_t* rbx_1 = *rdi_2
    
    if (rbx_1 != 0)
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        j_sub_140a74f90(rbx_1)
    
    rdi_2 = &rdi_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_3 = rax_1 - r15_1.d

if (rcx_3 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, r9 + (sx.q(r15_1.d + arg3) << 3), (rcx_3 - arg3) << 3)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405c53d0(arg1)
