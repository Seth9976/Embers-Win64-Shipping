// 函数: sub_1426799a0
// 地址: 0x1426799a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
int64_t var_10 = r14
(*(*arg1 + 0x40))()
void* rax_1 = arg1[0x1d]
int64_t r15

if (rax_1 == 0 || (not.b((*(rax_1 + 0x474) u>> 5).b) & 1) != 0)
    r15.b = 0
else
    r15.b = 1

int32_t i

do
    int32_t rbp_1 = 1
    
    if (r15.b == 0)
        rbp_1 = arg1[0x16].d
    
    int32_t rbx_1 = arg1[0x21].d
    int32_t rax_5 = (*(*arg1 + 0x40))(arg1)
    int64_t var_38 = 0
    int64_t rdi_1 = 0
    r14.b = rax_5 s> 0
    int64_t var_28
    int64_t* rax_6 = sub_14268ea10(arg1, &var_28, rbp_1 - rbx_1)
    int64_t rbx_2 = 0
    
    if (&var_38 != rax_6)
        rdi_1 = *rax_6
        *rax_6 = 0
        rbx_2 = rdi_1
        var_38 = rdi_1
        rax_6[1] = 0
    
    int64_t rcx_2 = var_28
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int32_t rax_8
    rax_8.b = (*(*arg1 + 0x40))(arg1) s> 0
    
    if (r14.b != 0 && rax_8.b == 0)
        int64_t* rcx_4 = arg1[0x1d]
        (*(*rcx_4 + 0x788))(rcx_4)
    
    if (rbx_2 != 0)
        sub_140a74f90(rdi_1)
    
    void* j = arg1[0x20]
    
    for (void* rbp_3 = j + sx.q(arg1[0x21].d) * 0x18; j != rbp_3; j += 0x18)
        void* rbx_3 = *(j + 0x10)
        int64_t* rcx_7 = *(rbx_3 + 0x28)
        
        if (rcx_7 == 0)
            bool z_1
            
            if (0 == *(rbx_3 + 0x18))
                *(rbx_3 + 0x18) = 0
                z_1 = true
            else
                *(rbx_3 + 0x18)
                z_1 = false
            
            if (not(z_1))
                sub_1426788a0(rbx_3)
            
            goto label_142679af8
        
        if ((*(*rcx_7 + 0x18))(rcx_7, rbx_3) == 0)
        label_142679af8:
            
            if (*(rbx_3 + 0x28) != 0)
                int64_t* rcx_11 = *(rbx_3 + 0x20)
                (*(*rcx_11 + 0x20))(rcx_11, 0xffffffff, 0)
                *(rbx_3 + 0x28) = 0
        else
            sub_1426788a0(rbx_3)
            int64_t* rcx_9 = *(rbx_3 + 0x20)
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x10))(rcx_9)
            
            *(rbx_3 + 0x28) = 0
    
    i = (*(*arg1 + 0x40))(arg1)
while (i s> 0)

return i
