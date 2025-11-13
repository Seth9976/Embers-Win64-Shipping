// 函数: sub_140fe8ae0
// 地址: 0x140fe8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* r15

if (arg3 != 0)
    r15 = (*(*arg3 + 0x48))(arg3)
else
    r15 = nullptr

int64_t* rcx_1 = *(r15 + 0x38)
int32_t var_80
(*(*rcx_1 + 0x50))(rcx_1, &var_80)
int32_t var_64

if (var_64 != 3)
    int32_t rax_7 = arg4[1]
    int32_t r8 = arg4[2]
    int32_t rcx_5 = arg4[3]
    int32_t rdx_2 = *arg4
    int32_t r10_2 = rcx_5 - rax_7
    int32_t r9_1 = r8 - rdx_2
    int32_t var_c8 = rdx_2
    int64_t* rcx_6 = *(arg1 + 0x168)
    int32_t var_c0_1 = 0
    int64_t var_d0 = 0
    int32_t var_b0 = r9_1
    int32_t var_b4_1 = 1
    int32_t var_ac_1 = r10_2
    int32_t var_a8_1 = 1
    int32_t var_a4_1 = 1
    int32_t var_70
    int32_t var_a0_1 = var_70
    int64_t var_9c
    __builtin_memcpy(&var_9c, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00", 
        0x18)
    int32_t rax_10 = (*(*rcx_6 + 0x28))(rcx_6, &var_b0, 0, &var_d0)
    int64_t var_108
    
    if (rax_10 s< 0)
        var_108 = *(arg1 + 0x168)
        sub_140fff020(rax_10, 
            "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
            0x1d9)
    
    *arg5 = data_143dbb180.d
    arg5[1] = data_143dbb180:4.d
    arg5[2] = r9_1
    arg5[3] = r10_2
    int32_t var_58
    uint32_t rdx_4
    
    if (var_58 != 4)
        rdx_4 = zx.d(*(arg6 + 0x11))
    else
        int32_t rcx_9 = *arg6
        
        if (rcx_9 == 1)
            rdx_4 = *(arg3 + 0x34) + zx.d(*(arg6 + 0x11))
        else if (rcx_9 == 2)
            rdx_4 = *(arg3 + 0x34) * 2 + zx.d(*(arg6 + 0x11))
        else if (rcx_9 == 3)
            rdx_4 = *(arg3 + 0x34) * 3 + zx.d(*(arg6 + 0x11))
        else if (rcx_9 == 4)
            rdx_4 = *(arg3 + 0x34) * 4 + zx.d(*(arg6 + 0x11))
        else if (rcx_9 == 5)
            rdx_4 = *(arg3 + 0x34) * 5 + zx.d(*(arg6 + 0x11))
        else
            rdx_4 = zx.d(*(arg6 + 0x11))
    
    int32_t* r8_1 = nullptr
    int32_t var_7c
    
    if (var_c8 != 0 || rax_7 != 0 || r8 != var_80 || rcx_5 != var_7c)
        r8_1 = &var_c8
    
    int64_t* rcx_14 = *(arg1 + 0x150)
    var_108.d = 0
    (*(*rcx_14 + 0x170))(rcx_14, var_d0, 0, 0, var_108, 0, *(r15 + 0x38), rdx_4, r8_1)
    *arg2 = var_d0
else
    *arg5 = *arg4
    arg5[1] = arg4[1]
    arg5[2] = arg4[2]
    arg5[3] = arg4[3]
    int64_t* rcx_4 = *(r15 + 0x38)
    *arg2 = rcx_4
    
    if (rcx_4 != 0)
        int64_t rdx_1 = *rcx_4
        (*(rdx_1 + 8))(rcx_4, rdx_1)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
