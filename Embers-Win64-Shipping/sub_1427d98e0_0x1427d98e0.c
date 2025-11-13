// 函数: sub_1427d98e0
// 地址: 0x1427d98e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg2 + 0x18))(arg1[2])
uint64_t rsi = zx.q(result)

if (result != 0)
    int64_t* rdi_1 = nullptr
    char var_20_1 = 1
    int32_t var_10_1 = 0
    int64_t arg_8 = 0
    void var_48
    void* var_18_1 = &var_48
    int32_t result_1 = 5
    sub_1427e6c50(&var_48, rsi.d, &arg_8)
    (*(arg2 + 0x10))(arg1[2], var_18_1, zx.q(rsi.d))
    sub_1427e5da0(arg1, "PxMaterialRef")
    
    if (rsi.d != 0)
        uint64_t i
        
        do
            sub_1427e3420(arg1[1], arg1[4], "PxMaterialRef", *(rdi_1 + var_18_1))
            rdi_1 = &rdi_1[1]
            i = rsi
            rsi -= 1
        while (i != 1)
    
    void* rdx_3 = *arg1
    
    if (*(rdx_3 + 0x10) != 0)
        if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
            int64_t* rcx_8 = arg1[1]
            (*(*rcx_8 + 0x20))(rcx_8, rdx_3)
        
        void* rax_2 = *arg1
        *(rax_2 + 0x10) -= 1
    
    result = result_1
    
    if ((result & 0x7fffffff) != 0 && result s>= 0)
        result = &var_48
        
        if (var_18_1 != &var_48 && var_18_1 != 0)
            class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
            int64_t r8_3 = *rax_3
            return (*(r8_3 + 0x10))(rax_3, var_18_1, r8_3)

return result
