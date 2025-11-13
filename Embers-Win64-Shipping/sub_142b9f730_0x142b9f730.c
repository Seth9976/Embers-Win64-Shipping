// 函数: sub_142b9f730
// 地址: 0x142b9f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142ba2850(arg2, arg3)
int32_t rsi = rax

if (rax != 0)
    return rax

if ((arg2[0x22d].b & 1) == 0)
    int32_t rdi_1 = *(arg4 + 0x44)
    int32_t rax_1 = sub_142ba43f0(arg2, 0)
    rsi = rax_1
    
    if (rax_1 == 0)
        sub_142ba4b20(arg2, rdi_1, arg4 + 0x48, 0)
        rsi = sub_142ba3fe0(arg2, 0)

if ((arg2[0x22d].b & 1) != 0 || rsi == 0)
    if ((arg2[0x22d].b & 2) != 0)
    label_142b9f81b:
        
        for (int32_t i = 0; i s< 2; i += 1)
            if (i != 0)
                if (i == 1 && (arg2[0x22d].b & 2) == 0)
                label_142b9f885:
                    sub_142ba3640(arg2, i)
                    sub_142ba2150(arg2, i)
                    sub_142ba2250(arg2, i)
                    sub_142ba2450(arg2, i)
            else if (*(arg4 + 0x20) == i && (arg2[0x22d].b & 8) == 0)
                int32_t var_68
                int32_t var_64
                void var_60
                sub_142ba6b60(&var_60, arg2, 0, &var_64, &var_68)
                sub_142ba3020(arg2, 0, var_64, var_68)
            else if ((arg2[0x22d].b & 1) == 0)
                goto label_142b9f885
        
        int16_t* rcx_14 = arg2[4]
        int32_t* r8_3 = *(arg3 + 8)
        char* rdx_10 = *(arg3 + 0x10)
        void* r9_5 = &rcx_14[sx.q(*(arg2 + 0x1c)) * 0x18]
        
        while (rcx_14 u< r9_5)
            *r8_3 = *(rcx_14 + 0x10)
            r8_3[1] = *(rcx_14 + 0x14)
            char rax_10 = (*rcx_14).b
            
            if ((rax_10 & 1) == 0)
                *rdx_10 = ((rax_10 & 2) != 0) + 1
            else
                *rdx_10 = 0
            
            rcx_14 = &rcx_14[0x18]
            r8_3 = &r8_3[2]
            rdx_10 = &rdx_10[1]
    else
        int32_t rdi_2 = *(arg4 + 0x2474)
        int32_t rax_3 = sub_142ba43f0(arg2, 1)
        rsi = rax_3
        
        if (rax_3 == 0)
            sub_142ba4b20(arg2, rdi_2, arg4 + 0x2478, rax_3 + 1)
            rsi = sub_142ba3fe0(arg2, rsi + 1)
        
        if (rsi == 0)
            if ((*(*(*(arg4 + 0x30) + 0x10) + (zx.q(arg1) << 1)) & 0x4000) == 0)
                sub_142ba3e20(arg2, arg4)
            
            goto label_142b9f81b

return rsi
