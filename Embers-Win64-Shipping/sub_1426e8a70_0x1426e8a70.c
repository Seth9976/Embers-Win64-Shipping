// 函数: sub_1426e8a70
// 地址: 0x1426e8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* const rsi = arg3
void* result

if (arg2 == 0 || arg3 == 0)
    result = nullptr
else
    void* rax_2 = sub_1426daeb0(arg1)
    void* result_1 = nullptr
    
    if (rax_2 != 0)
        int64_t* rax_3 = sub_14272b250()
        void* rcx = rax_3[0x23]
        
        if (rcx == 0)
            int64_t rdx = *rax_3
            (*(rdx + 0x390))(rax_3, rdx)
            rcx = rax_3[0x23]
        
        if (*(rcx + 0x98) != 0)
        label_1426e8b60:
            int64_t* rdi_2 = arg5
            
            if (rdi_2 == 0)
                rdi_2 = sub_14273ad80()
            else
                void* rax_10 = sub_14273ad80()
                
                if (rax_10 == 0)
                    rdi_2 = sub_14273ad80()
                else
                    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                    
                    if (rax_11.d s> rdi_2[7].d || *(rdi_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
                        rdi_2 = sub_14273ad80()
                    else
                        void* rax_13 = sub_14273ad80()
                        int64_t rax_14
                        
                        if (rax_13 != 0)
                            rax_14 = sx.q(*(rax_13 + 0x38))
                        
                        if (rax_13 == 0 || rax_14.d s> rdi_2[7].d
                                || *(rdi_2[6] + (rax_14 << 3)) != rax_13 + 0x30)
                            rdi_2 = nullptr
            
            uint64_t var_b8_1 = 0
            
            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                sub_140d19010(rax_2, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* result_2 = sub_140d2dfc0(rdi_2, rax_2, var_b8_1, 0, 0, 0, 0, 0, 0)
            int128_t var_98
            __builtin_memset(&var_98, 0, 0x34)
            int64_t var_a8 = arg2
            result_1 = result_2
            void* const var_a0_1 = rsi
            int32_t var_64_1 = 0x80
            int32_t var_60_1 = 0xffffffff
            int32_t var_5c_1 = 0
            int64_t var_50_1 = 0
            int32_t var_48_1 = 0
            sub_1426e9e70(result_2, zx.d(arg4), &var_a8)
            sub_1405ae200(&var_98:8)
        else
            void* rax_4 = sub_142497110()
            void* rdx_1 = *(rsi + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                goto label_1426e8b60
            
            void* rax_7 = sub_142497110()
            void* rdx_2 = *(rsi + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                rsi = nullptr
            
            rsi = *(rsi + 0x250)
            
            if (rsi != 0)
                goto label_1426e8b60
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_108)
return result
