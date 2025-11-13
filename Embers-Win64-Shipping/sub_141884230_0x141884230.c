// 函数: sub_141884230
// 地址: 0x141884230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
*arg3 = 0
uint64_t result = sub_1405948a0(arg2)
int64_t* rbx = *(arg1 + 0x28)
uint64_t result_1 = result

if (rbx[1].d != *(rbx + 0x34))
    void* r9 = rbx[8]
    void* r10_1 = &rbx[7]
    
    if (r9 != 0)
        r10_1 = r9
    
    result = zx.q(
        *(r10_1 + ((sx.q((result u>> 0x20).d * 0x17 + result_1.d) & (sx.q(rbx[9].d) - 1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r8_2 = *rbx
        
        do
            int64_t rdx_3 = sx.q(result.d) * 0x60
            
            if (*(rdx_3 + r8_2) == result_1)
                if (result.d != 0xffffffff)
                    int64_t var_44
                    __builtin_memset(&var_44, 0, 0x14)
                    sub_141888460(sub_140902e90(arg2), &var_44)
                    int64_t* rcx_9 = *(arg1 + 0x20)
                    void var_48
                    result = (*(*rcx_9 + 0x60))(rcx_9, &var_48, &var_44)
                    int64_t r10_2 = sx.q(*result)
                    *arg4 = r10_2.d
                    
                    if (r10_2.d == 0xffffffff)
                        sub_141828360(*(arg1 + 0xe0), 1)
                    else
                        int64_t* r9_1 = *(arg1 + 0x38)
                        int32_t* rcx_14
                        
                        if (r9_1[1].d == *(r9_1 + 0x34))
                            rcx_14 = nullptr
                        else
                            void* rcx_10 = r9_1[8]
                            void* r8_4 = &r9_1[7]
                            
                            if (rcx_10 != 0)
                                r8_4 = rcx_10
                            
                            int32_t rax_5 = *(r8_4 + (((sx.q(r9_1[9].d) - 1) & r10_2) << 2))
                            
                            if (rax_5 == 0xffffffff)
                                rcx_14 = nullptr
                            else
                                while (true)
                                    rcx_14 = sx.q(rax_5) * 0x60 + *r9_1
                                    
                                    if (*rcx_14 == r10_2.d)
                                        break
                                    
                                    rax_5 = rcx_14[0x16]
                                    
                                    if (rax_5 == 0xffffffff)
                                        result = 8
                                        *arg3 = 8
                                        goto label_1418843a1
                                
                                if (rax_5 == 0xffffffff)
                                    rcx_14 = nullptr
                        
                        result = &rcx_14[2]
                        *arg3 = result
                
                break
            
            result = zx.q(*(rdx_3 + r8_2 + 0x58))
        while (result.d != 0xffffffff)

label_1418843a1:
__security_check_cookie(rax_1 ^ &var_68)
return result
