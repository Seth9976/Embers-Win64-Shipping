// 函数: sub_140d2b810
// 地址: 0x140d2b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
sub_140d304e0(arg2, 0)
char var_b8 = 0
sub_140a306e0(arg2, &data_142d84ee0, &data_142d409b8, 0)
int32_t var_d8 = 0xffffffff
int64_t result = sub_140a23cf0(arg2, &data_142d404c4, 0, 0, 0xffffffff)
uint32_t r14 = result.d

if (result.d != 0xffffffff)
    int64_t var_a0 = 0
    int64_t var_98 = 0
    
    do
        int32_t rsi_1 = arg2[1].d
        int16_t* r12_1
        
        if (rsi_1 == 0)
            r12_1 = &data_142d40450
        else
            r12_1 = *arg2
        
        uint32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        if (r14 s< 0)
            rsi_2 = 0
        else if (r14 s< rsi_2)
            rsi_2 = r14
        
        int64_t var_b0 = 0
        int32_t rcx_3 = 0
        int64_t var_a8_1 = 0
        
        if (r12_1 != 0 && *r12_1 != 0 && rsi_2 s> 0)
            if (rsi_2 + 1 s> 0)
                sub_1405947f0(&var_b0, rsi_2 + 1)
                rcx_3 = var_a8_1:4.d
            
            int32_t rax_1 = var_a8_1.d + 1 + rsi_2
            var_a8_1.d = rax_1
            
            if (rax_1 s> rcx_3)
                sub_140594770(&var_b0)
            
            UnDecorator::getReferenceType(var_b0, r12_1, rsi_2 * 2)
            *(var_b0 + (sx.q(var_a8_1.d) << 1) - 2) = 0
        
        int32_t r13_1 = r14 + 1
        
        if (r13_1 s>= 0)
            int32_t rax_2 = arg2[1].d
            
            if (rax_2 == 0)
                result = 0
            else
                result = zx.q(rax_2 - 1)
        
        if (r13_1 s< 0 || r13_1 s>= result.d)
            result.b = 0
        else
            result.b = 1
        
        int64_t r9_1
        
        if (result.b != 0)
            r9_1 = *arg2
        
        if (result.b == 0 || *(r9_1 + (sx.q(r14) << 1) + 2) != 0x2e)
            r14 = zx.d(arg_18)
        else
            int32_t rax_4 = arg2[1].d
            int32_t rsi_3 = rax_4 - 1
            
            if (rax_4 == 0)
                rsi_3 = 0
            
            int32_t rsi_4 = rsi_3 - r14
            
            if (rsi_4 s> 1)
                rsi_4 = 1
            
            if (rsi_4 != 0)
                int32_t rcx_9 = rax_4 - rsi_4
                
                if (rcx_9 != r14)
                    memmove(r9_1 + (sx.q(r14) << 1), r9_1 + (sx.q(rsi_4 + r14) << 1), 
                        (rcx_9 - r14) * 2)
                    rax_4 = arg2[1].d
                
                arg2[1].d = rax_4 - rsi_4
            
            r14.b = 0
            var_b8 = 1
            arg_18 = 0
        
        int32_t* r12_2 = nullptr
        
        if (var_b8 == 0)
            int16_t* const rdx_4 = &data_142d40450
            
            if (var_a8_1.d != 0)
                rdx_4 = var_b0
            
            int32_t* rax_9 = sub_140ba7ff0(*sub_140b58260(&var_98, rdx_4, 1))
            r12_2 = rax_9
            
            if (rax_9 != 0)
                int64_t var_70
                int64_t* rax_10 = sub_140b63b70(rax_9, &var_70)
                
                if (&var_b0 != rax_10)
                    int64_t rcx_16 = var_b0
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    var_b0 = *rax_10
                    *rax_10 = 0
                    var_a8_1.d = rax_10[1].d
                    var_a8_1:4.d = *(rax_10 + 0xc)
                    rax_10[1] = 0
                
                int64_t rcx_17 = var_70
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
        
        int64_t rdx_6 = &data_142d40450
        
        if (var_a8_1.d != 0)
            rdx_6 = var_b0
        
        int64_t var_80_1 = *sub_140b58260(&var_a0, rdx_6, 1)
        int64_t var_90 = 0
        int64_t var_88_1 = 0
        void var_50
        sub_140be09b0(&var_50, 0x40, &var_90)
        int64_t var_60
        void var_40
        int64_t* rax_16 = sub_140b63b70(&var_40, &var_60)
        
        if (&var_b0 != rax_16)
            int64_t rcx_21 = var_b0
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            var_b0 = *rax_16
            *rax_16 = 0
            var_a8_1.d = rax_16[1].d
            var_a8_1:4.d = *(rax_16 + 0xc)
            rax_16[1] = 0
        
        int64_t rcx_22 = var_60
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (r14.b != 0)
            if (sub_140bace50(&var_b0) == 0)
                int16_t* rsi_9 = &data_142d40450
                
                if (var_a8_1.d != 0)
                    rsi_9 = var_b0
                
                void* rax_24 = sub_140cddea0()
                int32_t var_c8_1 = 0
                void var_78
                uint64_t r8_7 = *sub_140b58260(&var_78, rsi_9, 1)
                var_d8.b = 0
                void* rax_26 = sub_140d2f0c0(rax_24, *arg1, r8_7, 0, 0, 0)
                *arg1 = rax_26
                
                if (r12_2 == 0 && rax_26 == 0)
                    int64_t rdx_12 = &data_142d40450
                    
                    if (var_a8_1.d != r12_2.d)
                        rdx_12 = var_b0
                    
                    var_d8.q = arg5
                    *arg1 = sub_140d23fd0(nullptr, rdx_12, arg4, nullptr, 0)
                
                if (*arg1 == 0)
                    int16_t* rdx_13 = &data_142d40450
                    
                    if (var_a8_1.d != 0)
                        rdx_13 = var_b0
                    
                    *arg1 = sub_140d1dfb0(nullptr, rdx_13)
        else
            int16_t* r14_1 = &data_142d40450
            
            if (var_a8_1.d != 0)
                r14_1 = var_b0
            
            void* rax_21 = sub_140d2ee50(sub_140cddea0(), *arg1, r14_1, 0)
            
            if (rax_21 == 0)
                void* r14_2 = *arg1
                int16_t* rsi_8 = &data_142d40450
                
                if (r14_2 == 0)
                    r14_2 = -ffffffffffffffff
                
                if (var_a8_1.d != 0)
                    rsi_8 = var_b0
                
                rax_21 = sub_140d2ee50(sub_140d41340(), r14_2, rsi_8, 0)
                
                if (rax_21 == 0)
                    int64_t rcx_31 = var_b0
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                    
                    return zx.q(var_b8)
            
            *arg1 = rax_21
        
        int32_t rax_31 = arg2[1].d
        int32_t rsi_11 = rax_31 - 1
        
        if (rax_31 == 0)
            rsi_11 = 0
        
        if (r13_1 s>= 0)
            if (r13_1 s< rsi_11)
                rsi_11 = r13_1
            
            if (rsi_11 != 0)
                if (rax_31 != rsi_11)
                    int64_t rcx_28 = *arg2
                    memmove(rcx_28, rcx_28 + (sx.q(rsi_11) << 1), (rax_31 - rsi_11) * 2)
                    rax_31 = arg2[1].d
                
                arg2[1].d = rax_31 - rsi_11
        
        int64_t rcx_29 = var_b0
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        var_d8 = 0xffffffff
        result = sub_140a23cf0(arg2, &data_142d404c4, 0, 0, 0xffffffff)
        r14 = result.d
    while (result.d != 0xffffffff)

result.b = 1
return result
