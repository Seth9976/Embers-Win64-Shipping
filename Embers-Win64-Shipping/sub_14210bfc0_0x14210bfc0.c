// 函数: sub_14210bfc0
// 地址: 0x14210bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bcd0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d33d0
TEB* gsbase

if (data_143f48e48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48e48)
    
    if (data_143f48e48 == 0xffffffff)
        sub_1405ab8c0(&data_143f48e00)
        data_143f48e00 = &data_142d491c8
        sub_140d1a380(u"/Engine/EngineResources/DefaultVolumeTexture")
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1405947f0(&var_18, 0x2d)
        int32_t rax_4 = var_10_1 + 0x2d
        var_10_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, u"/Engine/EngineResources/DefaultVolumeTexture", 0x5a)
        sub_140d304e0(&var_18, 1)
        void* rax_5 = sub_142104ef0(&var_18, 0)
        data_143f48e10 = rax_5
        
        if (rax_5 == 0)
            sub_140d1fc00()
        
        int64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        _vfprintf_p_l(&data_143f48e18, u"Texture", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48e30, u"Parameters", u"MaterialExpression")
        atexit(sub_142d05020)
        _Init_thread_footer(&data_143f48e48)

arg1[8] = data_143f48e10
return arg1
