// 函数: sub_140fd0da0
// 地址: 0x140fd0da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t var_50 = __security_cookie ^ &var_1e8
void* r14 = arg1
int32_t rbx_1 = arg10 & 0x1000000
int32_t r12

if (rbx_1 == 0)
    r12 = (&data_1439c85fc)[zx.q(arg7) * 0xa]
else
    r12 = 0x57

int32_t rax_4 = sub_140fe7330(r12, (arg10 u>> 4).b & 1)
int32_t r8 = arg9

if (r8 u> 8 || rbx_1 != 0)
    r8 = 1
    arg9 = 1

int32_t rcx_2 = 6

if (r8 u<= 1)
    rcx_2 = 4

int32_t rax_5 = 5

if (r8 u<= 1)
    rax_5 = 3

int32_t var_17c = rax_5
bool r10

if (arg8 u>= 1 && arg2 == arg3 && 1 << (arg8.b - 1) == arg2)
    r10 = r8 u<= 1

if (arg8 u< 1 || arg2 != arg3 || 1 << (arg8.b - 1) != arg2 || rbx_1 != 0)
    r10 = false

int32_t rcx_5 = arg10 & 0x40000
int32_t r9_1 = sbb.d(1, 1, rcx_5 != 0) & 0x20000
int32_t r8_2 = sbb.d(r8, r8, rcx_5 != 0) & 3
int32_t rdx_4 = arg10 & 0x20

if (rdx_4 != 0)
    r9_1 = 0x10000
    r8_2 = 3

int32_t var_84 = r8_2
bool rcx_7 = false
int32_t var_7c = r9_1
int32_t var_90 = r12

if (rdx_4 == 0)
    rcx_7 = rcx_5 == 0

bool r11_1 = false
int32_t var_a0 = arg2
char r12_1 = 0
int32_t var_9c = arg3
uint32_t rdx_5 = zx.d(rcx_7)
uint32_t r8_4 = rdx_5 << 3
uint32_t r9_3 = zx.d(arg6) << 2
int32_t var_8c = arg9
char rax_14 = 0
int32_t var_98 = arg8

if (arg7 != 0x43)
    rax_14 = rdx_5.b

int32_t var_88 = 0
uint32_t var_80 = r8_4

if ((arg10 & 0x4000) == 0)
    r12_1 = rax_14

uint32_t var_78 = r9_3
char var_14c = r12_1

if (rbx_1 != 0)
    r9_3 |= 2
    uint32_t var_78_1 = r9_3

int32_t rcx_11 = arg10 & 0x1000

if (rcx_11 != 0)
    int32_t var_78_2 = r9_3 | 1

bool rdx_6 = false

if (rcx_11 == 0)
    rdx_6 = r10

rcx_11.b = 0
r10 = false
char var_1a5 = 0
char var_1a6 = 0
uint32_t var_80_1

if ((arg10.b & 1) != 0)
label_140fd0fee:
    r8_4 |= 0x20
    rcx_11.b = 1
    var_80_1 = r8_4
else if ((arg10.b & 4) != 0)
    r10 = true
    r8_4 |= 0x40
    var_1a6 = 1
    var_80_1 = r8_4
else if ((arg10.b & 2) != 0)
    if (((arg7 - 0xb) & 0xf6) != 0 || arg7 == 0x13)
        goto label_140fd0fee
    
    r10 = true
    r8_4 |= 0x40
    var_1a6 = 1
    var_80_1 = r8_4
uint32_t r9_5 = 0

if (arg7 != 0x43)
    r9_5 = zx.d(rcx_11.b)

uint32_t var_158 = r9_5
int32_t rcx_13 = arg10 & 0x10000

if (rcx_13 != 0)
    r8_4 |= 0x80
    uint32_t var_80_2 = r8_4

if (rcx_13 == 0)
    r11_1 = rdx_6

bool var_144 = r11_1

if (r10 != 0)
    int32_t rdx_8 = arg10 & 8
    
    if (rdx_8 == 0)
        r8_4 &= 0xfffffff7
        uint32_t var_80_3 = r8_4
    
    char rcx_14 = 0
    
    if (rdx_8 != 0)
        rcx_14 = r12_1
    
    var_14c = rcx_14
    r11_1 = false
    var_144 = r11_1
else if (r9_5.b != 0 || arg6 != 0 || arg5 != arg6)
    r11_1 = false
    var_144 = r11_1

int32_t var_19c_1 = arg10 & 0xffbfffff
int64_t var_b0
int64_t rax_21 = var_b0
int512_t zmm0
zmm0.o = zx.o(0)

if (r11_1 != 0)
    rax_21 = 0

int64_t var_d0 = 0
int64_t* var_188 = nullptr
int64_t* var_108
__builtin_memset(&var_108, 0, 0x18)
int64_t* r13_1 = nullptr
int64_t* rcx_16 = *arg11
int32_t i_5 = 0
int64_t* var_170
__builtin_memset(&var_170, 0, 0x18)
int32_t r12_2 = 0
int32_t i_6 = 0
int64_t var_b0_1 = rax_21
int128_t var_70
__builtin_memset(&var_70, 0, 0x20)
uint64_t i_7
int64_t var_160
int64_t* var_100
int64_t* rbx_4

if (rcx_16 != 0)
    int64_t rax_23 = (*(*rcx_16 + 8))(zmm0, 0, r8_4)
    int32_t rbx_3 = arg8 * arg4
    int64_t var_f8
    var_f8.d = rbx_3
    
    if (rbx_3 s> 0)
        sub_1405a4f90(&var_100)
    
    rbx_4 = var_100
    memset(rbx_4, 0, sx.q(rbx_3) << 4)
    uint64_t i_4 = zx.q(arg4)
    int32_t r15_1 = 0
    
    if (i_4.d != 0)
        char r14_1 = arg7
        int32_t rsi_1 = 0
        i_7 = i_4
        uint64_t i
        
        do
            int32_t rbx_5 = 0
            int32_t r11_2 = 0
            
            if (arg8 != 0)
                uint64_t r13_2 = zx.q(r14_1) * 5
                
                do
                    char rcx_19 = r11_2.b
                    uint32_t temp0_1 = divu.dp.d(0:(arg2 u>> rcx_19), *((r13_2 << 3) + 0x1439c85e8))
                    uint32_t r10_1 = temp0_1
                    
                    if (temp0_1 u<= 1)
                        r10_1 = 1
                    
                    uint32_t temp0_2 =
                        divu.dp.d(0:(arg3 u>> rcx_19), *((r13_2 << 3) + &data_1439c85ec))
                    uint32_t r9_6 = temp0_2
                    
                    if (temp0_2 u<= 1)
                        r9_6 = 1
                    
                    int64_t r8_8 = sx.q(rsi_1 + r11_2) * 2
                    rbx_4[r8_8] = zx.q(rbx_5 + r15_1) + rax_23
                    rbx_4[r8_8 + 1].d = (&data_1439c85f4)[r13_2 * 2] * r10_1
                    int64_t rcx_23 = sx.q(r11_2)
                    r11_2 += 1
                    int64_t rcx_24 = rcx_23 * 2
                    *(&rbx_4[r8_8] + 0xc) = r9_6 * r10_1 * rbx_4[rcx_24 + 1].d
                    rbx_5 += r9_6 * rbx_4[rcx_24 + 1].d
                while (r11_2 u< arg8)
                
                i_4 = i_7
                r14_1 = arg7
            
            r15_1 += rbx_5
            rsi_1 += arg8
            i = i_4
            i_4 -= 1
            i_7 = i_4
        while (i != 1)
        i_5 = i_6
        r14 = arg1
        r12_2 = var_160:4.d
        r13_1 = var_170
        rbx_4 = var_100

if (rcx_16 == 0 || *arg11 == 0)
    rbx_4 = nullptr

int64_t* rcx_25 = var_188

if (rcx_25 != 0)
    (*(*rcx_25 + 0x10))(rcx_25)

uint32_t rax_36 = zx.d(arg7)
int64_t** var_1c8 = &var_188
int64_t var_f0
var_f0.d = rax_36
sub_140ffcce0(*(r14 + 0x168), rax_36, &var_a0, rbx_4, var_1c8)
int64_t* var_168

if (var_158.b != 0)
    int32_t rsi_2 = arg8
    int32_t r15_2 = 0
    
    if (rsi_2 != 0)
        int32_t rax_38 = var_19c_1 & 0x800000
        int32_t var_1a0 = rax_38
        
        do
            char rcx_27
            
            if (rax_38 == 0)
                rcx_27 = arg6
            label_140fd13af:
                int32_t var_e8 = rax_4
                int64_t var_dc_1 = 0
                
                if (arg5 != 0 || rcx_27 != 0)
                    var_dc_1:4.d = arg4
                    int32_t var_e4_2 = 5
                    var_dc_1.d = 0
                else
                    int32_t var_e4_1 = rcx_2
                
                int64_t* rcx_34 = *(r14 + 0x168)
                i_7 = 0
                int32_t var_e0_1 = r15_2
                int32_t rax_49 = (*(*rcx_34 + 0x48))(rcx_34, var_188, &var_e8, &i_7, var_1c8)
                
                if (rax_49 s< 0)
                    var_1c8 = *(r14 + 0x168)
                    sub_140fff020(rax_49, 
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                    "RenderTargetView.GetInitReference())", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                    "cpp", 0x32a)
                
                int64_t i_9 = sx.q(i_5)
                i_5 = (i_9 + 1).d
                var_160.d = i_5
                
                if (i_5 s> r12_2)
                    sub_1405a4d70(&var_168)
                    r12_2 = var_160:4.d
                    i_5 = var_160.d
                    r13_1 = var_168
                
                r13_1[i_9] = i_7
                uint64_t i_10 = i_7
                
                if (i_10 != 0)
                    (*(*i_10 + 8))(i_10)
                    uint64_t i_11 = i_7
                    
                    if (i_11 != 0)
                        (*(*i_11 + 0x10))(i_11)
                
                rax_38 = var_1a0
            else
                if (arg5 == 0)
                    rcx_27 = arg6
                
                if (arg5 == 0 && rcx_27 == 0)
                    goto label_140fd13af
                
                int32_t rsi_3 = 0
                var_1a5 = 1
                
                if (arg4 u<= 0)
                    rsi_2 = arg8
                else
                    do
                        int64_t* rcx_28 = *(r14 + 0x168)
                        int32_t var_c8 = rax_4
                        var_158.q = 0
                        int32_t var_b8_1 = 1
                        int32_t var_c4_1 = 5
                        int32_t var_bc_1 = rsi_3
                        int32_t var_c0_1 = r15_2
                        int32_t rax_41 =
                            (*(*rcx_28 + 0x48))(rcx_28, var_188, &var_c8, &var_158, var_1c8)
                        
                        if (rax_41 s< 0)
                            var_1c8 = *(r14 + 0x168)
                            sub_140fff020(rax_41, 
                                "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                            "RenderTargetView.GetInitReference())", 
                                "D:"
                            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                            "cpp", 0x313)
                        
                        int64_t i_8 = sx.q(i_5)
                        i_5 = (i_8 + 1).d
                        var_160.d = i_5
                        
                        if (i_5 s> r12_2)
                            sub_1405a4d70(&var_168)
                            r12_2 = var_160:4.d
                            i_5 = var_160.d
                            r13_1 = var_168
                        
                        r13_1[i_8] = var_158.q
                        int64_t* rcx_32 = var_158.q
                        
                        if (rcx_32 != 0)
                            (*(*rcx_32 + 8))(rcx_32)
                            int64_t* rcx_33 = var_158.q
                            
                            if (rcx_33 != 0)
                                (*(*rcx_33 + 0x10))(rcx_33)
                        
                        rsi_3 += 1
                    while (rsi_3 u< arg4)
                    
                    rsi_2 = arg8
                    var_170 = r13_1
                    rax_38 = var_1a0
            r15_2 += 1
        while (r15_2 u< rsi_2)
        
        var_170 = r13_1

char r12_4

if (var_1a6 == 0)
    r12_4 = arg5
else
    int32_t var_120_1 = 0
    int64_t var_118_1 = 0
    int32_t var_128
    
    if (r12 == 0x13)
        var_128 = 0x14
    else if (r12 == 0x27)
        var_128 = 0x28
    else if (r12 == 0x2c)
        var_128 = 0x2d
    else
        int32_t rax_53 = 0x37
        
        if (r12 != 0x35)
            rax_53 = r12
        
        var_128 = rax_53
    
    r12_4 = arg5
    
    if (r12_4 != 0 || arg6 != 0)
        var_118_1:4.d = arg4
        int32_t var_124_2 = 4
        int64_t var_11c_1 = 0
    else
        int32_t var_124_1 = var_17c
        int64_t var_11c
        var_11c.d = 0
    
    int32_t i_1 = 0
    int128_t* rsi_4 = &var_70
    
    do
        int64_t* rcx_39 = *(r14 + 0x168)
        int32_t rax_57
        int32_t rcx_40
        rax_57, rcx_40 = (*(*rcx_39 + 0x128))(rcx_39)
        int32_t rax_59
        
        if (rax_57 != 0xb000)
            int64_t* rcx_41 = *(r14 + 0x168)
            rax_59, rcx_40 = (*(*rcx_41 + 0x128))(rcx_41)
        
        if (rax_57 == 0xb000 || rax_59 == 0xb100)
            int32_t rax_60 = var_128
            int32_t rdx_18
            rdx_18.b = (i_1.b & 0x21) != 0
            int32_t var_120_2 = rdx_18
            
            if (rax_60 == 0x14 || rax_60 == 0x2d)
                int32_t var_120_3 = (sbb.d(rcx_40, rcx_40, (i_1.b & 0x12) != 0) & 2) | rdx_18
        
        int64_t* rcx_45 = *rsi_4
        int64_t* r15_3 = *(r14 + 0x168)
        *rsi_4 = 0
        
        if (rcx_45 != 0)
            (*(*rcx_45 + 0x10))(rcx_45)
        
        int32_t rax_64 = (*(*r15_3 + 0x50))(r15_3, var_188, &var_128, rsi_4, var_1c8)
        
        if (rax_64 s< 0)
            var_1c8 = *(r14 + 0x168)
            sub_140fff020(rax_64, 
                "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,"
            "DepthStencilViews[AccessType].GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
                0x350)
        
        i_1 += 1
        rsi_4 += 8
    while (i_1 u< 4)
    
    r13_1 = var_170

int64_t* rax_65 = var_100

if (rax_65 != 0)
    sub_140a74f90(rax_65)

if (var_14c != 0)
    int32_t var_140 = rax_4
    int32_t var_13c
    
    if (arg6 != 0)
        int32_t var_134_1 = arg8
        
        if (r12_4 == 0)
            var_13c.q = 9
        else
            var_13c.q = 0xa
            int32_t var_130_1 = 0
            uint32_t var_12c_1 = arg4 u/ 6
    else if (r12_4 == 0)
        int32_t var_13c_1 = rcx_2
        int32_t var_138_1 = 0
        int32_t var_134_3 = arg8
    else
        int32_t var_134_2 = arg8
        int32_t var_12c_2 = arg4
        var_13c.q = 5
        int32_t var_130_2 = 0
    int64_t* rcx_50 = var_108
    int64_t* rbx_6 = *(r14 + 0x168)
    
    if (rcx_50 != 0)
        (*(*rcx_50 + 0x10))(rcx_50)
    
    int32_t rax_75 = (*(*rbx_6 + 0x38))(rbx_6, var_188, &var_140, &var_108, var_1c8)
    
    if (rax_75 s< 0)
        var_1c8 = *(r14 + 0x168)
        sub_140fff020(rax_75, 
            "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x379)

void*** result_1 = j_sub_140a82f30(0xf8)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* r9_13 = var_108
    int64_t* r8_14 = var_188
    *result = &data_142d3ff08
    result[1].d = 0
    *result = &data_142ef2948
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x20) = *(arg11 + 0x10)
    result[6].d = arg11[4].d
    *(result + 0x34) = arg8
    result[7].d = arg9
    *(result + 0x3c) = var_f0.d
    result[9] = &result[0xa]
    result[8].d = var_19c_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    result[0xc].d = arg2
    *(result + 0x64) = arg3
    *result = &data_142ef29a0
    var_1c8.d = arg4
    sub_140fd9330(&result[0xd], r14, r8_14, r9_13, var_1c8.d, var_1a5, &var_168, &var_70)
    *(result + 0xf4) &= 0xfffffffe
    int32_t rcx_57 = zx.d(arg6) | *(result + 0xf4)
    *result = &data_142ef5b20
    result[0x1e].d = var_19c_1
    result[0xd] = &data_142ef5b78
    *(result + 0xf4) = (rcx_57 & 0xfffffffd) | (zx.d(var_144) * 2)

result[3] = var_d0

if ((var_19c_1.b & 1) != 0)
    result[0xe].d = 1

sub_140fd4570(result)

if (sub_1419767f0() != 0 && test_bit(var_19c_1, 0x1d))
    int64_t rdx_24 = result[0x14]
    int64_t rcx_61 = *(r14 + 0x168)
    var_170 = nullptr
    sub_142c48de0(rcx_61, rdx_24, &var_170)
    int64_t* rdx_25 = var_170
    result[0x11] = rdx_25
    var_17c = 1
    sub_142c48ec0(*(r14 + 0x168), rdx_25, 1, 1, &var_17c)

int64_t* rcx_63 = *arg11

if (rcx_63 != 0)
    (*(*rcx_63 + 0x18))(rcx_63)

int64_t* rbx_7 = &var_50

for (int64_t i_2 = 4; i_2 != 0; )
    int64_t* rcx_64 = rbx_7[-1]
    rbx_7 = &rbx_7[-1]
    i_2 -= 1
    
    if (rcx_64 != 0)
        (*(*rcx_64 + 0x10))(rcx_64)

int64_t* rbx_8 = r13_1

if (i_5 != 0)
    int32_t i_3
    
    do
        int64_t* rcx_65 = *rbx_8
        
        if (rcx_65 != 0)
            (*(*rcx_65 + 0x10))(rcx_65)
        
        rbx_8 = &rbx_8[1]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r13_1 != 0)
    sub_140a74f90(r13_1)

int64_t* rcx_67 = var_108

if (rcx_67 != 0)
    int64_t rdx_26 = *rcx_67
    (*(rdx_26 + 0x10))(rcx_67, rdx_26)

int64_t* rcx_68 = var_188

if (rcx_68 != 0)
    int64_t rdx_27 = *rcx_68
    (*(rdx_27 + 0x10))(rcx_68, rdx_27)

__security_check_cookie(var_50 ^ &var_1e8)
return result
