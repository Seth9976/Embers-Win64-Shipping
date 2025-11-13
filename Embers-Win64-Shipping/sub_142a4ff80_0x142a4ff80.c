// 函数: sub_142a4ff80
// 地址: 0x142a4ff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t _Count = sx.q(arg4)
uint64_t result

if (*arg5 s<= 0)
    int32_t var_158
    int32_t* var_168_1 = &var_158
    var_158 = 0
    char _Source[0x2]
    int32_t rax_2 = sub_142a4d040(arg1, "rg", &_Source, 8, var_168_1)
    int32_t rbx_2
    
    if (var_158 s> 0 || rax_2 != 6)
    label_142a5006d:
        int32_t rax_5 = sub_142a4cc70(arg1, &_Source, 8, arg5)
        rbx_2 = rax_5
        
        if (*arg5 s> 0)
            rbx_2 = 0
        else if (rax_5 == 0 && arg2 != 0)
            var_158 = 0
            int16_t var_12c
            char* var_138 = &var_12c:1
            int32_t var_130_1 = 0x28
            var_12c = 0
            int32_t var_100_1 = 0
            void var_150
            Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_150, &var_138)
            void var_e8
            sub_142a4cc30(arg1, &var_e8, 0x9d, &var_158)
            int32_t rax_6 = var_158
            
            if (rax_6 == 0xffffff84 || rax_6 == 0xf)
                var_158 = 1
            else if (rax_6 s<= 0)
                sub_142a4e960(&var_e8, &var_150, &var_158)
            
            sub_142a8cff0(&var_150)
            
            if (var_158 s<= 0)
                rbx_2 = sub_142a4cc70(var_138, &_Source, 8, arg5)
                
                if (*arg5 s> 0)
                    rbx_2 = 0
            
            if (var_12c.b != 0)
                sub_142a7dcd0(var_138)
    else
        char (* rbx_1)[0x2] = &_Source
        
        if (_Source[0] != 0)
            do
                *rbx_1 = sub_142a863a0(zx.d(*rbx_1))
                rbx_1 = &(*rbx_1)[1]
            while (*rbx_1 != 0)
        
        int64_t rax_4 = 0
        bool cond:0_1
        
        while (true)
            char var_f6[0xe]
            char rcx_1 = var_f6[rax_4]
            rax_4 += 1
            char temp0_1 = *(rax_4 + 0x143613f9f)
            cond:0_1 = rcx_1 == temp0_1
            
            if (rcx_1 != temp0_1)
                break
            
            if (rax_4 == 5)
                cond:0_1 = rcx_1 == *(rax_4 + 0x143613f9f)
                break
        
        rbx_2 = 0
        
        if (cond:0_1)
            rbx_2 = 2
        
        if (rbx_2 == 0)
            goto label_142a5006d
    
    int64_t rax_8 = sx.q(rbx_2)
    
    if (rax_8 u>= 8)
        __report_rangecheckfailure()
        noreturn
    
    _Source[rax_8] = 0
    strncpy(arg3, &_Source, _Count)
    result = sub_142a8c3f0(arg3, _Count.d, rbx_2, arg5)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_188)
return result
