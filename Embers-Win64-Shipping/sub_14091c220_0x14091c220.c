// 函数: sub_14091c220
// 地址: 0x14091c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t r13 = 0
void* var_188 = arg2
uint32_t rbx = 0
int32_t* r14 = arg1 + 0xc
void* r12 = arg2
int64_t* result = arg1
var_198 = 0
int32_t* var_190 = r14
int64_t rax_2
int32_t r8_1
int32_t r9_1

if (*(arg1 + 0x10) == 0)
    rax_2 = sx.q(*r14)
    r9_1 = *(arg1 + 8)
    r8_1 = (rax_2 + 4).d

if (*(arg1 + 0x10) != 0 || r8_1 s> r9_1)
    r9_1 = *(arg1 + 8)
    arg2.b = 1
    *(arg1 + 0x10) = 1
label_14091c2e3:
    r8_1 = *r14
    var_190 = r14
    
    if (rbx s> r9_1 - r8_1)
        arg1.b = 0
    else
        arg1.b = 1
        var_190 = r14
else
    char* rdx_1 = *result + rax_2
    arg2 = nullptr
    rbx = ((zx.d(rdx_1[1]) | zx.d(*rdx_1) << 8) << 8 | zx.d(rdx_1[2])) << 8 | zx.d(rdx_1[3])
    *r14 = r8_1
    var_198 = rbx
    
    if (rbx s>= 0)
        goto label_14091c2e3
    
    arg1.b = 0

if (arg2.b != 0 || arg1.b == 0)
    result[2].b = 1
else if (rbx s<= 0)
    *(r12 + 8) = 0
    
    if (*(r12 + 0xc) != 0)
        sub_1405947f0(r12, 0)
else
    char* rsi_1
    
    if (rbx != 0xffffffff)
        int64_t rcx = sx.q(rbx + 0x10)
        int64_t rax_10 = rcx + 0xf
        
        if (rax_10 u<= rcx)
            rax_10 = 0xffffffffffffff0
        
        int64_t rax_11 = rax_10 & 0xfffffffffffffff0
        __chkstk(rax_11)
        void var_1b8
        rsi_1 = (&var_1b8 - rax_11 + 0x2f) & 0xfffffffffffffff0
    else
        rsi_1 = nullptr
    
    int64_t rbx_6 = sx.q(rbx)
    memcpy(rsi_1, sx.q(r8_1) + *result, rbx_6.d)
    rsi_1[rbx_6] = 0
    void* rcx_2 = nullptr
    void* var_68_1 = nullptr
    int64_t rdi_1 = -1
    void* rbx_9
    
    if (rsi_1 == 0)
        rbx_9 = nullptr
        int32_t var_58_2 = 0
        int64_t var_60_2 = 0
    else
        int64_t r14_1 = -1
        
        do
            r14_1 += 1
        while (rsi_1[r14_1] != 0)
        
        char* rax_12 = rsi_1
        void* rdx_5 = &rsi_1[sx.q(r14_1.d)]
        char* var_180 = rax_12
        void* var_178_1 = rdx_5
        int32_t rbx_7 = 0
        int32_t i = 0x7fffffff
        
        if (rsi_1 u< rdx_5)
            while (i s> 0)
                int32_t rax_15
                int32_t rcx_4
                
                if (sub_14060e800(&var_180, rdx_5.d - rax_12.d) - 0x10000 u> 0xfffff || i s< 2)
                    rax_15 = 1
                    rcx_4 = -1
                else
                    rax_15 = 2
                    rcx_4 = -2
                
                rbx_7 += rax_15
                i += rcx_4
                rax_12 = var_180
                
                if (rax_12 u>= rdx_5)
                    break
            
            r12 = var_188
            rcx_2 = var_68_1
        
        int32_t var_58_1 = rbx_7
        
        if (rbx_7 + 1 u> 0x80 && rbx_7 != 0xffffffff)
            void* rax_16 = sub_140a84c80(0, sx.q(rbx_7 + 1) * 2, 0)
            rcx_2 = rax_16
            var_68_1 = rax_16
        
        void var_168
        void* rax_17 = &var_168
        
        if (rcx_2 != 0)
            rax_17 = rcx_2
        
        var_188 = rax_17
        sub_140917060(&var_188, rbx_7 + 1, rsi_1, (r14_1 + 1).d)
        rbx_9 = rax_17
        r13 = 0
        r14 = var_190
    
    if (*r12 != rbx_9)
        int32_t rdi_2
        
        if (rbx_9 == 0 || *rbx_9 == 0)
            rdi_2 = 0
        else
            do
                rdi_1 += 1
            while (*(rbx_9 + (rdi_1 << 1)) != 0)
            
            rdi_2 = rdi_1.d + 1
        
        *(r12 + 8) = 0
        
        if (*(r12 + 0xc) != rdi_2)
            sub_1405947f0(r12, rdi_2)
            r13 = *(r12 + 8)
        
        int32_t rax_18 = rdi_2 + r13
        *(r12 + 8) = rax_18
        
        if (rax_18 s> *(r12 + 0xc))
            sub_140594770(r12)
        
        if (rdi_2 != 0)
            memcpy(*r12, rbx_9, rdi_2 * 2)
    
    *r14 += var_198
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)

__security_check_cookie(rax_1 ^ &var_198)
return result
