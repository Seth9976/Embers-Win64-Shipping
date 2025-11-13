// 函数: sub_1408612e0
// 地址: 0x1408612e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408623c0(arg1)
int64_t result = sub_140d3c6e0(arg1 + 0x20)

if (((*(arg2 + 0x6b8) u>> 2).b & 1) == 0)
    if (data_143ce42c4 != 0)
    label_140861347:
        int64_t var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 0x1c)
        int32_t rax = var_20_1 + 0x1c
        var_20_1 = rax
        
        if (rax s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, u"System data being unpaused.", 0x38)
        sub_1407ebce0(*(arg1 + 0xd8), *(arg2 + 0x10), 1)
        int64_t rcx_5 = var_28
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    else if (result != 0 && *(result + 0x31) != 0)
        goto label_140861347
    
    int64_t rbx_1 = sx.q(*(arg2 + 0x10))
    sub_14080f1a0(*(arg1 + 0xd8), *(arg1 + 0x278), rbx_1.d, 1)
    int64_t r14_1 = sx.q(*(arg1 + 0xcb8))
    int32_t rax_1 = (r14_1 + 1).d
    *(arg1 + 0xcb8) = rax_1
    
    if (rax_1 s> *(arg1 + 0xcbc))
        sub_1405a4d70(arg1 + 0xcb0)
    
    *(*(arg1 + 0xcb0) + (r14_1 << 3)) = arg2
    *(arg2 + 0x10) = r14_1.d
    int32_t rax_3 = *(arg1 + 0xcd8)
    int32_t rdx_7 = rax_3 - rbx_1.d - 1
    
    if (rdx_7 s>= 1)
        rdx_7 = 1
    
    if (rdx_7 != 0)
        void* rcx_8 = *(arg1 + 0xcd0)
        memcpy(rcx_8 + (rbx_1 << 3), rcx_8 + (sx.q(rax_3 - rdx_7) << 3), rdx_7 << 3)
        rax_3 = *(arg1 + 0xcd8)
    
    *(arg1 + 0xcd8) = rax_3 - 1
    result = sub_1405c53d0(arg1 + 0xcd0)
    
    if (rbx_1.d s>= 0 && rbx_1.d s< *(arg1 + 0xcd8))
        result = *(arg1 + 0xcd0)
        *(*(result + (rbx_1 << 3)) + 0x10) = rbx_1.d

return result
