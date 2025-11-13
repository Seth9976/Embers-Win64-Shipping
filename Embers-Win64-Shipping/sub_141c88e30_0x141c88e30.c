// 函数: sub_141c88e30
// 地址: 0x141c88e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* rbx = arg2[1]
int64_t i = *arg2

if (rbx != 0)
    rbx[1].d += 1
    arg3 = arg_18

void* rax_2 = sub_141c80cb0(arg1 + 0x10, sub_140b5ead0(arg3.d) + arg_18:4.d, &arg_18)
int64_t* r8_1 = *rax_2
int64_t rdx_1 = sx.q(*(rax_2 + 8))
int64_t* rcx_2 = r8_1
int64_t r12_1 = rdx_1 * 2
void* rax_3 = &r8_1[r12_1]

if (r8_1 != rax_3)
    while (*rcx_2 != i)
        rcx_2 = &rcx_2[2]
        
        if (rcx_2 == rax_3)
            goto label_141c88eb5

if (r8_1 == rax_3 || ((rcx_2 - r8_1) s>> 4).d == 0xffffffff)
label_141c88eb5:
    int32_t rax_4 = (rdx_1 + 1).d
    *(rax_2 + 8) = rax_4
    
    if (rax_4 s> *(rax_2 + 0xc))
        sub_1405a4f90(rax_2)
    
    int64_t rax_5 = *rax_2
    *(rax_5 + (r12_1 << 3)) = i
    *(rax_5 + (r12_1 << 3) + 8) = rbx
else if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_10 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t result = sub_141c8d830(*(arg1 + 0x148), arg2)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
