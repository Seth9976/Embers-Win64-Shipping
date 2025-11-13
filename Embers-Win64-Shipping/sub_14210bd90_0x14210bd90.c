// 函数: sub_14210bd90
// 地址: 0x14210bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bcd0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d2e98
TEB* gsbase

if (data_143f48db8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48db8)
    
    if (data_143f48db8 == 0xffffffff)
        sub_1405ab8c0(&data_143f48d70)
        data_143f48d70 = &data_142d491c8
        sub_140d1a380(u"/Engine/EngineResources/DefaultTextureCube")
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1405947f0(&var_18, 0x2b)
        int32_t rax_4 = var_10_1 + 0x2b
        var_10_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, u"/Engine/EngineResources/DefaultTextureCube", 0x56)
        sub_140d304e0(&var_18, 1)
        void* rax_5 = sub_142104c50(&var_18, 0)
        data_143f48d80 = rax_5
        
        if (rax_5 == 0)
            sub_140d1fc00()
        
        int64_t rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        _vfprintf_p_l(&data_143f48d88, u"Texture", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48da0, u"Parameters", u"MaterialExpression")
        atexit(sub_142d04f10)
        _Init_thread_footer(&data_143f48db8)

arg1[8] = data_143f48d80
return arg1
