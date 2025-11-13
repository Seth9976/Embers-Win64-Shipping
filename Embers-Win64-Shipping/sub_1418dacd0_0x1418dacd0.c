// 函数: sub_1418dacd0
// 地址: 0x1418dacd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 8)
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0
    uint32_t count = r14[1].d
    int64_t rbp_1 = *r14
    rax[1].d = count
    
    if (count != 0)
        sub_1405da9e0(rbx, count, 0)
        memcpy(*rbx, rbp_1, count)
    else
        *(rax + 0xc) = count

void arg_8

if (arg2 + 0x10 != &arg_8)
    int64_t* r14_1 = *(arg2 + 0x10)
    *(arg2 + 0x10) = rbx
    
    if (r14_1 == 0)
        *(arg2 + 8) = rbx
        return &arg_8
    
    int64_t rcx_2 = *r14_1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    j_sub_140a74f90(r14_1)
else if (rbx != 0)
    int64_t rcx_3 = *rbx
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    j_sub_140a74f90(rbx)

int64_t* result = *(arg2 + 0x10)
*(arg2 + 8) = result
return result
