// 函数: sub_141cc6a00
// 地址: 0x141cc6a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
__builtin_memset(arg2, 0, 0x20)
int64_t* rdx_5

if (*(arg1 + 0x68) == *(arg1 + 0x94))
label_141cc6a9e:
    rdx_5 = nullptr
else
    int64_t rax_1 = *arg3
    int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
    void* r8 = arg1 + 0x98
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141cc6a9e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 5) + *(arg1 + 0x60)
            
            if (*rdx_5 == *arg3)
                break
            
            rax_5 = rdx_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141cc6a9e_2
        
        if (rax_5 == 0xffffffff)
        label_141cc6a9e_2:
            rdx_5 = nullptr

void* rbx_1 = &rdx_5[1]

if (rdx_5 == 0)
    rbx_1 = nullptr

int64_t* rbx_2

if (rbx_1 == 0)
    rbx_2 = nullptr
else
    rdi = *rbx_1
    rbx_2 = *(rbx_1 + 8)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

if (rdi != 0)
    int64_t var_18 = rdi
    int64_t* var_10_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t r9
    r9.b = 1
    sub_141cbf320(arg1, arg2, &var_18, r9, 0)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
