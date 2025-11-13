// 函数: sub_1417463d0
// 地址: 0x1417463d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38)
sub_140a2e390(arg2, u"Planes %d, SurfaceParticles %d", zx.q(*(arg1 + 0x18)))

if (data_143ef7298 s> 0)
    sub_140a20b00(arg2, ", [Simplifying]", 0xf)
    int64_t* var_18 = nullptr
    int32_t i_2 = 0
    sub_1417562f0(arg1 + 0x10, &var_18, arg1 + 0x20, arg1 + 0x60)
    int32_t i_1 = i_2
    int64_t* rbx_1 = var_18
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (var_18 != 0)
        sub_140a74f90(var_18)

return arg2
