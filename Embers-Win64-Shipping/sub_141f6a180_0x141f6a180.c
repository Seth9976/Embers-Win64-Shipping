// 函数: sub_141f6a180
// 地址: 0x141f6a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
void* result = __security_cookie ^ &var_148
void* result_1 = result
void* r9 = arg1[0x88]
char* rsi = arg2
char* var_d8 = arg2

if (r9 != 0)
    result = *(r9 + 0x50)
    
    if (result != 0)
        int64_t r14_1 = 0
        int32_t rbx_1 = 0
        int32_t var_64_1 = 0
        int32_t i = 0
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int64_t r8_1 = 0
        int32_t r11_1 = 0
        void* r10_1 = nullptr
        int32_t r15_1 = 0
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        void* var_58_1 = nullptr
        int32_t var_50_1 = 0
        int32_t i_1 = 0
        int64_t* var_e0
        int64_t var_90_1
        int64_t var_88
        int64_t* var_78
        
        if (*(result + 8) s> 0)
            int64_t* rdi_1 = nullptr
            int64_t* var_110_1 = nullptr
            
            do
                int32_t j = 0
                int64_t* rax_2 = *(rdi_1 + **(r9 + 0x50))
                var_e0 = rax_2
                
                if (rax_2[6].d s> 0)
                    do
                        void* rax_3 = rax_2[5]
                        void* rcx_1 = &rax_2[2]
                        
                        if (rax_3 != 0)
                            rcx_1 = rax_3
                        
                        int64_t rdi_2 = sx.q(*(rcx_1 + r14_1))
                        
                        if (r11_1 == rbx_1)
                        label_141f6a2cb:
                            int64_t rax_8 = (*(*arg1 + 0x548))(arg1, zx.q(rdi_2.d))
                            int64_t rbx_2
                            
                            if (var_64_1 == 0)
                                rbx_2 = zx.q(var_90_1.d)
                                int32_t rax_9 = (rbx_2 + 1).d
                                var_90_1.d = rax_9
                                
                                if (rax_9 s> var_90_1:4.d)
                                    sub_1405a4df0(&var_98)
                                
                                sub_1405b2ba0(&var_88, 0)
                            else
                                rbx_2 = sx.q(var_68_1)
                                bool cond:1_1 = var_64_1 == 1
                                int64_t r9_1 = var_98
                                int64_t rcx_6 = sx.q(*(r9_1 + rbx_2 * 0x18 + 4))
                                var_68_1 = rcx_6.d
                                var_64_1 -= 1
                                
                                if (not(cond:1_1))
                                    *(r9_1 + rcx_6 * 0x18) = 0xffffffff
                            
                            int64_t* rcx_10 = &var_88
                            
                            if (var_78 != 0)
                                rcx_10 = var_78
                            
                            int32_t rax_11 = rbx_2.d
                            
                            if (rbx_2.d s< 0)
                                rax_11 = (rbx_2 + 0x1f).d
                            
                            void* r8_4 = rcx_10 + (sx.q(rax_11 s>> 5) << 2)
                            char* var_120_1 = nullptr
                            int32_t var_128_1 = rbx_2.d
                            *r8_4 |= 1 << (rbx_2.b & 0x1f)
                            int64_t rcx_13 = sx.q(rbx_2.d) * 3
                            int64_t rax_15 = var_98
                            *(rax_15 + (rcx_13 << 3)) = rdi_2.d
                            *(rax_15 + (rcx_13 << 3) + 8) = rax_8
                            *(rax_15 + (rcx_13 << 3) + 0x10) = 0xffffffff
                            void var_d0
                            sub_140bdabf0(&var_98, &var_d0, rdi_2.d, rax_15 + (rcx_13 << 3), 
                                var_128_1, var_120_1)
                            r10_1 = var_58_1
                            r11_1 = var_90_1.d
                            r8_1 = var_98
                            r15_1 = var_50_1
                            rbx_1 = var_64_1
                        else
                            void var_60
                            void* rax_5 = &var_60
                            
                            if (r10_1 != 0)
                                rax_5 = r10_1
                            
                            int32_t rax_6 = *(rax_5 + ((sx.q(r15_1 - 1) & rdi_2) << 2))
                            
                            if (rax_6 == 0xffffffff)
                                goto label_141f6a2cb
                            
                            while (true)
                                int64_t rdx = sx.q(rax_6) * 3
                                
                                if (*(r8_1 + (rdx << 3)) == rdi_2.d)
                                    break
                                
                                rax_6 = *(r8_1 + (rdx << 3) + 0x10)
                                
                                if (rax_6 == 0xffffffff)
                                    goto label_141f6a2cb
                            
                            if (rax_6 == 0xffffffff)
                                goto label_141f6a2cb
                        
                        j += 1
                        r14_1 += 0x18
                    while (j s< var_e0[6].d)
                    
                    i = i_1
                    r14_1 = 0
                    rdi_1 = var_110_1
                
                r9 = arg1[0x88]
                i += 1
                rdi_1 = &rdi_1[1]
                i_1 = i
                var_110_1 = rdi_1
            while (i s< *(*(r9 + 0x50) + 8))
            
            rsi = var_d8
        
        if (r11_1 - rbx_1 s> 0)
            char var_118 = 0
            var_d8 = &var_118
            var_e0 = &var_d8
            sub_1407e8ed0(&var_98)
            void** var_110_2 = &var_e0
            sub_141f50190(var_98, var_90_1.d - var_64_1, var_118)
            sub_140772110(&var_98)
            int64_t rdi_3 = sx.q(*(rsi + 8))
            int32_t rbx_4 = var_90_1.d - var_64_1
            int32_t rax_18 = rdi_3.d + rbx_4
            *(rsi + 8) = rax_18
            
            if (rax_18 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            memset(*rsi + (rdi_3 << 3), 0, sx.q(rbx_4) << 3)
            int64_t* var_100 = &var_88
            int32_t rcx_20 = 0
            int32_t var_108_1 = 0
            int32_t r8_9 = 0
            int32_t var_104_1 = 1
            int32_t var_f8_1 = 0xffffffff
            int64_t var_f4_1 = 0
            int32_t var_70
            
            if (var_70 != 0)
                int64_t* r9_3 = &var_88
                
                if (var_78 != 0)
                    r9_3 = var_78
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_70 - 1)
                int32_t rdx_12 = *r9_3
                
                if (rdx_12 != 0)
                label_141f6a51b:
                    int32_t rax_27 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_27)
                    int32_t var_104_2 = rax_27
                    int32_t rax_28
                    
                    if (rax_27 == 0)
                        rax_28 = 0x20
                    else
                        rax_28 = 0x1f - temp0_2
                    
                    int32_t rax_29 = r8_9 - rax_28 + 0x1f
                    
                    if (rax_29 s> var_70)
                        rax_29 = var_70
                    
                    var_f4_1.d = rax_29
                else
                    while (true)
                        int64_t rdx_13 = sx.q(rcx_20)
                        r8_9 += 0x20
                        rcx_20 += 1
                        var_f4_1:4.d = r8_9
                        var_108_1 = rcx_20
                        
                        if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            var_f4_1.d = var_70
                            break
                        
                        rdx_12 = *(r9_3 + (rdx_13 << 2) + 4)
                        var_f8_1 = 0xffffffff
                        
                        if (rdx_12 != 0)
                            goto label_141f6a51b
            
            int64_t* rbx_5 = nullptr
            uint128_t var_c0_1 = var_108_1.o
            int128_t var_b0_1 = 0xffffffff
            var_108_1.o = (&var_98).o
            var_f8_1.o = var_c0_1
            int64_t var_e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            
            while (true)
                int32_t var_ec
                int64_t rcx_22 = sx.q(var_ec)
                char rax_30
                
                if (rcx_22.d != var_70 || var_f8_1.q != &var_88)
                    rax_30 = 0
                else
                    rax_30 = 1
                
                int64_t* rdx_14 = var_108_1.q
                
                if (rax_30 == 0 || rdx_14 != &var_98)
                    rax_30 = 1
                else
                    rax_30 = 0
                
                if (rax_30 == 0)
                    break
                
                var_f4_1:4.d &= not.d(var_100:4.d)
                *(rbx_5 + *rsi) = _mm_bsrli_si128(*(*rdx_14 + rcx_22 * 0x18), 8).q
                rbx_5 = &rbx_5[1]
                sub_14059bdd0(&var_100)
            
            r10_1 = var_58_1
        
        int32_t var_50_2 = 0
        
        if (r10_1 != 0)
            sub_140a74f90(r10_1)
        
        bool cond:0_1 = var_90_1:4.d == 0
        var_90_1.d = 0
        
        if (not(cond:0_1))
            sub_1405a5130(&var_98, 0)
        
        int32_t var_68_2 = 0xffffffff
        int32_t var_64_2 = 0
        result = sub_14059a8e0(&var_88, 0)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        int64_t rcx_30 = var_98
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)

__security_check_cookie(result_1 ^ &var_148)
return result
