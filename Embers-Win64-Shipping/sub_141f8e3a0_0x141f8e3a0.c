// 函数: sub_141f8e3a0
// 地址: 0x141f8e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* result = *(arg1 + 0x38)

if (result != 0)
    void* rcx = result[0x11]
    
    if (rcx != 0)
    label_141f8e41f:
        int32_t r11_1 = 0
        void* var_78 = nullptr
        int32_t* r9_1 = rcx + 0x1380
        int32_t var_70_1 = 0
        int32_t rcx_1 = 0
        int32_t rdi_1 = 0
        int32_t var_4c_1 = 0x80
        int32_t r10_1 = 0
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x1c)
        int32_t r8_1 = 0
        int32_t var_48_1 = 0xffffffff
        int32_t var_44_1 = 0
        void* var_38_1 = nullptr
        int32_t var_30_1 = 0
        int32_t rsi_1 = r9_1[6]
        int32_t var_108_1 = 0
        int32_t var_104_1 = 1
        int32_t* var_100 = r9_1
        int32_t var_f8_1 = 0xffffffff
        int64_t var_f4_1 = 0
        
        if (rsi_1 != 0)
            int32_t* rax_2 = *(r9_1 + 0x10)
            r10_1 = rsi_1
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rsi_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_141f8e4fc:
                int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_104_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                int32_t rax_11 = r8_1 - rax_10 + 0x1f
                
                if (rax_11 s> rsi_1)
                    rax_11 = rsi_1
                
                r10_1 = rax_11
                var_f4_1.d = rax_11
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_f4_1:4.d = r8_1
                    var_108_1 = rcx_1
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_f4_1.d = rsi_1
                        break
                    
                    rdx_3 = r9_1[rdx_4 + 1]
                    var_f8_1 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_141f8e4fc
        
        int128_t var_b8_1 = var_108_1.o
        int128_t var_a8_1 = 0xffffffff
        var_108_1.o = (rcx + 0x1370).o
        var_f8_1.o = var_b8_1
        int64_t var_e8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int32_t i_1
        char* var_c8
        
        if (r10_1 s< rsi_1)
            int32_t i = i_1
            
            do
                char* rdi_2 = *(*(*(*var_108_1.q + sx.q(i) * 0x18 + 8) + 0x70) + 0x10)
                var_c8 = rdi_2
                char* rbx_1 = rdi_2
                char* rdx_6
                
                while (true)
                    rdx_6 = rbx_1
                    
                    if (rbx_1 == 0)
                        break
                    
                    void* rax_15 = sub_14247bf70()
                    void* r8_3 = *(rdi_2 + 0x10)
                    rdx_6 = rbx_1
                    int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                    
                    if (rax_16.d s> *(r8_3 + 0x38))
                        break
                    
                    if (*(*(r8_3 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                        break
                    
                    rbx_1 = *(rdi_2 + 0x40)
                    rdi_2 = rbx_1
                
                uint32_t rdx_7 = (rdx_6 u>> 4).d
                var_c8 = rdi_2
                int32_t rcx_7 = (0x9e3779b9 - rdx_7) ^ rdx_7 << 8
                int32_t r9_5 = neg.d(rcx_7 + rdx_7) ^ rcx_7 u>> 0xd
                int32_t rdx_10 = (rdx_7 - rcx_7 - r9_5) ^ r9_5 u>> 0xc
                int32_t rcx_10 = (rcx_7 - rdx_10 - r9_5) ^ rdx_10 << 0x10
                int32_t r9_8 = (r9_5 - rcx_10 - rdx_10) ^ rcx_10 u>> 5
                int32_t rdx_13 = (rdx_10 - rcx_10 - r9_8) ^ r9_8 u>> 3
                int32_t rcx_13 = (rcx_10 - rdx_13 - r9_8) ^ rdx_13 << 0xa
                int32_t r9_11 = (r9_8 - rcx_13 - rdx_13) ^ rcx_13 u>> 0xf
                int32_t* rax_38
                
                if (var_70_1 == var_44_1)
                labelid_32:
                    rax_38 = sub_141f78170(&var_78, r9_11, &var_c8)
                else
                    void var_40
                    void* rcx_15 = &var_40
                    
                    if (var_38_1 != 0)
                        rcx_15 = var_38_1
                    
                    int32_t rax_37 = *(rcx_15 + ((sx.q(var_30_1 - 1) & sx.q(r9_11)) << 2))
                    
                    if (rax_37 == 0xffffffff)
                    label_141f8e6af:
                        rax_38 = sub_141f78170(&var_78, r9_11, &var_c8)
                    else
                        void* r8_4 = var_78
                        int64_t rdx_17
                        
                        while (true)
                            int64_t rdx_16 = sx.q(rax_37) * 3
                            rdx_17 = rdx_16 << 3
                            
                            if (*(r8_4 + (rdx_16 << 3)) == rdi_2)
                                break
                            
                            rax_37 = *(r8_4 + rdx_17 + 0x10)
                            
                            if (rax_37 == 0xffffffff)
                                goto label_141f8e6af_2
                        
                        if (rax_37 == 0xffffffff)
                        label_141f8e6af_1:
                            rax_38 = sub_141f78170(&var_78, r9_11, &var_c8)
                        else
                            void* rax_50 = r8_4 + rdx_17
                            
                            if (rax_50 == 0)
                            label_141f8e6af_2:
                                rax_38 = sub_141f78170(&var_78, r9_11, &var_c8)
                            else
                                rax_38 = rax_50 + 8
                
                *rax_38 += 1
                var_f4_1:4.d &= not.d(var_100:4.d)
                sub_14059bdd0(&var_100)
                i = i_1
            while (i s< *(var_f8_1.q + 0x18))
            
            rdi_1 = var_44_1
            r11_1 = var_70_1
        
        char var_118
        var_c8 = &var_118
        void** var_90 = &var_c8
        
        if (r11_1 - rdi_1 s> 0)
            sub_1407e8ed0(&var_78)
            void*** var_88_1 = &var_90
            sub_141f78d60(var_78, var_70_1 - var_44_1, var_118)
        
        sub_1405c0420(&var_78)
        var_100 = &var_68
        int32_t rcx_22 = 0
        int32_t var_108_2 = 0
        int32_t r8_7 = 0
        int32_t var_104_3 = 1
        int32_t var_f8_2 = 0xffffffff
        int64_t var_f4_2 = 0
        int64_t* var_58
        int32_t var_50
        
        if (var_50 != 0)
            int64_t* r9_12 = &var_68
            
            if (var_58 != 0)
                r9_12 = var_58
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_50 - 1)
            int32_t rdx_23 = *r9_12
            
            if (rdx_23 != 0)
            label_141f8e7cb:
                int32_t rax_49 = neg.d(rdx_23) & rdx_23
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_49)
                int32_t var_104_4 = rax_49
                int32_t r15_1
                
                if (rax_49 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_4
                
                int32_t rax_51 = r8_7 - r15_1 + 0x1f
                
                if (rax_51 s> var_50)
                    rax_51 = var_50
                
                var_f4_2.d = rax_51
            else
                while (true)
                    int64_t rdx_24 = sx.q(rcx_22)
                    r8_7 += 0x20
                    rcx_22 += 1
                    var_f4_2:4.d = r8_7
                    var_108_2 = rcx_22
                    
                    if (rdx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        var_f4_2.d = var_50
                        break
                    
                    rdx_23 = *(r9_12 + (rdx_24 << 2) + 4)
                    var_f8_2 = 0xffffffff
                    
                    if (rdx_23 != 0)
                        goto label_141f8e7cb
        
        void** var_98_1 = &var_78
        int16_t var_d0_1 = 0
        void** var_d8_1 = &var_78
        int128_t var_a8_2 = 0xffffffff
        int128_t zmm3 = var_108_2.o
        int128_t zmm0_1
        zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_108_2.o = (&var_78).o
        var_f8_2.o = zmm3
        var_e8_1.o = zmm0_1
        
        if (_mm_bsrli_si128(0xffffffff, 4) s< *(zmm3.q + 0x18))
            do
                var_f4_2:4.d &= not.d(var_100:4.d)
                sub_14059bdd0(&var_100)
            while (i_1 s< *(var_f8_2.q + 0x18))
            
            if (var_d0_1.b != 0 && var_d0_1:1.b != 0)
                sub_1405b6470(var_d8_1, var_d8_1[1].d - *(var_d8_1 + 0x34), 1)
        
        int32_t var_30_2 = 0
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
        
        var_70_1 = 0
        int32_t var_48_2 = 0xffffffff
        int32_t var_44_2 = 0
        result = sub_14059a8e0(&var_68, 0)
        
        if (var_58 != 0)
            result = sub_140a74f90(var_58)
        
        void* rcx_32 = var_78
        
        if (rcx_32 != 0)
            result = sub_140a74f90(rcx_32)
    else if (result[0x13].d s> rcx.d)
        result = result[0x12]
        rcx = *result
        
        if (rcx != 0)
            goto label_141f8e41f

__security_check_cookie(rax_1 ^ &var_138)
return result
