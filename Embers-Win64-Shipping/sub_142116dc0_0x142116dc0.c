// 函数: sub_142116dc0
// 地址: 0x142116dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x48)
uint64_t* rbx = arg3
int64_t rsi

if (rax u< 0xa || rax u> 0x10)
    rsi.b = 0
else
    rsi.b = 1

wchar16 const* const rax_1

if (arg2 != 0)
    if (((*(*arg2 + 0x308))(arg2) & 0x1810) != 0)
        char rax_10 = arg2[0xc].b & 4
        
        if (rsi.b == 0)
            if (rax_10 == 0)
                return 1
            
            if (*rbx != u"Sampler requires non-VirtualTexture")
                int32_t rcx_14 = 0
                rbx[1].d = 0
                
                if (*(rbx + 0xc) != 0x24)
                    sub_1405947f0(rbx, 0x24)
                    rcx_14 = rbx[1].d
                
                rbx[1].d = rcx_14 + 0x24
                
                if (rcx_14 + 0x24 s> *(rbx + 0xc))
                    sub_140594770(rbx)
                
                rax_1 = *rbx
                __builtin_memcpy(rax_1, u"Sampler requires non-VirtualText", 0x40)
                *(rax_1 + 0x40) = 0x6500720075
        else
            if (rax_10 != 0)
                return 1
            
            if (*rbx != u"Sampler requires VirtualTexture")
                int32_t rcx_11 = 0
                rbx[1].d = 0
                
                if (*(rbx + 0xc) != 0x20)
                    sub_1405947f0(rbx, 0x20)
                    rcx_11 = rbx[1].d
                
                rbx[1].d = rcx_11 + 0x20
                
                if (rcx_11 + 0x20 s> *(rbx + 0xc))
                    sub_140594770(rbx)
                
                __builtin_memcpy(*rbx, u"Sampler requires VirtualTexture", 0x40)
                uint64_t rax_12
                rax_12.b = 0
                return rax_12
    else
        int64_t arg_8 = *(arg2[2] + 0x18)
        int16_t* var_18
        sub_140b63b70(&arg_8, &var_18)
        int16_t* const r8 = &data_142d40450
        int32_t var_10
        
        if (var_10 != 0)
            r8 = var_18
        
        uint64_t var_28
        sub_140a2e390(&var_28, u"Found %s, requires Texture2D", r8)
        
        if (rbx == &var_28)
            uint64_t rcx_9 = var_28
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        else
            uint64_t rcx_8 = *rbx
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *rbx = var_28
            int32_t var_20
            rbx[1].d = var_20
            int32_t var_1c
            *(rbx + 0xc) = var_1c
            var_20.q = 0
            var_28 = 0
        
        int16_t* rcx_10 = var_18
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
            int64_t rax_9
            rax_9.b = 0
            return rax_9
else if (*arg3 != u"Found NULL, requires Texture2D")
    int32_t rcx = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0x1f)
        sub_1405947f0(rbx, (arg2 + 0x1f).d)
        rcx = rbx[1].d
    
    rbx[1].d = rcx + 0x1f
    
    if (rcx + 0x1f s> *(rbx + 0xc))
        sub_140594770(rbx)
    
    uint64_t rcx_3 = *rbx
    __builtin_memcpy(rcx_3, u"Found NULL, requires Tex", 0x30)
    *(rcx_3 + 0x30) = 0x65007200750074
    *(rcx_3 + 0x38) = 0x440032
    *(rcx_3 + 0x3c) = 0
    int64_t rax_3
    rax_3.b = 0
    return 0

rax_1.b = 0
return rax_1
