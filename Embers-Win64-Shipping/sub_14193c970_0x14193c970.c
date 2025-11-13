// 函数: sub_14193c970
// 地址: 0x14193c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* r15 = arg3
int32_t rsi = arg2
int32_t var_154 = arg2
void* var_170 = arg6
int64_t var_178 = arg5
void var_128
void* rax_3 =
    sub_14192a0f0(&var_128, rsi, r15, arg4, var_178, var_170, sub_141957ff0(*(arg1 + 0x15bb8)))
sub_14193ce50()
int32_t var_150
sub_14193a900(&data_1439c7530, &var_150, rax_3)
int64_t rcx_2 = sx.q(var_150)
uint64_t result

if (rcx_2.d == 0xffffffff)
label_14193ca30:
    void* rax_5
    
    if (rsi != 0)
        rax_5 = *r15
    
    if (rsi == 0 || rax_5 == 0 || *(rax_5 + 0x10) != 0)
        int32_t result_1
        data_143f00108(1, &result_1)
        data_143f000f8(0x8d40, zx.q(result_1))
        int32_t rbp_1 = rsi - 1
        int32_t rdi_1 = -1
        
        if (rbp_1 s>= 0)
            int64_t rax_6 = sx.q(rbp_1)
            int32_t rbx_1 = rbp_1 + 0x8ce0
            int32_t* rsi_1 = arg5 + (rax_6 << 2)
            void* r15_1 = &r15[rax_6]
            int32_t temp2_1
            
            do
                void* rcx_5 = *r15_1
                
                if (rcx_5 != 0)
                    int32_t rdx_4
                    
                    if (arg4 != 0)
                        rdx_4 = *(arg4 - arg5 + rsi_1)
                    
                    int32_t r8_2
                    
                    if (arg4 == 0 || rdx_4 == 0xffffffff)
                        r8_2 = *(rcx_5 + 0x14)
                        
                        if (r8_2 u> 0x8c1a)
                            if (r8_2 == 0x9009)
                                data_143f00130(0x8d40, zx.q(rbx_1), zx.q(*(rcx_5 + 0x10)), 
                                    zx.q(*rsi_1), var_178, var_170)
                            else
                            label_14193cc21:
                                
                                if (r8_2 == 0x9100)
                                    var_178.d = *rsi_1
                                    data_143f00120(0x8d40, zx.q(rbx_1), r8_2, 
                                        zx.q(*(rcx_5 + 0x10)), var_178, var_170)
                                else
                                    data_143f00138(0x8d40, zx.q(rbx_1), 0x8d41, 
                                        zx.q(*(rcx_5 + 0x10)), var_178, var_170)
                        else if (r8_2 == 0x8c1a)
                            data_143f00130(0x8d40, zx.q(rbx_1), zx.q(*(rcx_5 + 0x10)), 
                                zx.q(*rsi_1), var_178, var_170)
                        else if (r8_2 == 0xde1)
                            var_178.d = *rsi_1
                            data_143f00120(0x8d40, zx.q(rbx_1), r8_2, zx.q(*(rcx_5 + 0x10)), 
                                var_178, var_170)
                        else if (r8_2 == 0x806f || r8_2 == 0x8513)
                            data_143f00130(0x8d40, zx.q(rbx_1), zx.q(*(rcx_5 + 0x10)), 
                                zx.q(*rsi_1), var_178, var_170)
                        else
                            data_143f00138(0x8d40, zx.q(rbx_1), 0x8d41, zx.q(*(rcx_5 + 0x10)), 
                                var_178, var_170)
                    else
                        r8_2 = *(rcx_5 + 0x14)
                        
                        if (r8_2 u> 0x8c1a)
                            if (r8_2 != 0x9009)
                                goto label_14193cc21
                            
                            var_178.d = rdx_4
                            data_143f00160(0x8d40, zx.q(rbx_1), zx.q(*(rcx_5 + 0x10)), 
                                zx.q(*rsi_1), var_178, var_170)
                        else if (r8_2 == 0x8c1a)
                            var_178.d = rdx_4
                            data_143f00160(0x8d40, zx.q(rbx_1), zx.q(*(rcx_5 + 0x10)), 
                                zx.q(*rsi_1), var_178, var_170)
                        else if (r8_2 == 0xde1)
                            var_178.d = *rsi_1
                            data_143f00120(0x8d40, zx.q(rbx_1), r8_2, zx.q(*(rcx_5 + 0x10)), 
                                var_178, var_170)
                        else if (r8_2 == 0x806f)
                            var_170.d = rdx_4
                            var_178.d = *rsi_1
                            data_143f00128(0x8d40, zx.q(rbx_1), r8_2, zx.q(*(rcx_5 + 0x10)), 
                                var_178, var_170)
                        else if (r8_2 != 0x8513)
                            data_143f00138(0x8d40, zx.q(rbx_1), 0x8d41, zx.q(*(rcx_5 + 0x10)), 
                                var_178, var_170)
                        else
                            var_178.d = *rsi_1
                            data_143f00120(0x8d40, zx.q(rbx_1), rdx_4 + 0x8515, 
                                zx.q(*(rcx_5 + 0x10)), var_178, var_170)
                    rdi_1 = rbp_1
                
                rbx_1 -= 1
                r15_1 -= 8
                rsi_1 -= 4
                temp2_1 = rbp_1
                rbp_1 -= 1
            while (temp2_1 - 1 s>= 0)
            rsi = var_154
            r15 = arg3
        
        if (arg6 != 0)
            int32_t r8_5 = *(arg6 + 0x14)
            
            if (r8_5 u> 0x8c1a)
                if (r8_5 == 0x8d41)
                    void* rax_9 = arg6 - 4
                    
                    if (arg6 == 0)
                        rax_9 = 0x6c
                    
                    if (*rax_9 u> 1)
                        data_143f00138(0x8d40, 0x8d00, 0x8d41, zx.q(*(arg6 + 0x10)), var_178, 
                            var_170)
                        data_143f00138(0x8d40, 0x8d20, 0x8d41, zx.q(*(arg6 + 0x10)), var_178, 
                            var_170)
                else if (r8_5 == 0x9009)
                    data_143f00130(0x8d40, zx.q(*(arg6 + 0x1c)), zx.q(*(arg6 + 0x10)), 0, var_178, 
                        var_170)
                else if (r8_5 == 0x9100)
                    var_178.d = 0
                    data_143f00120(0x8d40, zx.q(*(arg6 + 0x1c)), r8_5, zx.q(*(arg6 + 0x10)), 
                        var_178, var_170)
                else
                    data_143f00138(0x8d40, zx.q(*(arg6 + 0x1c)), 0x8d41, zx.q(*(arg6 + 0x10)), 
                        var_178, var_170)
            else if (r8_5 == 0x8c1a)
                data_143f00130(0x8d40, zx.q(*(arg6 + 0x1c)), zx.q(*(arg6 + 0x10)), 0, var_178, 
                    var_170)
            else if (r8_5 == 0xde1)
                var_178.d = 0
                data_143f00120(0x8d40, zx.q(*(arg6 + 0x1c)), r8_5, zx.q(*(arg6 + 0x10)), var_178, 
                    var_170)
            else if (r8_5 == 0x806f || r8_5 == 0x8513)
                data_143f00130(0x8d40, zx.q(*(arg6 + 0x1c)), zx.q(*(arg6 + 0x10)), 0, var_178, 
                    var_170)
            else
                data_143f00138(0x8d40, zx.q(*(arg6 + 0x1c)), 0x8d41, zx.q(*(arg6 + 0x10)), var_178, 
                    var_170)
        
        if (rdi_1 == 0xffffffff)
            data_143effae0(0)
            data_143eff9f8(0)
            
            if (arg6 == 0)
                data_143f00100(zx.q((arg6 + 1).d), &result_1)
                result_1 = 0
                data_143f000f8(0x8d40, 0)
        else
            data_143effae0(zx.q(rdi_1 + 0x8ce0))
            data_143eff9f8(zx.q(rdi_1 + 0x8ce0))
        
        uint64_t rcx_9 = zx.q(data_14401b1a0)
        var_154 = result_1 + 1
        TEB* gsbase
        
        if (data_143eff868 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_9 << 3))))
            _Init_thread_header(&data_143eff868)
            
            if (data_143eff868 == 0xffffffff)
                __builtin_memset(&data_1439c7530, 0, 0x2c)
                data_1439c755c = 0x80
                data_1439c7560 = 0xffffffff
                data_1439c7564 = 0
                data_1439c7570 = 0
                data_1439c7578 = 0
                atexit(sub_142cee540)
                _Init_thread_footer(&data_143eff868)
        
        sub_141926ae0(&data_1439c7530, 
            sub_14192a0f0(&var_128, rsi, r15, arg4, arg5, arg6, sub_141957ff0(*(arg1 + 0x15bb8))), 
            &var_154)
        result = zx.q(result_1)
    else
        result = 0
else
    int64_t rcx_3 = rcx_2 * 0xe0
    
    if (rcx_3 == neg.q(data_1439c7530))
        goto label_14193ca30
    
    int32_t rax_4 = *(rcx_3 + data_1439c7530 + 0xd0)
    
    if (rax_4 == 0)
        goto label_14193ca30
    
    result = zx.q(rax_4 - 1)

__security_check_cookie(rax_1 ^ &var_198)
return result
