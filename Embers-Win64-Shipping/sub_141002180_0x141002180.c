// 函数: sub_141002180
// 地址: 0x141002180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* arg_18 = arg3
void* r12 = **(arg1 + 0x20)
int32_t arg_28
int64_t result

if ((*(arg3 + 0x20) & 6) == 0)
    void* rcx_12 = *(arg3 + 0x30)
    void* var_100 = rcx_12
    int64_t var_f8 = *(arg3 + 0x80)
    
    if (arg6 != 0)
        result = sub_1410130c0(rcx_12 + 0x7c0, arg_28, 0x200, arg3 + 0xf8)
    else
        *(arg3 + 0x168) |= 2
        void** rax_9 = zx.q(arg_28 + arg_20)
        int32_t var_110_1 = 0
        void* const arg_8 = nullptr
        int32_t r8_3 = *(rcx_12 + 0x10)
        int32_t rax_10
        int128_t zmm2_1
        int128_t zmm3_1
        rax_10, zmm2_1, zmm3_1 = sub_141048240(r12, 3, r8_3, zx.q(r8_3), rax_9, &arg_8, 0)
        
        if (rax_10 s< 0)
            int64_t var_f0 = 0
            int64_t* var_120_2 = &var_f0
            int64_t var_e8_1 = 0
            zmm2_1, zmm3_1 = sub_14106a020(rax_10, 
                "Adapter.CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, Offset + Size, "
            "&StagingBuffer, nullptr)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Buffer.cpp", 
                0x161, nullptr)
        
        void** var_e0 = &var_100
        int64_t* var_d8_1 = &var_f8
        void** var_d0_1 = &arg_18
        void** var_c8_1 = &arg_8
        int32_t* var_c0_1 = &arg_20
        int32_t* var_b8_1 = &arg_28
        
        if (arg2 != 0 && arg2[0x10] == 0)
            int32_t rbx_6 = data_143f029c8
            sub_140b34200("FlushRHIThreadTotal", rbx_6)
            
            if (*(arg2 + 0x14) u> 0)
                j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)
            
            sub_14198b230()
            
            if (data_143f01c92 != 0)
                sub_14198b3f0()
            
            int64_t rdx_9
            rdx_9.b = 1
            sub_14198b7d0()
            sub_140b38680("FlushRHIThreadTotal", rbx_6)
        
        sub_1410102f0(&var_e0)
        sub_141014320(arg3 + 0xf8, arg_8, arg_28, 0)
        result = *(arg3 + 0x138)
else if ((*(arg3 + 0x168) & 4) == 0)
    void* r15_1 = *(arg3 + 0x30)
    
    if (arg2 == 0 || arg2[0x10] != 0 || arg6 != 1)
        void var_a8
        sub_14103f450(&var_a8, r15_1)
        void* rcx_8 = arg_18
        int64_t result_1
        int512_t zmm0
        result_1, zmm0 = sub_141012e10(*(r12 + (zx.q(*(r15_1 + 0x18)) << 3) + 0x4a0), 
            *(rcx_8 + 0x1c), *(rcx_8 + 0xd8), &var_a8, arg5)
        result = result_1
        j_sub_141059a80(&var_a8, sub_14105a0a0(arg_18, &var_a8, zmm0))
    else
        void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rbx_3[0x10]
        
        if (rax_1 u> *(arg2 + 0x38))
            arg5 = sub_140b0e3d0(&arg2[0x30], 0x88)
            rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rbx_3[0x10]
        
        *(arg2 + 0x30) = rax_1
        int64_t* rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rbx_3
        void* rcx_1 = arg_18
        *(arg2 + 8) = &rbx_3[1]
        rbx_3[1] = 0
        rbx_3[2] = rcx_1
        *rbx_3 = &data_142f00018
        sub_14103f450(&rbx_3[3], r15_1)
        void* rcx_3 = arg_18
        result = sub_141012e10(*(r12 + (zx.q(*(r15_1 + 0x18)) << 3) + 0x4a0), *(rcx_3 + 0x1c), 
            *(rcx_3 + 0xd8), &rbx_3[3], arg5)
        int64_t* var_108
        sub_141980430(arg2, &var_108, 1)
        int64_t* rcx_6 = var_108
        
        if (rcx_6 != 0)
            rcx_6[9].d -= 1
            
            if (rcx_6[9].d == 1)
                sub_140a2f6e0(rcx_6)
else
    result = *(arg3 + 0xb0)

*(arg3 + 0x160) = arg_20
*(arg3 + 0x164) = arg_28
*(arg3 + 0x168) = (*(arg3 + 0x168) & 0xfffffffb) | 1
return result
