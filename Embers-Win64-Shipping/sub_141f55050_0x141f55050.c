// 函数: sub_141f55050
// 地址: 0x141f55050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_1

if (arg3 == 0)
    rsi_1 = arg1 + 0x408
    sub_141ae6560(arg2 + 0x118, rsi_1)
    sub_141f51ba0(arg2 + 0x130, rsi_1 + 0x18)
    sub_141ae6560(arg2 + 0x148, rsi_1 + 0x30)
    sub_141f51b20(arg2 + 0x160, rsi_1 + 0x48)
    *(arg2 + 0x178) = *(rsi_1 + 0x60)
else
    if (*(arg1 + 0x4df) != 0)
        return &__return_addr
    
    rsi_1 = arg1 + 0x408
    uint32_t rax
    
    if (sub_141f523e0(arg2 + 0x118, rsi_1).b == 0)
    labelid_19:
        rax.b = 1
    else
        int32_t i_5 = *(arg2 + 0x138)
        
        if (i_5 != *(rsi_1 + 0x20))
        label_141f55145:
            rax.b = 1
        else
            float (* rdx_1)[0x4] = *(rsi_1 + 0x18)
            
            if (i_5 != 0)
                void* rcx_2 = *(arg2 + 0x130) + 0x20
                int32_t i
                
                do
                    if ((*rdx_1)[0] f!= *(rcx_2 - 0x20))
                        goto label_141f55145_2
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(*(rcx_2 - 0x10), rdx_1[1], 0))
                            != 0xf)
                        goto label_141f55145_2
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(rdx_1[2], *rcx_2, 0)) != 0xf)
                        goto label_141f55145_2
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(*(rcx_2 + 0x10), rdx_1[3], 0))
                            != 0xf)
                        goto label_141f55145_2
                    
                    if (*(rcx_2 + 0x20) != rdx_1[4][0].b)
                        goto label_141f55145_2
                    
                    rdx_1 = &rdx_1[5]
                    rcx_2 += 0x50
                    i = i_5
                    i_5 -= 1
                while (i != 1)
            
            rax = zx.d(*(arg2 + 0x140))
            
            if (rax.b != *(rsi_1 + 0x28)
                || (rax.b != 0 && (*(rsi_1 + 0x2c))[0] f!= *(arg2 + 0x144)))
            label_141f55145_1:
                rax.b = 1
            else if (sub_141f523e0(arg2 + 0x148, rsi_1 + 0x30).b == 0)
            label_141f55145_2:
                rax.b = 1
            else
                rax.b = 0
    
    void* const i_4 = nullptr
    *(arg1 + 0x4de) = rax.b
    int64_t var_50 = 0
    int32_t var_48_1 = 0
    void* rax_1 = sub_1425a2960()
    void var_58
    int64_t rbx_2 = *sub_140b58260(&var_58, u"SplineCurves", 1)
    
    if (rbx_2 != 0)
        void* var_40 = rax_1
        void* const i_2
        
        if (rax_1 == 0)
            i_2 = nullptr
        else
            i_2 = *(rax_1 + 0x50)
        
        int32_t var_30_1 = 0xffffffff
        int16_t var_2c_1 = 0x101
        char var_2a_1 = 0
        sub_1406328d0(&var_40)
        void* i_3
        
        for (void* const i_1 = i_2; i_1 != 0; i_1 = i_3)
            int64_t rcx_6 = *(i_1 + 0x28)
            int64_t arg_20 = rcx_6
            
            if (rcx_6 == rbx_2)
                i_4 = i_1
                break
            
            i_3 = *(i_1 + 0x20)
            sub_1406328d0(&var_40)
    
    int64_t rbx_3 = sx.q(var_48_1)
    int32_t rax_3 = (rbx_3 + 1).d
    var_48_1 = rax_3
    
    if (rax_3 s> 0)
        sub_1405a4d70(&var_50)
    
    *(var_50 + (rbx_3 << 3)) = i_4
    sub_141ef1740(arg1, &var_50)
    int64_t rcx_10 = var_50
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

char rax_7 = *(arg2 + 0xa8)

if (rax_7 != 0)
    sub_141ae6560(rsi_1, arg2 + 0xb0)
    sub_141f51ba0(rsi_1 + 0x18, arg2 + 0xc8)
    sub_141ae6560(rsi_1 + 0x30, arg2 + 0xe0)
    sub_141f51b20(rsi_1 + 0x48, arg2 + 0xf8)
    *(rsi_1 + 0x60) = *(arg2 + 0x110)
    *(arg1 + 0x4de) = 0
    rax_7 = *(arg2 + 0xa8)

*(arg1 + 0x4dd) = rax_7
return sub_141f77550(arg1)
