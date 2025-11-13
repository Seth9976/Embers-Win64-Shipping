// 函数: sub_142c7d7a0
// 地址: 0x142c7d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x3fe) != 0
void* rbp = *arg1
char arg_8 = 0
void* r15 = *(rbp + 0x250)
int32_t rax_3

if (cond:0)
label_142c7d842:
    int512_t zmm2
    rax_3, zmm2 = sub_142c67f20(arg1, 1, arg3, arg4)
    
    if (rax_3 == 0)
        if (*(arg1 + 0x164) == 2 && *(arg1 + 0x412) == rax_3.b)
            return 0
        
        if (*(arg1 + 0x401) != 0 && *(arg1 + 0x3f6) != 0 && sub_142c67e00(arg1) != 0)
            return 0
        
        if (arg1[0xea].d == 0)
            goto label_142c7d8cb
        
        rax_3, zmm2 = sub_142c8f150(&arg1[0xd3], 0, zmm2)
        int32_t rcx_5
        rcx_5.b = arg1[0xea].d == 0
        *arg2 = rcx_5
        
        if (rax_3 == 0 && *(arg1 + 0x731) == 1)
            *arg2 = 0
        label_142c7d8cb:
            int32_t rax_7 = *(r15 + 0x18)
            
            if (rax_7 s> 1)
                if (rax_7 != 0)
                    sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2, 0, 0xffffffff, nullptr)
                
                if (*(arg1 + 0x731) == 0)
                    *arg2 = 1
                
                return 0
            
            if (*(arg1 + 0x731) == 1)
                char arg_18
                rax_3 = sub_142c7e210(arg1, &arg_18, zmm2)
                
                if (rax_3 == 0 && arg_18 != 0)
                    rax_3 = sub_142c7dd40(arg1)
                    *(arg1 + 0x731) = 0
                    
                    if (rax_3 == 0)
                        rax_3 = sub_142c7e120(arg1)
                        
                        if (rax_3 == 0)
                            *arg2 = 1
            else
                uint64_t rax_8
                int32_t rsi_1
                
                if (*(rbp + 0x5e9) == 0)
                    *(r15 + 0x20) = -1
                    sub_142c7ece0(arg1)
                    
                    if (*(rbp + 0x5dd) == 0 && arg1[0xe4] != 0)
                        int32_t rax_9
                        rax_9, zmm2 = sub_142c7e640(arg1, *(rbp + 0x5db), 0x15, zmm2)
                        
                        if (rax_9 != 0)
                            return rax_9
                        
                        goto label_142c7da08
                    
                    if (*(r15 + 0x18) != 0)
                    label_142c7da08:
                        rax_8 = sub_142c8f150(&arg1[0xd3], 0, zmm2)
                        rsi_1.b = arg1[0xea].d == 0
                        *arg2 = rsi_1
                        return rax_8
                    
                    rax_3, zmm2 = sub_142c7e640(arg1, 1, 0x14, zmm2)
                    
                    if (rax_3 == 0)
                        goto label_142c7da08
                else
                    int512_t zmm2_1
                    rax_3, zmm2_1 = sub_142c7e640(arg1, *(rbp + 0x5db), 0x16, zmm2)
                    
                    if (rax_3 == 0)
                        rax_8 = sub_142c8f150(&arg1[0xd3], 0, zmm2_1)
                        
                        if (*(arg1 + 0x731) != 0)
                            *arg2 = 0
                            return rax_8
                        
                        rsi_1.b = arg1[0xea].d == 0
                        *arg2 = rsi_1
                        return rax_8
else
    if (sub_142c67e00(arg1) != 0)
        return sub_142c67e20(arg1, 1, nullptr, 0, arg4, arg3)
    
    rax_3, arg4, arg3 = sub_142c655d0(arg1, 1, &arg_8, arg3)
    
    if (arg_8 != 0)
        goto label_142c7d842
    
    if (rax_3 != 0 && *(arg1 + 0x744) == 0)
        *arg2 = 0xffffffff
        return sub_142c7e5c0(arg1)

return rax_3
