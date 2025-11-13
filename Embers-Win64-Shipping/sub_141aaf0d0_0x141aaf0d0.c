// 函数: sub_141aaf0d0
// 地址: 0x141aaf0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int32_t rbx = *(arg1 + 0x90)
int32_t* result

if (rbx s> 0 && *(arg1 + 0x18) == *(arg1 + 0x60))
    void* r12_1 = nullptr
    int32_t var_15c_1 = 8
    void* var_168_1 = nullptr
    int32_t var_160_1 = 0
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 8
    void var_228
    sub_141acd800(&var_228, rbx, 0)
    void var_158
    sub_141acd750(&var_158, rbx, 0)
    int32_t i = 0
    
    if (*(arg1 + 0x90) s> 0)
        int64_t r14_1 = 0
        int64_t r15_1 = 0
        
        do
            int64_t rbx_1 = sx.q(*(r12_1 + *(arg1 + 0x88)))
            void var_2a8
            sub_140dd5b90(&var_2a8, *arg2)
            *arg2
            bool cond:5_1 = arg2[8].b != 0
            int64_t var_2a0
            __builtin_memset(&var_2a0, 0, 0x33)
            bool var_268_1 = cond:5_1
            int512_t zmm1 = sub_141e295c0(&var_2a8)
            arg3 = sub_141e1c570((rbx_1 << 4) + *(arg1 + 0x10), &var_2a8, zmm1)
            void* rcx_7 = &var_228
            
            if (var_168_1 != 0)
                rcx_7 = var_168_1
            
            void* rcx_8 = rcx_7 + r15_1
            
            if (rcx_8 != &var_2a0)
                *rcx_8 = var_2a0
                int64_t var_298
                *(rcx_8 + 8) = var_298.d
                *(rcx_8 + 0xc) = var_298:4.d
                int64_t var_290
                *(rcx_8 + 0x10) = var_290
            
            void* rax_9 = &var_158
            
            if (var_58_1 != 0)
                rax_9 = var_58_1
            
            void* rax_10 = rax_9 + r14_1
            int64_t var_278
            *(rax_10 + 0x10) = var_278
            int16_t var_270
            *(rax_10 + 0x18) = var_270
            int64_t var_288
            
            if (rax_10 != &var_288)
                *rax_10 = var_288
                int64_t var_280
                *(rax_10 + 8) = var_280.d
                *(rax_10 + 0xc) = var_280:4.d
            
            i += 1
            *(rax_10 + 0x1a) = 1
            r12_1 += 4
            r15_1 += 0x18
            r14_1 += 0x20
        while (i s< *(arg1 + 0x90))
    
    void* rcx_15 = &var_158
    void* r8_1 = *(arg1 + 0x40)
    void* var_2b8 = *(arg1 + 0x88)
    int32_t var_2b0_1 = *(arg1 + 0x90)
    int128_t zmm0_1 = var_2b8.o
    int128_t var_258
    int128_t var_248
    int128_t var_238
    
    if (r8_1 == 0)
        var_2b8 = *(arg1 + 0x58)
        int32_t var_2b0_5 = *(arg1 + 0x60)
        var_238 = zmm0_1
        
        if (var_58_1 != 0)
            rcx_15 = var_58_1
        
        var_248 = var_2b8.o
        var_2b8 = rcx_15
        void* rcx_19 = &var_228
        int32_t var_2b0_6 = var_50_1
        var_258 = var_2b8.o
        
        if (var_168_1 != 0)
            rcx_19 = var_168_1
        
        var_2b8 = rcx_19
        int32_t var_2b0_7 = var_160_1
        var_2b8.o = var_2b8.o
        result = sub_141de3c50(&var_2b8, &var_258, &var_248, &var_238, &arg2[1], &arg2[4])
    else
        var_2b8 = *(arg1 + 0x78)
        int32_t var_2b0_2 = *(arg1 + 0x80)
        var_258 = zmm0_1
        
        if (var_58_1 != 0)
            rcx_15 = var_58_1
        
        var_248 = var_2b8.o
        int32_t var_2b0_3 = var_50_1
        var_2b8 = rcx_15
        void* rcx_16 = &var_228
        
        if (var_168_1 != 0)
            rcx_16 = var_168_1
        
        var_238 = var_2b8.o
        int32_t var_2b0_4 = var_160_1
        var_2b8 = rcx_16
        var_2b8.o = var_2b8.o
        result = sub_141de4340(&var_2b8, &var_238, r8_1 + 0x28, &var_248, arg3, &var_258, &arg2[1], 
            &arg2[4])
    
    if (var_58_1 != 0)
        result = sub_140a74f90(var_58_1)
    
    if (var_168_1 != 0)
        result = sub_140a74f90(var_168_1)
else if (arg2[8].b == 0)
    result = sub_141acb4e0(&arg2[1], arg2[3])
else
    result = sub_141e47c50(&arg2[1], arg3)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
