// 函数: sub_140fd24c0
// 地址: 0x140fd24c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t var_58 = __security_cookie ^ &var_1f8
void* r14 = arg1
int32_t rbx_1 = arg11 & 0x1000000
int32_t rax_4

if (rbx_1 == 0)
    rax_4 = (&data_1439c85fc)[zx.q(arg8) * 0xa]
else
    rax_4 = 0x57

int32_t rax_6
int32_t r9
rax_6, r9 = sub_140fe7330(rax_4, (arg11 u>> 4).b & 1)
int32_t r8 = arg10

if (r8 u> 8 || rbx_1 != 0)
    r8 = 1

int32_t rcx_2 = 6

if (r8 u<= 1)
    rcx_2 = 4

int32_t rax_7 = 5

if (r8 u<= 1)
    rax_7 = 3

int32_t var_188 = rax_7
bool r11

if (arg9 u>= 1 && arg2 == arg3 && 1 << (arg9.b - 1) == arg2)
    r11 = r8 u<= 1

if (arg9 u< 1 || arg2 != arg3 || 1 << (arg9.b - 1) != arg2 || rbx_1 != 0)
    r11 = false

int32_t rcx_5 = arg11 & 0x40000
int32_t rdi
rdi.b = rcx_5 == 0
int32_t r9_2 = sbb.d(r9, r9, rcx_5 != 0) & 0x20000
int32_t r10_1 = sbb.d(arg5, arg5, rcx_5 != 0) & 3
int32_t rdx_3 = arg11 & 0x20

if (rdx_3 != 0)
    r9_2 = 0x10000
    r10_1 = 3

int32_t var_94 = r8
char rcx_7 = 0
int32_t var_84 = r9_2
int32_t var_8c = r10_1
uint32_t r10_2 = zx.d(arg7)

if (rdx_3 == 0)
    rcx_7 = rdi.b

uint32_t rdx_4 = zx.d(rcx_7)
int32_t var_a8 = arg2
uint32_t r8_2 = rdx_4 << 3
uint32_t r9_4 = r10_2 << 2
int32_t var_98 = rax_4
int32_t var_a0 = arg9
int64_t* r13_1 = nullptr
int32_t var_a4 = arg3
char rax_14 = 0

if (arg8 != 0x43)
    rax_14 = rdx_4.b

char rdi_1 = 0
int32_t var_90 = 0

if ((arg11 & 0x4000) == 0)
    rdi_1 = rax_14

uint32_t var_88 = r8_2
char var_158 = rdi_1
uint32_t var_80 = r9_4

if (rbx_1 != 0)
    r9_4 |= 2
    uint32_t var_80_1 = r9_4

int32_t rcx_11 = arg11 & 0x1000

if (rcx_11 != 0)
    int32_t var_80_2 = r9_4 | 1

bool rdx_5 = false

if (rcx_11 == 0)
    rdx_5 = r11

rcx_11.b = 0
r11 = false
char var_1b5 = 0
char var_1b6 = 0
uint32_t var_88_1

if ((arg11.b & 1) != 0)
label_140fd2709:
    r8_2 |= 0x20
    rcx_11.b = 1
    var_88_1 = r8_2
else if ((arg11.b & 4) != 0)
    r11 = true
    r8_2 |= 0x40
    var_1b6 = 1
    var_88_1 = r8_2
else if ((arg11.b & 2) != 0)
    if (((arg8 - 0xb) & 0xf6) != 0 || arg8 == 0x13)
        goto label_140fd2709
    
    r11 = true
    r8_2 |= 0x40
    var_1b6 = 1
    var_88_1 = r8_2
uint32_t r9_6 = 0

if (arg8 != 0x43)
    r9_6 = zx.d(rcx_11.b)

uint32_t var_160 = r9_6
int32_t rcx_13 = arg11 & 0x10000

if (rcx_13 != 0)
    r8_2 |= 0x80
    uint32_t var_88_2 = r8_2

bool rbx_2 = false

if (rcx_13 == 0)
    rbx_2 = rdx_5

bool var_150 = rbx_2

if (r11 != 0)
    int32_t rdx_7 = arg11 & 8
    
    if (rdx_7 == 0)
        r8_2 &= 0xfffffff7
        uint32_t var_88_3 = r8_2
    
    char rcx_14 = 0
    
    if (rdx_7 != 0)
        rcx_14 = rdi_1
    
    var_158 = rcx_14
    rbx_2 = false
    var_150 = rbx_2
else if (r9_6.b != 0 || r10_2.b != 0 || arg6 != 0)
    rbx_2 = false
    var_150 = rbx_2

int32_t var_1a8_1 = arg11 & 0xffbfffff
int64_t var_c0
int64_t rax_21 = var_c0
int512_t zmm0
zmm0.o = zx.o(0)

if (rbx_2 != 0)
    rax_21 = 0

int64_t var_e0 = 0
int64_t* var_1a0 = nullptr
int64_t* var_110
__builtin_memset(&var_110, 0, 0x18)
int32_t i_5 = 0
int64_t* rcx_16 = *arg12
int32_t r12_1 = 0
int64_t* var_178
__builtin_memset(&var_178, 0, 0x18)
int32_t i_6 = 0
int64_t var_c0_1 = rax_21
int128_t var_78
__builtin_memset(&var_78, 0, 0x20)
uint64_t i_7
int64_t var_168
int64_t* var_108
int64_t* rbx_5

if (rcx_16 != 0)
    int64_t rax_23 = (*(*rcx_16 + 8))(zmm0, 0, r8_2)
    int32_t rbx_4 = arg9 * arg4
    int64_t var_100
    var_100.d = rbx_4
    
    if (rbx_4 s> 0)
        sub_1405a4f90(&var_108)
    
    rbx_5 = var_108
    memset(rbx_5, 0, sx.q(rbx_4) << 4)
    uint64_t i_4 = zx.q(arg4)
    int32_t r15_2 = 0
    
    if (i_4.d != 0)
        char r13_2 = arg8
        int32_t rsi_1 = 0
        i_7 = i_4
        uint64_t i
        
        do
            int32_t rbx_6 = 0
            int32_t r11_1 = 0
            
            if (arg9 != 0)
                uint64_t r14_1 = zx.q(r13_2) * 5
                
                do
                    char rcx_19 = r11_1.b
                    uint32_t temp0_1 = divu.dp.d(0:(arg2 u>> rcx_19), *((r14_1 << 3) + 0x1439c85e8))
                    uint32_t r10_3 = temp0_1
                    
                    if (temp0_1 u<= 1)
                        r10_3 = 1
                    
                    uint32_t temp0_2 =
                        divu.dp.d(0:(arg3 u>> rcx_19), *((r14_1 << 3) + &data_1439c85ec))
                    uint32_t r9_7 = temp0_2
                    
                    if (temp0_2 u<= 1)
                        r9_7 = 1
                    
                    int64_t r8_6 = sx.q(rsi_1 + r11_1) * 2
                    var_108[r8_6] = zx.q(rbx_6 + r15_2) + rax_23
                    int64_t* rdx_12 = var_108
                    rdx_12[r8_6 + 1].d = (&data_1439c85f4)[r14_1 * 2] * r10_3
                    int64_t rcx_23 = sx.q(r11_1)
                    r11_1 += 1
                    int64_t rcx_24 = rcx_23 * 2
                    *(&rdx_12[r8_6] + 0xc) = r9_7 * r10_3 * rdx_12[rcx_24 + 1].d
                    rbx_6 += r9_7 * rdx_12[rcx_24 + 1].d
                while (r11_1 u< arg9)
                
                i_4 = i_7
                r13_2 = arg8
            
            r15_2 += rbx_6
            rsi_1 += arg9
            i = i_4
            i_4 -= 1
            i_7 = i_4
        while (i != 1)
        i_5 = i_6
        r14 = arg1
        r12_1 = var_168:4.d
        r13_1 = var_178
        rbx_5 = var_108

if (rcx_16 == 0 || *arg12 == 0)
    rbx_5 = nullptr

int64_t* rcx_25 = var_1a0

if (rcx_25 != 0)
    (*(*rcx_25 + 0x10))(rcx_25)

uint32_t rax_37 = zx.d(arg8)
int64_t** var_1d8 = &var_1a0
sub_140ffcce0(*(r14 + 0x168), rax_37, &var_a8, rbx_5, var_1d8)
int64_t* var_170

if (var_160.b != 0)
    int32_t rsi_2 = arg9
    int32_t r15_3 = 0
    
    if (rsi_2 != 0)
        int32_t rax_39 = var_1a8_1 & 0x800000
        int32_t var_1ac_1 = rax_39
        
        do
            char rcx_27
            
            if (rax_39 == 0)
                rcx_27 = arg7
            label_140fd2ace:
                int32_t var_f8 = rax_6
                int64_t var_ec_1 = 0
                
                if (arg6 != 0 || rcx_27 != 0)
                    var_ec_1:4.d = arg4
                    int32_t var_f4_2 = 5
                    var_ec_1.d = 0
                else
                    int32_t var_f4_1 = rcx_2
                
                int64_t* rcx_34 = *(r14 + 0x168)
                i_7 = 0
                int32_t var_f0_1 = r15_3
                int32_t rax_50 = (*(*rcx_34 + 0x48))(rcx_34, var_1a0, &var_f8, &i_7, var_1d8)
                
                if (rax_50 s< 0)
                    var_1d8 = *(r14 + 0x168)
                    sub_140fff020(rax_50, 
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                    "RenderTargetView.GetInitReference())", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                    "cpp", 0x32a)
                
                int64_t i_9 = sx.q(i_5)
                i_5 = (i_9 + 1).d
                var_168.d = i_5
                
                if (i_5 s> r12_1)
                    sub_1405a4d70(&var_170)
                    r12_1 = var_168:4.d
                    i_5 = var_168.d
                    r13_1 = var_170
                
                r13_1[i_9] = i_7
                uint64_t i_10 = i_7
                
                if (i_10 != 0)
                    (*(*i_10 + 8))(i_10)
                    uint64_t i_11 = i_7
                    
                    if (i_11 != 0)
                        (*(*i_11 + 0x10))(i_11)
                
                rax_39 = var_1ac_1
            else
                if (arg6 == 0)
                    rcx_27 = arg7
                
                if (arg6 == 0 && rcx_27 == 0)
                    goto label_140fd2ace
                
                int32_t rsi_3 = 0
                var_1b5 = 1
                
                if (arg4 u<= 0)
                    rsi_2 = arg9
                else
                    do
                        int64_t* rcx_28 = *(r14 + 0x168)
                        int32_t var_d8 = rax_6
                        var_160.q = 0
                        int32_t var_c8_1 = 1
                        int32_t var_d4_1 = 5
                        int32_t var_cc_1 = rsi_3
                        int32_t var_d0_1 = r15_3
                        int32_t rax_42 =
                            (*(*rcx_28 + 0x48))(rcx_28, var_1a0, &var_d8, &var_160, var_1d8)
                        
                        if (rax_42 s< 0)
                            var_1d8 = *(r14 + 0x168)
                            sub_140fff020(rax_42, 
                                "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                            "RenderTargetView.GetInitReference())", 
                                "D:"
                            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                            "cpp", 0x313)
                        
                        int64_t i_8 = sx.q(i_5)
                        i_5 = (i_8 + 1).d
                        var_168.d = i_5
                        
                        if (i_5 s> r12_1)
                            sub_1405a4d70(&var_170)
                            r12_1 = var_168:4.d
                            i_5 = var_168.d
                            r13_1 = var_170
                        
                        r13_1[i_8] = var_160.q
                        int64_t* rcx_32 = var_160.q
                        
                        if (rcx_32 != 0)
                            (*(*rcx_32 + 8))(rcx_32)
                            int64_t* rcx_33 = var_160.q
                            
                            if (rcx_33 != 0)
                                (*(*rcx_33 + 0x10))(rcx_33)
                        
                        rsi_3 += 1
                    while (rsi_3 u< arg4)
                    
                    rsi_2 = arg9
                    var_178 = r13_1
                    rax_39 = var_1ac_1
            r15_3 += 1
        while (r15_3 u< rsi_2)
        
        var_178 = r13_1

char r12_3

if (var_1b6 == 0)
    r12_3 = arg6
else
    int32_t var_128_1 = 0
    int64_t var_120_1 = 0
    int32_t var_130
    
    if (rax_4 == 0x13)
        var_130 = 0x14
    else if (rax_4 == 0x27)
        var_130 = 0x28
    else if (rax_4 == 0x2c)
        var_130 = 0x2d
    else
        int32_t rax_54 = 0x37
        
        if (rax_4 != 0x35)
            rax_54 = rax_4
        
        var_130 = rax_54
    
    r12_3 = arg6
    
    if (r12_3 != 0 || arg7 != 0)
        var_120_1:4.d = arg4
        int32_t var_12c_2 = 4
        int64_t var_124_1 = 0
    else
        int32_t var_12c_1 = var_188
        int64_t var_124
        var_124.d = 0
    
    int32_t i_1 = 0
    int128_t* rsi_4 = &var_78
    
    do
        int64_t* rcx_39 = *(r14 + 0x168)
        int32_t rax_58
        int32_t rcx_40
        rax_58, rcx_40 = (*(*rcx_39 + 0x128))(rcx_39)
        int32_t rax_60
        
        if (rax_58 != 0xb000)
            int64_t* rcx_41 = *(r14 + 0x168)
            rax_60, rcx_40 = (*(*rcx_41 + 0x128))(rcx_41)
        
        if (rax_58 == 0xb000 || rax_60 == 0xb100)
            int32_t rax_61 = var_130
            int32_t rdx_18
            rdx_18.b = (i_1.b & 0x21) != 0
            int32_t var_128_2 = rdx_18
            
            if (rax_61 == 0x14 || rax_61 == 0x2d)
                int32_t var_128_3 = (sbb.d(rcx_40, rcx_40, (i_1.b & 0x12) != 0) & 2) | rdx_18
        
        int64_t* rcx_45 = *rsi_4
        int64_t* r15_4 = *(r14 + 0x168)
        *rsi_4 = 0
        
        if (rcx_45 != 0)
            (*(*rcx_45 + 0x10))(rcx_45)
        
        int32_t rax_65 = (*(*r15_4 + 0x50))(r15_4, var_1a0, &var_130, rsi_4, var_1d8)
        
        if (rax_65 s< 0)
            var_1d8 = *(r14 + 0x168)
            sub_140fff020(rax_65, 
                "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,"
            "DepthStencilViews[AccessType].GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
                0x350)
        
        i_1 += 1
        rsi_4 += 8
    while (i_1 u< 4)
    
    r13_1 = var_178

int64_t* rax_66 = var_108

if (rax_66 != 0)
    sub_140a74f90(rax_66)

int32_t r12_4

if (var_158 == 0)
    r12_4 = arg4
else
    int32_t var_148 = rax_6
    int32_t var_144
    
    if (arg7 == 0)
        r12_4 = arg4
        
        if (r12_3 == 0)
            int32_t var_144_1 = rcx_2
            int32_t var_13c_3 = arg9
            int32_t var_140_1 = 0
        else
            int32_t var_13c_2 = arg9
            int32_t var_134_2 = arg4
            var_144.q = 5
            int32_t var_138_2 = 0
    else
        r12_4 = arg4
        int32_t var_13c_1 = arg9
        
        if (r12_3 == 0)
            var_144.q = 9
        else
            var_144.q = 0xa
            int32_t var_138_1 = 0
            uint32_t var_134_1 = r12_4 u/ 6
    int64_t* rcx_50 = var_110
    int64_t* rbx_7 = *(r14 + 0x168)
    
    if (rcx_50 != 0)
        (*(*rcx_50 + 0x10))(rcx_50)
    
    int32_t rax_76 = (*(*rbx_7 + 0x38))(rbx_7, var_1a0, &var_148, &var_110, var_1d8)
    
    if (rax_76 s< 0)
        var_1d8 = *(r14 + 0x168)
        sub_140fff020(rax_76, 
            "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x379)

void*** result_1 = j_sub_140a82f30(0x100)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* r9_14 = var_110
    int64_t* r8_12 = var_1a0
    *result = &data_142d3ff08
    result[1].d = 0
    *result = &data_142ef2948
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x20) = *(arg12 + 0x10)
    result[6].d = arg12[4].d
    *(result + 0x34) = arg9
    result[7].d = 1
    *(result + 0x3c) = rax_37
    result[9] = &result[0xa]
    result[8].d = var_1a8_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    result[0xc].d = arg2
    *result = &data_142ef5918
    var_1d8.d = arg4
    result[0xd].d = r12_4
    sub_140fd9330(&result[0xe], r14, r8_12, r9_14, var_1d8.d, var_1b5, &var_170, &var_78)
    *(result + 0xfc) &= 0xfffffffe
    int32_t rcx_57 = zx.d(arg7) | *(result + 0xfc)
    *result = &data_142ef6b10
    result[0x1f].d = var_1a8_1
    result[0xe] = &data_142ef6b68
    *(result + 0xfc) = (rcx_57 & 0xfffffffd) | (zx.d(var_150) * 2)

result[3] = var_e0

if ((1 & var_1a8_1.b) != 0)
    result[0xf].d = 1

sub_140fd4680(result)

if (sub_1419767f0() != 0 && test_bit(var_1a8_1, 0x1d))
    int64_t rdx_24 = result[0x15]
    int64_t rcx_61 = *(r14 + 0x168)
    var_178 = nullptr
    sub_142c48de0(rcx_61, rdx_24, &var_178)
    int64_t* rdx_25 = var_178
    result[0x12] = rdx_25
    int64_t rcx_62 = *(r14 + 0x168)
    var_188 = 1
    sub_142c48ec0(rcx_62, rdx_25, 1, 1, &var_188)

int64_t* rcx_63 = *arg12

if (rcx_63 != 0)
    (*(*rcx_63 + 0x18))(rcx_63)

int64_t* rbx_8 = &var_58

for (int64_t i_2 = 4; i_2 != 0; )
    int64_t* rcx_64 = rbx_8[-1]
    rbx_8 = &rbx_8[-1]
    i_2 -= 1
    
    if (rcx_64 != 0)
        (*(*rcx_64 + 0x10))(rcx_64)

int64_t* rbx_9 = r13_1

if (i_5 != 0)
    int32_t i_3
    
    do
        int64_t* rcx_65 = *rbx_9
        
        if (rcx_65 != 0)
            (*(*rcx_65 + 0x10))(rcx_65)
        
        rbx_9 = &rbx_9[1]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r13_1 != 0)
    sub_140a74f90(r13_1)

int64_t* rcx_67 = var_110

if (rcx_67 != 0)
    int64_t rdx_26 = *rcx_67
    (*(rdx_26 + 0x10))(rcx_67, rdx_26)

int64_t* rcx_68 = var_1a0

if (rcx_68 != 0)
    int64_t rdx_27 = *rcx_68
    (*(rdx_27 + 0x10))(rcx_68, rdx_27)

__security_check_cookie(var_58 ^ &var_1f8)
return result
