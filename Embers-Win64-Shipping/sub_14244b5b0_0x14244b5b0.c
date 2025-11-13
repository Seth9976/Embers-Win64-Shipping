// 函数: sub_14244b5b0
// 地址: 0x14244b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"Sprite", 1)
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, nullptr)
sub_142076470(arg1)
*arg1 = &data_14334d118
arg1[0x44] = &data_14334d788
arg1[0x49] = 0
__builtin_memset(&arg1[0x4b], 0, 0x20)
arg1[0x53].b = 1
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56].d = 0x3f000000
*(arg1 + 0x2b4) = 0x40000000
sub_141e90730(&arg1[0x57])
uint64_t rcx_5 = zx.q(data_14401b1a0)
*(arg1 + 0x304) = 0
*(arg1 + 0x306) = 0
*(arg1 + 0x314) = data_143dbb1f8.q
int32_t rax_1 = data_143dbb200
*(arg1 + 0x31c) = rax_1
arg1[0x61] = *(arg1 + 0x314)
arg1[0x62].d = rax_1
arg1[0x64].b = 0
arg1[0x66] = data_143dbb1f8.q
int32_t rax_2 = data_143dbb200
arg1[0x67].d = rax_2
*(arg1 + 0x324) = arg1[0x66]
*(arg1 + 0x32c) = rax_2
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x33c) = 0
arg1[0x68].d = 2
__builtin_memset(&arg1[0x6a], 0, 0x20)
int64_t rcx_6 = *(ThreadLocalStoragePointer + (rcx_5 << 3))
__builtin_memset(&arg1[0x70], 0, 0x20)

if (data_143f5ed60 s> *(0x14 + rcx_6))
    _Init_thread_header(&data_143f5ed60)
    
    if (data_143f5ed60 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx_8 = data_143e1a338
            
            if (rcx_8 == 0)
                void* rax_10 = sub_140cde0b0()
                sub_140d19010(rax_10, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                arg_8 = 0
                void* rax_12 = sub_140d2dfc0(sub_140baa6d0(), rax_10, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_12
                int32_t rax_13 = *(rax_12 + 0xc)
                void* const rax_20
                
                if (rax_13 s>= data_143e1d9b4)
                    rax_20 = nullptr
                else
                    int16_t temp0_2
                    int32_t temp1_1
                    temp0_2:temp1_1 = sx.q(rax_13)
                    uint32_t rdx_5 = zx.d(temp0_2)
                    int32_t rax_15 = temp1_1 + rdx_5
                    rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_15.w) - rdx_5) * 0x18
                
                *(rax_20 + 8) |= 0x40000000
                rcx_8 = data_143e1a338
            
            sub_140b9aa70(rcx_8, &data_143a30878)
            data_143a30880 = 1
        
        data_143a30878 = &data_142d491c8
        sub_140d1a380(/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C")
        int64_t var_18 = 0
        int32_t var_10
        var_10.q = 0
        sub_1405947f0(&var_18, 0x4c)
        int32_t var_10_2 = var_10 + 0x4c
        int32_t var_c
        
        if (var_10 + 0x4c s> var_c)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, 
            /Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C", 0x98)
        sub_140d304e0(&var_18, 1)
        void* rax_22 = sub_14244b0e0(&var_18, 0)
        data_143a30888 = rax_22
        
        if (rax_22 == 0)
            sub_140d1fc00()
        
        int64_t rcx_21 = var_18
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        atexit(sub_142d11940)
        _Init_thread_footer(&data_143f5ed60)

char rax_4 = *(arg1 + 0x22d) & 0x43
arg1[0x46] = 0
*(arg1 + 0x244) = 0xc97ffff0
*(arg1 + 0x22d) = rax_4 | 0x1c
arg1[0x49] = data_143a30888
arg1[0x48].d = 0x42c80000
arg1[0x4b] = sub_14249bc70()
arg1[0x4e] = sub_1424b0d70()
*(arg1 + 0x5b) |= 1
arg1[0xb].b |= 8
*(arg1 + 0x5f) = 1
arg1[0x5d].d = 0x3f800000
*(arg1 + 0x2ec) = 0x3f800000
arg1[0x5e].d = 0x3f800000
arg1[0x4f].d = 0x400
sub_141dd84c0(arg1, 0)
*(arg1 + 0x22d) &= 0xfd
*(arg1 + 0x59) |= 0x10
*(arg1 + 0x27c) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
int32_t var_10_1 = 0x3f800000
*(arg1 + 0x284) = 0x3f800000
arg1[0x51].d = 0x44160000
*(arg1 + 0x28c) = 0x469c4000
arg1[0x52].d = 0x3f4ccccd
arg1[0x45].d = 0xc8
*(arg1 + 0x22c) = 0
arg1[0x6f].d = 0xa
int64_t rax_8 = sub_142481170()
arg1[0x70] = rax_8
arg1[0x73] = rax_8
return arg1
