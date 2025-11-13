// 函数: sub_142246d20
// 地址: 0x142246d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
void* result = __security_cookie ^ &var_58
void* result_1 = result
int32_t r10 = arg3

if (arg2 != arg3)
    if (arg2 s>= arg3)
        r10 = arg2
    
    int32_t r11_1 = arg3
    int32_t var_24_1 = r10
    int32_t rax_1 = *(arg1 + 0xd8)
    
    if (arg2 s<= arg3)
        r11_1 = arg2
    
    int32_t var_28 = r11_1
    int64_t rbx_1 = var_28.q
    
    if (rax_1 == *(arg1 + 0x104))
    label_142246df6:
        sub_140a9e570(arg1 + 0xd0, &var_28)
        int32_t rax_7 = var_28
        int32_t* var_20
        *var_20 = rbx_1
        var_20[2].b = 0
        char* var_30_1 = nullptr
        var_20[3] = 0xffffffff
        result = sub_1422490d0(arg1 + 0xd0, &var_28, (rbx_1 u>> 0x20).d * 0x17 + rbx_1.d, var_20, 
            rax_7, var_30_1)
    else
        void* r8 = *(arg1 + 0x110)
        void* r9_1 = arg1 + 0x108
        
        if (r8 != 0)
            r9_1 = r8
        
        int32_t rax_6 =
            *(r9_1 + ((sx.q((rbx_1 u>> 0x20).d * 0x17 + r11_1) & (sx.q(*(arg1 + 0x118)) - 1)) << 2))
        
        if (rax_6 == 0xffffffff)
            goto label_142246df6
        
        int64_t r8_1 = *(arg1 + 0xd0)
        void* rcx_3
        
        while (true)
            int64_t rdx_2 = sx.q(rax_6) * 5
            rcx_3 = r8_1 + (rdx_2 << 2)
            
            if (*(r8_1 + (rdx_2 << 2)) != r11_1 || *(rcx_3 + 4) != r10)
                rdx_2.b = 0
            else
                rdx_2.b = 1
            
            if (rdx_2.b != 0)
                break
            
            rax_6 = *(rcx_3 + 0xc)
            
            if (rax_6 == 0xffffffff)
                goto label_142246df6
        
        if (rax_6 == 0xffffffff || rcx_3 == 0)
            goto label_142246df6
        
        result = rcx_3 + 8
        
        if (result == 0)
            goto label_142246df6

__security_check_cookie(result_1 ^ &var_58)
return result
