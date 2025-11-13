// 函数: sub_142706d10
// 地址: 0x142706d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141eefd40(arg1)

if (*(arg1 + 0xc0) != 0)
    result = sub_14272a610()
    
    if (result != 0)
        int64_t* rdx_1 = *(arg1 + 0xc0)
        void* r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= rdx_1[7].d)
            void* result_1 = result
            result = rdx_1[6]
            
            if (*(result + (result_1 << 3)) == r8_1 && rdx_1 != 0)
                void var_18
                char* rax = sub_142702060(&var_18, rdx_1)
                *(arg1 + 0xc8) = *rax
                result = *(rax + 4)
                *(arg1 + 0xcc) = result

return result
