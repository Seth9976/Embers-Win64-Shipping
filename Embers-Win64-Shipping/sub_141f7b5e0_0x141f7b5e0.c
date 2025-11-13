// 函数: sub_141f7b5e0
// 地址: 0x141f7b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143283cd0
arg1[5] = &data_143284530
arg1[0x3e] = &data_143284560
sub_140a96170(&arg1[0x81])
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3ca30 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3ca30)
    
    if (data_143f3ca30 == 0xffffffff)
        sub_1405ab8c0(&data_143f3c9e0)
        data_143f3c9f0 = 0
        data_143f3c9e0 = &data_1432847b0
        data_143f3ca00 = 0
        data_143f3c9f8 = u"/Engine/EngineFonts/RobotoDistanceField"
        sub_1405ab8c0(&data_143f3ca08)
        data_143f3ca18 = 0
        data_143f3ca08 = &data_1432847b0
        data_143f3ca28 = 0
        data_143f3ca20 = u"/Engine/EngineMaterials/DefaultTextMaterialOpaque"
        atexit(sub_142cfd7f0)
        _Init_thread_footer(&data_143f3ca30)

if (data_143f3ca48 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3ca48)
    
    if (data_143f3ca48 == 0xffffffff)
        sub_141f7a3c0(&data_143f3ca38)
        atexit(sub_142cfd9b0)
        _Init_thread_footer(&data_143f3ca48)

*(arg1 + 0x3a) &= 0xfd
*(arg1 + 0x89) &= 0xf7
void var_38
int64_t* rax_3 = _vfprintf_p_l(&var_38, u"Text", u"TextRenderComponent")
int64_t rdx = arg1[0x81]
int64_t rbx_1 = -1
arg1[0x81] = *rax_3
*rax_3 = rdx
int64_t rdx_1 = arg1[0x82]
arg1[0x82] = rax_3[1]
rax_3[1] = rdx_1
arg1[0x83].d = rax_3[2].d
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rax_7 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_30 + 8))(var_30, 1)

void* rax_10 = data_143f3c9f0

if (rax_10 == 0)
    int64_t rcx_7 = data_143f3c9f8
    
    if (rcx_7 != 0)
        sub_140d1a380(rcx_7)
        int16_t* r14_1 = data_143f3c9f8
        int32_t rdx_2 = 0
        int32_t var_50_1 = 0
        int32_t rcx_8 = 0
        int32_t var_4c_1 = 0
        int64_t var_58 = 0
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (r14_1[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_58, rdi_2.d + 1)
                rcx_8 = var_4c_1
                rdx_2 = var_50_1
            
            int32_t rax_9 = rdi_2.d + 1 + rdx_2
            int32_t var_50_2 = rax_9
            
            if (rax_9 s> rcx_8)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58, r14_1, (rdi_2.d + 1) * 2)
        
        rdx_2.b = 1
        sub_140d304e0(&var_58, rdx_2.b)
        rax_10 = sub_141b71b30(&var_58, data_143f3ca00)
        data_143f3c9f0 = rax_10
        
        if (rax_10 == 0 && (data_143f3ca00 & 0x2002) == 0)
            data_143f3c9f8
            sub_140d1fc00()
            rax_10 = data_143f3c9f0
        
        int64_t rcx_15 = var_58
        data_143f3c9f8 = 0
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
            rax_10 = data_143f3c9f0

arg1[0x85] = rax_10
void* rax_11 = data_143f3ca18

if (rax_11 == 0)
    int64_t rcx_16 = data_143f3ca20
    
    if (rcx_16 != 0)
        sub_140d1a380(rcx_16)
        int16_t* rdi_4 = data_143f3ca20
        int32_t rdx_6 = 0
        int32_t var_40_1 = 0
        int32_t rcx_17 = 0
        int32_t var_3c_1 = 0
        int64_t var_48 = 0
        
        if (rdi_4 != 0 && *rdi_4 != 0)
            do
                rbx_1 += 1
            while (rdi_4[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rcx_17 = var_3c_1
                rdx_6 = var_40_1
            
            int32_t rax_12 = rbx_1.d + 1 + rdx_6
            int32_t var_40_2 = rax_12
            
            if (rax_12 s> rcx_17)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, rdi_4, (rbx_1.d + 1) * 2)
        
        rdx_6.b = 1
        sub_140d304e0(&var_48, rdx_6.b)
        rax_11 = sub_1405a90a0(&var_48, data_143f3ca28)
        data_143f3ca18 = rax_11
        
        if (rax_11 == 0 && (data_143f3ca28 & 0x2002) == 0)
            data_143f3ca20
            sub_140d1fc00()
            rax_11 = data_143f3ca18
        
        int64_t rcx_24 = var_48
        data_143f3ca20 = 0
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
            rax_11 = data_143f3ca18

arg1[0x84] = rax_11
sub_1422ac390(arg1, data_143f3a590, 1)
*(arg1 + 0x434) = data_14399f630
arg1[0x87].d = 0x3f800000
*(arg1 + 0x43c) = 0x3f800000
arg1[0x89] = 0
arg1[0x86].w = 0x200
sub_141f256b0(arg1, 0)
int64_t* rcx_27 = arg1[0x85]
float zmm0
float zmm1

if (rcx_27 == 0)
    zmm1 = 0.0333333351f
    zmm0 = 30f
else
    sub_140cd85e0(rcx_27)
    zmm0 = sub_142005cc0(arg1[0x85])
    zmm1 = 1f / zmm0

arg1[0x88].d = zmm0
*(arg1 + 0x444) = zmm1
return arg1
