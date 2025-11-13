// 函数: sub_140b88540
// 地址: 0x140b88540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** var_e8 = nullptr
int32_t rdx = 0
int32_t var_e0 = 0
int32_t var_dc = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_e8, rbx_1.d + 1)
        r8 = var_dc
        rdx = var_e0
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_e0_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_e8)
    
    UnDecorator::getReferenceType(var_e8, arg2, (rbx_1.d + 1) * 2)

uint64_t result_1
uint64_t result = sub_140b75cb0(arg1, &var_e8, &result_1)
int64_t** rcx_4 = var_e8
char rbx_3 = result.b

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rbx_4
void* r14_3

if (rbx_3 != 0)
    result = result_1
    rbx_4 = *result
    r14_3 = &rbx_4[sx.q(*(result + 8)) * 2]

if (rbx_3 == 0 || rbx_4 == r14_3)
label_140b886f4:
    result.b = 1
else
    while (true)
        int64_t* rcx_5 = *rbx_4
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x70))(rcx_5, &var_e8).b != 0)
            int64_t** rax_3 = var_e8
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x12)
            int64_t var_c0
            __builtin_memset(&var_c0, 0, 0x90)
            
            if (sub_140b85780(&var_d8, *rax_3, arg4) == 0)
                sub_140b78c70(&var_d8)
                result.b = 0
                break
            
            int64_t rdi_1 = sx.q(arg3[1].d)
            int32_t rax_5 = (rdi_1 + 1).d
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405e3f90(arg3)
            
            sub_140b78080(rdi_1 * 0xa8 + *arg3, &var_d8)
            sub_140b78c70(&var_d8)
        
        rbx_4 = &rbx_4[2]
        
        if (rbx_4 == r14_3)
            goto label_140b886f4

return result
