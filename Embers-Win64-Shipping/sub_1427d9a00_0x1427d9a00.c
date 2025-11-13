// 函数: sub_1427d9a00
// 地址: 0x1427d9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
physx::PxShapeGeneratedInfo::PxShapeGeneratedInfo(&var_188)
int32_t result = (*(arg2 + 0x18))(arg1[2])

if (result != 0)
    int64_t* rsi_1 = nullptr
    char var_1a0_1 = 1
    int32_t var_190_1 = 0
    int64_t arg_8 = 0
    void var_1c8
    void* var_198_1 = &var_1c8
    int32_t result_1 = 5
    sub_1427e6cf0(&var_1c8, result, &arg_8)
    (*(arg2 + 0x10))(arg1[2], var_198_1, zx.q(result))
    
    if (result != 0)
        uint64_t rbp_1 = zx.q(result)
        uint64_t i
        
        do
            int64_t* rdi_1 = *(rsi_1 + var_198_1)
            sub_1427e5da0(arg1, "PxShape")
            
            if ((*(*rdi_1 + 0x110))(rdi_1) != 0)
                arg1[3]
                arg1[1]
                int64_t var_1d8_1 = arg1[4]
                sub_1427e2510(*arg1, rdi_1)
            else
                sub_1427e35a0(arg1[1], arg1[4], "PxShapeRef", rdi_1)
            
            void* rdx_4 = *arg1
            
            if (*(rdx_4 + 0x10) != 0)
                if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
                    int64_t* rcx_11 = arg1[1]
                    (*(*rcx_11 + 0x20))(rcx_11, rdx_4)
                
                void* rax_6 = *arg1
                *(rax_6 + 0x10) -= 1
            
            rsi_1 = &rsi_1[1]
            i = rbp_1
            rbp_1 -= 1
        while (i != 1)
    
    result = result_1
    
    if ((result & 0x7fffffff) != 0 && result s>= 0)
        result = &var_1c8
        
        if (var_198_1 != &var_1c8 && var_198_1 != 0)
            class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
            int64_t r8_4 = *rax_7
            return (*(r8_4 + 0x10))(rax_7, var_198_1, r8_4)

return result
