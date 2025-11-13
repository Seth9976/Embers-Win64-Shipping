// 函数: sub_140d97340
// 地址: 0x140d97340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rbp = *arg1
int32_t var_18 = rbp
int64_t* var_10 = arg2

if (rdi.d != 0)
    void* r14_1 = *arg2
    
    if (rbp s>= *(r14_1 + 4) && rbp s<= *((rdi << 5) + r14_1 - 0x14))
        int32_t rsi_1 = 0
        
        while (rdi.d s> 0)
            int32_t rcx_1 = rdi.d & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rdi.d)
            int32_t rax_6 = (temp1_1 - temp0_1) s>> 1
            rdi = zx.q(rax_6)
            int32_t rax_7 = rax_6 + rsi_1
            
            if (sub_140d9a760((sx.q(rax_7) << 5) + r14_1) s< rbp)
                rsi_1 = rax_7 + rcx_1
        
        int64_t result = sub_140d96f80(&var_18, rsi_1)
        
        if (result != 0)
            return result
        
        result = sub_140d96f80(&var_18, rsi_1 - 1)
        
        if (result != 0)
            return result

return 0
