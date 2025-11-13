// 函数: sub_141feb8f0
// 地址: 0x141feb8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(data_143f3e890 + 4)
int64_t* result = 1

if (i_2 s<= 1)
    i_2 = 1

if (arg1[1].d != i_2)
    int64_t rbp_1 = 0
    int32_t i_5 = 0
    int64_t var_18 = 0
    int32_t var_c_1 = 0
    
    if (i_2 s> 0)
        sub_1405a4df0(&var_18)
        rbp_1 = var_18
        i_5 = i_2
        int64_t rax_1 = rbp_1
        
        if (i_2 != 0)
            int32_t i
            
            do
                __builtin_memcpy(rax_1, 
                    "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x01", 
                    0x15)
                rax_1 += 0x18
                i = i_2
                i_2 -= 1
            while (i != 1)
    else if (i_2 s< 0 && i_2 != 0)
        if (i_2 != i_2)
            memmove(sx.q(i_2) * 0x18, nullptr, 0)
        
        sub_1405fde90(&var_18)
        i_5 = i_2
        rbp_1 = var_18
    
    int32_t i_4 = i_5
    
    if (*(arg1 + 0x14) s<= i_5)
        i_4 = *(arg1 + 0x14)
    
    int32_t r10_1 = 0
    int64_t i_3 = sx.q(i_4)
    
    if (i_4 s> 0)
        void* r9_2 = i_3 * 0x18 + -0xffffffffffffffe8 + rbp_1
        int64_t i_1
        
        do
            r9_2 -= 0x18
            int32_t rax_8 = arg1[2].d - r10_1
            r10_1 += 1
            int64_t rcx_4 = sx.q(mods.dp.d(sx.q(rax_8), arg1[1].d)) * 3
            int64_t rax_11 = *arg1
            *(r9_2 + 0x18) = *(rax_11 + (rcx_4 << 3))
            *(r9_2 + 0x28) = *(rax_11 + (rcx_4 << 3) + 0x10)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    result = &var_18
    
    if (arg1 != &var_18)
        int32_t r8_3 = *(arg1 + 0xc)
        arg1[1].d = i_5
        
        if (i_5 != 0 || r8_3 != 0)
            sub_140808f70(arg1, i_5, r8_3)
            result = memcpy(*arg1, rbp_1, i_5 * 0x18)
        else
            *(arg1 + 0xc) = i_5
    
    arg1[2].d = i_4 - 1
    *(arg1 + 0x14) = i_4
    
    if (rbp_1 != 0)
        return sub_140a74f90(rbp_1)

return result
