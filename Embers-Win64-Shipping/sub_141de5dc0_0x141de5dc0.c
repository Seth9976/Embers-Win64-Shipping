// 函数: sub_141de5dc0
// 地址: 0x141de5dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg2
int64_t rdx = sx.q(arg2[1].d)
void* rcx = &result[rdx]

if (result == rcx)
label_141de5e07:
    int32_t rax = (rdx + 1).d
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    int32_t rsi_1 = 0
    (*arg2)[rdx] = arg1
    
    if (*(arg1 + 0xb0) s<= 0)
    label_141de5ef3:
        result.b = 0
    else
        void* r14_1 = nullptr
        
        while (true)
            int64_t rbx_1 = sx.q(arg2[1].d)
            uint64_t rcx_2 = 0
            result = *(arg1 + 0xa8)
            int64_t r12_1 = *arg2
            uint64_t var_38 = 0
            int32_t var_30_1 = rbx_1.d
            
            if (rbx_1.d != 0)
                sub_1405c4a00(&var_38, rbx_1.d, 0)
                memcpy(var_38, r12_1, (rbx_1 << 3).d)
                rcx_2 = var_38
            else
                int32_t var_2c_1 = 0
            
            int64_t* rbx_2 = *(r14_1 + result)
            
            if (rbx_2 != 0)
                void* rax_1 = sub_14245c440()
                void* rcx_5 = rbx_2[2]
                result = sx.q(*(rax_1 + 0x38))
                
                if (result.d s<= *(rcx_5 + 0x38) && (*(rcx_5 + 0x30))[result] == rax_1 + 0x30
                        && (*(*rbx_2 + 0x340))(rbx_2, &var_38).b != 0)
                    uint64_t rcx_7 = var_38
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    break
                
                rcx_2 = var_38
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rsi_1 += 1
            r14_1 += 0x20
            
            if (rsi_1 s>= *(arg1 + 0xb0))
                goto label_141de5ef3
        
        result.b = 1
else
    while (*result != arg1)
        result = &result[1]
        
        if (result == rcx)
            goto label_141de5e07
    
    result.b = 1

return result
