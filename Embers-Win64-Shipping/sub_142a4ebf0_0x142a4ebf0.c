// 函数: sub_142a4ebf0
// 地址: 0x142a4ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_198 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char* r14 = arg1
int16_t var_13c
uint32_t result = &var_13c:1
void* var_148 = &var_13c:1
int32_t var_140 = 0x28
var_13c = 0
int32_t var_110 = 0
uint32_t var_1c8 = 0xc
uint32_t r13 = 6
uint32_t r12 = 4

if (*arg3 s<= 0)
    if (arg1 == 0)
        goto label_142a4f22e
    
    char* var_1c0 = arg1
    void var_100
    uint32_t rax_2 = sub_142a4e610(arg1, &var_100, 0xc, &var_1c0)
    sub_142a8c3f0(&var_100, 0xc, rax_2, arg3)
    void var_1b8
    void var_108
    char* rcx_7
    
    if (*arg3 s> 0)
        rcx_7 = var_1c0
    else
        var_1c8 = rax_2
        char* rcx_1 = var_1c0
        char rax_3 = *rcx_1
        
        if (rax_3 == 0x5f || rax_3 == 0x2d)
            rcx_1 = &rcx_1[1]
            var_1c0 = rcx_1
        
        uint32_t rax_4 = sub_142a4e860(rcx_1, &var_108, 6, &var_1c0)
        uint32_t rax_5 = sub_142a8c3f0(&var_108, 6, rax_4, arg3)
        
        if (*arg3 s> 0)
            rcx_7 = var_1c0
        else
            r13 = rax_4
            char* rcx_4
            
            if (rax_4 s<= 0)
                rcx_4 = var_1c0
            else
                if (sub_142a86320(&var_108, "Zzzz", rax_4, rax_5) == 0)
                    r13 = 0
                
                rcx_4 = var_1c0
                char rax_7 = *rcx_4
                
                if (rax_7 == 0x5f || rax_7 == 0x2d)
                    rcx_4 = &rcx_4[1]
                    var_1c0 = rcx_4
            
            uint32_t rax_8 = sub_142a4e420(rcx_4, &var_1b8, 4, &var_1c0)
            uint32_t rax_9 = sub_142a8c3f0(&var_1b8, 4, rax_8, arg3)
            
            if (*arg3 s> 0)
                rcx_7 = var_1c0
            else
                r12 = rax_8
                
                if (rax_8 s<= 0)
                    rcx_7 = var_1c0
                    
                    if ((*rcx_7 & 0xbf) != 0)
                        rcx_7 -= 1
                        var_1c0 = rcx_7
                else if (sub_142a86320(&var_1b8, "ZZ", rax_8, rax_9) != 0)
                    rcx_7 = var_1c0
                else
                    r12 = 0
                    rcx_7 = var_1c0
    
    int32_t rcx_8 = rcx_7.d - r14.d
    result = *arg3
    
    if (result s<= 0)
        char* rdx_3 = &r14[sx.q(rcx_8)]
        
        while (true)
            char rax_12 = *rdx_3
            
            if (rax_12 != 0x5f && rax_12 != 0x2d)
                break
            
            rcx_8 += 1
            rdx_3 = &rdx_3[1]
        
        char* r15_1 = &r14[sx.q(rcx_8)]
        int64_t rdi_4 = -1
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (r15_1[rsi_1] != 0)
        
        int32_t rcx_9 = 0
        
        if (rsi_1.d s> 0)
            char* rdx_4 = r15_1
            
            while (true)
                result = zx.d(*rdx_4)
                
                if (result.b == 0x2d || result.b == 0x5f)
                    rcx_9 = 0
                else
                    if (result.b == 0x40)
                        goto label_142a4ee2f
                    
                    if (rcx_9 s> 8)
                        break
                    
                    rcx_9 += 1
                
                rdx_4 = &rdx_4[1]
                
                if (&rdx_4[neg.q(r15_1)] s>= sx.q(rsi_1.d))
                    goto label_142a4ee2f
            
            goto label_142a4f22e
        
    label_142a4ee2f:
        int16_t var_17c
        char* var_188 = &var_17c:1
        int32_t var_180_1 = 0x28
        var_17c = 0
        int32_t var_150_1 = 0
        void var_1b0
        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_1b0, &var_188)
        sub_142a4f750(&var_100, var_1c8, &var_108, r13, &var_1b8, r12, nullptr, 0, nullptr, 
            &var_1b0, arg3)
        sub_142a8cff0(&var_1b0)
        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_1b0, &var_148)
        void var_e8
        sub_142a4cc30(var_188, &var_e8, 0x9d, arg3)
        int32_t rax_15 = *arg3
        
        if (rax_15 == 0xffffff84 || rax_15 == 0xf)
            *arg3 = 1
        else if (rax_15 s<= 0)
            sub_142a4e960(&var_e8, &var_1b0, arg3)
        
        result = sub_142a8cff0(&var_1b0)
        
        if (var_17c.b != 0)
            result = sub_142a7dcd0(var_188)
        
        if (*arg3 s<= 0)
            var_188 = &var_17c:1
            int32_t var_180_2 = 0x28
            var_17c = 0
            int32_t var_150_2 = 0
            Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_1b0, &var_188)
            sub_142a4f280(&var_100, var_1c8, 0, 0, 0, 0, nullptr, 0, &var_1b0, arg3)
            result = sub_142a8cff0(&var_1b0)
            
            if (*arg3 s> 0)
            label_142a4f21f:
                
                if (var_17c.b == 0)
                    goto label_142a4f22e
                
                result = sub_142a7dcd0(var_188)
            label_142a4f22e:
                
                if (*arg3 s<= 0)
                    *arg3 = 1
            else if (var_150_2 == 0)
            label_142a4eff7:
                
                if (var_17c.b != 0)
                    sub_142a7dcd0(var_188)
                
                if (r12 s<= 0)
                label_142a4f106:
                    
                    if (r13 s<= 0 || r12 s<= 0)
                    label_142a4f20b:
                        
                        do
                            rdi_4 += 1
                        while (r14[rdi_4] != 0)
                        
                        result = (*(*arg2 + 8))(arg2, r14, zx.q(rdi_4.d))
                    else
                        var_188 = &var_17c:1
                        int32_t var_180_4 = 0x28
                        var_17c = 0
                        int32_t var_150_4 = 0
                        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_1b0, 
                            &var_188)
                        sub_142a4f280(&var_100, var_1c8, &var_108, r13, 0, 0, nullptr, 0, &var_1b0, 
                            arg3)
                        result = sub_142a8cff0(&var_1b0)
                        
                        if (*arg3 s> 0)
                            goto label_142a4f21f
                        
                        if (sub_142a86320(var_148, var_188, var_150_4, 0x43642180) != 0)
                            if (var_17c.b != 0)
                                sub_142a7dcd0(var_188)
                            
                            goto label_142a4f20b
                        
                        result = sub_142a4f750(&var_100, var_1c8, &var_108, r13, 0, 0, r15_1, 
                            rsi_1.d, nullptr, arg2, arg3)
                        
                        if (var_17c.b != 0)
                            result = sub_142a7dcd0(var_188)
                else
                    var_188 = &var_17c:1
                    int32_t var_180_3 = 0x28
                    var_17c = 0
                    int32_t var_150_3 = 0
                    Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_1b0, 
                        &var_188)
                    sub_142a4f280(&var_100, var_1c8, 0, 0, &var_1b8, r12, nullptr, 0, &var_1b0, 
                        arg3)
                    result = sub_142a8cff0(&var_1b0)
                    
                    if (*arg3 s> 0)
                        goto label_142a4f21f
                    
                    if (sub_142a86320(var_148, var_188, var_150_3, 0x43642180) != 0)
                        if (var_17c.b != 0)
                            sub_142a7dcd0(var_188)
                        
                        goto label_142a4f106
                    
                    result = sub_142a4f750(&var_100, var_1c8, 0, 0, &var_1b8, r12, r15_1, rsi_1.d, 
                        nullptr, arg2, arg3)
                    
                    if (var_17c.b != 0)
                        result = sub_142a7dcd0(var_188)
            else
                if (sub_142a86320(var_148, var_188, var_150_2, 0x43642180) != 0)
                    goto label_142a4eff7
                
                result = sub_142a4f750(&var_100, var_1c8, 0, 0, 0, 0, r15_1, rsi_1.d, nullptr, 
                    arg2, arg3)
                
                if (var_17c.b != 0)
                    result = sub_142a7dcd0(var_188)
    else if (result == 0xf || *arg3 s<= 0)
        *arg3 = 1

if (var_13c.b != 0)
    result = sub_142a7dcd0(var_148)

__security_check_cookie(rax_1 ^ &var_228)
return result
