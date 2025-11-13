// 函数: sub_141fa4200
// 地址: 0x141fa4200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14220abb0(arg1)
*arg1 = &data_14328c588
arg1[0x44] = &data_14328cd08
sub_141dd7d00(arg1, 1)
*(arg1 + 0x5b) |= 1
*(arg1 + 0x5a) &= 0xfd
*(arg1 + 0x22c) = 0
*(arg1 + 0x5f) = 1
arg1[0x22].d = 0x40400000
*(arg1 + 0xf2) = 1
uint64_t rbx = data_143f3d310
int64_t* rax = sub_1425a4300()
void* rax_1
int64_t r8_1
rax_1, r8_1 = sub_140cd9110(arg1, rbx, rax, rax, 1, 0)
arg1[0x52] = rax_1
r8_1.b = 1
*(rax_1 + 0x420) = 0x420c0000
int64_t* rcx_2 = arg1[0x52]
(*(*rcx_2 + 0x620))(rcx_2, data_143f3a5b0, r8_1)
*(arg1[0x52] + 0x211) = 0
sub_141f49250(arg1[0x52], 1)
sub_141ef5320(arg1[0x52], 0)
void* rax_4 = arg1[0x52]
*(rax_4 + 0x41c) |= 4
arg1[0x26] = arg1[0x52]
uint64_t rbx_1 = data_143f3d228
int64_t* rax_6 = sub_1424ae0b0()
void* rax_8 = sub_140cd9110(arg1, rbx_1, sub_1425615e0(), rax_6, 1, 0)
int64_t rcx_6 = arg1[0x52]
arg1[0x51] = rax_8
*(rax_8 + 0xb0) = rcx_6
int64_t arg_8
TEB* gsbase

if (data_143f3d6a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3d6a8)
    
    if (data_143f3d6a8 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx_16 = data_143e1a338
            
            if (rcx_16 == 0)
                void* rax_25 = sub_140cde0b0()
                sub_140d19010(rax_25, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                arg_8 = 0
                void* rax_27 = sub_140d2dfc0(sub_140baa6d0(), rax_25, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_27
                int32_t rax_28 = *(rax_27 + 0xc)
                void* const rax_35
                
                if (rax_28 s>= data_143e1d9b4)
                    rax_35 = nullptr
                else
                    int16_t temp0_2
                    int32_t temp1_1
                    temp0_2:temp1_1 = sx.q(rax_28)
                    uint32_t rdx_12 = zx.d(temp0_2)
                    int32_t rax_30 = temp1_1 + rdx_12
                    rax_35 = *(data_143e1d9a0 + (sx.q(rax_30 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_30.w) - rdx_12) * 0x18
                
                *(rax_35 + 8) |= 0x40000000
                rcx_16 = data_143e1a338
            
            sub_140b9aa70(rcx_16, &data_143a2dc20)
            data_143a2dc28 = 1
        
        data_143a2dc20 = &data_142d491c8
        sub_140d1a380(u"/Engine/EngineMeshes/Sphere")
        int64_t var_18 = 0
        int32_t var_10
        var_10.q = 0
        sub_1405947f0(&var_18, 0x1c)
        int32_t var_10_2 = var_10 + 0x1c
        int32_t var_c
        
        if (var_10 + 0x1c s> var_c)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, u"/Engine/EngineMeshes/Sphere", 0x38)
        sub_140d304e0(&var_18, 1)
        void* rax_37 = sub_141fa2610(&var_18, 0)
        data_143a2dc30 = rax_37
        
        if (rax_37 == 0)
            sub_140d1fc00()
        
        int64_t rcx_29 = var_18
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        atexit(sub_142cfe8a0)
        _Init_thread_footer(&data_143f3d6a8)

uint64_t rbx_2 = data_143f3d318
int64_t* rax_11 = sub_1425b0750()
void* rax_12 = sub_140cd9110(arg1, rbx_2, rax_11, rax_11, 0, 0)
arg1[0x53] = rax_12

if (rax_12 != 0)
    int64_t r8_4 = *rax_12
    (*(r8_4 + 0x8a0))(rax_12, data_143a2dc30, r8_4)
    void* rax_13 = arg1[0x53]
    arg_8 = 0
    *(rax_13 + 0x20e) |= 2
    void* rax_14 = arg1[0x53]
    *(rax_14 + 0x20e) |= 4
    void* rax_15 = arg1[0x53]
    *(rax_15 + 0x20a) |= 0x10
    void* rax_16 = arg1[0x53]
    *(rax_16 + 0x20b) |= 0x40
    void* rax_17 = arg1[0x53]
    *(rax_17 + 0x20b) &= 0xef
    void* rax_18 = arg1[0x53]
    *(rax_18 + 0x20b) &= 0xdf
    void* rax_19 = arg1[0x53]
    *(rax_19 + 0x20a) &= 0xfe
    arg1[0x53][7].b = 0
    sub_141f4a650(arg1[0x53], arg1[0x26], 0)
    int64_t* rcx_12 = arg1[0x53]
    (*(*rcx_12 + 0x620))(rcx_12, data_143f3a5b0, 1)
    int64_t* rcx_13 = arg1[0x53]
    float zmm1_1[0x4] = arg1[0x52][0x84].d
    zmm1_1[0] = zmm1_1[0] * 0.00625000009f
    float var_10_1 = zmm1_1[0]
    int64_t var_28 = (_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)).q
    float var_20_1 = var_10_1
    sub_141f48ee0(rcx_13, &var_28)
    sub_141f256b0(arg1[0x53], 0)
    sub_141ef5320(arg1[0x53], 0)

arg1[0x54].d |= 1
arg1[0x50].d = 0x42340000
*(arg1 + 0x284) = 0x42340000
return arg1
