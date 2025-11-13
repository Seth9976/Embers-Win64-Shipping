// 函数: sub_141da3520
// 地址: 0x141da3520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* i = *(arg1 + 0x180)
int64_t* i_1 = i
void* r8_2 = &i[sx.q(*(arg1 + 0x188)) * 2]
int32_t result

if (i == r8_2)
label_141da3572:
    void* rcx = *(arg1 + 0x190)
    
    if (rcx == 0 || *(rcx + 0x18) != 5)
        for (; i != r8_2; i = &i[2])
            if (*(*i + 0x18) == 0)
                goto label_141da35b0_2
        
        if (rcx == 0 || *(rcx + 0x18) != 0)
            result = *(arg1 + 0x398)
            
            if (result != 0 && *(arg1 + 0x170) == 0)
                *(arg1 + 0x170) = 1
                int64_t (* var_98)(int64_t* arg1, int32_t* arg2)
                void** const var_78
                int64_t (* var_58)(int64_t* arg1, int64_t* arg2)
                void** const var_38
                
                if (result == 1)
                    int32_t rbx_1 = *(arg1 + 0xb8)
                    sub_141d9e460(arg1, rbx_1)
                    var_78 = &data_142da2668
                    int32_t var_a0_1 = rbx_1
                    var_98 = sub_141d9bce0
                    void*** var_88_1 = nullptr
                    var_38 = &data_142d42ed8
                    void* var_70_1 = arg1
                    var_58 = sub_141d9be40
                    void*** var_48_1 = nullptr
                    int128_t var_30_1 = arg1.o
                    sub_141d92760(arg1, 4, &var_58, &var_98)
                    
                    if (var_58 != 0)
                        void** const* rcx_4 = &var_38
                        
                        if (var_48_1 != 0)
                            rcx_4 = var_48_1
                        
                        (*rcx_4)[2](rcx_4)
                    
                    if (var_98 != 0)
                        void** const* rcx_5 = &var_78
                        
                        if (var_88_1 != 0)
                            rcx_5 = var_88_1
                        
                        (*rcx_5)[2](rcx_5)
                
                void*** var_88_2 = nullptr
                var_78 = &data_142da2668
                void* var_70_2 = arg1
                var_98 = j_sub_141d95e00
                void*** var_48_2 = nullptr
                var_38 = &data_142d42d18
                var_58 = sub_140594850
                result = sub_141d9b830(arg1, 0xe, &var_58, &var_98)
                
                if (var_58 != 0)
                    void** const* rcx_7 = &var_38
                    
                    if (var_48_2 != 0)
                        rcx_7 = var_48_2
                    
                    result = (*rcx_7)[2](rcx_7)
                
                if (var_98 != 0)
                    void** const* rcx_8 = &var_78
                    
                    if (var_88_2 != 0)
                        rcx_8 = var_88_2
                    
                    result = (*rcx_8)[2](rcx_8)
        else
        label_141da35b0:
            result = sub_141d9bed0(arg1)
    else
    label_141da35b0_1:
        result = sub_141d9bed0(arg1)
else
    while (*(*i_1 + 0x18) != 5)
        i_1 = &i_1[2]
        
        if (i_1 == r8_2)
            goto label_141da3572
    
label_141da35b0_2:
    result = sub_141d9bed0(arg1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
