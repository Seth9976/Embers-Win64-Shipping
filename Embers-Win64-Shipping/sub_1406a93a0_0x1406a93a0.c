// 函数: sub_1406a93a0
// 地址: 0x1406a93a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
void* var_58 = nullptr
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x4e)
int32_t rax = var_50 + 0x4e
var_50 = rax

if (rax s> 0)
    sub_140594770(&var_58)

void* rcx_2 = var_58
__builtin_memcpy(rcx_2, A: B: C: D: E: F: G: H: I: J: K: L: M: N: O: P: Q: R: S: T: U: V: W: X: ", 
    0x90)
*(rcx_2 + 0x90) = 0x5a0020003a0059
*(rcx_2 + 0x98) = 0x3a
int64_t* var_38 = nullptr
int32_t var_30 = 0
sub_140a2ccb0(&var_58, &var_38, &data_142d404d4, 1)
int64_t* rbx = var_38
int64_t rdi = sx.q(var_30)
void* r12_2 = &rbx[rdi * 2]

if (rbx != r12_2)
    do
        int32_t rdi_1 = rbx[1].d
        int64_t r14_1 = *rbx
        int64_t var_48 = 0
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_48, rdi_1, 0)
            memcpy(var_48, r14_1, rdi_1 * 2)
        else
            int32_t var_3c_1 = 0
        
        if (sub_140b12f50(&var_48) != 0)
            int64_t rdi_2 = sx.q(arg1[1].d)
            int32_t rax_2 = (rdi_2 + 1).d
            arg1[1].d = rax_2
            
            if (rax_2 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            int64_t* rdi_4 = (rdi_2 << 4) + *arg1
            *rdi_4 = 0
            int64_t r15_1 = var_48
            rdi_4[1].d = rdi_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(rdi_4, rdi_1, 0)
                memcpy(*rdi_4, r15_1, rdi_1 * 2)
            else
                *(rdi_4 + 0xc) = 0
        
        int64_t rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx = &rbx[2]
    while (rbx != r12_2)
    
    rdi = zx.q(var_30)
    rbx = var_38

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_11 = *rbx
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx = &rbx[2]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)
    rbx = var_38

if (rbx != 0)
    sub_140a74f90(rbx)

void* rcx_13 = var_58

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg1
