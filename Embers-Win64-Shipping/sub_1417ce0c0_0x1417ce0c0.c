// 函数: sub_1417ce0c0
// 地址: 0x1417ce0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_142fcb880
arg1[0x83].d = 0x101
arg1[5] = &data_142fcc0e0
arg1[0x3e] = &data_142fcc110
arg1[0x81] = &data_142fcc168
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[0x84], 0, 0x18)
int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0x88].w = 0
__builtin_memset(&arg1[0x89], 0, 0x30)
arg1[0x8f] = 2

if (data_143ef8908 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143ef8908)
    
    if (data_143ef8908 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx_2 = data_143e1a338
            
            if (rcx_2 == 0)
                void* rax_3 = sub_140cde0b0()
                sub_140d19010(rax_3, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_8 = 0
                void* rax_5 = sub_140d2dfc0(sub_140baa6d0(), rax_3, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_5
                int32_t rax_6 = *(rax_5 + 0xc)
                void* const rax_13
                
                if (rax_6 s>= data_143e1d9b4)
                    rax_13 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_6)
                    uint32_t rdx_2 = zx.d(temp0_1)
                    int32_t rax_8 = temp1_1 + rdx_2
                    rax_13 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_8.w) - rdx_2) * 0x18
                
                *(rax_13 + 8) |= 0x40000000
                rcx_2 = data_143e1a338
            
            sub_140b9aa70(rcx_2, &data_1439b99d8)
            data_1439b99e0 = 1
        
        data_1439b99d8 = &data_142d491c8
        sub_140d1a380(u"/Engine/EngineDebugMaterials/WireframeMaterial")
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1405947f0(&var_18, 0x2f)
        int32_t rax_14 = var_10_1 + 0x2f
        var_10_1 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, /Engine/EngineDebugMaterials/WireframeMaterial", 0x5e)
        sub_140d304e0(&var_18, 1)
        void* rax_15 = sub_1405a9340(&var_18, 0)
        data_1439b99e8 = rax_15
        
        if (rax_15 == 0)
            sub_140d1fc00()
        
        int64_t rcx_15 = var_18
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        atexit(sub_142ceb5a0)
        _Init_thread_footer(&data_143ef8908)

arg1[0x87] = data_1439b99e8
return arg1
