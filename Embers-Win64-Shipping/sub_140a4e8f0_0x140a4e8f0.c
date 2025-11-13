// 函数: sub_140a4e8f0
// 地址: 0x140a4e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** r12 = rax

if (rax == 0)
    r12 = nullptr
else
    void var_58
    int64_t* rax_1 = sub_140596d10(&var_58, arg3)
    sub_140a3b680(r12, arg4, arg5)
    *r12 = &data_142e5f0c8
    void var_48
    int64_t* rax_2 = sub_140596d10(&var_48, rax_1)
    void* rbx_1 = &r12[7]
    __builtin_memset(rbx_1, 0, 0x20)
    int64_t i_1 = 2
    int64_t i
    
    do
        if (rbx_1 != rax_2)
            int32_t rdi_1 = rax_2[1].d
            int64_t r15_1 = *rax_2
            int32_t r8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 8) = rdi_1
            
            if (rdi_1 != 0 || r8_1 != 0)
                sub_1405a4c70(rbx_1, rdi_1, r8_1)
                memcpy(*rbx_1, r15_1, rdi_1 * 2)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    int64_t rcx_5 = *rax_2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = *rax_1
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int64_t* rax_3 = sub_140a3e430(arg1, arg2, r12)
int64_t rdx_6 = *rax_3
return (*(rdx_6 + 0x28))(rax_3, rdx_6)
