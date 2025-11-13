// 函数: sub_142b9faf0
// 地址: 0x142b9faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
int32_t rax = sub_142ba2850(arg2, arg3)
int32_t rsi = rax

if (rax != 0)
    return rax

if ((arg2[0x22d].b & 1) != 0)
    goto label_142b9fb64

int32_t rax_1 = sub_142ba0d00(arg2, 0)
rsi = rax_1

if (rax_1 == 0)
    sub_142ba0da0(arg2, 0)
    rsi = sub_142ba0970(arg2, 0)

if (rsi == 0)
    sub_142ba0810(arg2, arg4, 0)
label_142b9fb64:
    
    if ((arg2[0x22d].b & 2) != 0)
        goto label_142b9fbb7
    
    int32_t rax_3 = sub_142ba0d00(arg2, 1)
    rsi = rax_3
    
    if (rax_3 == 0)
        sub_142ba0da0(arg2, rax_3 + 1)
        rsi = sub_142ba0970(arg2, rsi + 1)
    
    if (rsi == 0)
        sub_142ba0810(arg2, arg4, rsi + 1)
    label_142b9fbb7:
        
        for (uint32_t i = 0; i s< 2; i += 1)
            if (i == 0)
                char rax_5 = (arg2[0x22d].d).b
                
                if ((rax_5 & 1) == 0)
                    if (*(arg4 + 0x20) != i || (rax_5 & 8) != 0)
                        goto label_142b9fc2f
                    
                    void var_58
                    int32_t arg_20
                    sub_142ba6b60(&var_58, arg2, 0, &arg_20, &arg_8)
                    sub_142ba3020(arg2, 0, arg_20, arg_8)
            else if (i == 1 && (arg2[0x22d].b & 2) == 0)
            label_142b9fc2f:
                sub_142ba0350(arg2, i)
                sub_142ba0100(arg2, i)
                sub_142ba2250(arg2, i)
                sub_142ba2450(arg2, i)
        
        int16_t* rcx_15 = arg2[4]
        int32_t* r8_2 = *(arg3 + 8)
        char* rdx_10 = *(arg3 + 0x10)
        void* r9_4 = &rcx_15[sx.q(*(arg2 + 0x1c)) * 0x18]
        
        while (rcx_15 u< r9_4)
            *r8_2 = *(rcx_15 + 0x10)
            r8_2[1] = *(rcx_15 + 0x14)
            char rax_9 = (*rcx_15).b
            
            if ((rax_9 & 1) == 0)
                *rdx_10 = ((rax_9 & 2) != 0) + 1
            else
                *rdx_10 = 0
            
            rcx_15 = &rcx_15[0x18]
            r8_2 = &r8_2[2]
            rdx_10 = &rdx_10[1]

return rsi
