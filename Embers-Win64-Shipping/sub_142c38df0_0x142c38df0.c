// 函数: sub_142c38df0
// 地址: 0x142c38df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
void* rdi = *(arg1 + 0x10)
int32_t arg_8 = 0
int32_t arg_20 = 0
int32_t var_24 = 0
int32_t var_28 = 0

if ((*(arg1 + 0x20))(arg4, zx.q(arg3), &arg_8, &arg_20) != 0)
    int32_t r8_1 = arg_20
    int32_t rax_2
    
    if (r8_1 != 0)
        var_28 = 0
        void* r10_1 = *(rdi + 0x40)
        rax_2 = (*(r10_1 + 0x130))(rdi, *(rdi + 0x48), r8_1, &var_28, *(r10_1 + 0x20))
    
    if (r8_1 == 0 || rax_2 != 0)
        uint64_t r8_2 = zx.q(arg_8)
        var_24 = 0
        void* r10_2 = *(rdi + 0x40)
        bool cond:0_1 = (*(r10_2 + 0x130))(rdi, *(rdi + 0x48), r8_2, &var_24, *(r10_2 + 0x20)) != 0
        
        if (arg2 != 0 && cond:0_1 != 0)
        label_142c38eaf:
            sub_142c394c0(rbx, arg_8, var_24)
            int32_t rdx_4 = arg_20
            
            if (rdx_4 == 0)
                return 1
            
            sub_142c394c0(rbx, rdx_4, var_28)
            return 2
        
        int32_t result = sub_142c38df0(arg1, zx.q(arg2), zx.q(arg_8))
        
        if (result != 0)
            int32_t rdx_6 = arg_20
            
            if (rdx_6 == 0)
                return result
            
            sub_142c394c0(rbx, rdx_6, var_28)
            return zx.q(result + 1)
        
        if (cond:0_1 != 0)
            goto label_142c38eaf

return 0
