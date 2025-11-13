// 函数: sub_141dd3410
// 地址: 0x141dd3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
uint64_t* result

if (arg2 != 0)
    *(arg1 + 0x80) = arg2
    *(arg1 + 0x88) = arg3
    
    if (sub_141e66a60(arg1 + 0x18, arg2, arg3, nullptr, 0, &arg_10).b == 0)
        result.b = 0
    else
        uint32_t rcx_9 = zx.d(**(arg1 + 0x40))
        result = *(arg1 + 0x38)
        *(arg1 + 0xa4) = rcx_9
        uint64_t r10_1 = zx.q(*result)
        *(arg1 + 0xa0) = r10_1.d
        
        if (rcx_9 != 2)
            if (rcx_9 == 1)
                uint64_t rax_18 = zx.q(*(arg1 + 0x68))
                *(arg1 + 0x9c) = rax_18.d
                *(arg1 + 0x90) = 0
                *(arg1 + 0xc4) = divu.dp.q(0:(rax_18 u>> 1), r10_1)
                *(arg1 + 0x8c) = 0
                *(arg1 + 0x98) = 0
                *(arg1 + 0xa8) = 0
                *(arg1 + 0x138) = 0
                goto label_141dd367e
            
            result.b = 0
        else
            void* rcx_10 = arg_10.q
            *(arg1 + 0xc4) = *(rcx_10 + 0x32)
            *(arg1 + 0xc8) = zx.d(*(rcx_10 + 0x12))
            uint64_t r8_2 = zx.q(**(arg1 + 0x28))
            *(arg1 + 0x94) = r8_2.d
            *(arg1 + 0x90) = r8_2.d
            int32_t r9 = ((r8_2 << 2) + -0xffffffffffffffe8).d
            *(arg1 + 0x8c) = r9
            int64_t rcx_12 = *(arg1 + 0xa8)
            *(arg1 + 0x98) = divu.dp.d(0:0x2000, ((r8_2 << 1) + -0xfffffffffffffff4).d) * r9
            int32_t r9_1 = r9 * r10_1.d
            *(arg1 + 0x9c) = divu.dp.d(0:(*(arg1 + 0x68) - 1 + r8_2.d), r8_2.d) * r9
            int64_t rax_12 = sub_140a84c80(rcx_12, zx.q(r9_1), 0, r9_1)
            int32_t rcx_13 = *(arg1 + 0x90)
            *(arg1 + 0xa8) = rax_12
            *(arg1 + 0x138) =
                divu.dp.d(0:(divu.dp.d(0:(*(arg1 + 0x68) - 1 + rcx_13), rcx_13)), *(arg1 + 0xa0))
        label_141dd367e:
            
            if (arg4 != 0)
                int64_t rdx_7 = zx.q(**(arg1 + 0x18))
                *(arg4 + 8) = rdx_7.d
                *(arg4 + 4) = zx.d(**(arg1 + 0x38))
                *(arg4 + 0xc) = *(arg1 + 0x9c)
                *(arg4 + 0x10) = float.s(zx.q(*(arg1 + 0xc4))) / float.s(rdx_7)
            
            *(arg1 + 0xb0) = *(arg1 + 0x8c) u>> 1
            result.b = 1
            *(arg1 + 0x134) = 0
            *(arg1 + 0xc0) = 0
else
    uint64_t var_28
    uint64_t var_18
    int32_t rbx_2
    
    if (arg4 == 0)
        var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 8)
        int32_t rax = var_20_1 + 8
        var_20_1 = rax
        
        if (rax s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, u"Unknown", 0x10)
        result = &var_28
        rbx_2 = 2
    else
        int32_t rbx_1 = *(arg4 + 0x20)
        int64_t rdi_1 = *(arg4 + 0x18)
        var_18 = 0
        int32_t var_10_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_18, rbx_1, 0)
            memcpy(var_18, rdi_1, rbx_1 * 2)
            result = &var_18
            rbx_2 = 1
        else
            int32_t var_c_1 = 0
            result = &var_18
            rbx_2 = 1
    
    uint64_t rdi_2 = *result
    *result = 0
    result[1] = 0
    
    if ((rbx_2.b & 2) != 0)
        uint64_t rcx_5 = var_28
        rbx_2 &= 0xfffffffd
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if ((rbx_2.b & 1) != 0)
        uint64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    result.b = 0

return result
