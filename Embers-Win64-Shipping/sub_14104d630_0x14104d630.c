// 函数: sub_14104d630
// 地址: 0x14104d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* rax_3 = *(arg1 + 0x70)
int32_t r13_1 = *(arg1 + 0x34) * arg4
void* var_1e0 = rax_3
int32_t var_1d0 = arg4
void* const var_188 = *(rax_3 + 0x20)
int32_t r13_2 = r13_1 + arg3
int32_t var_1e8 = arg3
int32_t var_1bc = r13_2
void** rax_5 = j_sub_140a82f30(0x80)
void** rdi = rax_5

if (rax_5 == 0)
    rdi = nullptr
else
    void* rcx = var_1e0
    *rax_5 = rcx
    rax_5[1] = rcx
    rax_5[2].d = 0
    __builtin_memset(&rax_5[3], 0, 0x50)
    rax_5[0xd].w = 0xff00
    rdi[0xf].d &= 0xfffffffc
    rdi[0xf].d |= 4
    rdi[0xe] = 0

int64_t rax_6 = sx.q(*(arg1 + 0x3c))
void** var_128 = rdi
int64_t r9 = rax_6 * 0x28
char rcx_2 = arg3.b
uint32_t r8 = *(r9 + 0x1439c85e8)
uint32_t rdx = r8
uint32_t r10 = *(r9 + &data_1439c85ec)
int64_t rbx_1 = *(arg1 + 0xf8)
uint32_t rax_8 = *(arg1 + 0x60) u>> rcx_2

if (rax_8 u>= r8)
    rdx = rax_8

uint32_t rax_10 = *(arg1 + 0x64) u>> rcx_2
uint32_t rcx_3 = r10

if (rax_10 u>= r10)
    rcx_3 = rax_10

int32_t r12_3 =
    (divu.dp.d(0:(r8 - 1 + rdx), r8) * (&data_1439c85f4)[rax_6 * 0xa] + 0xff) & 0xffffff00
int32_t rax_17 = divu.dp.d(0:(r10 - 1 + rcx_3), r10) * r12_3
void* rcx_5 = *(arg1 + 0x70)
void** var_178 = **(var_1e0 + 0x6d8) + 0x1c0
int64_t result_1 = 0
int64_t* rax_21 = sub_141023a10(rcx_5)
int64_t result

if ((*(*rax_21 + 0x758))(rax_21, &result_1, zx.q(var_1e8), zx.q(var_1d0), *(arg1 + 0x40), arg5, 
        arg1 + 0x208, rbx_1, arg6) != 0)
    sub_14103b0d0(arg1 + 0x1a8, &var_1bc, &var_128)
    result = result_1
else
    if (arg5 != 1)
        rdi[0xf].d |= 2
        void* rax_24 = *(arg1 + 0xc0)
        uint64_t rbx_3 = zx.q(rax_17)
        int32_t* var_1f8
        var_1f8.b = 1
        int64_t var_13c_1 = 1
        int32_t var_168_1 = 1
        int32_t r8_2 = *(var_1e0 + 0x10)
        int32_t rax_26 = r8_2
        
        if (data_143f0f1d8 != 0)
            rax_26 = 1
        
        int32_t var_150_1 = 1
        int32_t var_1a4_1 = rax_26
        int32_t var_90_1 = rax_26
        int64_t var_144_1 = 1
        void* const rcx_10 = var_188
        int64_t var_200_1 = 0
        void** var_208_1 = &var_1d0
        int64_t var_14c_1 = 0x10001
        void** var_1b0 = 3
        int32_t var_1a8_1 = 0
        int64_t var_160_1 = 0
        int32_t var_210
        var_210.q = 0
        int128_t var_a0 = var_1b0.o
        var_1d0.q = 0
        var_1e8 = 0x400
        uint128_t var_78_1 = rbx_3.o
        int32_t var_218
        var_218.q = &var_1e8
        int128_t var_88 = var_168_1.o
        int64_t var_138
        uint64_t var_58_1 = var_138
        int128_t var_68_1 = var_14c_1:4.o
        int32_t rax_27 = sub_141048420(rcx_10, &var_88, r8_2, &var_a0, var_218, var_210, var_208_1, 
            var_200_1, var_1f8.b)
        
        if (rax_27 s< 0)
            var_188 = nullptr
            var_210.q = &var_188
            int64_t var_180_1 = 0
            var_218.q = 0
            sub_14106a020(rax_27, 
                "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, MipBytesAligned, "
            "&StagingTexture, nullptr)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Texture.cpp", 
                0x65c, var_218)
        
        void* rbx_4 = var_1d0.q
        int128_t zmm2_1
        int128_t zmm3_1
        zmm2_1, zmm3_1 = sub_141014320(&rdi[1], rbx_4, rbx_3.d, 0)
        uint32_t var_1a8_2 = rcx_3
        var_1b0:4.d = rdx
        int32_t var_1a4_2 = 1
        int32_t var_104_1 = 0
        int64_t var_120_1 = 0
        var_1b0.d = *(rax_24 + 0xa8)
        int64_t var_100 = *(rbx_4 + 0x20)
        int32_t var_108_1 = r12_3
        int32_t var_f8_1 = 1
        var_1a8_2.q = arg1
        int128_t var_f0_1 = var_120_1.o
        int128_t var_e0_1 = var_1b0.o
        int64_t rcx_13 = *(*(arg1 + 0xc0) + 0x20)
        var_1b0 = var_178
        int64_t var_d0
        int64_t* var_1a0_1 = &var_d0
        void** var_198_1 = &var_1e0
        int64_t* var_190_1 = &var_100
        var_d0 = rcx_13
        int32_t var_c8_1 = 0
        int32_t var_c0_1 = r13_2
        
        if (arg2 != 0)
            int32_t rbx_5 = data_143f029c8
            sub_140b34200("FlushRHIThreadTotal", rbx_5)
            
            if (*(arg2 + 0x14) u> 0)
                j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)
            
            sub_14198b230()
            
            if (data_143f01c92 != 0)
                sub_14198b3f0()
            
            int64_t rdx_11
            rdx_11.b = 1
            sub_14198b7d0()
            sub_140b38680("FlushRHIThreadTotal", rbx_5)
        
        sub_141042d40(&var_1b0)
        sub_141022330(**(var_1e0 + 0x6d8), &var_178, 1)
        var_178 = &data_142efcd90
        int64_t* var_170
        
        if (var_170 != 0)
            int32_t rax_36 = *(var_170 + 0x14)
            *(var_170 + 0x14) -= 1
            
            if (rax_36 == 1 && var_170 != 0)
                sub_14100eba0(var_170)
                j_sub_140a74f90(var_170)
        
        *(rdi + 0x74) = r12_3
        *arg6 = r12_3
        goto label_14104dadd
    
    result = sub_1410130c0(var_1e0 + 0x7c0, (rax_17 + 0x1ff) & 0xfffffe00, 0x200, &rdi[1])
    
    if (result != 0)
        *arg6 = r12_3
        *(rdi + 0x74) = r12_3
    label_14104dadd:
        result_1 = rdi[9]
        sub_14103b0d0(arg1 + 0x1a8, &var_1bc, &var_128)
        result = result_1

__security_check_cookie(rax_1 ^ &var_238)
return result
