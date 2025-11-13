// 函数: sub_140974ab0
// 地址: 0x140974ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r12_1 = sx.q(arg2)
int64_t r15_2 = r12_1 * 0x50
void* rdi_2 = *arg1 + r15_2
int32_t i

do
    int64_t rcx = *(rdi_2 + 0x38)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *(rdi_2 + 0x28)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *rdi_2 = &data_142e259e0
    int64_t rcx_2 = *(rdi_2 + 0x18)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t* rbx_1 = *(rdi_2 + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_2 += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t r9 = arg1[1].d
int32_t rdx_2 = r9 - r12_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rcx_5 = *arg1
    memcpy(rcx_5 + r15_2, sx.q(r9 - rdx_2) * 0x50 + rcx_5, rdx_2 * 0x50)
    r9 = arg1[1].d

arg1[1].d = r9 - arg3

if (arg4 != 0)
    sub_140976b40(arg1)
