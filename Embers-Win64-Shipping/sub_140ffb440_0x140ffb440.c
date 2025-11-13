// 函数: sub_140ffb440
// 地址: 0x140ffb440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rdi = arg1
void* rax_2

if (arg3 != 0)
    rax_2 = (*(*arg3 + 0x48))(arg3, 0)
else
    rax_2 = nullptr

int32_t rcx_2 = arg4[3] - arg4[1]
int32_t r12_1 = arg4[2] - *arg4
int64_t* rcx_3 = *(rax_2 + 0x38)
void var_88
(*(*rcx_3 + 0x50))(rcx_3, &var_88)
int32_t var_78
int32_t k_3 = sub_140fdf270(var_78)
int32_t var_d0 = *arg4
int32_t var_cc = arg4[1]
int32_t var_c4 = arg4[2]
int32_t var_c0 = arg4[3]
int64_t* rcx_9 = *(rdi + 0x168)
uint64_t k_2 = zx.q(k_3)
int32_t var_c8 = 0
int32_t var_e4 = 0
int32_t var_d8 = 0
int64_t* var_170 = nullptr
int32_t var_bc = 1
int32_t var_100 = r12_1
int32_t var_fc = rcx_2
int32_t var_f8 = 1
int32_t var_f4 = 1
int64_t var_ec = 1
int64_t var_e0 = 0x20
int32_t rax_7 = (*(*rcx_9 + 0x28))(rcx_9, &var_100, 0, &var_170)
int64_t var_1c8
int128_t zmm6

if (rax_7 s< 0)
    var_1c8 = *(rdi + 0x168)
    arg5, zmm6 = sub_140fff020(rax_7, 
        "Direct3DDevice->CreateTexture2D(&NonMSAADesc,NULL,NonMSAATexture2D.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x2ce)

int64_t var_12c = 0
int32_t var_138

if (var_78 == 0x1b)
    var_138 = 0x1c
else
    int32_t rax_8 = 0x57
    
    if (var_78 != 0x5a)
        rax_8 = var_78
    
    var_138 = rax_8

int64_t* rcx_13 = *(rdi + 0x168)
int64_t* var_168 = nullptr
int64_t var_134 = 4
int32_t rax_10 = (*(*rcx_13 + 0x48))(rcx_13, var_170, &var_138, &var_168, var_1c8)

if (rax_10 s< 0)
    var_1c8 = *(rdi + 0x168)
    arg5, zmm6 = sub_140fff020(rax_10, 
        "Direct3DDevice->CreateRenderTargetView(NonMSAATexture2D,&RTVDesc,NonMSAARTV.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x2d9)

int64_t* rcx_16 = *(rdi + 0x168)
int32_t var_b4 = rcx_2
int32_t var_a8 = var_78
int64_t* var_178 = nullptr
int32_t var_b8 = r12_1
int32_t var_b0 = 1
int32_t var_ac = 1
int64_t var_a4
__builtin_memcpy(&var_a4, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00", 
    0x18)
int32_t rax_14 = (*(*rcx_16 + 0x28))(rcx_16, &var_b8, 0, &var_178, var_1c8)

if (rax_14 s< 0)
    int64_t var_1c8_1 = *(rdi + 0x168)
    arg5, zmm6 = sub_140fff020(rax_14, 
        "Direct3DDevice->CreateTexture2D(&StagingDesc,NULL,StagingTexture2D.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x2ea)

uint32_t var_188 = zx.d(*(arg8 + 0x11))
int32_t var_60

if (var_60 == 4)
    int32_t rcx_19 = *arg8
    
    if (rcx_19 == 1)
        var_188 = 1
    else if (rcx_19 == 2)
        var_188 = 2
    else if (rcx_19 == 3)
        var_188 = 3
    else if (rcx_19 == 4)
        var_188 = 4
    else if (rcx_19 == 5)
        var_188 = 5
    else
        var_188 = 0

int32_t rcx_25 = *(arg7 + 0xc)
arg7[1].d = 0
int32_t rdx_4 = 0

if (rcx_25 != 0)
    sub_1405c5510(arg7, 0)
    rdx_4 = arg7[1].d
    rcx_25 = *(arg7 + 0xc)

int32_t r8_1 = rcx_2
int32_t var_74
int32_t result = var_74 * k_2.d * r8_1 * r12_1 + rdx_4
arg7[1].d = result

if (result s> rcx_25)
    result = sub_1405daba0(arg7)
    r8_1 = rcx_2

int32_t r12_2 = 0

if (var_74 != 0)
    do
        int64_t* rdi_1 = *(rdi + 0x150)
        int64_t* rbx_1 = var_168
        int32_t var_150_1 = r12_1
        int32_t var_148 = *arg4
        int32_t var_144_1 = arg4[1]
        int32_t var_140_1 = arg4[2]
        int32_t var_13c_1 = arg4[3]
        int64_t rax_25 = *arg3
        int64_t var_158 = 0
        int32_t var_14c_1 = r8_1
        rdi = arg1
        arg5, arg6, zmm6 = sub_140fd61e0(rdi, arg2, (*(rax_25 + 8))(arg3), nullptr, arg5, arg6, 
            zmm6, rbx_1, 0, &var_100, &var_148, &var_158, rdi_1, r12_2)
        int64_t* rcx_29 = *(rdi + 0x150)
        int32_t* var_1b0_1
        var_1b0_1.d = var_188
        int64_t var_1c0_1
        var_1c0_1.d = 0
        int64_t* var_1c8_2
        var_1c8_2.d = 0
        (*(*rcx_29 + 0x170))(rcx_29, var_178, 0, 0, var_1c8_2, var_1c0_1, var_170, var_1b0_1, 
            &var_d0)
        int64_t* rcx_30 = *(rdi + 0x150)
        var_1c8_2.d = 0
        int64_t var_110
        int32_t rax_30 = (*(*rcx_30 + 0x70))(rcx_30, var_178, 0, 1, var_1c8_2, &var_110)
        
        if (rax_30 s< 0)
            int64_t var_1c8_3 = *(rdi + 0x168)
            arg5, zmm6 = sub_140fff020(rax_30, 
                "Direct3DDeviceIMContext->Map(StagingTexture2D,0,D3D11_MAP_READ,0,&LockedRect)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
                0x30e)
        
        int32_t i = arg4[1]
        
        if (i s< arg4[3])
            int32_t r9_4 = arg4[2]
            
            do
                int32_t rdx_9 = i - arg4[1]
                int32_t j = *arg4
                int32_t var_108
                char* r8_5 = zx.q(var_108 * rdx_9) + zx.q(j * k_2.d) + var_110
                char* rax_34 = sx.q((r12_2 + rdx_9 * var_74 * r12_1) * k_2.d) + *arg7
                
                for (; j s< r9_4; j += 1)
                    if (k_2.d != 0)
                        uint64_t k_1 = k_2
                        uint64_t k
                        
                        do
                            char rcx_36 = *r8_5
                            r8_5 = &r8_5[1]
                            *rax_34 = rcx_36
                            rax_34 = &rax_34[1]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    r9_4 = arg4[2]
                    rax_34 = &rax_34[zx.q((var_74 - 1) * k_2.d)]
                
                i += 1
            while (i s< arg4[3])
            
            rdi = arg1
        
        int64_t* rcx_37 = *(rdi + 0x150)
        result = (*(*rcx_37 + 0x78))(rcx_37, var_178, 0)
        r8_1 = rcx_2
        r12_2 += 1
    while (r12_2 u< var_74)

int64_t* rcx_38 = var_178

if (rcx_38 != 0)
    result = (*(*rcx_38 + 0x10))(rcx_38)

int64_t* rcx_39 = var_168

if (rcx_39 != 0)
    result = (*(*rcx_39 + 0x10))(rcx_39)

int64_t* rcx_40 = var_170

if (rcx_40 != 0)
    result = (*(*rcx_40 + 0x10))(rcx_40)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
