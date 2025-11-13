// 函数: sub_140fc7340
// 地址: 0x140fc7340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
char name[0x100]
int32_t rax_2 = gethostname(&name, 0x100)
bool result_1 = rax_2 == 0
uint64_t result

if (rax_2 != 0)
    result = zx.q(result_1)
else
    int64_t rdi_1 = -1
    int64_t rsi_1 = -1
    int32_t r15_1 = 0
    char (* r13_1)[0x100] = nullptr
    char (* var_158_1)[0x100] = nullptr
    
    do
        rsi_1 += 1
    while (name[rsi_1] != 0)
    
    void* r12_1 = &name[sx.q(rsi_1.d)]
    char (* rcx_1)[0x100] = &name
    char (* var_260)[0x100] = &name
    int32_t rbx_1 = 0
    int32_t i = 0x7fffffff
    
    if (&name u< r12_1)
        while (i s> 0)
            int32_t rax_6
            int32_t rcx_3
            
            if (sub_14060e800(&var_260, r12_1.d - rcx_1.d) - 0x10000 u> 0xfffff || i s< 2)
                rax_6 = 1
                rcx_3 = -1
            else
                rax_6 = 2
                rcx_3 = -2
            
            i += rcx_3
            rbx_1 += rax_6
            rcx_1 = var_260
            
            if (rcx_1 u>= r12_1)
                break
    
    int32_t var_148_1 = rbx_1
    
    if (rbx_1 + 1 u> 0x80 && rbx_1 != 0xffffffff)
        char (* rax_7)[0x100] = sub_140a84c80(0, sx.q(rbx_1 + 1) * 2, 0)
        r13_1 = rax_7
        var_158_1 = rax_7
    
    void var_258
    char (* rcx_4)[0x100] = &var_258
    
    if (r13_1 != 0)
        rcx_4 = r13_1
    
    var_260 = rcx_4
    sub_140917060(&var_260, rbx_1 + 1, &name, (rsi_1 + 1).d)
    
    if (*arg2 != rcx_4)
        int32_t rdi_2
        
        if (rcx_4 == 0 || *rcx_4 == 0)
            rdi_2 = 0
        else
            do
                rdi_1 += 1
            while (*(rcx_4 + (rdi_1 << 1)) != 0)
            
            rdi_2 = rdi_1.d + 1
        
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rdi_2)
            sub_1405947f0(arg2, rdi_2)
            r15_1 = arg2[1].d
        
        int32_t rax_8 = r15_1 + rdi_2
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        if (rdi_2 != 0)
            memcpy(*arg2, rcx_4, rdi_2 * 2)
    
    if (var_158_1 != 0)
        sub_140a74f90(var_158_1)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_288)
return result
