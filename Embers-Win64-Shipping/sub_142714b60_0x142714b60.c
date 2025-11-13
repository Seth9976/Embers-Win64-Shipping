// 函数: sub_142714b60
// 地址: 0x142714b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
void* const rbx_1

if (*(arg2 + 0x18) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14272ef20()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg2 + 0x18)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

if (rbx_1 == sub_14272e8c0())
    int64_t var_38
    (*(*arg1 + 0x278))(arg1, &var_38, arg4)
    char rdx_2 = *(arg2 + 0x20)
    int64_t var_28 = var_38
    int32_t var_30
    int32_t var_20_1 = var_30
    sub_1426a5bd0(arg3, rdx_2, &var_28)
    rdi.b = 1

if (rdi.b == 0)
    void* const rbx_2
    
    if (*(arg2 + 0x18) == 0)
        rbx_2 = nullptr
    else
        void* rax_7 = sub_14272ef20()
        
        if (rax_7 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = *(arg2 + 0x18)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                rbx_2 = nullptr
    
    if (rbx_2 == sub_14272e650())
        void* rax_12 = (*(*arg1 + 0x288))(arg1, arg4)
        sub_1426a4fb0(arg3, *(arg2 + 0x20), rax_12)
        uint64_t result
        result.b = 1
        return result

return zx.q(rdi.b)
