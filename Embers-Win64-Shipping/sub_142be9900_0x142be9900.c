// 函数: sub_142be9900
// 地址: 0x142be9900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rdx = *(arg1 + 0x290)
void* i = zx.q(*(arg1 + 0x298)) + rdx
int64_t var_158 = *(*(arg1 + 0x90) + 8)
int64_t result

if (rdx == 0 || rdx + 4 u> i || (zx.w(*(rdx + 1)) | zx.w(*rdx) << 8) != 0)
    result = 8
else
    void* var_1c8_2 = rdx + 4
    uint32_t var_1c0_1 = zx.d(*(var_1c8_2 - 1)) | zx.d(*(var_1c8_2 - 2)) << 8
    
    if (var_1c0_1 != 0)
        while (var_1c8_2 + 8 u<= i)
            uint16_t var_174_1 = zx.w(*(var_1c8_2 + 1)) | zx.w(*var_1c8_2) << 8
            void* var_1c8_4 = var_1c8_2 + 4
            uint16_t rcx_5 = zx.w(*(var_1c8_4 - 1)) | zx.w(*(var_1c8_4 - 2)) << 8
            void* var_180 = arg1
            uint16_t var_172_1 = rcx_5
            int32_t var_178_1 = 0
            var_1c8_2 = var_1c8_4 + 4
            uint32_t rdx_10 = zx.d(*(var_1c8_2 - 1)) | (zx.d(*(var_1c8_2 - 2))
                | (zx.d(*(var_1c8_2 - 3)) | zx.d(*(var_1c8_2 - 4)) << 8) << 8) << 8
            uint32_t var_170_1 = rdx_10
            
            if (rdx_10 != 0 && rdx_10 u<= *(arg1 + 0x298) - 2)
                char* rax_25 = zx.q(rdx_10) + rdx
                void** const var_1b8_1 = &data_143698790
                
                do
                    void* rcx_15 = *var_1b8_1
                    
                    if (*(rcx_15 + 0x50) == (zx.d(rax_25[1]) | zx.d(*rax_25) << 8))
                        int32_t var_1b0_1 = 0
                        void var_148
                        sub_142b9a770(&var_148, rax_25, i, 0)
                        uint32_t var_28_1 = zx.d(*(arg1 + 0x174))
                        
                        if (__intrinsic_setjmp(&var_148, &var_1e8) == 0)
                            var_1b0_1 = (*(rcx_15 + 0x58))(rax_25, &var_148)
                        
                        int128_t* var_160
                        int32_t var_34
                        
                        if (var_34 == 0 && sub_142b91640(rcx_15, rax_25, &var_180, &var_160) == 0)
                            var_160[2].d = var_1b0_1
                        
                        break
                    
                    var_1b8_1 = &var_1b8_1[1]
                while (*var_1b8_1 != 0)
            
            uint32_t temp0_1 = var_1c0_1
            var_1c0_1 -= 1
            
            if (temp0_1 == 1)
                break
    
    result = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return result
