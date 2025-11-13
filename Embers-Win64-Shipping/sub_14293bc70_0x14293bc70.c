// 函数: sub_14293bc70
// 地址: 0x14293bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x158)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rcx = *arg2
uint64_t result
uint64_t rbx_1

if (rcx == 0)
    rbx_1 = 0
    int32_t rsi_2 = 0
    int64_t r14_1 = 0
    void* r15_1 = *(arg2 + 8)
    void* r13_1 = *(*(arg1 + 8) + 0x18)
    int64_t* rbp_2 = *(r15_1 + 0x30)
    
    if (rbp_2 == 0)
        int64_t* rax_10 = sub_1428bcf30(*(r15_1 + 0x28), nullptr)
        rbp_2 = rax_10
        
        if (rax_10 != 0)
            if (sub_1428bd980(rax_10) s<= 0)
                goto label_14293bf64
            
            goto label_14293be98
    else
        if (sub_14293c180(arg2, 0) != 0)
        label_14293be98:
            
            if (sub_1428bcb30(rbp_2, 0xffffffff, 0x100, 9, 0, arg2) s> 0)
                int32_t var_158_5
                var_158_5.q = *(r13_1 + 0x28)
                int64_t var_148[0x2]
                
                if (sub_1428bd830(rbp_2, 0, &var_148, *(r13_1 + 0x20), var_158_5) s> 0)
                    int64_t rax_15 = sub_1428a6730(var_148[0])
                    r14_1 = rax_15
                    
                    if (rax_15 != 0)
                        var_158_5.q = *(r13_1 + 0x28)
                        
                        if (sub_1428bd830(rbp_2, r14_1, &var_148, *(r13_1 + 0x20), var_158_5) s> 0)
                            sub_1428f2e40(*(r15_1 + 0x18), r14_1, var_148[0].d)
                            r14_1 = 0
                            rsi_2 = 1
                    else
                        sub_1428a5670((rax_15 + 0x2e).d, 0x8d, (rax_15 + 0x41).d, 
                            "crypto\cms\cms_env.c", 0x150)
            else
                sub_1428a5670(0x2e, 0x8d, 0x6e, "crypto\cms\cms_env.c", 0x146)
            
            goto label_14293bf64
        
    label_14293bf64:
        sub_1428bcda0(rbp_2)
        *(r15_1 + 0x30) = 0
        sub_1428a6780(r14_1)
        rbx_1 = zx.q(rsi_2)
    
    result = zx.q(rbx_1.d)
else if (rcx == 1)
    result = sub_14293c570(arg1, arg2)
else if (rcx == 2)
    void* rdi_1 = *(arg2 + 8)
    rbx_1 = 0
    int32_t rsi_1 = 0
    int32_t* rcx_4 = *(rdi_1 + 0x20)
    void* rbp_1 = *(*(arg1 + 8) + 0x18)
    
    if (rcx_4 != 0)
        void var_138
        
        if (sub_1428cf200(rcx_4, (*(rdi_1 + 0x28) << 3).d, &var_138) == 0)
            uint64_t rax_5 = sub_1428a6730(*(rbp_1 + 0x28) + 8)
            
            if (rax_5 != 0)
                int32_t rax_7 =
                    sub_14296bd10(&var_138, nullptr, rax_5, *(rbp_1 + 0x20), *(rbp_1 + 0x28))
                
                if (rax_7 s> 0)
                    sub_1428f2e40(*(rdi_1 + 0x18), rax_5, rax_7)
                    rsi_1 = 1
                else
                    sub_1428a5670(0x2e, 0x88, 0x9f, "crypto\cms\cms_env.c", 0x288)
                    sub_1428a6780(rax_5)
            else
                sub_1428a5670(0x2e, 0x88, (rax_5 + 0x41).d, "crypto\cms\cms_env.c", 0x281)
                sub_1428a6780(rax_5)
        else
            sub_1428a5670(0x2e, 0x88, 0x73, "crypto\cms\cms_env.c", 0x27a)
            sub_1428a6780(rbx_1)
        
        sub_1428b8960(&var_138, 0xf4)
        rbx_1 = zx.q(rsi_1)
    else
        sub_1428a5670(0x2e, 0x88, 0x82, "crypto\cms\cms_env.c", 0x274)
    
    result = zx.q(rbx_1.d)
else if (rcx == 3)
    result = sub_14296c190(arg1, arg2, 1)
else
    sub_1428a5670(0x2e, 0xa9, 0x9a, "crypto\cms\cms_env.c", 0x307)
    result = 0
__security_check_cookie(rax_1 ^ &var_178)
return result
