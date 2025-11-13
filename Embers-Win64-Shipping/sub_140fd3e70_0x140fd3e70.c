// 函数: sub_140fd3e70
// 地址: 0x140fd3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t var_40 = __security_cookie ^ &var_188
int64_t* rbx = arg7
int64_t rsi = sx.q(arg4)
int32_t var_c8 = rsi.d
int64_t* var_138 = rbx
int32_t var_90
(*(*rbx + 0x50))(rbx, &var_90)
int32_t rsi_1

if (not(test_bit(arg5, 0x18)))
    rsi_1 = (&data_1439c85fc)[rsi * 0xa]
else
    rsi_1 = 0x57

int32_t rax_3 = sub_140fe7330(rsi_1, (arg5 u>> 4).b & 1)
int64_t i_1 = 4
int32_t r8 = 4
int32_t var_130 = 4
int32_t rcx_3 = rax_3
int32_t var_114 = 3
int32_t var_7c

if (var_7c u> 1)
    r8 = 6
    var_114 = 5
    var_130 = 6

char var_70
char rax_4 = var_70
int64_t* var_d0 = nullptr
int32_t i_3 = 0
char var_146 = 0
int64_t* var_128 = nullptr
int64_t var_120 = 0
int64_t* r13 = nullptr
int32_t r14 = 0
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
int32_t var_168
int32_t var_88
int32_t var_84

if ((rax_4 & 0x20) != 0)
    int32_t r12 = 0
    
    if (var_88 u> 0)
        int32_t rax_6 = arg5 & 0x800000
        int32_t var_140_1 = rax_6
        
        do
            char rdx_3
            
            if (rax_6 == 0)
                rdx_3 = arg3
            label_140fd4098:
                int64_t var_b4_1 = 0
                int32_t var_c0 = rcx_3
                
                if (arg2 != 0 || rdx_3 != 0)
                    var_b4_1:4.d = var_84
                    int32_t var_bc_2 = 5
                    var_b4_1.d = 0
                else
                    int32_t var_bc_1 = r8
                
                int64_t* rcx_10 = *(arg1 + 0x168)
                int64_t* var_d8 = nullptr
                int32_t var_b8_1 = r12
                int32_t rax_14 = (*(*rcx_10 + 0x48))(rcx_10, rbx, &var_c0, &var_d8, var_168)
                
                if (rax_14 s< 0)
                    var_168.q = *(arg1 + 0x168)
                    sub_140fff020(rax_14, 
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                    "RenderTargetView.GetInitReference())", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                    "cpp", 0x8ba)
                
                int64_t i_5 = sx.q(i_3)
                i_3 = (i_5 + 1).d
                var_120.d = i_3
                
                if (i_3 s> r14)
                    sub_1405a4d70(&var_128)
                    r14 = var_120:4.d
                    i_3 = var_120.d
                    r13 = var_128
                
                r13[i_5] = var_d8
                int64_t* rcx_14 = var_d8
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 8))(rcx_14)
                    int64_t* rcx_15 = var_d8
                    
                    if (rcx_15 != 0)
                        (*(*rcx_15 + 0x10))(rcx_15)
                
                rbx = var_138
                rcx_3 = rax_3
                rax_6 = var_140_1
            else
                if (arg2 == 0)
                    rdx_3 = arg3
                
                if (arg2 == 0 && rdx_3 == 0)
                    goto label_140fd4098
                
                int32_t rsi_2 = 0
                var_146 = 1
                
                if (var_84 u> 0)
                    do
                        int32_t var_a8 = rcx_3
                        int64_t* rcx_4 = *(arg1 + 0x168)
                        int64_t* var_e0 = nullptr
                        int32_t var_a4_1 = 5
                        int32_t var_9c_1 = rsi_2
                        int32_t var_98_1 = 1
                        int32_t var_a0_1 = r12
                        int32_t rax_8 = (*(*rcx_4 + 0x48))(rcx_4, rbx, &var_a8, &var_e0, var_168)
                        
                        if (rax_8 s< 0)
                            var_168.q = *(arg1 + 0x168)
                            sub_140fff020(rax_8, 
                                "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,"
                            "RenderTargetView.GetInitReference())", 
                                "D:"
                            "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture."
                            "cpp", 0x8a3)
                        
                        int64_t i_4 = sx.q(i_3)
                        i_3 = (i_4 + 1).d
                        var_120.d = i_3
                        
                        if (i_3 s> r14)
                            sub_1405a4d70(&var_128)
                            r14 = var_120:4.d
                            i_3 = var_120.d
                            r13 = var_128
                        
                        r13[i_4] = var_e0
                        int64_t* rcx_8 = var_e0
                        
                        if (rcx_8 != 0)
                            (*(*rcx_8 + 8))(rcx_8)
                            int64_t* rcx_9 = var_e0
                            
                            if (rcx_9 != 0)
                                (*(*rcx_9 + 0x10))(rcx_9)
                        
                        rbx = var_138
                        rsi_2 += 1
                        rcx_3 = rax_3
                    while (rsi_2 u< var_84)
                    
                    rax_6 = var_140_1
            r8 = var_130
            r12 += 1
        while (r12 u< var_88)
        
        rax_4 = var_70
    
    i_1 = 4

if ((rax_4 & 0x40) != 0)
    int32_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_f8
    
    if (rsi_1 == 0x13)
        var_f8 = 0x14
    else if (rsi_1 == 0x27)
        var_f8 = 0x28
    else if (rsi_1 == 0x2c)
        var_f8 = 0x2d
    else
        int32_t rax_18 = 0x37
        
        if (rsi_1 != 0x35)
            rax_18 = rsi_1
        
        var_f8 = rax_18
    
    if (arg2 != 0 || arg3 != 0)
        var_e8_1:4.d = var_84
        int32_t var_f4_2 = 4
        int64_t var_ec_1 = 0
    else
        int32_t var_f4_1 = var_114
        int64_t var_ec
        var_ec.d = 0
    
    int128_t* rsi_3 = &var_60
    
    for (int32_t i = 0; i u< 4; )
        int64_t* rcx_16 = *(arg1 + 0x168)
        int32_t rax_22
        int32_t rcx_17
        rax_22, rcx_17 = (*(*rcx_16 + 0x128))(rcx_16)
        int32_t rax_24
        
        if (rax_22 != 0xb000)
            int64_t* rcx_18 = *(arg1 + 0x168)
            rax_24, rcx_17 = (*(*rcx_18 + 0x128))(rcx_18)
        
        if (rax_22 == 0xb000 || rax_24 == 0xb100)
            int32_t rax_25 = var_f8
            int32_t rdx_8
            rdx_8.b = (i.b & 0x21) != 0
            int32_t var_f0_2 = rdx_8
            
            if (rax_25 == 0x14 || rax_25 == 0x2d)
                int32_t var_f0_3 = (sbb.d(rcx_17, rcx_17, (i.b & 0x12) != 0) & 2) | rdx_8
        
        int64_t* rcx_22 = *rsi_3
        int64_t* r14_1 = *(arg1 + 0x168)
        *rsi_3 = 0
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 0x10))(rcx_22)
        
        int32_t rax_29 = (*(*r14_1 + 0x50))(r14_1, var_138, &var_f8, rsi_3, var_168)
        
        if (rax_29 s< 0)
            var_168.q = *(arg1 + 0x168)
            sub_140fff020(rax_29, 
                "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,"
            "DepthStencilViews[AccessType].GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
                0x8e0)
        
        i += 1
        rsi_3 += 8
    
    rax_4 = var_70
    i_1 = 4

int64_t* r14_2

if ((rax_4 & 8) == 0)
    r14_2 = var_138
else
    int32_t var_110 = rax_3
    int32_t var_10c
    
    if (arg3 != 0)
        int32_t var_104_1 = var_88
        
        if (arg2 == 0)
            var_10c.q = 9
        else
            var_10c.q = 0xa
            int32_t var_100_1 = 0
            uint32_t var_fc_1 = var_84 u/ 6
    else if (arg2 == 0)
        int32_t var_10c_1 = var_130
        int32_t var_104_3 = var_88
        int32_t var_108_1 = 0
    else
        int32_t var_104_2 = var_88
        int32_t var_fc_2 = var_84
        var_10c.q = 5
        int32_t var_100_2 = 0
    int64_t* rcx_26 = var_d0
    int64_t* rbx_1 = *(arg1 + 0x168)
    
    if (rcx_26 != 0)
        (*(*rcx_26 + 0x10))(rcx_26)
    
    r14_2 = var_138
    int32_t rax_39 = (*(*rbx_1 + 0x38))(rbx_1, r14_2, &var_110, &var_d0, var_168)
    
    if (rax_39 s< 0)
        var_168.q = *(arg1 + 0x168)
        sub_140fff020(rax_39, 
            "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x907)

void*** result_1 = j_sub_140a82f30(0x100)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* r9_4 = var_d0
    int32_t r10_1 = var_90
    *result = &data_142d3ff08
    result[1].d = 0
    *result = &data_142ef2948
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x20) = *arg6
    result[6].d = arg6[1].d
    *(result + 0x3c) = var_c8
    result[8].d = arg5
    result[9] = &result[0xa]
    *(result + 0x34) = var_88
    result[7].d = 1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef5918
    result[0xd].d = 0
    result[0xc].d = r10_1
    sub_140fd9330(&result[0xe], arg1, r14_2, r9_4, var_84, var_146, &var_128, &var_60)
    int32_t rcx_32 = *(result + 0xfc)
    *result = &data_142ef6b10
    result[0xe] = &data_142ef6b68
    result[0x1f].d = arg5
    *(result + 0xfc) = ((rcx_32 & 0xfffffffe) | zx.d(arg3)) & 0xfffffffd

if ((arg5.b & 1) != 0)
    result[0xf].d = 1

sub_140fd4680(result)
int64_t* rbx_2 = &var_40

do
    int64_t* rcx_37 = rbx_2[-1]
    rbx_2 = &rbx_2[-1]
    i_1 -= 1
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x10))(rcx_37)
while (i_1 != 0)

int64_t* rbx_3 = r13

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_38 = *rbx_3
        
        if (rcx_38 != 0)
            (*(*rcx_38 + 0x10))(rcx_38)
        
        rbx_3 = &rbx_3[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r13 != 0)
    sub_140a74f90(r13)

int64_t* rcx_40 = var_d0

if (rcx_40 != 0)
    int64_t rdx_14 = *rcx_40
    (*(rdx_14 + 0x10))(rcx_40, rdx_14)

__security_check_cookie(var_40 ^ &var_188)
return result
