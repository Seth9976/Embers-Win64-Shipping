// 函数: sub_142829ce4
// 地址: 0x142829ce4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_e0 = 0
int64_t var_d8 = 0xf
char var_f0 = 0
SimpleString::operator=(&var_f0, "bad file")
int64_t var_128
int64_t* rax_2 = sub_1427bde30(*(arg1 + 8), &var_128)
int32_t* var_118 = arg1
*arg1 += 1
int32_t rdx_1 = *arg1

if (rdx_1 s>= 0x1f4)
    struct std::exception::VTable* exceptionObject
    sub_14282e414(&exceptionObject, rdx_1, rax_2, &var_f0)
    _CxxThrowException(&exceptionObject, &data_1439464c0)
    noreturn

if (var_d8 u>= 0x10)
    sub_14058ba50(var_f0.q, var_d8 + 1)

int64_t var_e0_1 = 0
int64_t var_d8_1 = 0xf
var_f0 = 0
char rax_3 = sub_142828cbc(*(arg1 + 8))
int64_t* rcx_4 = *(arg1 + 8)
int64_t result
char var_c8

if (rax_3 == 0)
    void* rax_5 = sub_142828cd8(rcx_4)
    int64_t var_138 = *(rax_5 + 8)
    int32_t var_130_1 = *(rax_5 + 0x10)
    
    if (*(sub_142828cd8(*(arg1 + 8)) + 4) != 0xf)
        if (*(sub_142828cd8(*(arg1 + 8)) + 4) != 0x11)
            uint64_t count_1 = 0
            int64_t var_f8_1 = 0xf
            char var_110 = 0
            int64_t var_98_1 = 0
            int64_t var_90_1 = 0xf
            char var_a8 = 0
            sub_14282a3a4(arg1, &var_110, &var_128, &var_a8)
            
            if (var_98_1 != 0)
                (*(*arg2 + 0x50))(arg2, &var_138, &var_a8)
            
            if (sub_142828cbc(*(arg1 + 8)) != 0)
                result = (*(*arg2 + 0x18))(arg2, &var_138, var_128)
            else
                void* rax_15 = sub_142828cd8(*(arg1 + 8))
                
                if (count_1 == 0)
                    void* const rdx_14 = &data_142d86024
                    
                    if (*(rax_15 + 4) == 0x14)
                        rdx_14 = &data_142e5e874
                    
                    SimpleString::operator=(&var_110, rdx_14)
                
                if (*(rax_15 + 4) != 0x13)
                label_142829f9d:
                    int32_t rax_19 = *(rax_15 + 4)
                    int32_t var_148_3
                    
                    if (rax_19 == 3)
                        var_148_3 = 1
                    label_14282a130:
                        (*(*arg2 + 0x30))(arg2, &var_138, &var_110, var_128, var_148_3)
                        sub_14282a1e8(arg1, arg2, arg3)
                        result = (*(*arg2 + 0x38))(arg2)
                    else
                        int32_t var_148_2
                        
                        if (rax_19 == 4)
                            var_148_2 = 1
                        label_14282a0e6:
                            (*(*arg2 + 0x40))(arg2, &var_138, &var_110, var_128, var_148_2)
                            sub_142829c70(arg1, arg2, arg3)
                            result = (*(*arg2 + 0x48))(arg2)
                        else
                            if (rax_19 == 8)
                                var_148_3 = 2
                                goto label_14282a130
                            
                            if (rax_19 == 9)
                                var_148_2 = 2
                                goto label_14282a0e6
                            
                            int32_t var_148
                            
                            if (rax_19 == 0xe)
                                void* rdx_17 = *(arg1 + 0x18)
                                int64_t rcx_26 = *(rdx_17 + 0x20)
                                
                                if (rcx_26 != 0)
                                    var_c8.q = rdx_17
                                    int64_t r8_8 = rcx_26 + *(rdx_17 + 0x18) - 1
                                    
                                    if (*(*(*(rdx_17 + 8)
                                            + (((*(rdx_17 + 0x10) - 1) & r8_8 u>> 2) << 3))
                                            + ((zx.q(r8_8.d) & 3) << 2)) != 4)
                                        goto label_14282a045
                                    
                                    var_148_2 = 2
                                    goto label_14282a0e6
                                
                            label_14282a045:
                                
                                if (sub_14060ab10(&var_110, U"?&=") == 0)
                                    int64_t var_e0_2 = 0
                                    int64_t var_d8_2 = 0xf
                                    var_f0 = 0
                                    SimpleString::operator=(&var_f0, &data_1437020ab)
                                    var_148.q = &var_f0
                                    result = (*(*arg2 + 0x28))(arg2, &var_138, &var_110, var_128, 
                                        var_148)
                                    
                                    if (var_d8_2 u>= 0x10)
                                        result = sub_14058ba50(var_f0.q, var_d8_2 + 1)
                                else
                                    result = (*(*arg2 + 0x18))(arg2, &var_138, var_128)
                            else
                                if (rax_19 - 0x13 u> 1)
                                    goto label_14282a045
                                
                                var_148.q = rax_15 + 0x18
                                (*(*arg2 + 0x28))(arg2, &var_138, &var_110, var_128, var_148)
                                result = sub_142828d00(*(arg1 + 8))
                else
                    uint64_t count_2 = strlen(U"?&=")
                    char* buffer1 = &var_110
                    
                    if (var_f8_1 u>= 0x10)
                        buffer1 = var_110.q
                    
                    uint64_t count = count_1
                    
                    if (count_2 u< count_1)
                        count = count_2
                    
                    if (memcmp(buffer1, &data_142d86024, count) != 0 || count_1 u< count_2
                            || count_1 u> count_2)
                        goto label_142829f9d
                    
                    if (sub_142826774(rax_15 + 0x18) == 0)
                        goto label_142829f9d
                    
                    (*(*arg2 + 0x18))(arg2, &var_138, var_128)
                    result = sub_142828d00(*(arg1 + 8))
            
            if (var_90_1 u>= 0x10)
                result = sub_14058ba50(var_a8.q, var_90_1 + 1)
            
            int64_t var_98_2 = 0
            int64_t var_90_2 = 0xf
            var_a8 = 0
            
            if (var_f8_1 u>= 0x10)
                result = sub_14058ba50(var_110.q, var_f8_1 + 1)
            
            int64_t var_100_1 = 0
            int64_t var_f8_2 = 0xf
            var_110 = 0
        else
            (*(*arg2 + 0x20))(arg2, &var_138, 
                sub_14282a230(arg1, &var_138, sub_142828cd8(*(arg1 + 8)) + 0x18))
            result = sub_142828d00(*(arg1 + 8))
    else
        int64_t var_b8_1 = 0
        int64_t var_b0_1 = 0xf
        var_c8 = 0
        SimpleString::operator=(&var_c8, U"?&=")
        (*(*arg2 + 0x40))(arg2, &var_138, &var_c8, 0, 0)
        
        if (var_b0_1 u>= 0x10)
            sub_14058ba50(var_c8.q, var_b0_1 + 1)
        
        sub_142829c70(arg1, arg2, arg3)
        result = (*(*arg2 + 0x48))(arg2)
else
    result = (*(*arg2 + 0x18))(arg2, sub_1427bde30(rcx_4, &var_c8), 0)
*arg1 -= 1
__security_check_cookie(rax_1 ^ &var_168)
return result
