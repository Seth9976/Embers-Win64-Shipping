// 函数: sub_1428e6d20
// 地址: 0x1428e6d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r15 = 0

if (sub_142898c70(*(arg1 - 0x18)) s> 0)
    int32_t rax_11
    
    do
        int64_t* rax_1 = sub_142898ea0(*(arg1 - 0x18), r15)
        char* rsi_1
        
        if ((*(arg1 - 8) & 0x400) == 0)
            rsi_1 = *rax_1
        
        if ((*(arg1 - 8) & 0x400) == 0 && (*rsi_1 & 1) != 0)
            int32_t* rsi_2 = *(rsi_1 + 0x18)
            int32_t rax_2 = sub_142898c70(rsi_2)
            
            if (rax_1[2].d != rax_2)
                int32_t rbx_1 = 0
                
                if (sub_142898c70(rsi_2) s> 0)
                    int32_t rax_7
                    
                    do
                        int64_t* rax_4 = sub_142898ea0(rsi_2, rbx_1)
                        
                        if (sub_14292b7e0(arg1, rax_1, rax_4) == 0
                                && sub_1428e66c0(arg1, arg2, rax_4, rax_1, arg3) == 0)
                            return 0
                        
                        rbx_1 += 1
                        rax_7 = sub_142898c70(rsi_2)
                    while (rbx_1 s< rax_7)
        else if (rax_1[2].d == 0)
            int32_t* rax_8 = *rax_1
            int32_t* rax_9 = sub_14292b530(nullptr, *(rax_8 + 8), *rax_8 & 0x10)
            
            if (rax_9 == 0)
                return 0
            
            int64_t rdx_5 = *(*arg2 + 0x10)
            *rax_9 |= 4
            *(rax_9 + 0x10) = rdx_5
            
            if (sub_14292b660(arg1, rax_9, rax_1, arg3) == 0)
                sub_14292b4d0(rax_9)
                return 0
        
        r15 += 1
        rax_11 = sub_142898c70(*(arg1 - 0x18))
    while (r15 s< rax_11)

void* r8_5 = *(arg1 - 0x10)
int64_t* rax_12

if (r8_5 != 0)
    rax_12 = sub_14292b660(arg1, *arg2, r8_5, nullptr)

if (r8_5 == 0 || rax_12 != 0)
    return 1

return 0
