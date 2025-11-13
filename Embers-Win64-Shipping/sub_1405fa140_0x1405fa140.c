// 函数: sub_1405fa140
// 地址: 0x1405fa140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_190 = -2
void var_258
uint64_t var_48 = __security_cookie ^ &var_258
void* r13 = arg1
int32_t rsi = 0
int32_t var_238 = 0
uint64_t result

if (arg2 != 0)
    int64_t var_1d8 = 0
    int64_t var_1d0_1 = 0
    TEB* gsbase
    
    if (data_143cd9d28
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd9d28)
        
        if (data_143cd9d28 == 0xffffffff)
            int64_t var_200 = 0
            int32_t var_1f8_1 = 0
            sub_1405947f0(&var_200, 0x2d)
            int32_t rax_22 = var_1f8_1 + 0x2d
            var_1f8_1 = rax_22
            
            if (rax_22 s> 0)
                sub_140594770(&var_200)
            
            UnDecorator::getReferenceType(var_200, <(?:[^>=]|='[^']*'|="[^"]*"|=[^'"][^\s>]*)*>", 
                0x5a)
            sub_140a61360(&data_143cd9d18, &var_200)
            int64_t rcx_42 = var_200
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            atexit(sub_142cb1120)
            _Init_thread_footer(&data_143cd9d28)
    
    void var_168
    int512_t zmm1_1 = sub_1405eb940(&var_168, arg2)
    int32_t r14_1 = 1
    int32_t var_238_1 = 1
    int16_t* var_220 = nullptr
    int32_t rdx_1 = 0
    int32_t var_218_1 = 0
    int32_t rcx_3 = 0
    int32_t var_214_1 = 0
    int64_t r15_1 = -1
    int16_t* var_60
    
    if (var_60 != 0 && *var_60 != 0)
        do
            r15_1 += 1
        while (var_60[r15_1] != 0)
        
        if (r15_1.d + 1 s> 0)
            sub_1405947f0(&var_220, r15_1.d + 1)
            rcx_3 = var_214_1
            rdx_1 = var_218_1
        
        int32_t rax_3 = r15_1.d + 1 + rdx_1
        var_218_1 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_220)
        
        UnDecorator::getReferenceType(var_220, var_60, (r15_1.d + 1) * 2)
    
    int64_t var_68
    
    if (var_68 != 0)
        zmm1_1 = sub_140a74f90(var_68)
    
    int64_t r12_2 = 0xffffffff
    void var_1a0
    char rax_4
    int512_t zmm0_2
    rax_4, zmm0_2 =
        sub_140a73e30(&var_1a0, sub_140a61110(&var_1a0, &data_143cd9d18, &var_220, zmm1_1))
    
    if (rax_4 != 0)
        char i
        
        do
            if (r12_2.d != 0xffffffff)
                int32_t rax_5 = sub_140a7a110(&var_1a0)
                int64_t r15_3 = 0
                int64_t var_1c0_1 = 0
                int64_t var_1b8_1 = 0
                int32_t var_238_2 = r14_1 | 2
                int32_t r8_6
                int32_t r13_1
                
                if (rax_5 - r12_2.d s>= 0)
                    int32_t r14_3 = var_218_1 - 1
                    
                    if (var_218_1 == 0)
                        r14_3 = 0
                    
                    int32_t rcx_11
                    
                    if (r12_2.d s>= 0)
                        rcx_11 = r14_3
                        
                        if (r12_2.d s< r14_3)
                            rcx_11 = r12_2.d
                    else
                        rcx_11 = 0
                    
                    int64_t r10_1 = sx.q(rcx_11)
                    int64_t rdx_5 = sx.q(rax_5 - r12_2.d) + sx.q(r12_2.d)
                    
                    if (rdx_5 s< r10_1)
                        r14_3 = rcx_11
                    else if (rdx_5 s< sx.q(r14_3))
                        r14_3 = rdx_5.d
                    
                    int16_t* const rax_8 = &data_142d40450
                    
                    if (var_218_1 != 0)
                        rax_8 = var_220
                    
                    void* rax_9 = &rax_8[r10_1]
                    int32_t r14_4 = r14_3 - rcx_11
                    r15_3 = 0
                    int64_t var_230 = 0
                    r13_1 = 0
                    int64_t var_228_1 = 0
                    int32_t r12_3 = 0
                    
                    if (rax_9 != 0 && *rax_9 != 0 && r14_4 s> 0)
                        if (r14_4 + 1 s> 0)
                            sub_1405947f0(&var_230, r14_4 + 1)
                            r12_3 = var_228_1:4.d
                            r13_1 = var_228_1.d
                            r15_3 = var_230
                        
                        r13_1 = r13_1 + 1 + r14_4
                        var_228_1.d = r13_1
                        
                        if (r13_1 s> r12_3)
                            sub_140594770(&var_230)
                            r12_3 = var_228_1:4.d
                            r13_1 = var_228_1.d
                            r15_3 = var_230
                        
                        UnDecorator::getReferenceType(r15_3, rax_9, r14_4 * 2)
                        *(r15_3 + (sx.q(r13_1) << 1) - 2) = 0
                    
                    int64_t var_1c0_2 = r15_3
                    var_230 = 0
                    var_1b8_1.d = r13_1
                    var_1b8_1:4.d = r12_3
                    int64_t var_228_2 = 0
                    r8_6 = r13_1 - 1
                
                if (rax_5 - r12_2.d s< 0 || r13_1 == 0)
                    r8_6 = 0
                
                zmm0_2 = sub_140a20ba0(&var_1d8, r15_3, r8_6)
                r14_1 &= 0xfffffffd
                int32_t var_238_3 = r14_1
                
                if (r15_3 != 0)
                    zmm0_2 = sub_140a74f90(r15_3)
            
            r12_2 = sx.q(sub_140a7a1a0(&var_1a0))
            i, zmm0_2 = sub_140a73e30(&var_1a0, zmm0_2)
        while (i != 0)
        
        if (r12_2.d s> 0xffffffff)
            int64_t var_1b0_1 = 0
            int64_t var_1a8_1 = 0
            int32_t var_238_4 = r14_1 | 4
            int32_t r14_7 = var_218_1 - 1
            
            if (var_218_1 == 0)
                r14_7 = 0
            
            int32_t rax_12
            
            if (r12_2.d s>= 0)
                rax_12 = r14_7
                
                if (r12_2.d s< r14_7)
                    rax_12 = r12_2.d
            else
                rax_12 = 0
            
            int64_t r8_7 = sx.q(rax_12)
            
            if (r12_2 + 0x7fffffff s< r8_7)
                r14_7 = rax_12
            else if (r12_2 + 0x7fffffff s< sx.q(r14_7))
                r14_7 = (r12_2 + 0x7fffffff).d
            
            int16_t* rcx_20 = &data_142d40450
            
            if (var_218_1 != 0)
                rcx_20 = var_220
            
            void* rcx_21 = &rcx_20[r8_7]
            int32_t r14_8 = r14_7 - rax_12
            int64_t r12_4 = 0
            int64_t var_210 = 0
            int32_t r15_4 = 0
            int64_t var_208_1 = 0
            int32_t r13_3 = 0
            
            if (rcx_21 != 0 && *rcx_21 != 0 && r14_8 s> 0)
                if (r14_8 + 1 s> 0)
                    sub_1405947f0(&var_210, r14_8 + 1)
                    r13_3 = var_208_1:4.d
                    r15_4 = var_208_1.d
                    r12_4 = var_210
                
                r15_4 = r15_4 + 1 + r14_8
                var_208_1.d = r15_4
                
                if (r15_4 s> r13_3)
                    sub_140594770(&var_210)
                    r13_3 = var_208_1:4.d
                    r15_4 = var_208_1.d
                    r12_4 = var_210
                
                UnDecorator::getReferenceType(r12_4, &rcx_20[r8_7], r14_8 * 2)
                *(r12_4 + (sx.q(r15_4) << 1) - 2) = 0
            
            int64_t var_1b0_2 = r12_4
            var_1a8_1.d = r15_4
            var_1a8_1:4.d = r13_3
            
            if (r15_4 != 0)
                rsi = r15_4 - 1
            
            sub_140a20ba0(&var_1d8, r12_4, rsi)
            
            if (r12_4 != 0)
                sub_140a74f90(r12_4)
        
        r13 = arg1
    
    int64_t* var_198
    
    if (var_198 != 0)
        var_198[1].d -= 1
        
        if (var_198[1].d == 1)
            (**var_198)(var_198)
            int32_t temp2_1 = *(var_198 + 0xc)
            *(var_198 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_198 + 8))(var_198, 1)
    
    int16_t* rcx_30 = var_220
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int64_t rax_17 = 0x7fffffffffffffff
    
    if (arg4 s>= 0)
        rax_17 = arg4
    
    *(r13 + 8) = rax_17
    void var_188
    int64_t* rax_18 = sub_140aae420(&var_188, &var_1d8)
    int64_t rdx_16 = *(r13 + 0x10)
    *(r13 + 0x10) = *rax_18
    *rax_18 = rdx_16
    int64_t rdx_17 = *(r13 + 0x18)
    *(r13 + 0x18) = rax_18[1]
    rax_18[1] = rdx_17
    *(r13 + 0x20) = rax_18[2].d
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t r15_6 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (r15_6 == 1)
                (*(*var_180 + 8))(var_180, zx.q(r15_6))
    
    *(r13 + 0x28) = arg3
    int64_t rcx_36 = var_1d8
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_258)
return result
