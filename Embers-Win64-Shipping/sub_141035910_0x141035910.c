// 函数: sub_141035910
// 地址: 0x141035910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_8 = rbx
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rdi_1 = *(arg1 + 0x18) + 0x1c0
void var_88

if (arg3 != 0)
    uint64_t i_1 = zx.q(arg3)
    void* r14_1 = arg2 - &var_88
    rbx = &var_88
    uint64_t i
    
    do
        void* rdx = *(r14_1 + rbx)
        
        if (rdx == 0)
            *rbx = *(*(arg1 + 0x28) + 8)
        else
            int32_t rcx = *(rdx + 0x4c)
            void* r10_1 = *(*(rdx + 0x28) + 0x10)
            
            if (rcx == 4)
                sub_141037220(rdi_1, r10_1, 4, *(rdx + 0x50))
            else if (rcx == 5)
                sub_141036f20(rdi_1, r10_1, 4, rdx + 0x38)
            else if (rcx == 6 || rcx == 8)
                sub_141037220(rdi_1, r10_1, 4, *(rdx + 0x50))
            
            void* rcx_5 = *(r14_1 + rbx)
            *rbx = *(rcx_5 + 0x10)
            sub_14105c1a0(*(*(rcx_5 + 0x28) + 0x10), rdi_1)
        
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result

if (arg4 == 0)
    int64_t* rcx_16 = *(*(rdi_1 + 8) + 0x30)
    result = (*(*rcx_16 + 0x170))(rcx_16, zx.q(arg3), &var_88, 0, 0)
else
    int32_t rax_5 = *(arg4 + 0x50)
    
    if (*(arg4 + 0x89) == 0 || (not.b((rax_5 u>> 1).b) & 1) == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    void* rsi_1 = *(*(arg4 + 0x28) + 0x10)
    
    if ((not.b(rax_5.b) & 1) != 0)
        sub_141036f20(rdi_1, rsi_1, 0x10, arg4 + 0x8a)
    
    if (rbx.b != 0)
        sub_141036f20(rdi_1, rsi_1, 0x10, arg4 + 0x9a)
    
    int64_t var_98 = *(arg4 + 0x10)
    int64_t* rcx_13 = *(*(rdi_1 + 8) + 0x30)
    (*(*rcx_13 + 0x170))(rcx_13, zx.q(arg3), &var_88, 0, &var_98)
    result = sub_14105c1a0(*(*(arg4 + 0x28) + 0x10), rdi_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
