// 函数: sub_14223e0f0
// 地址: 0x14223e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = sub_140d3c6e0(&arg2[0x40])
void* i_1 = i

if (i != 0)
    void* rax = sub_142561050()
    void* rcx_1 = *(i_1 + 0x10)
    i = rax + 0x30
    int64_t r8_1 = sx.q(*(i + 8))
    
    if (r8_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (r8_1 << 3)) == i)
        int64_t* r8_2 = *(i_1 + 0x278)
        void* r10_1 = *(arg1 + 0x10)
        void* r9_2 = sx.q(*(i_1 + 0x280)) * 0x2c + r8_2
        i = *(arg1 + 4)
        int64_t rcx_5 = *(*(*(r10_1 + 0x40) + (sx.q(*arg2) << 3)) + 0x80)
        int128_t* rdx_1
        
        if (r8_2 != r9_2)
            while (i != *r8_2)
                r8_2 += 0x2c
                
                if (r8_2 == r9_2)
                    goto label_14223e184
            
            if (r8_2 != 0)
                rdx_1 = &r8_2[1]
                goto label_14223e1ae
        
    label_14223e184:
        
        if (*arg1 != 0)
            int64_t var_38
            rdx_1 = &var_38
            char var_30
            char var_30_1 = var_30 | 1
            var_38 = 0
            int128_t var_2c
            __builtin_memset(&var_2c, 0, 0x18)
        label_14223e1ae:
            char* rbx = *(arg1 + 0x20)
            i = sub_142255b90(rcx_5, rdx_1, *(arg1 + 0x18), r10_1)
            *rbx |= i.b

return i
