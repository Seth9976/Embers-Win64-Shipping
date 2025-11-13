// 函数: sub_142bbc020
// 地址: 0x142bbc020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rcx = *(arg1 + 0x38)
int64_t* rbp = *(arg1 + 0x20)
int64_t result

if (*(arg1 + 0x28) u< &rbp[6])
    result = 0xa1
else
    int64_t rbx_1 = 0
    int32_t rsi_1 = 0x7fffffff
    void var_48
    int32_t* rdi_1 = &var_48
    int64_t i_2 = 6
    *(rcx + 0x40) = 1
    int32_t r15_1 = -0x80000000
    int32_t var_60
    int64_t i
    
    do
        int32_t rax_3 = sub_142bc0bc0(arg1, rbp, rdi_1)
        rbp = &rbp[1]
        *(&var_60 + rbx_1) = rax_3
        
        if (rax_3 != 0)
            int32_t rax_4 = *(&var_48 + rbx_1)
            
            if (rax_4 s> r15_1)
                r15_1 = rax_4
            
            if (rax_4 s< rsi_1)
                rsi_1 = rax_4
        
        rdi_1 = &rdi_1[1]
        rbx_1 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)
    void* rbx_2
    
    if (r15_1 + 9 u> 9 || r15_1 - rsi_1 u> 9)
        rbx_2 = rcx
    label_142bbc1e8:
        result = 0
        *(rcx + 0x30) = 0x10000
        *(rcx + 0x38) = 0
        *(rcx + 0x3c) = 0x10000
        *(rbx_2 + 0x48) = 0
        *(rbx_2 + 0x44) = 1
    else
        for (int64_t i_1 = 0; i_1 s< 0x18; i_1 += 4)
            int32_t rdx_2 = *(&var_60 + i_1)
            
            if (rdx_2 != 0)
                int32_t r10_1 = *(&data_143686718 + (sx.q(r15_1 - *(&var_48 + i_1)) << 2))
                int32_t r9_2 = r10_1 s>> 1
                int32_t rax_10
                
                if (rdx_2 s>= 0)
                    rax_10 = r9_2 + rdx_2
                    
                    if (0x7fffffff - r9_2 s<= rdx_2)
                        rax_10 = 0x7fffffff
                else if (r9_2 - 0x80000000 s>= rdx_2)
                    rax_10 = -0x80000000
                else
                    rax_10 = rdx_2 - r9_2
                
                *(&var_60 + i_1) = divs.dp.d(sx.q(rax_10), r10_1)
        
        rbx_2 = rcx
        *(rcx + 0x30) = var_60
        int32_t var_5c
        *(rcx + 0x38) = var_5c
        int32_t var_58
        *(rcx + 0x34) = var_58
        int32_t var_54
        *(rcx + 0x3c) = var_54
        int32_t var_50
        *(rbx_2 + 0x48) = var_50
        int32_t var_4c
        *(rbx_2 + 0x4c) = var_4c
        *(rbx_2 + 0x44) = *(&data_143686718 - (sx.q(r15_1) << 2))
        
        if (sub_142b935d0(rcx + 0x30) == 0)
            goto label_142bbc1e8
        
        result = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
