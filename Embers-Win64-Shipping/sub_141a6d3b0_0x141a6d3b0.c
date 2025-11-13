// 函数: sub_141a6d3b0
// 地址: 0x141a6d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char rdx = *(arg1 + 0xf8)
void* r9 = arg1
void* var_58
char var_50
void* var_68

if (rdx == 2)
label_141a6d5f9:
    int64_t rax_13 = *(r9 + 0x100)
    
    if (rax_13.b == 1)
        var_68.b = 0
        var_68:4.d = (rax_13 u>> 0x20).d + 1
        var_58 = *(r9 + 0xf8)
        var_50 = var_68.b
        *(r9 + 0xf8) = var_58.o
else
    char rax_2 = *(arg1 + 0x100)
    
    if (rax_2 == 2)
        goto label_141a6d5f9
    
    int32_t rcx = *(arg1 + 0xfc)
    int32_t temp0_1 = *(r9 + 0x104)
    
    if (rcx s<= temp0_1 && (rcx != temp0_1 || (rdx != 0 && rax_2 != 0)))
        goto label_141a6d5f9
    
    uint64_t rsi
    rsi.b = 0
    int32_t rdi_1 = 0
    int64_t* r14_1 = *(r9 + 0xd0)
    int64_t r15_1 = 0
    int32_t var_5c_1 = 0
    void* rbx_1 = 0.q
    uint64_t r12_2 = sx.q(*(r9 + 0xd8)) << 3 u>> 3
    
    if (r14_1 u> &r14_1[sx.q(*(r9 + 0xd8))])
        r12_2 = 0
    
    char var_60_1
    void* var_48
    
    if (r12_2 != 0)
        do
            sub_141a519d0(&var_48, *r14_1)
            char var_40
            
            if (var_40 != 0)
                if (rsi.b != 2)
                    if (var_48.b != 2)
                        int32_t temp1_1 = var_48:4.d
                        
                        if (rdi_1 s<= temp1_1)
                            if (rdi_1 s>= temp1_1)
                                void* rax_5 = var_48
                                
                                if (rsi.b == 1)
                                    rax_5 = rbx_1
                                
                                rbx_1 = rax_5
                            else
                                rbx_1 = var_48
                    else
                        rbx_1 = var_48
                
                var_60_1.q = rbx_1
                rdi_1 = var_5c_1
                rsi = zx.q(var_60_1)
                var_40 = 0
            
            r14_1 = &r14_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
        
        r9 = arg1
    
    void* r13_1 = *(r9 + 0x70)
    void* rax_9 = sx.q(*(r9 + 0x78)) * 0x30 + r13_1
    var_48 = rax_9
    
    if (r13_1 != rax_9)
        do
            int64_t r15_2 = 0
            int64_t* r14_2 = *(r13_1 + 0x20)
            uint64_t r12_4 = sx.q(*(r13_1 + 0x28)) << 3 u>> 3
            
            if (r14_2 u> &r14_2[sx.q(*(r13_1 + 0x28))])
                r12_4 = 0
            
            if (r12_4 != 0)
                do
                    sub_141a519d0(&var_58, *r14_2)
                    
                    if (var_50 != 0)
                        if (rsi.b != 2)
                            if (var_58.b != 2)
                                int32_t temp2_1 = var_58:4.d
                                
                                if (rdi_1 s<= temp2_1)
                                    if (rdi_1 s>= temp2_1)
                                        void* rax_12 = var_58
                                        
                                        if (rsi.b == 1)
                                            rax_12 = rbx_1
                                        
                                        rbx_1 = rax_12
                                    else
                                        rbx_1 = var_58
                            else
                                rbx_1 = var_58
                        
                        var_60_1.q = rbx_1
                        rdi_1 = var_5c_1
                        rsi = zx.q(var_60_1)
                        var_50 = 0
                    
                    r14_2 = &r14_2[1]
                    r15_2 += 1
                while (r15_2 != r12_4)
            
            r13_1 += 0x30
        while (r13_1 != var_48)
        
        r9 = arg1
    
    if (rsi.b == 1)
        var_68.b = 0
        var_68:4.d = (rbx_1 u>> 0x20).d + 1
        rbx_1 = var_68
    
    var_50 = rbx_1.b
    var_58 = 1
    *(r9 + 0xf8) = var_58.o
uint32_t result = zx.d(*(r9 + 0xf8))

if (result.b == 2)
label_141a6d661:
    var_58.b = 1
    var_58:4.d = 0
    var_50 = 0
    var_50:4.d = 0
    *(r9 + 0xf8) = var_58.o
else
    char rcx_3 = *(r9 + 0x100)
    
    if (rcx_3 == 2)
        goto label_141a6d661
    
    if (result.b == 1 && rcx_3 == result.b)
        result = *(r9 + 0x104)
        
        if (*(r9 + 0xfc) == result)
            goto label_141a6d661

__security_check_cookie(rax_1 ^ &var_88)
return result
