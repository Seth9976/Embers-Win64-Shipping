// 函数: sub_140eaef50
// 地址: 0x140eaef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int32_t result = sub_140ebeb20(*(arg1 + 0x3f0), &var_28)

if (var_28 != 0)
    void* rbx_1 = *(arg1 + 0x3f0)
    int32_t rdi_1 = -1
    int32_t rsi_1
    
    if ((**(rbx_1 + 0x2a8))(rbx_1 + 0x2a8) s<= 0)
        rsi_1 = -1
    else
        rsi_1 = *(rbx_1 + 0x2fc)
    
    int32_t rsi_2 = rsi_1 + 1
    int64_t* rcx_3 = *(arg1 + 0x3f0) + 0x2a8
    int32_t rax_3 = (**rcx_3)(rcx_3)
    void* r15_1 = *(arg1 + 0x3f0)
    int64_t rdx_1 = *(r15_1 + 0x2a8)
    result = (*rdx_1)(r15_1 + 0x2a8, rdx_1)
    
    if (result s> 0)
        rdi_1 = *(r15_1 + 0x2fc)
    
    if (rax_3 - rdi_1 - 1 s> 0)
        int64_t rdi_3 = sx.q(rsi_2) << 4
        
        while (true)
            int64_t* rcx_6 = *(arg1 + 0x3f0) + 0x2a8
            result = (**rcx_6)(rcx_6)
            
            if (rsi_2 s>= result)
                break
            
            int64_t* rbx_6 = *(*(arg1 + 0x3f0) + 0x2b8) + rdi_3
            
            if (arg2 == 2)
            label_140eaf075:
                char rax_9
                rax_9, arg3 = sub_140f14f00(*rbx_6, arg3)
                
                if (rax_9 != 0)
                    continue
            else
                if (arg2 == 0)
                    if (sub_140f03770(*rbx_6) == 3)
                        goto label_140eaf075
                    
                    rsi_2 += 1
                    rdi_3 += 0x10
                    continue
                
                if (arg2 == 1)
                    if (sub_140f03770(*rbx_6) == 3)
                        goto label_140eaf075
                    
                    if (sub_140f03770(*rbx_6) == 0)
                        goto label_140eaf075
            
            rsi_2 += 1
            rdi_3 += 0x10

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_20 + 8))

return result
