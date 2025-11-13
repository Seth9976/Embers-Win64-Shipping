// 函数: sub_1406bd310
// 地址: 0x1406bd310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint64_t var_58 = __security_cookie ^ &var_258
int64_t rbx = arg4
int64_t var_200 = rbx
int32_t rdi = 0
int32_t var_228 = 0
uint64_t result

if (arg2 != 0)
    int64_t var_1d0 = 0
    int64_t var_1c8_1 = 0
    TEB* gsbase
    
    if (data_143cde4d8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cde4d8)
        
        if (data_143cde4d8 == 0xffffffff)
            int64_t var_1f0 = 0
            int32_t var_1e8_1 = 0
            sub_1405947f0(&var_1f0, 0x2d)
            int32_t rax_23 = var_1e8_1 + 0x2d
            var_1e8_1 = rax_23
            
            if (rax_23 s> 0)
                sub_140594770(&var_1f0)
            
            UnDecorator::getReferenceType(var_1f0, <(?:[^>=]|='[^']*'|="[^"]*"|=[^'"][^\s>]*)*>", 
                0x5a)
            sub_140a61360(&data_143cde4c8, &var_1f0)
            int64_t rcx_40 = var_1f0
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            atexit(sub_142cb17c0)
            _Init_thread_footer(&data_143cde4d8)
    
    void* rdx_2 = nullptr
    void* var_78_1 = nullptr
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while (arg2[rax_3] != 0)
    
    int32_t var_68_1 = rax_3.d
    int32_t r14_1 = (rax_3 + 1).d
    
    if (r14_1 u> 0x80 && r14_1 != 0)
        void* rax_4 = sub_140a84c80(0, sx.q(r14_1) * 2, 0)
        rdx_2 = rax_4
        var_78_1 = rax_4
    
    void var_178
    void* rcx_2 = &var_178
    
    if (rdx_2 != 0)
        rcx_2 = rdx_2
    
    int512_t zmm1_1 = sub_1405a7220(rcx_2, r14_1, arg2, r14_1, 0x3f)
    int32_t var_228_1 = 1
    int16_t* var_220 = nullptr
    int32_t rdx_4 = 0
    int32_t var_218_1 = 0
    int32_t rcx_3 = 0
    int32_t var_214_1 = 0
    
    if (rcx_2 != 0 && *rcx_2 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (*(rcx_2 + (rsi_1 << 1)) != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_220, rsi_1.d + 1)
            rcx_3 = var_214_1
            rdx_4 = var_218_1
        
        int32_t rax_5 = rsi_1.d + 1 + rdx_4
        var_218_1 = rax_5
        
        if (rax_5 s> rcx_3)
            sub_140594770(&var_220)
        
        UnDecorator::getReferenceType(var_220, rcx_2, (rsi_1.d + 1) * 2)
    
    if (var_78_1 != 0)
        zmm1_1 = sub_140a74f90(var_78_1)
    
    int64_t r15_1 = 0xffffffff
    void var_1b0
    char rax_6
    int512_t zmm0_2
    rax_6, zmm0_2 =
        sub_140a73e30(&var_1b0, sub_140a61110(&var_1b0, &data_143cde4c8, &var_220, zmm1_1))
    
    if (rax_6 != 0)
        char i
        
        do
            if (r15_1.d != 0xffffffff)
                int32_t rax_7 = sub_140a7a110(&var_1b0)
                int64_t r14_3 = 0
                int64_t var_1c0_1 = 0
                int64_t var_1b8_1 = 0
                int32_t var_228_2 = 3
                int32_t r8_7
                int32_t r15_2
                
                if (rax_7 - r15_1.d s>= 0)
                    int32_t rsi_3 = var_218_1 - 1
                    
                    if (var_218_1 == 0)
                        rsi_3 = 0
                    
                    int32_t rcx_11
                    
                    if (r15_1.d s>= 0)
                        rcx_11 = rsi_3
                        
                        if (r15_1.d s< rsi_3)
                            rcx_11 = r15_1.d
                    else
                        rcx_11 = 0
                    
                    int64_t r9_1 = sx.q(rcx_11)
                    int64_t rdx_8 = sx.q(rax_7 - r15_1.d) + sx.q(r15_1.d)
                    
                    if (rdx_8 s< r9_1)
                        rsi_3 = rcx_11
                    else if (rdx_8 s< sx.q(rsi_3))
                        rsi_3 = rdx_8.d
                    
                    int16_t* const rax_10 = &data_142d40450
                    
                    if (var_218_1 != 0)
                        rax_10 = var_220
                    
                    void* rax_11 = &rax_10[r9_1]
                    int32_t rsi_4 = rsi_3 - rcx_11
                    r14_3 = 0
                    int64_t var_210 = 0
                    r15_2 = 0
                    int64_t var_208_1 = 0
                    int32_t r13_1 = 0
                    
                    if (rax_11 != 0 && *rax_11 != 0 && rsi_4 s> 0)
                        sub_1405947f0(&var_210, rsi_4 + 1)
                        r15_2 = var_208_1.d + 1 + rsi_4
                        var_208_1.d = r15_2
                        r13_1 = 0
                        
                        if (r15_2 s> 0)
                            sub_140594770(&var_210)
                            r13_1 = var_208_1:4.d
                            r15_2 = var_208_1.d
                        
                        r14_3 = var_210
                        UnDecorator::getReferenceType(r14_3, rax_11, rsi_4 * 2)
                        *(r14_3 + (sx.q(r15_2) << 1) - 2) = 0
                    
                    int64_t var_1c0_2 = r14_3
                    var_210 = 0
                    var_1b8_1.d = r15_2
                    var_1b8_1:4.d = r13_1
                    int64_t var_208_2 = 0
                    r8_7 = r15_2 - 1
                
                if (rax_7 - r15_1.d s< 0 || r15_2 == 0)
                    r8_7 = 0
                
                zmm0_2 = sub_140a20ba0(&var_1d0, r14_3, r8_7)
                int32_t var_228_3 = 1
                
                if (r14_3 != 0)
                    zmm0_2 = sub_140a74f90(r14_3)
            
            r15_1 = sx.q(sub_140a7a1a0(&var_1b0))
            i, zmm0_2 = sub_140a73e30(&var_1b0, zmm0_2)
        while (i != 0)
        rbx = var_200
        
        if (r15_1.d s> 0xffffffff)
            int64_t var_1e0_2 = 0
            int64_t var_1d8_1 = 0
            int32_t var_228_4 = 5
            int32_t rsi_5 = var_218_1 - 1
            
            if (var_218_1 == 0)
                rsi_5 = 0
            
            int32_t rcx_19 = rsi_5
            
            if (r15_1.d s< rsi_5)
                rcx_19 = r15_1.d
            
            int64_t r8_8 = sx.q(rcx_19)
            
            if (r15_1 + 0x7fffffff s< r8_8)
                rsi_5 = rcx_19
            else if (r15_1 + 0x7fffffff s< sx.q(rsi_5))
                rsi_5 = (r15_1 + 0x7fffffff).d
            
            int16_t* rax_15 = &data_142d40450
            
            if (var_218_1 != 0)
                rax_15 = var_220
            
            void* r13_2 = &rax_15[r8_8]
            int32_t rsi_6 = rsi_5 - rcx_19
            int64_t r15_4 = 0
            var_200 = 0
            int32_t r14_4 = 0
            int64_t var_1f8_1 = 0
            int32_t r12_1 = 0
            
            if (r13_2 != 0 && *r13_2 != 0 && rsi_6 s> 0)
                sub_1405947f0(&var_200, rsi_6 + 1)
                r14_4 = var_1f8_1.d + 1 + rsi_6
                var_1f8_1.d = r14_4
                r12_1 = 0
                
                if (r14_4 s> 0)
                    sub_140594770(&var_200)
                    r12_1 = var_1f8_1:4.d
                    r14_4 = var_1f8_1.d
                
                r15_4 = var_200
                UnDecorator::getReferenceType(r15_4, r13_2, rsi_6 * 2)
                *(r15_4 + (sx.q(r14_4) << 1) - 2) = 0
            
            int64_t var_1e0_3 = r15_4
            var_1d8_1.d = r14_4
            var_1d8_1:4.d = r12_1
            
            if (r14_4 != 0)
                rdi = r14_4 - 1
            
            sub_140a20ba0(&var_1d0, r15_4, rdi)
            
            if (r15_4 != 0)
                sub_140a74f90(r15_4)
    
    int64_t* var_1a8
    
    if (var_1a8 != 0)
        var_1a8[1].d -= 1
        
        if (var_1a8[1].d == 1)
            (**var_1a8)(var_1a8)
            int32_t temp2_1 = *(var_1a8 + 0xc)
            *(var_1a8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_1a8 + 8))(var_1a8, 1)
    
    int16_t* rcx_27 = var_220
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int64_t rax_19 = 0x7fffffffffffffff
    
    if (arg5 s>= 0)
        rax_19 = arg5
    
    *(arg1 + 8) = rax_19
    void var_198
    int64_t* rax_20 = sub_140aae420(&var_198, &var_1d0)
    int64_t rdx_19 = *(arg1 + 0x10)
    *(arg1 + 0x10) = *rax_20
    *rax_20 = rdx_19
    int64_t rdx_20 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rax_20[1]
    rax_20[1] = rdx_20
    *(arg1 + 0x20) = rax_20[2].d
    int64_t* var_190
    
    if (var_190 != 0)
        var_190[1].d -= 1
        
        if (var_190[1].d == 1)
            (**var_190)(var_190)
            int32_t r13_3 = *(var_190 + 0xc)
            *(var_190 + 0xc) -= 1
            
            if (r13_3 == 1)
                (*(*var_190 + 8))(var_190, zx.q(r13_3))
    
    *(arg1 + 0x28) = rbx
    *(arg1 + 0x30) = arg3
    int64_t rcx_34 = var_1d0
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(var_58 ^ &var_258)
return result
