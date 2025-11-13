// 函数: sub_140ce2960
// 地址: 0x140ce2960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t arg_20 = rbx
void var_2d8
int64_t var_48 = __security_cookie ^ &var_2d8
void* r14 = arg3
uint64_t result

if (arg3 != 0)
    int16_t* rcx = *arg5
    void var_248
    void* var_268 = &var_248
    int16_t var_250_1 = 0x100
    void* var_260_1 = &var_248
    arg3.b = 1
    int64_t* var_258_1 = &var_48
    void* rax_2 = sub_140ce3990(rcx, &var_268, arg3.b)
    *arg5 = rax_2
    
    if (rax_2 == 0)
        rbx.b = 0
    else
        wchar16 const* const var_280 = u"None"
        void* rax_3 = var_268
        int32_t var_278_1 = 4
        int32_t rcx_3 = ((var_260_1 - rax_3) s>> 1).d
        void* var_290 = rax_3
        int32_t var_288_1 = rcx_3
        int32_t rax_4
        
        if (rcx_3 == 4)
            rax_4 = sub_140a22710(&var_280, &var_290, rcx_3 - 3)
        
        if (rcx_3 != 4 || rax_4 != 0)
            sub_140cea1a0(arg5)
            int16_t* rcx_6 = *arg5
            
            if (*rcx_6 != 0x27)
            label_140ce2aac:
                
                if (*var_260_1 != 0)
                    *var_260_1 = 0
                
                void* rax_12 = sub_140cdb470(arg1, arg2, r14, r14, var_268, arg4, arg7, arg8)
                *arg6 = rax_12
                int64_t* rax_14
                int64_t rcx_10
                
                if (rax_12 != 0)
                    rcx_10 = sx.q(*(r14 + 0x38))
                    rax_14 = *(rax_12 + 0x10) + 0x30
                
                if (rax_12 != 0
                        && (rcx_10.d s> rax_14[1].d || *(*rax_14 + (rcx_10 << 3)) != r14 + 0x30))
                    *arg6 = 0
                    rbx.b = 0
                else if (*arg6 == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
            else
                var_260_1 = var_268
                *arg5 = &rcx_6[1]
                void* rax_6 = sub_140ce3990(&rcx_6[1], &var_268, 1)
                *arg5 = rax_6
                
                if (rax_6 == 0)
                    rbx.b = 0
                else
                    int16_t rcx_8 = *rax_6
                    *arg5 = rax_6 + 2
                    
                    if (rcx_8 == 0x27)
                        goto label_140ce2aac
                    
                    rbx.b = 0
        else
            *arg6 = 0
            rbx.b = 1
    
    sub_140b301c0(&var_268)
    result = zx.q(rbx.b)
else
    *arg6 = 0
    result.b = 0

__security_check_cookie(var_48 ^ &var_2d8)
return result
