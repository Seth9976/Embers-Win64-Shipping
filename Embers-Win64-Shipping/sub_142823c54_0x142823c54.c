// 函数: sub_142823c54
// 地址: 0x142823c54
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t* result

if (((*(arg1 + 0x28) - rcx) & 0xfffffffffffffff8) != 8)
    int64_t* rax_4 = *(arg1 + 0x28) - 8
    int64_t* r11_1 = *rax_4
    *(arg1 + 0x28) = rax_4
    int64_t* r10_1 = rax_4[-1]
    result = *r10_1
    char* rdx_1 = *result
    
    if (*rdx_1 == 0)
        *(arg1 + 0x28) = rcx
    else
        int128_t var_18
        
        if (*(rdx_1 + 0x10) == 3)
            void* r8_1 = *(arg1 + 0x10)
            var_18 = zx.o(0)
            
            if (r8_1 != 0)
                *(r8_1 + 8) += 1
                r8_1 = *(arg1 + 0x10)
            
            var_18:8.q = r8_1
            var_18.q = *(arg1 + 8)
            return sub_142824094(r10_1, r11_1, &var_18)
        
        if (*(rdx_1 + 0x10) != 4)
            *(arg1 + 0x28) = rcx
        else
            void* rcx_2 = *(arg1 + 0x58)
            
            if (*(rcx_2 - 8) == 0)
                *(rcx_2 - 8) = 1
            else
                void* rdx_3 = *(arg1 + 0x10)
                var_18 = zx.o(0)
                
                if (rdx_3 != 0)
                    *(rdx_3 + 8) += 1
                    rdx_3 = *(arg1 + 0x10)
                
                var_18:8.q = rdx_3
                var_18.q = *(arg1 + 8)
                result = sub_142823f64(r10_1, *(rcx_2 - 0x10), r11_1, &var_18)
                *(arg1 + 0x58) -= 0x10
else
    result = *rcx
    *(arg1 + 0x28) -= 8
    *(arg1 + 0x18) = result

return result
