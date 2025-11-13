// 函数: sub_1417a2540
// 地址: 0x1417a2540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
void* r15 = *arg1

if (*(r15 + 0x38) != 0)
    int64_t* rbx_1 = *(r15 + 8)
    int64_t rdi_1 = 0
    uint64_t r14_2 = sx.q(*(r15 + 0x10)) << 3 u>> 3
    int32_t r12_1 = 1
    
    if (rbx_1 u> &rbx_1[sx.q(*(r15 + 0x10))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 8))(rcx_1, zx.q(rbp), 1)
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
    
    int32_t rcx_2 = *(r15 + 0x18)
    int32_t rax_5 = rcx_2 - rbp
    
    if (rax_5 s<= 1)
        r12_1 = rax_5
    
    *(r15 + 0x18) = rcx_2 - r12_1
else
    sub_1417b4570(r15, rbp)

void* r8 = *arg1
int64_t result = sx.q(arg1[1].d)

if (result.d u< *(r8 + 0x18))
    if (*(r8 + 0x38) == 0)
        *(*(*(r8 + 0xc8) + (result << 3)) + 8) = result.d
        return result
    
    int64_t r9_1 = result << 3
    
    do
        r9_1 += 8
        result = zx.q(result.d + 1)
        void* rdx_4 = *(*(r8 + 0xc8) + r9_1 - 8)
        *(rdx_4 + 8) -= 1
        r8 = *arg1
    while (result.d u< *(r8 + 0x18))

return result
