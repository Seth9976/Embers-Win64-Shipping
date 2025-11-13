// 函数: sub_140fe4600
// 地址: 0x140fe4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* r13 = arg1
int64_t rsi = sx.q(arg6)
uint64_t rdx = zx.q(arg5)
char var_158 = rdx.b
uint64_t rax_3 = rdx * 5
int32_t rbx = (&data_1439c85fc)[rax_3 * 2]
uint64_t var_138 = rax_3
int32_t var_154 = sub_140fe7330(rbx, (arg7 u>> 4).b & 1)
int32_t var_a8 = arg2
int32_t var_a4 = arg3
int32_t rax_5 = 0
int32_t var_a0 = arg4

if (test_bit(arg7, 0xc))
    rax_5 = 1

int32_t var_9c = rsi.d
int32_t var_98 = rbx
int32_t rax_6 = 8
int32_t var_94 = 0

if (test_bit(arg7, 0x10))
    rax_6 = 0x88

int32_t var_8c = 0
int32_t var_90 = rax_6
int32_t rcx_4 = arg7 & 1

if (rcx_4 != 0)
    var_90 = rax_6 | 0x20

int64_t* r12_1 = nullptr
int64_t* var_100 = nullptr
int64_t var_f8 = 0
int64_t* rcx_6 = *arg8

if (rcx_6 != 0)
    int64_t rax_9 = (*(*rcx_6 + 8))(rcx_6)
    var_f8.d = rsi.d
    
    if (rsi.d s> 0)
        sub_1405a4f90(&var_100)
        r12_1 = var_100
    
    memset(r12_1, 0, rsi << 4)
    int32_t r9 = 0
    int32_t i = 0
    
    if (rsi.d != 0)
        uint64_t r10_1 = var_138
        
        do
            int64_t r8_3 = sx.q(i) * 2
            r12_1[r8_3] = zx.q(r9) + rax_9
            uint32_t rax_13 = arg2 u>> i.b
            
            if (rax_13 u<= 1)
                rax_13 = 1
            
            uint32_t rdx_4 = arg3 u>> i.b
            int32_t rax_14 = rax_13 * (&data_1439c85f4)[r10_1 * 2]
            
            if (rdx_4 u<= 1)
                rdx_4 = 1
            
            int32_t rdx_5 = rdx_4 * rax_14
            r12_1[r8_3 + 1].d = rax_14
            uint32_t rax_16 = arg4 u>> i.b
            
            if (rax_16 u<= 1)
                rax_16 = 1
            
            *(&r12_1[r8_3] + 0xc) = rdx_5
            i += 1
            r9 += rax_16 * rdx_5
        while (i u< rsi.d)
        
        r13 = arg1

int64_t* rbx_2 = nullptr
int64_t* var_148 = nullptr
int64_t var_e8 = 0
int64_t* rcx_10 = *(r13 + 0x168)

if (*arg8 != 0)
    rbx_2 = r12_1

int32_t rax_19 = (*(*rcx_10 + 0x30))(rcx_10, &var_a8, rbx_2, &var_148)
int64_t var_1d8
int32_t var_1d0
int32_t var_1c8
int32_t var_1c0
char var_1b8
int32_t var_1b0
int32_t var_1a8
int32_t var_1a0
int32_t var_198
int32_t var_190
int32_t var_188
int32_t var_180
int64_t var_178
int32_t var_170
int32_t var_168
int64_t* var_160
int32_t rbx_3

if (rax_19 s>= 0)
    rbx_3 = var_154
else
    int32_t rcx_11
    int32_t r8_5
    int64_t r9_2
    
    if (rbx_2 == 0)
        rcx_11 = 0
        r8_5 = 0
        r9_2 = 0
    else
        rcx_11 = *(rbx_2 + 0xc)
        r8_5 = rbx_2[1].d
        r9_2 = *rbx_2
    
    rbx_3 = var_154
    var_160 = *(r13 + 0x168)
    var_168 = rcx_11
    var_170 = r8_5
    var_178 = r9_2
    var_180 = 0
    var_188 = 0
    var_190 = rax_5
    var_198 = var_8c
    var_1a0 = var_94
    var_1a8 = var_90
    var_1b0 = rsi.d
    var_1b8 = rbx_3.b
    var_1c0 = arg4
    var_1c8 = arg3
    var_1d0 = arg2
    var_1d8.d = 0x412
    sub_140ffeb30(rax_19, zx.d(var_158), 
        "Direct3DDevice->CreateTexture3D(&TextureDesc, SubResData,TextureResource.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
        var_1d8.d, var_1d0, var_1c8, var_1c0, var_1b8, var_1b0, var_1a8.b, var_1a0, var_198, 
        var_190, var_188, var_180, var_178, var_170, var_168, var_160)

int64_t* rcx_13 = *(r13 + 0x168)
int64_t* rdx_8 = var_148
int32_t var_c0 = rbx_3
int64_t var_bc = 8
int32_t var_b4 = rsi.d
int64_t* var_108 = nullptr
int32_t rax_26 = (*(*rcx_13 + 0x38))(rcx_13, rdx_8, &var_c0, &var_108, var_1d8, var_1d0, var_1c8, 
    var_1c0, var_1b8, var_1b0, var_1a8, var_1a0, var_198, var_190, var_188, var_180, var_178, 
    var_170, var_168, var_160, var_158, rcx_4)

if (rax_26 s< 0)
    var_1d8 = *(r13 + 0x168)
    sub_140fff020(rax_26, 
        "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
        0x41c)

int64_t* var_110 = nullptr

if (rcx_4.b != 0)
    int64_t* rcx_16 = *(r13 + 0x168)
    int64_t* rdx_9 = var_148
    int32_t var_d8 = rbx_3
    int64_t var_d4_1 = 8
    int32_t var_cc_1 = 0
    int32_t var_c8_1 = arg4
    int32_t rax_28 = (*(*rcx_16 + 0x48))(rcx_16, rdx_9, &var_d8, &var_110, var_1d8)
    
    if (rax_28 s< 0)
        var_1d8 = *(r13 + 0x168)
        sub_140fff020(rax_28, 
            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x42b)

int64_t* var_130 = nullptr
int32_t i_5 = 1
sub_1405a4d70(&var_130)
int64_t* r14_1 = var_130
int64_t* rcx_20 = var_110
int64_t* var_e0 = r14_1
*r14_1 = rcx_20

if (rcx_20 != 0)
    (*(*rcx_20 + 8))()

void*** result_1 = j_sub_140a82f30(0xf8)
int32_t i_3 = i_5
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* rcx_21 = var_148
    int64_t* r15_1 = var_108
    *result = &data_142d3ff08
    result[1].d = 0
    *result = &data_142ef2948
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x20) = *(arg8 + 0x10)
    result[6].d = arg8[4].d
    *(result + 0x3c) = zx.d(var_158)
    result[8].d = arg7
    result[9] = &result[0xa]
    *(result + 0x34) = rsi.d
    result[7].d = 1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef2a50
    result[0xc].d = arg2
    *(result + 0x64) = arg3
    result[0xd].d = arg4
    result[0xe] = &data_142ef5880
    result[0xf].d = 0
    *(result + 0x7c) = 0xffffffff
    result[0x10].b = 0
    result[0x11] = r13
    result[0x12] = 0
    result[0x13].d = 0
    result[0x14] = &result[0xe]
    result[0x15] = rcx_21
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 8))()
    
    result[0x16] = r15_1
    
    if (r15_1 != 0)
        (*(*r15_1 + 8))(r15_1)
    
    result[0x17] = 0
    result[0x18].d = i_3
    
    if (i_3 != 0)
        sub_1405c4a00(&result[0x17], i_3, 0)
        int64_t* r15_2 = result[0x17]
        int32_t i_4 = i_3
        int32_t i_1
        
        do
            int64_t* rcx_24 = *r14_1
            *r15_2 = rcx_24
            
            if (rcx_24 != 0)
                (*(*rcx_24 + 8))()
            
            r15_2 = &r15_2[1]
            r14_1 = &r14_1[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        r13 = arg1
    else
        *(result + 0xc4) = 0
    
    result[0x19].b = 0
    *(result + 0xcc) = 1
    __builtin_memset(&result[0x1a], 0, 0x24)
    *result = &data_142ef58a0
    result[0xe] = &data_142ef58f8

result[3] = var_e8

if (rcx_4 != 0)
    result[0xf].d = 1

int64_t* rcx_25 = result[0x15]
int64_t rax_44

if (rcx_25 != 0)
    int32_t var_80
    (*(*rcx_25 + 0x50))(rcx_25, &var_80)
    int32_t var_74
    var_1d8.d = var_74
    int32_t var_7c
    int32_t var_78
    rax_44 = sub_141998480(var_80, var_7c, var_78, *(result + 0x3c), var_1d8.d)
    result[0x13].d = rax_44.d

int64_t* r14_2

if (rcx_25 == 0 || rax_44 == 0)
    r14_2 = var_e0
else
    int32_t rax_49
    
    if (rax_44 s<= 0)
        int64_t rax_52
        int32_t rdx_16
        rdx_16:rax_52 = sx.o((0x3ff - rax_44) & 0xfffffffffffffc00)
        rax_49 = (neg.q((rax_52 + (zx.q(rdx_16) & 0x3ff)) s>> 0xa)).d
    else
        int64_t rax_47
        int32_t rdx_14
        rdx_14:rax_47 = sx.o((rax_44 + 0x3ff) & 0xfffffffffffffc00)
        rax_49 = ((rax_47 + (zx.q(rdx_14) & 0x3ff)) s>> 0xa).d
    
    char var_68
    
    if ((var_68 & 0xe0) != 0)
        data_143f0f1fc
        data_143f0f1fc += rax_49
        r12_1 = var_100
        i_3 = i_5
        r14_2 = var_130
    else
        data_143f0f1f8
        data_143f0f1f8 += rax_49
        r12_1 = var_100
        i_3 = i_5
        r14_2 = var_130

if (sub_1419767f0() != 0 && (arg7 & 0x20000000) != 0)
    int64_t rdx_18 = result[0x15]
    int64_t rcx_28 = *(r13 + 0x168)
    var_138 = 0
    sub_142c48de0(rcx_28, rdx_18, &var_138)
    uint64_t rdx_19 = var_138
    result[0x12] = rdx_19
    int64_t rcx_29 = *(r13 + 0x168)
    var_154 = 1
    sub_142c48ec0(rcx_29, rdx_19, 1, 1, &var_154)

int64_t* rcx_30 = *arg8

if (rcx_30 != 0)
    (*(*rcx_30 + 0x18))(rcx_30)

int64_t* rsi_2 = r14_2

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_31 = *rsi_2
        
        if (rcx_31 != 0)
            (*(*rcx_31 + 0x10))(rcx_31)
        
        rsi_2 = &rsi_2[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

sub_140a74f90(r14_2)
int64_t* rcx_33 = var_110

if (rcx_33 != 0)
    (*(*rcx_33 + 0x10))(rcx_33)

int64_t* rcx_34 = var_108

if (rcx_34 != 0)
    (*(*rcx_34 + 0x10))(rcx_34)

int64_t* rcx_35 = var_148

if (rcx_35 != 0)
    int64_t rdx_20 = *rcx_35
    (*(rdx_20 + 0x10))(rcx_35, rdx_20)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
