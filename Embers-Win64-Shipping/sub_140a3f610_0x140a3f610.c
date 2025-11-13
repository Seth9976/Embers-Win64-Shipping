// 函数: sub_140a3f610
// 地址: 0x140a3f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140a46220()
int32_t rcx = *(result + 0x40)
void* rbx = result + 0x38
int32_t rdx = rcx - 1

if (rcx == 0)
    rdx = 0

if (rdx == 0)
    int64_t var_28
    int64_t* rax = sub_140b67580(&var_28)
    int64_t rcx_2 = *rax
    int32_t rdx_1 = rax[1].d
    int32_t rdx_2 = neg.d(rdx_1)
    *rax = 0
    int32_t r8_1 = rax[1].d
    int64_t var_38 = rcx_2
    int32_t rcx_3 = *(rax + 0xc)
    int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 2 + r8_1
    rax[1] = 0
    
    if (rdx_5 s> rcx_3)
        sub_1405947f0(&var_38, rdx_5)
    
    sub_140a20ba0(&var_38, &data_142d5a024, 1)
    int64_t rdi_1 = var_38
    void var_18
    result = &var_18
    var_38 = 0
    int32_t var_30_1
    var_30_1.q = 0
    
    if (rbx != &var_18)
        int64_t rcx_6 = *rbx
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        *rbx = rdi_1
        *(rbx + 8) = r8_1
        *(rbx + 0xc) = rcx_3
    else if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)
    
    int64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        return sub_140a74f90(rcx_8)

return result
