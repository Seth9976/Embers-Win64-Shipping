// 函数: sub_142a8e9d0
// 地址: 0x142a8e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_390 = -2
void var_438
int64_t rax_1 = __security_cookie ^ &var_438
int32_t r14 = arg2
int16_t rax_3 = *(arg1 + 8)

if ((rax_3 & 0xffe0) != 0 && (rax_3.b & 0x11) == 0)
    int32_t rdi_2
    
    if (rax_3 s< 0)
        rdi_2 = *(arg1 + 0xc)
    else
        rdi_2 = sx.d(rax_3) s>> 5
    
    int32_t rax_4
    
    if ((rax_3.b & 0x19) == 0 && (rax_3.b & 4) != 0)
        rax_4 = sub_142a4a5f0(arg1)
    
    int64_t rsi
    
    if ((rax_3.b & 0x19) != 0 || ((rax_3.b & 4) != 0 && rax_4 != 1))
        rsi.b = 0
    else
        rsi.b = 1
    
    int32_t var_3e8 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_388 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_380_1 = 2
    int32_t rax_5
    
    if (rsi.b == 0)
        rax_5.b = rdi_2 s< 0x1b
    else
        rax_5.b = rdi_2 s<= 0x36
    
    int32_t r15_1 = 0x1b
    int32_t rsi_2
    void* r12_1
    
    if (rax_5 == 0)
        r12_1 = arg1 + 0xa
        
        if ((*(arg1 + 8) & 2) == 0)
            r12_1 = *(arg1 + 0x18)
        
        void var_32c
        void* var_348 = &var_32c
        int64_t var_340_1 = 0x64
        int32_t var_338_1 = 0
        int32_t var_330_1 = 0
        
        if (arg4 != 0)
            sub_142a4aa20(&var_388, 0, r12_1, rdi_2)
            (*(*arg4 + 0x38))(arg4, &var_388)
        
        void var_1e8
        arg5(zx.q(r14), zx.q(arg3) | 0x4000, arg4, &var_1e8, 0xc8, r12_1, rdi_2, &var_348, &var_3e8)
        int32_t rax_11 = var_3e8
        int32_t var_418_1
        void* var_410_1
        
        if (rax_11 s<= 0)
            int32_t rdx_7 = var_338_1 + rdi_2
            char rax_12
            
            if (rdx_7 s> rdi_2)
                var_410_1.b = 0
                var_418_1.q = 0
                rax_12 = sub_142a487e0(arg1, rdx_7, rdx_7, 1, var_418_1, var_410_1.b)
            
            if (rdx_7 s> rdi_2 && rax_12 == 0)
                sub_142afcab0(&var_348)
            else
                var_418_1.b = 1
                void var_3c0
                sub_142afca80(&var_3c0, var_348, var_340_1:4.d, 1, var_418_1.b)
                char var_3ac
                
                if (sub_142afcf20(&var_3c0, var_3ac, &var_3e8) != 0)
                    char i
                    
                    do
                        int32_t var_3a4
                        var_410_1.d = var_3a4
                        int32_t var_3a8
                        int32_t var_39c
                        int32_t var_398
                        sub_142a49390(arg1, var_398, var_3a8, &var_1e8, var_39c, var_410_1.d)
                        i = sub_142afcf20(&var_3c0, var_3ac, &var_3e8)
                    while (i != 0)
                
                if (var_3e8 s<= 0)
                    sub_142afcab0(&var_348)
                else
                    sub_142a4ab40(arg1)
                    sub_142afcab0(&var_348)
        else if (rax_11 != 0xf)
            sub_142a4ab40(arg1)
            sub_142afcab0(&var_348)
        else
            rsi_2 = var_338_1 + rdi_2
            sub_142afcab0(&var_348)
        label_142a8ed03:
            int64_t var_3c8 = 0
            var_410_1.b = 1
            var_418_1.q = &var_3c8
            
            if (sub_142a487e0(arg1, rsi_2, rsi_2, 0, var_418_1, var_410_1.b) != 0)
                var_3e8 = 0
                int16_t rax_17 = *(arg1 + 8) & 2
                
                if (rax_17 == 0)
                    r15_1 = *(arg1 + 0x10)
                
                void* r9_6 = arg1 + 0xa
                
                if (rax_17 == 0)
                    r9_6 = *(arg1 + 0x18)
                
                int32_t rax_18 =
                    arg5(zx.q(r14), zx.q(arg3), arg4, r9_6, r15_1, r12_1, rdi_2, 0, &var_3e8)
                int64_t rcx_17 = var_3c8
                
                if (rcx_17 != 0)
                    sub_142a7dcd0(rcx_17)
                
                if (var_3e8 s> 0)
                    sub_142a4ab40(arg1)
                else if (rax_18 s> 0x3ff)
                    *(arg1 + 8) |= 0xffe0
                    *(arg1 + 0xc) = rax_18
                else
                    *(arg1 + 8) &= 0x1f
                    int32_t rdi_3
                    rdi_3.w = rax_18.w << 5
                    *(arg1 + 8) |= rdi_3.w
    else
        void* r14_1 = arg1 + 0xa
        
        if ((*(arg1 + 8) & 2) == 0)
            r14_1 = *(arg1 + 0x18)
        
        void var_258
        r12_1 = &var_258
        sub_142a8bca0(&var_258, r14_1, rdi_2)
        int32_t rsi_1
        
        if (rsi.b == 0)
            int32_t var_418
            var_418.q = 0
            
            if (sub_142a487e0(arg1, 0x1b, 0x1b, 0, var_418, 0) != 0)
                r14_1 = arg1 + 0xa
            label_142a8eb02:
                rsi_1 = 0x1b
                goto label_142a8eb08
        else
            if ((*(arg1 + 8) & 2) != 0)
                goto label_142a8eb02
            
            rsi_1 = *(arg1 + 0x10)
        label_142a8eb08:
            
            if (arg4 != 0)
                sub_142a4aa20(&var_388, 0, &var_258, rdi_2)
                (*(*arg4 + 0x38))(arg4, &var_388)
            
            r14 = arg2
            rsi_2 = arg5(zx.q(r14), zx.q(arg3), arg4, r14_1, rsi_1, &var_258, rdi_2, 0, &var_3e8)
            int32_t rax_9 = var_3e8
            
            if (rax_9 s> 0)
                if (rax_9 == 0xf)
                    goto label_142a8ed03
                
                sub_142a4ab40(arg1)
            else if (rsi_2 s> 0x3ff)
                *(arg1 + 8) |= 0xffe0
                *(arg1 + 0xc) = rsi_2
            else
                *(arg1 + 8) &= 0x1f
                rsi_2.w <<= 5
                *(arg1 + 8) |= rsi_2.w
    sub_142a47ff0(&var_388)

__security_check_cookie(rax_1 ^ &var_438)
return arg1
