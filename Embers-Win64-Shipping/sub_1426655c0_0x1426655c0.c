// 函数: sub_1426655c0
// 地址: 0x1426655c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 0x380)
int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
void* rdi_1 = arg1
int64_t r13_1 = r15_1 * 0x38

if (r10_1 != 0)
    rdi_1 = r10_1

void* rdi_3 = rdi_1 + 0x28 + r13_1
int32_t i

do
    int64_t* rbx_1 = *rdi_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 += 0x38
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t r9 = *(arg1 + 0x388)
int32_t rdx_2 = r9 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    void* rax_3 = *(arg1 + 0x380)
    void* rcx_2 = arg1
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    memcpy(rcx_2 + r13_1, sx.q(r9 - rdx_2) * 0x38 + rcx_2, rdx_2 * 0x38)
    r9 = *(arg1 + 0x388)

*(arg1 + 0x388) = r9 - arg3

if (arg4 != 0)
    sub_142667780(arg1)
