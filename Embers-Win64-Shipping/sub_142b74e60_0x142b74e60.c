// 函数: sub_142b74e60
// 地址: 0x142b74e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

while (true)
    int32_t rbp_1 = -1
    
    while (true)
        int32_t r8 = rbx
        
        if (rbx s>= 0)
            int16_t rax_1 = *(arg1 + 8)
            int32_t rcx_1
            
            if (rax_1 s< 0)
                rcx_1 = *(arg1 + 0xc)
            else
                rcx_1 = sx.d(rax_1) s>> 5
            
            if (rbx s> rcx_1)
                if (rax_1 s< 0)
                    r8 = *(arg1 + 0xc)
                else
                    r8 = sx.d(rax_1) s>> 5
        else
            r8 = 0
        
        int16_t rax_2 = *(arg1 + 8)
        int32_t r9_1
        
        if (rax_2 s< 0)
            r9_1 = *(arg1 + 0xc)
        else
            r9_1 = sx.d(rax_2) s>> 5
        
        int32_t rax_3 = sub_142a491f0(arg1, 0x27, r8, r9_1 - r8)
        
        if (rax_3 s< 0 || rax_3 s>= arg3)
            return sub_142a48d00(arg4, arg1, rbx, arg3 - rbx) __tailcall
        
        if (rax_3 == rbp_1)
            break
        
        sub_142a48d00(arg4, arg1, rbx, rax_3 - rbx)
        rbx = rax_3 + 1
        rbp_1 = rbx
    
    int16_t arg_10 = 0x27
    sub_142a48d70(arg4, &arg_10, 0, 1)
    rbx += 1
