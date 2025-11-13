// 函数: sub_1408c8a50
// 地址: 0x1408c8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bcd0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_142e09300
TEB* gsbase

if (data_143cebb80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143cebb80)
    
    if (data_143cebb80 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx = data_143e1a338
            
            if (rcx == 0)
                void* rax_4 = sub_140cde0b0()
                sub_140d19010(rax_4, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_8 = 0
                void* rax_6 = sub_140d2dfc0(sub_140baa6d0(), rax_4, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_6
                int32_t rax_7 = *(rax_6 + 0xc)
                void* const rax_14
                
                if (rax_7 s>= data_143e1d9b4)
                    rax_14 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_7)
                    uint32_t rdx_4 = zx.d(temp0_1)
                    int32_t rax_9 = temp1_1 + rdx_4
                    rax_14 = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_9.w) - rdx_4) * 0x18
                
                *(rax_14 + 8) |= 0x40000000
                rcx = data_143e1a338
            
            sub_140b9aa70(rcx, &data_143983600)
            data_143983608 = 1
        
        data_143983600 = &data_142e09598
        sub_140d1a380(u"/Engine/EngineResources/DefaultTexture")
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1405947f0(&var_18, 0x27)
        int32_t rax_15 = var_10_1 + 0x27
        var_10_1 = rax_15
        
        if (rax_15 s> 0)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, u"/Engine/EngineResources/DefaultTexture", 0x4e)
        sub_140d304e0(&var_18, 1)
        void* rax_16 = sub_1408c87c0(&var_18, 0)
        data_143983610 = rax_16
        
        if (rax_16 == 0)
            sub_140d1fc00()
        
        int64_t rcx_13 = var_18
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        _vfprintf_p_l(&data_143983618, u"Texture", u"MaterialExpression")
        _vfprintf_p_l(&data_143983630, u"Parameters", u"MaterialExpression")
        atexit(sub_142cb61c0)
        _Init_thread_footer(&data_143cebb80)

arg1[8] = data_143983610
return arg1
