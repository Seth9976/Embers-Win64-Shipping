// 函数: sub_141e98470
// 地址: 0x141e98470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0
int64_t* arg_8 = &var_28
sub_141e8f2c0(arg1, &arg_8)
wchar16 const* const rbx = When the viewport view-mode is set to 'Buffer Visualization', this "
"command specifies which of the various chann"

if (*(arg1 + 0xc0) != When the viewport view-mode is set to 'Buffer Visualization', this command "
"specifies which of the various chann")
    bool cond:0_1 = *(arg1 + 0xcc) == 0xc9
    int32_t rdx_1 = 0
    *(arg1 + 0xc8) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(arg1 + 0xc0, 0xc9)
        rdx_1 = *(arg1 + 0xc8)
    
    *(arg1 + 0xc8) = rdx_1 + 0xc9
    
    if (rdx_1 + 0xc9 s> *(arg1 + 0xcc))
        sub_140594770(arg1 + 0xc0)
    
    int128_t* rcx_2 = *(arg1 + 0xc0)
    int64_t i_2 = 3
    int64_t i
    
    do
        rcx_2 = &rcx_2[8]
        int128_t zmm0_1 = *rbx
        rbx = &rbx[0x40]
        rcx_2[-8] = zmm0_1
        rcx_2[-7] = *(rbx - 0x70)
        rcx_2[-6] = *(rbx - 0x60)
        rcx_2[-5] = *(rbx - 0x50)
        rcx_2[-4] = *(rbx - 0x40)
        rcx_2[-3] = *(rbx - 0x30)
        rcx_2[-2] = *(rbx - 0x20)
        rcx_2[-1] = *(rbx - 0x10)
        i = i_2
        i_2 -= 1
    while (i != 1)
    *rcx_2 = *rbx
    rcx_2[1].w = rbx[8]

int32_t r8 = var_20 - 1

if (var_20 == 0)
    r8 = 0

sub_140a20ba0(arg1 + 0xc0, var_28, r8)
int64_t* rcx_4 = data_143db18d0

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

int16_t* const rsi = &data_142d40450
int16_t* const r9

if (*(arg1 + 0xc8) == 0)
    r9 = &data_142d40450
else
    r9 = *(arg1 + 0xc0)

(*(*rcx_4 + 8))(rcx_4, u"r.BufferVisualizationTarget", &data_142d40450, r9, 1)
wchar16 const* const rbx_1 = Specify the list of post process materials that can be used in the "
"buffer visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:"

if (*(arg1 + 0xd0) != Specify the list of post process materials that can be used in the buffer "
"visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:")
    bool cond:1_1 = *(arg1 + 0xdc) == 0xa1
    int32_t rdx_3 = 0
    *(arg1 + 0xd8) = 0
    
    if (not(cond:1_1))
        sub_1405947f0(arg1 + 0xd0, 0xa1)
        rdx_3 = *(arg1 + 0xd8)
    
    *(arg1 + 0xd8) = rdx_3 + 0xa1
    
    if (rdx_3 + 0xa1 s> *(arg1 + 0xdc))
        sub_140594770(arg1 + 0xd0)
    
    int128_t* rcx_7 = *(arg1 + 0xd0)
    int64_t i_3 = 2
    int64_t i_1
    
    do
        rcx_7 = &rcx_7[8]
        int128_t zmm0_2 = *rbx_1
        rbx_1 = &rbx_1[0x40]
        rcx_7[-8] = zmm0_2
        rcx_7[-7] = *(rbx_1 - 0x70)
        rcx_7[-6] = *(rbx_1 - 0x60)
        rcx_7[-5] = *(rbx_1 - 0x50)
        rcx_7[-4] = *(rbx_1 - 0x40)
        rcx_7[-3] = *(rbx_1 - 0x30)
        rcx_7[-2] = *(rbx_1 - 0x20)
        rcx_7[-1] = *(rbx_1 - 0x10)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    *rcx_7 = *rbx_1
    rcx_7[1] = *(rbx_1 + 0x10)
    rcx_7[2] = *(rbx_1 + 0x20)
    rcx_7[3] = *(rbx_1 + 0x30)
    rcx_7[4].w = rbx_1[0x20]

int32_t r8_1 = var_20 - 1

if (var_20 == 0)
    r8_1 = 0

sub_140a20ba0(arg1 + 0xd0, var_28, r8_1)
TEB* gsbase

if (data_143f3a3b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a3b8)
    
    if (data_143f3a3b8 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f3a3b0 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.AnisotropicBRDF", r8_3)
        _Init_thread_footer(&data_143f3a3b8)

int64_t* rcx_11 = data_143f3a3b0
char rax_11
wchar16 const* const rbx_2

if (rcx_11 != 0)
    rax_11 = (*(*rcx_11 + 0x88))(rcx_11)
    rbx_2 = BaseColor,Specular,SubsurfaceColor,WorldNormal,SeparateTranslucencyRGB,,,WorldTangent,"
    "SeparateTranslucencyA,,,Opacity,S"

if (rcx_11 == 0 || rax_11 == 0)
    rbx_2 = BaseColor,Specular,SubsurfaceColor,WorldNormal,SeparateTranslucencyRGB,,,,"
    "SeparateTranslucencyA,,,Opacity,SceneDepth,Roughness,Metallic"

int64_t* rcx_12 = data_143db18d0

if (rcx_12 == 0)
    sub_140a53c40()
    rcx_12 = data_143db18d0

if (*(arg1 + 0xd8) != 0)
    rsi = *(arg1 + 0xd0)

int64_t result = (*(*rcx_12 + 8))(rcx_12, u"r.BufferVisualizationOverviewTargets", rbx_2, rsi, 0)
int64_t rcx_13 = var_28

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
