// 函数: sub_1427e54a0
// 地址: 0x1427e54a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg2 + 0x18))(arg1[2])
uint64_t result_2 = zx.q(result)

if (result != 0)
    int64_t* rsi_1 = nullptr
    int32_t var_28_1 = 0
    int64_t arg_8 = 0
    char var_38_1 = 1
    void var_238
    void* var_30_1 = &var_238
    int32_t result_1 = 0x40
    sub_1427e6b20(&var_238, result_2.d, &arg_8)
    (*(arg2 + 0x10))(arg1[2], var_30_1, zx.q(result_2.d))
    int32_t var_248_1 = 0
    void var_458
    void* rbx_1 = &var_458
    void* var_250_1 = &var_458
    char var_258_1 = 1
    int32_t var_244_1 = 0x40
    
    if (result_2.d != 0)
        int64_t* rbx_2 = nullptr
        uint64_t i_2 = zx.q(result_2.d)
        uint64_t i
        
        do
            void* r8_3 = arg1[5]
            int64_t* j = *(rbx_2 + var_30_1)
            
            if (*(r8_3 + 0x3c) == 0)
            label_1427e5636:
                sub_1427e6520(arg1, j, &var_458)
            else
                void* rcx_6 = not.q(j << 0x20) + j
                int64_t rcx_7 = rcx_6 ^ rcx_6 u>> 0x16
                int64_t rcx_8 = rcx_7 + not.q(rcx_7 << 0xd)
                int64_t rcx_9 = (rcx_8 u>> 8 ^ rcx_8) * 9
                int64_t rcx_10 = rcx_9 ^ rcx_9 u>> 0xf
                int64_t rcx_11 = rcx_10 + not.q(rcx_10 << 0x1b)
                int32_t rax_16 = *(*(r8_3 + 0x20) + (((zx.q((rcx_11 u>> 0x1f).d) ^ zx.q(rcx_11.d))
                    & zx.q(*(r8_3 + 0x2c) - 1)) << 2))
                
                if (rax_16 == 0xffffffff)
                label_1427e5636_1:
                    sub_1427e6520(arg1, j, &var_458)
                else
                    int64_t r10_1 = *(r8_3 + 0x10)
                    
                    while (*(r10_1 + zx.q(rax_16) * 0x10) != j)
                        rax_16 = *(*(r8_3 + 0x18) + (zx.q(rax_16) << 2))
                        
                        if (rax_16 == 0xffffffff)
                            goto label_1427e5636_2
                    
                    if (rax_16 == 0xffffffff || zx.q(rax_16) << 4 == neg.q(r10_1))
                    label_1427e5636_2:
                        sub_1427e6520(arg1, j, &var_458)
            
            rbx_2 = &rbx_2[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = var_250_1
        
        if (result_2.d != 0)
            uint64_t i_3 = result_2
            uint64_t i_1
            
            do
                sub_1427e70a0(arg1, *(rsi_1 + rbx_1))
                rbx_1 = var_250_1
                rsi_1 = &rsi_1[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    void* rdx_10 = *arg1
    
    if (*(rdx_10 + 0x10) != 0)
        if (*(*(rdx_10 + 8) + zx.q(*(rdx_10 + 0x10) - 1) * 0x10 + 8) != 0)
            int64_t* rcx_23 = arg1[1]
            (*(*rcx_23 + 0x20))(rcx_23, rdx_10)
        
        void* rax_20 = *arg1
        *(rax_20 + 0x10) -= 1
        rbx_1 = var_250_1
    
    if ((var_244_1 & 0x7fffffff) != 0 && var_244_1 s>= 0)
        if (rbx_1 == &var_458)
            char var_258_2 = 0
        else if (rbx_1 != 0)
            class physx::PxAllocatorCallback* rax_22 = physx::shdfnd::getAllocator()
            int64_t r8_5 = *rax_22
            (*(r8_5 + 0x10))(rax_22, rbx_1, r8_5)
    
    result = result_1
    
    if ((result & 0x7fffffff) != 0 && result s>= 0)
        result = &var_238
        
        if (var_30_1 != &var_238 && var_30_1 != 0)
            class physx::PxAllocatorCallback* rax_23 = physx::shdfnd::getAllocator()
            int64_t r8_6 = *rax_23
            return (*(r8_6 + 0x10))(rax_23, var_30_1, r8_6)

return result
