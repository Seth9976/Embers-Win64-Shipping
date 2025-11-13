// 函数: sub_142937fd0
// 地址: 0x142937fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg3
__chkstk(0x20)
int32_t rbx = 0

if (sub_142898c70(arg2) s> 0)
    while (true)
        int32_t* rax_1 = sub_142898ea0(arg2, rbx)
        int32_t rax_2 = sub_1428e4860(rax_1)
        int64_t rdx_1 = 0
        void* rcx_3 = &data_143b86838
        
        while (true)
            if (rax_2 != *rcx_3)
                rdx_1 += 1
                rcx_3 += 0x10
                
                if (rdx_1 u< 2)
                    continue
            else if (rdx_1 u< 2)
                sub_1428e8b00(nullptr, (&data_143b86840)[rdx_1 * 2], &result)
                break
            
            sub_1428e8c80(nullptr, rax_1, &result)
            break
        
        rbx += 1
        
        if (rbx s>= sub_142898c70(arg2))
            break

return result
