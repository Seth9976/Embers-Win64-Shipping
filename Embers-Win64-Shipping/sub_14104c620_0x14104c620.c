// 函数: sub_14104c620
// 地址: 0x14104c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int128_t* rdx = arg9
int64_t* r9 = arg3
int128_t* var_118 = rdx
void** rax_3 = *(**(arg1 + 0x20) + 0x9d8)
void** var_130 = rax_3
void* r11 = rax_3[4]
int32_t rbx = rax_3[2].d
int64_t* rax_4 = rax_3[0xdb]
void* var_150 = r11
void* rax_5 = *rax_4
void* r13

if (arg3 != 0)
    void* rax_8 = (*(*arg3 + 0x48))(arg3, arg5, arg6, r9)
    r9 = arg3
    r13 = rax_8
    rdx = var_118
    r11 = var_150
else
    r13 = nullptr

void* r15 = *(r13 + 0x58)
int64_t* result

if (*(r15 + 0x100) != 3)
    int32_t rdx_1 = *arg4
    int32_t r8_1 = arg4[2]
    int32_t rcx_7 = arg4[3]
    int32_t rax_12 = arg4[1]
    int32_t rsi_1 = 3
    int64_t rax_13 = sx.q(*(r9 + 0x3c))
    int32_t var_68 = rdx_1
    int32_t var_160_1 = 0
    int32_t var_60_1 = 0
    int32_t var_168_1 = 0
    int32_t var_54_1 = 1
    int32_t rcx_10 = (&data_1439c85f4)[rax_13 * 0xa] * *(r15 + 0x98)
    int32_t rdx_2 = *(r15 + 0xa0)
    int64_t* var_170_1 = &var_150
    var_150 = nullptr
    int32_t rcx_12 = (rcx_10 + 0xff) & 0xffffff00
    int32_t rax_14 =
        sub_141048240(r11, 3, rbx, zx.q(rbx), zx.q(rdx_2 * rcx_12), var_170_1, var_168_1)
    
    if (rax_14 s< 0)
        int64_t var_110 = 0
        int64_t* var_170_2 = &var_110
        int64_t var_108_1 = 0
        sub_14106a020(rax_14, 
            "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, TempTexture2D."
        "GetInitReference(), nullptr)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 
            0x2a8, nullptr)
    
    *arg7 = data_143dbb180.d
    arg7[1] = data_143dbb180:4.d
    arg7[2] = r8_1 - rdx_1
    arg7[3] = rcx_7 - rax_12
    uint32_t rbx_3
    
    if ((*(r13 + 0x19c) & 1) == 0)
        rbx_3 = zx.d(*(arg8 + 0x11))
    else
        int32_t rcx_15 = *arg8
        
        if (rcx_15 == 1)
            rsi_1 = 1
        else if (rcx_15 == 2)
            rsi_1 = 2
        else if (rcx_15 != 3)
            if (rcx_15 == 4)
                rsi_1 = 4
            else if (rcx_15 == 5)
                rsi_1 = 5
            else
                rsi_1 = 0
        
        rbx_3 = *(arg3 + 0x34) * rsi_1 + zx.d(*(arg8 + 0x11))
    
    int32_t* var_148_1 = nullptr
    int32_t rax_22
    uint64_t rcx_20
    
    if (var_68 != 0 || rax_12 != 0)
    label_14104c8a1:
        rcx_20 = zx.q(*(r15 + 0x98))
        var_148_1 = &var_68
        rax_22 = *(r15 + 0xa0)
    else
        rcx_20 = *(r15 + 0x98)
        
        if (zx.q(r8_1) != rcx_20)
            goto label_14104c8a1
        
        rax_22 = *(r15 + 0xa0)
        
        if (rcx_7 != rax_22)
            goto label_14104c8a1
    
    int32_t var_f8_1 = rax_22
    int32_t r12_1 = -1
    int32_t var_fc_1 = rcx_20.d
    int32_t var_d0_1 = rcx_12
    int32_t var_f4_1 = 1
    int128_t zmm0_1 = (*(r15 + 0xa8)).o
    int64_t var_e8_1 = 0
    int64_t var_c8 = *(var_150 + 0x20)
    int32_t var_c0_1 = 1
    int32_t var_cc_1 = 0
    char var_158_1 = 0
    int128_t var_b8_1 = var_e8_1.o
    int128_t var_a8_1 = zmm0_1
    int64_t var_98 = *(*(r13 + 0x58) + 0x20)
    int32_t var_90_1 = 0
    uint32_t var_88_1 = rbx_3
    void* rsi_2 = *(r13 + 0x58)
    void** var_178_1
    
    if (*(rsi_2 + 0xfc) != 0)
        sub_141037220(rax_5 + 0x1c0, rsi_2, 0x800, rbx_3)
    else
        r12_1 = *(rsi_2 + 0xf0)
        
        if (r12_1 != 0x800)
            var_158_1 = 1
            var_178_1.d = rbx_3
            sub_1410129f0(rax_5 + 0x1c0, rsi_2, r12_1, 0x800, var_178_1.d)
    
    void* r15_2 = *(rax_5 + 0x1c8)
    int32_t rdx_6 = *(r15_2 + 0x128)
    int64_t* rcx_25 = *(r15_2 + 0x30)
    
    if (rdx_6 != 0)
        (*(*rcx_25 + 0xd0))(rcx_25, rdx_6, *(r15_2 + 0x120))
        *(r15_2 + 0x128) = 0
    
    int64_t* var_170_3 = &var_98
    var_178_1.d = 0
    void* rcx_26 = *var_130[0xdb]
    *(rcx_26 + 0x3b90) += 1
    int64_t* rcx_27 = *(*(rax_5 + 0x1c8) + 0x30)
    (*(*rcx_27 + 0x80))(rcx_27, &var_c8, 0, 0, var_178_1, var_170_3, var_148_1, var_160_1, 
        var_158_1)
    void* rdx_9 = *(r13 + 0x58)
    void* rax_32 = *(rdx_9 + 0x28)
    
    if (rax_32 == 0)
        if (data_1439b4ad4 != 0 && *(rdx_9 + 0x38) != 0)
            sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rdx_9 + 0x30)
    else if (data_1439b4ad4 != 0 && *(rax_32 + 0x30) != 0)
        sub_141026da0(*(*(rax_5 + 0x1c8) + 0x118), rax_32 + 0x28)
    
    *var_118 = var_e8_1.o
    var_118[1] = zmm0_1
    sub_141022330(*var_130[0xdb], &var_130, 1)
    var_130 = &data_142efcd90
    int64_t* var_128
    
    if (var_128 != 0)
        int32_t rdi_1 = *(var_128 + 0x14)
        *(var_128 + 0x14) -= 1
        
        if (rdi_1 == 1 && var_128 != 0)
            sub_14100eba0(var_128)
            j_sub_140a74f90(var_128)
    
    *arg2 = var_150
    
    if (var_158_1 != 0)
        var_178_1.d = rbx_3
        sub_1410129f0(rax_5 + 0x1c0, rsi_2, 0x800, r12_1, var_178_1.d)
    
    result = arg2
else
    sub_14104c2a0(r13 - 0x68, rdx, zx.d(*(arg8 + 0x11)))
    *arg7 = *arg4
    result = arg2
    arg7[1] = arg4[1]
    arg7[2] = arg4[2]
    arg7[3] = arg4[3]
    void* rcx_6 = *(r13 + 0x58)
    *arg2 = rcx_6
    
    if (rcx_6 != 0)
        *(rcx_6 + 8) += 1

__security_check_cookie(rax_1 ^ &var_198)
return result
