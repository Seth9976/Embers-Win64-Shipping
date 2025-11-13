// 函数: sub_140af3690
// 地址: 0x140af3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t r12 = 0
int16_t* r14 = arg3
int16_t* var_1a0 = arg4
int32_t var_1a8 = 0
int16_t* var_190
int64_t r9 = sub_140a2e390(&var_190, u"%sINI=", arg2)
int16_t* const rbx = &data_142d40450
*arg1 = 0
int32_t var_188

if (var_188 != 0)
    rbx = var_190

arg1[1] = 0

if (data_143dbb3e1 == 0)
    sub_140af98a0("Unknown", 0x22, 
        Attempting to get the command line but it hasn't been initialized yet.", r9)
    
    if (data_143de542b == 0)
        int64_t* rcx_1 = data_143de5de8
        data_143de5498 = 1
        sub_140b1f700(rcx_1, u"%s", &data_143ddb420)

r9.b = 1

if (sub_140b2acc0(&data_143dbb3f0, rbx, arg1, r9.b) == 0)
    if (r14 == 0)
        void var_178
        sub_1405eb940(&var_178, "WindowsNoEditor")
        int16_t* var_70
        r14 = var_70
        var_1a8 = 1
    
    int32_t rax_3 = 0
    int32_t var_1ac_1 = 0
    int32_t r13_1 = 0
    int64_t var_1b8 = 0
    int64_t rbx_1 = -1
    int32_t var_1b0_1 = 0
    
    if (r14 != 0 && *r14 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (r14[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_1b8, rsi_1.d + 1)
            rax_3 = var_1ac_1
            r13_1 = var_1b0_1
        
        int32_t r13_2 = r13_1 + rsi_1.d + 1
        var_1b0_1 = r13_2
        
        if (r13_2 s> rax_3)
            sub_140594770(&var_1b8)
        
        UnDecorator::getReferenceType(var_1b8, r14, (rsi_1.d + 1) * 2)
    
    int64_t var_78
    
    if ((var_1a8.b & 1) != 0 && var_78 != 0)
        sub_140a74f90(var_78)
    
    int16_t* r9_1 = var_1a0
    
    if (r9_1 == 0 || arg2 == 0)
    label_140af38d9:
        int16_t* var_1c8_1 = arg2
        sub_140a2e390(&var_1a0, u"%s%s/%s.ini", var_1a0)
        
        if (arg1 == &var_1a0)
            int16_t* rcx_14 = var_1a0
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        else
            int64_t rcx_10 = *arg1
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            *arg1 = var_1a0
            int32_t var_198
            arg1[1].d = var_198
            int32_t var_194
            *(arg1 + 0xc) = var_194
    else
        uint32_t r13_3 = zx.d(*r9_1)
        int64_t r14_1 = -1
        int32_t rax_4
        rax_4.w = sbb.w((r13_3 - 0x61).w, (r13_3 - 0x61).w, r13_3 - 0x61 u< 0x1a)
        rax_4.w &= 0x20
        r13_3.w -= rax_4.w
        
        do
            r14_1 += 1
        while (r9_1[r14_1] != 0)
        
        int16_t rcx_7 = *arg2
        void* rdx_4 = &r9_1[1]
        var_1a8.q = rdx_4
        void* rsi_3 = &arg2[1]
        
        if (rcx_7 == 0)
            goto label_140af38d9
        
        while (true)
            int32_t rax_6
            rax_6.w = sbb.w(rcx_7 - 0x61, rcx_7 - 0x61, zx.d(rcx_7) - 0x61 u< 0x1a)
            rax_6.w &= 0x20
            
            if (rcx_7 - rax_6.w == r13_3.w)
                if (sub_140a546e0(rsi_3, rdx_4, sx.q(r14_1.d - 1)) == 0)
                    break
                
                rdx_4 = var_1a8.q
            
            rcx_7 = *rsi_3
            rsi_3 += 2
            
            if (rcx_7 == 0)
                goto label_140af38d9
        
        if (rsi_3 == 2)
            goto label_140af38d9
        
        if (*arg1 != arg2)
            int32_t rbx_2
            
            if (*arg2 == 0)
                rbx_2 = 0
            else
                do
                    rbx_1 += 1
                while (arg2[rbx_1] != 0)
                
                rbx_2 = rbx_1.d + 1
            
            arg1[1].d = 0
            
            if (*(arg1 + 0xc) != rbx_2)
                sub_1405947f0(arg1, rbx_2)
                r12 = arg1[1].d
            
            int32_t rax_12 = rbx_2 + r12
            arg1[1].d = rax_12
            
            if (rax_12 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            if (rbx_2 != 0)
                memcpy(*arg1, arg2, rbx_2 * 2)
    
    int64_t rax_13 = var_1b8
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)

sub_140b20c40(arg1)
int16_t* rcx_17 = var_190

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_1e8)
return arg1
