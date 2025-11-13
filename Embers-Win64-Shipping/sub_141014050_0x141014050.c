// 函数: sub_141014050
// 地址: 0x141014050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* r15 = *arg1
void* var_b8 = nullptr
void* r14 = *(r15 + 0x20)
sub_141044ca0(arg6, arg5)
char rax_2 = (arg2[0xc]).b
uint64_t result
void* var_98
int64_t var_88
void arg_30

if ((rax_2 & 1) != 0 || (rax_2 & 2) != 0 || (rax_2 & 4) != 0 || arg2[9] != 1)
label_14101424e:
    int32_t rax_23
    int32_t rcx_11
    
    if (data_143f0f1d8 == 0)
        rcx_11 = *(arg1 + 0xc)
        rax_23 = arg1[1].d
    else
        rcx_11 = 1
        rax_23 = 1
    
    int32_t r8_6 = arg1[1].d
    int32_t var_7c_1 = rax_23
    char var_d8_1 = 0
    void** var_e8_1 = &var_b8
    int32_t var_60_1 = rcx_11
    int32_t var_80_1 = 0
    var_88 = 1
    int128_t* var_f0_1 = arg3
    int32_t* var_f8_3 = &arg_30
    int128_t var_70 = var_88.o
    *(arg2 + 8) = 0
    int32_t result_2 =
        sub_141048420(r14, arg2, r8_6, &var_70, var_f8_3, var_f0_1, var_e8_1, arg7, var_d8_1)
    
    if (result_2 s< 0)
        var_98 = nullptr
        void** var_f0_2 = &var_98
        int64_t var_90_1 = 0
        sub_14106a020(result_2, 
            "RetCode = Adapter->CreateCommittedResource(Desc, GetGPUMask(), HeapProps, InitialState, "
        "ClearValue, &NewResource, Name, false)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 
            0x4a9, nullptr)
    
    void* rdx_7 = var_b8
    *(arg6 + 8) = 1
    sub_14105ac70(arg6, rdx_7)
    result = zx.q(result_2)
else
    int32_t rdx = arg2[8]
    int32_t r9 = *arg2
    int64_t var_a8 = 0
    int32_t var_a0_1 = 0
    sub_1410226b0(&var_a8, rdx, arg4, r9, 1)
    int32_t r8_3 = divu.dp.d(0:(var_a0_1 - 1 + zx.d(arg2[7].w)), var_a0_1)
        * divu.dp.d(0:(arg2[4] - 1 + var_a8.d), var_a8.d)
        * divu.dp.d(0:(arg2[6] - 1 + var_a8:4.d), var_a8:4.d)
    int64_t rax_14 = 0x10000
    
    if (r8_3 u<= 0x10)
        rax_14 = 0x1000
    
    *(arg2 + 8) = rax_14
    int64_t* rcx_3 = *(*(r15 + 0x20) + 0x18)
    (*(*rcx_3 + 0xc8))(rcx_3, &var_88, 0, 1, arg2)
    int32_t rdx_2 = var_88.d
    int64_t* var_c0 = nullptr
    var_98 = &arg1[2]
    int32_t var_80
    int32_t rax_18 = sub_1410133d0(&arg1[2], rdx_2, var_80, &var_c0)
    uint64_t r15_1 = zx.q(rax_18)
    
    if (rax_18 == 0xffffffff)
        int64_t* rax_21 = var_c0
        
        if (rax_21 != 0)
            rax_21[1].d -= 1
            
            if (rax_21[1].d == 1)
                int64_t* rcx_10 = var_c0
                (**rcx_10)(rcx_10, 1)
        
        goto label_14101424e
    
    int64_t* rbx_1 = var_c0
    char var_d8 = 0
    int32_t result_1 =
        sub_141048c60(r14, arg2, rbx_1, zx.q(r15_1.d), &arg_30, arg3, &var_b8, arg7.b)
    
    if (result_1 s>= 0)
        int64_t rdx_4 = var_88
        void* rax_19 = var_98
        *(arg6 + 0x28) = r15_1.d
        *(arg6 + 0x58) = rdx_4
        void* rdx_5 = var_b8
        *(arg6 + 8) = 2
        *(arg6 + 0x20) = rax_19
        *(arg6 + 0x61) = 1
        *(arg6 + 0x50) = r15_1
        sub_14105ac70(arg6, rdx_5)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t* rcx_8 = var_c0
            (**rcx_8)(rcx_8, 1)
    
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_118)
return result
