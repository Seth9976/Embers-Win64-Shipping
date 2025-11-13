// 函数: sub_14209e6b0
// 地址: 0x14209e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
(*(*arg1 + 0x268))()
arg1[5] = 0
arg1[7] = 0

if (arg2 != 0)
    void* rax_3 = sub_1424cd900()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        int32_t rcx_1
        rcx_1.b = sub_140b5b8a0(*(arg2 + 0xa0), 0) == 0
        
        if ((*(arg2 + 0xa4) != 0 | rcx_1.b) != 0)
            int64_t* rcx_2 = arg1[4]
            
            if (rcx_2 != 0)
                void* rax_8 = (*(*rcx_2 + 0x260))(rcx_2)
                
                if (rax_8 != 0)
                    void* var_48_1 = nullptr
                    int32_t var_3c_1 = 0x18
                    int32_t var_40_1 = 0
                    void* rax_9 = sub_142591550()
                    void* const rbp_1
                    
                    if (rax_9 == 0)
                        rbp_1 = nullptr
                    else
                        void* rax_10 = sub_142459c10()
                        
                        if (rax_10 == 0)
                            rbp_1 = nullptr
                        else
                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                            
                            if (rax_11.d s> *(rax_9 + 0x38))
                                rbp_1 = nullptr
                            else
                                rbp_1 = rax_9
                                
                                if (*(*(rax_9 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                                    rbp_1 = nullptr
                    
                    void var_108
                    void* r8_2 = &var_108
                    
                    if (rbp_1 != sub_142459c10())
                        sub_1419f71f0(rax_8, rax_9, r8_2)
                    else
                        sub_1419f6fe0(rax_8, rax_9, r8_2)
                    
                    if (var_40_1 s> 0)
                        void* rcx_5 = &var_108
                        
                        if (var_48_1 != 0)
                            rcx_5 = var_48_1
                        
                        void* rax_15 = sub_141f3b9f0(*rcx_5)
                        
                        if (rax_15 != 0)
                            int64_t rbp_2 = *(rax_15 + 0x10)
                            void* const rdx_3
                            
                            if (*(arg2 + 0x98) == 0)
                                rdx_3 = nullptr
                            else
                                void* rax_16 = sub_14245f6d0()
                                
                                if (rax_16 == 0)
                                    rdx_3 = nullptr
                                else
                                    rdx_3 = *(arg2 + 0x98)
                                    int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                                    
                                    if (rax_17.d s> *(rdx_3 + 0x38)
                                            || *(*(rdx_3 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                        rdx_3 = nullptr
                            
                            if (rbp_2 == rdx_3)
                                arg1[5] = rax_15
                                arg1[7] = sub_140cdb8f0(*(rax_15 + 0x10), *(arg2 + 0xa0))
                    
                    if (var_48_1 != 0)
                        sub_140a74f90(var_48_1)

int64_t result = (*(*arg1 + 0x260))(arg1, arg2)
__security_check_cookie(rax_1 ^ &var_128)
return result
