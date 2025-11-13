// 函数: sub_140620650
// 地址: 0x140620650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141efce60(arg1, arg2)
int64_t* result = arg1[0x25]

if (*result != 0)
    while (true)
        int64_t* rax = arg1[0x25]
        int128_t var_20
        __builtin_memset(&var_20, 0, 0x18)
        void* rsi_1 = *rax
        
        if (rsi_1 == 0)
            goto label_1406207a1
        
        int32_t var_28
        sub_14061f660(&var_28, rsi_1 + 8)
        void* rdi_1 = arg1[0x25]
        arg1[0x25] = rsi_1
        int64_t var_48 = 0
        int64_t var_40_1 = (zx.o(0)).q
        int64_t var_30_1 = 0
        sub_14061f660(rsi_1 + 8, &var_48)
        int64_t rcx_2 = var_40_1
        
        if (rcx_2 == 0)
            goto label_140620738
        
        int64_t rax_1 = rcx_2
        
        if (var_30_1 - rcx_2 u< 0x1000)
        label_140620725:
            j_sub_140a74f90(rcx_2)
            int128_t var_40_2
            __builtin_memset(&var_40_2, 0, 0x18)
        label_140620738:
            
            if (rdi_1 == 0)
                goto label_1406207a1
            
            void* rcx_3 = *(rdi_1 + 0x10)
            
            if (rcx_3 == 0)
                goto label_14062078b
            
            if (*(rdi_1 + 0x20) - rcx_3 u< 0x1000)
                goto label_140620772
            
            void* r8_1 = *(rcx_3 - 8)
            
            if (rcx_3 - r8_1 - 8 u<= 0x1f)
                rcx_3 = r8_1
            label_140620772:
                j_sub_140a74f90(rcx_3)
                __builtin_memset(rdi_1 + 0x10, 0, 0x18)
            label_14062078b:
                j_sub_140a74f90(rdi_1)
            label_1406207a1:
                sub_1406219e0(arg1, _mm_cvtps_pd(var_28.q), &var_20)
                void* rcx_7 = var_20.q
                
                if (rcx_7 == 0)
                    goto label_1406207de
                
                void* rax_5 = rcx_7
                int64_t var_10
                
                if (var_10 - rcx_7 u< 0x1000)
                label_1406207d9:
                    j_sub_140a74f90(rcx_7)
                label_1406207de:
                    result = arg1[0x25]
                    
                    if (*result == 0)
                        break
                    
                    continue
                else
                    rcx_7 = *(rcx_7 - 8)
                    
                    if (rax_5 - rcx_7 - 8 u<= 0x1f)
                        goto label_1406207d9
        else
            rcx_2 = *(rcx_2 - 8)
            
            if (rax_1 - rcx_2 - 8 u<= 0x1f)
                goto label_140620725
        
        _invalid_parameter_noinfo_noreturn()
        noreturn

return result
