// 函数: sub_142320e00
// 地址: 0x142320e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
void* var_38 = __security_cookie ^ &var_278
void* result
result.b = arg2[1].d s> 0

if (result.b != *(arg1 + 0x17a))
    int32_t r10_1 = 0
    *(arg1 + 0x17a) = result.b
    void* r9_1 = arg1 + 0x1c8
    int64_t var_148 = 0
    int32_t var_140_1 = 0
    int32_t rcx = 0
    int32_t rsi_1 = 0
    int32_t r8_1 = 0
    int32_t var_11c_1 = 0x80
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x1c)
    int32_t var_118_1 = 0xffffffff
    int32_t var_114_1 = 0
    int64_t var_108_1 = 0
    int32_t var_100_1 = 0
    int32_t r11_1 = *(r9_1 + 0x18)
    int32_t var_250_1 = 0
    int32_t var_24c_1 = 1
    void* var_248_1 = r9_1
    int32_t var_240_1 = 0xffffffff
    int64_t var_23c_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_142320f1b:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_24c_2 = rax_8
            int32_t var_1f8_1 = temp0_1
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            var_23c_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_23c_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_23c_1:4.d = r8_1
                var_250_1 = rcx
                
                if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_240_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_142320f1b
            
            var_23c_1.d = r11_1
    
    void* var_1e8 = arg1 + 0x1b8
    double var_1e0_1[0x2] = var_250_1.o
    int128_t var_1d0_1 = 0xffffffff
    double var_220[0x2] = var_1e8.o
    int64_t var_200_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    
    if (0 s< r11_1)
        int32_t i = var_1e0_1[1]:4.d
        
        do
            int64_t* j = *(*var_220[0] + sx.q(i) * 0x10)
            int64_t* j_1 = j
            
            if (j != 0)
                void var_1f4
                
                if ((*(*j + 0x2d8))(j, 0) != 0)
                    int64_t* rax_14 = *arg2
                    void* rdx_7 = &rax_14[sx.q(arg2[1].d)]
                    
                    if (rax_14 != rdx_7)
                        while (*rax_14 != j)
                            rax_14 = &rax_14[1]
                            
                            if (rax_14 == rdx_7)
                                goto label_142321033
                        
                        void var_258
                        
                        if (*(arg1 + 0x17a) != 0 && (*(*j + 0x2d8))(j, 5) == 0)
                            sub_141e6db90(&var_148, &var_258, &j_1, nullptr)
                else
                    sub_141e6db90(&var_148, &var_1f4, &j_1, nullptr)
            
        label_142321033:
            var_1e0_1[1].d &= not.d(var_220[1]:4.d)
            sub_14059bdd0(&var_220[1])
            i = var_1e0_1[1]:4.d
        while (i s< *(var_1e0_1[0] i+ 0x18))
        
        rsi_1 = var_114_1
        r10_1 = var_140_1
    
    if (r10_1 != rsi_1)
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x2c)
        int32_t var_cc_1 = 0x80
        int32_t var_c8_1 = 0xffffffff
        int32_t var_c4_1 = 0
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        sub_140cd48b0(&var_f8, &var_148)
        int64_t* rax_20 = sub_14210f630(0)
        int32_t rdi_1 = *(*(arg1 + 0x108) + 8)
        int64_t var_1f0
        sub_142126870(rax_20, &var_1f0, rdi_1)
        int64_t var_1b8
        __builtin_memset(&var_1b8, 0, 0x2c)
        int32_t var_18c_1 = 0x80
        int32_t var_188_1 = 0xffffffff
        int32_t var_184_1 = 0
        int64_t var_178_1 = 0
        int32_t var_170_1 = 0
        sub_140cd48b0(&var_1b8, &var_f8)
        int64_t rax_21 = var_1f0
        
        if (sub_140a80f40() == 0)
            uint32_t rax_23
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_23.b = GetCurrentThreadId() == data_143de5470
            
            void var_180
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_23.b == 0))
                int64_t* rax_29 = sub_14230c760(&var_1e8, nullptr, 0xff)
                void* rbx_3 = *rax_29
                void* rdx_15 = rbx_3 + 0x20
                *(rbx_3 + 0x10) = 0
                *(rbx_3 + 0x18) = 0
                *(rdx_15 + 0x10) = 0
                *(rdx_15 + 0x18) = 0
                *(rdx_15 + 0x1c) = 0x80
                void* rcx_19 = *(rdx_15 + 0x10)
                
                if (rcx_19 != 0)
                    rdx_15 = rcx_19
                
                *rdx_15 = 0
                *(rdx_15 + 8) = 0
                *(rbx_3 + 0x40) = 0xffffffff
                *(rbx_3 + 0x44) = 0
                *(rbx_3 + 0x50) = 0
                *(rbx_3 + 0x58) = 0
                sub_140780e10(rbx_3 + 0x10, &var_1b8)
                
                if (var_178_1 == 0)
                    memmove(rbx_3 + 0x48, &var_180, (var_178_1 + 4).d)
                
                int64_t rcx_22 = *(rbx_3 + 0x50)
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                *(rbx_3 + 0x50) = var_178_1
                *(rbx_3 + 0x58) = var_170_1
                *(rbx_3 + 0x60) = rax_20
                *(rbx_3 + 0x68) = rax_21
                *(rbx_3 + 0x70) = rdi_1
                *(rbx_3 + 0x78) = arg1
                void* rcx_23 = *rax_29
                int32_t r8_7 = rax_29[2].d
                int64_t* rdx_18 = rax_29[1]
                var_178_1 = 0
                int64_t* rbx_4 = *(rcx_23 + 0x88)
                int64_t* var_228_1 = rbx_4
                int32_t* rdi_2 = &rbx_4[9]
                
                if (rbx_4 != 0)
                    *rdi_2 += 1
                    rbx_4 = var_228_1
                
                sub_1417d4450(rcx_23, rdx_18, r8_7, 1)
                
                if (rbx_4 != 0)
                    int32_t rax_35 = *rdi_2
                    *rdi_2 -= 1
                    
                    if (rax_35 == 1)
                        sub_140a2f6e0(var_228_1)
            else
                int64_t var_a8
                __builtin_memset(&var_a8, 0, 0x2c)
                int32_t var_7c_1 = 0x80
                int32_t var_78_1 = 0xffffffff
                int32_t var_74_1 = 0
                int64_t var_68_1 = 0
                int32_t var_60_1 = 0
                sub_140780e10(&var_a8, &var_1b8)
                void var_70
                
                if (var_178_1 == 0)
                    memmove(&var_70, &var_180, (var_178_1 + 4).d)
                
                if (var_68_1 != 0)
                    sub_140a74f90(var_68_1)
                
                int32_t var_60_2 = var_170_1
                int64_t* var_58_1 = rax_20
                int64_t var_50_1 = rax_21
                int32_t var_48_1 = rdi_1
                void* var_40_1 = arg1
                int64_t var_68_2 = var_178_1
                var_178_1 = 0
                sub_1423084c0(&var_a8)
                sub_141ed3ef0(&var_a8)
        else
            sub_1423084c0(&var_1b8)
        
        int32_t var_170_2 = 0
        
        if (var_178_1 != 0)
            sub_140a74f90(var_178_1)
        
        int64_t var_1b0
        var_1b0.d = 0
        int32_t var_188_2 = 0xffffffff
        int32_t var_184_2 = 0
        int64_t var_1a8
        sub_14059a8e0(&var_1a8, 0)
        int64_t var_198
        
        if (var_198 != 0)
            sub_140a74f90(var_198)
        
        int64_t rcx_29 = var_1b8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int32_t var_b0_2 = 0
        
        if (var_b8_1 != 0)
            sub_140a74f90(var_b8_1)
        
        int64_t var_f0
        var_f0.d = 0
        int32_t var_c8_2 = 0xffffffff
        int32_t var_c4_2 = 0
        int64_t var_e8
        sub_14059a8e0(&var_e8, 0)
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t rcx_34 = var_f8
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
    
    int32_t var_100_2 = 0
    
    if (var_108_1 != 0)
        sub_140a74f90(var_108_1)
    
    var_140_1 = 0
    int32_t var_118_2 = 0xffffffff
    int32_t var_114_2 = 0
    result = sub_14059a8e0(&var_138, 0)
    int64_t var_128
    
    if (var_128 != 0)
        result = sub_140a74f90(var_128)
    
    int64_t rcx_39 = var_148
    
    if (rcx_39 != 0)
        result = sub_140a74f90(rcx_39)

__security_check_cookie(var_38 ^ &var_278)
return result
