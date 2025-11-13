// 函数: sub_140d234b0
// 地址: 0x140d234b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t var_28 = __security_cookie ^ &var_288
int16_t var_230 = 0x100
void var_228
void* var_248 = &var_228
void* var_240 = &var_228
int64_t* var_238 = &var_28
void* rax_2 = sub_140ce3990(*arg2, &var_248, 1)
void** rbx

if (rax_2 == 0)
    rbx.b = 0
else
    void* rdx_1 = var_248
    *arg2 = rax_2
    wchar16 const* const var_268 = u"None"
    int32_t var_260_1 = 4
    int32_t rax_5 = ((var_240 - rdx_1) s>> 1).d
    void* var_258 = rdx_1
    int32_t var_250_1 = rax_5
    
    if (rax_5 != 4)
        goto label_140d235a1
    
    if (sub_140a22710(&var_268, &var_258, rax_5 - 3) != 0)
        rdx_1 = var_248
    label_140d235a1:
        void* rcx_3 = *arg2
        
        if (*rcx_3 != 0x27)
            goto label_140d235e8
        
        var_240 = rdx_1
        *arg2 = rcx_3 + 2
        int16_t* rax_8 = sub_140ce3990(rcx_3 + 2, &var_248, 1)
        
        if (rax_8 == 0)
            rbx.b = 0
        else
            *arg2 = rax_8
            int16_t rcx_5 = *rax_8
            *arg2 = &rax_8[1]
            
            if (rcx_5 != 0x27)
                rbx.b = 0
            else
                rdx_1 = var_248
            label_140d235e8:
                var_268 = rdx_1
                int32_t var_260_2 = ((var_240 - rdx_1) s>> 1).d
                var_268.o = var_268.o
                sub_140d2c760(arg1, &var_268)
                rbx.b = 1
    else
        var_258 = nullptr
        *arg1 = 0
        arg1[2].d = 0
        
        if (*(arg1 + 0x14) s<= 0xffffffff)
            sub_1405947f0(&arg1[1], 0)
        
        void* rax_7 = arg1[1]
        
        if (rax_7 == 0)
            rbx.b = 1
        else
            *rax_7 = 0
            rbx.b = 1

sub_140b301c0(&var_248)
__security_check_cookie(var_28 ^ &var_288)
return zx.q(rbx.b)
