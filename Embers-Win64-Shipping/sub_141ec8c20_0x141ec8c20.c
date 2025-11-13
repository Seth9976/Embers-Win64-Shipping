// 函数: sub_141ec8c20
// 地址: 0x141ec8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_4e = 1
int64_t var_58 = 0
int16_t var_50 = 0
void var_4d
sub_142259c00(&var_4d)
int64_t var_2c = 0
int64_t var_20 = 0
int64_t var_18 = 0
int64_t rbx

if (sub_14221b300(arg2) == 0)
label_141ec8d24:
    int32_t rcx_7
    rcx_7.b = sub_140b5b8a0(arg2.d, 0) == 0
    uint32_t rax_9
    rax_9.b = (arg2 u>> 0x20).d != 0
    rcx_7.b |= rax_9.b
    char rax_10
    
    if (rcx_7.b != 0)
        rax_10 = sub_141ec34a0(arg1, arg1 + 0x38, arg2, &var_58)
    
    if (rcx_7.b != 0 && rax_10 != 0)
        goto label_141ec8d55
    
    rbx.b = 0
else
    void* const rcx_5
    
    if (*(arg1 + 0x90) == *(arg1 + 0xbc))
    labelid_11:
        rcx_5 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8 = arg1 + 0xc0
        void* rcx_3 = *(r8 + 8)
        
        if (rcx_3 != 0)
            r8 = rcx_3
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xd0)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_141ec8cf0:
            rcx_5 = nullptr
        else
            int64_t r8_1 = *(arg1 + 0x88)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_5) * 3
                rcx_5 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == arg2)
                    break
                
                rax_5 = *(rcx_5 + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_141ec8cf0_1
            
            if (rax_5 == 0xffffffff)
            label_141ec8cf0_1:
                rcx_5 = nullptr
    
    void* r8_2 = rcx_5 + 8
    
    if (rcx_5 == 0)
        r8_2 = nullptr
    
    if (r8_2 == 0)
        goto label_141ec8d24
    
    *(arg3 + 0x1c) = *r8_2
    sub_140b5b8a0(*r8_2, 0)
label_141ec8d55:
    *(arg3 + 8) = var_50.b
    *(arg3 + 6) = var_50:1.b
    sub_142221830(arg3 + 0x28, &var_4d)
    sub_142227570(arg3)
    rbx.b = 1

if (var_20 != 0)
    sub_140a74f90(var_20)

return zx.q(rbx.b)
