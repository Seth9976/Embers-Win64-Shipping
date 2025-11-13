// 函数: sub_140b79ab0
// 地址: 0x140b79ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int32_t var_318 = 0
int64_t var_300
sub_140b18720(&var_300, arg2, 1)
void var_2f0
int64_t* rdi

if (*sub_140926e00(arg1 + 8, &var_2f0, &var_300) == 0xffffffff)
    void var_208
    sub_140b77b60(&var_208)
    void var_278
    sub_140a96170(&var_278)
    
    if (sub_140b7e960(&var_208, arg2, &var_278) == 0)
        rdi.b = 0
    else
        char r14_1 = 1
        int32_t rbx_1 = 3
        int64_t var_2c8
        char rax_5 = sub_140a32a50(arg2, sub_140b13b30(&var_2c8), 1)
        int64_t var_2d8
        char rax_7
        
        if (rax_5 == 0)
            r14_1 = 3
            rax_7 = sub_140a32a50(arg2, sub_140b13d10(&var_2d8), 1)
        
        int64_t r15
        
        if (rax_5 != 0 || rax_7 != 0)
            r15.b = 1
        else
            r15.b = 0
        
        if ((r14_1 & 2) != 0)
            int64_t rcx_9 = var_2d8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = var_2c8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        if (r15.b == 0)
            int64_t var_2b8
            char rax_9 = sub_140a32a50(arg2, sub_140b14620(&var_2b8), 1)
            int64_t rcx_13 = var_2b8
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (rax_9 == 0)
                int64_t var_2a8
                char rax_11 = sub_140a32a50(arg2, sub_140b25370(&var_2a8), 1)
                int64_t rcx_16 = var_2a8
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                if (rax_11 == 0)
                    int64_t var_298
                    int64_t var_288
                    char rax_14 =
                        sub_140a32a50(arg2, sub_140b1a660(&var_298, sub_140b1aa20(&var_288)), 1)
                    int64_t rcx_20 = var_298
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    int64_t rcx_21 = var_288
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    if (rax_14 != 0)
                        rbx_1 = 2
                else
                    rbx_1 = 4
            else
                rbx_1 = 1
        else
            rbx_1 = 0
        
        int64_t var_258
        __builtin_memset(&var_258, 0, 0x2c)
        int64_t var_310
        int64_t* var_328_1 = &var_310
        int32_t var_22c_1 = 0x80
        int32_t var_228_1 = 0xffffffff
        int32_t var_224_1 = 0
        int64_t var_218_1 = 0
        int32_t var_210_1 = 0
        var_310 = 0
        int64_t var_308_1 = 0
        sub_140b7bde0(arg2, &var_208, rbx_1, &var_258, var_328_1)
        sub_140926e00(&var_258, &var_318, &var_300)
        int64_t rax_15 = sx.q(var_318)
        int64_t rcx_24
        
        if (rax_15.d == 0xffffffff)
            rcx_24 = 0
        else
            rcx_24 = var_258 + rax_15 * 0x28
        
        int64_t rax_17 = rcx_24 + 0x10
        
        if (rcx_24 == 0)
            rax_17 = 0
        
        if (rax_17 != 0)
            int64_t var_2e0_1 = rax_17
            int64_t* var_2e8 = &var_300
            void var_2ec
            sub_140b76b10(arg1 + 8, &var_2ec, &var_2e8, nullptr)
        
        sub_140596d80(&var_310)
        int32_t var_210_2 = 0
        
        if (var_218_1 != 0)
            sub_140a74f90(var_218_1)
        
        sub_1405e1cf0(&var_258, 0)
        int64_t var_238
        
        if (var_238 != 0)
            sub_140a74f90(var_238)
        
        int64_t rcx_30 = var_258
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        rdi.b = 1
    
    int64_t* var_270
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t rsi_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_6 = *var_270
                (*(r8_6 + 8))(var_270, zx.q(rsi_1), r8_6)
    
    sub_140b78990(&var_208)
else
    rdi.b = 1

int64_t rcx_34 = var_300

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_348)
return zx.q(rdi.b)
