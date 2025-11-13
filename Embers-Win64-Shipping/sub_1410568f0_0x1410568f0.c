// 函数: sub_1410568f0
// 地址: 0x1410568f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rax_4 = (*(*arg2 + 8))(arg2)
void* rbx = rax_4

if (rax_4 != 0)
    while (*(rbx + 0x70) != *(**(arg1 + 0x20) + (zx.q(arg7) << 3) + 0x9d8))
        void* rax_5 = *(rbx + 0x120)
        rbx = rax_5 - 0x68
        
        if (rax_5 == 0)
            rbx = nullptr
        
        if (rbx == 0)
            break

void* r15 = *(rbx + 0xc0)
int32_t rax_7 = sub_140fdf270((&data_1439c85fc)[sx.q(*(rbx + 0x3c)) * 0xa])
int64_t* result_1 = *(rbx + 0x138)

if (result_1 != 0)
    *(result_1 + 0x14) += 1

void** const var_b0 = &data_142efcd90
int64_t var_a0 = *(rbx + 0x140)

if (sub_141022a90(*(*(**(arg1 + 0x20) + 0x9d8) + 0x38), &var_b0) != 0)
    sub_141037f50(&var_b0)
else
    void** var_90
    sub_141022330(**(*(**(arg1 + 0x20) + 0x9d8) + 0x6d8), &var_90, 1)
    var_90 = &data_142efcd90
    int64_t* var_88
    
    if (var_88 != 0)
        int32_t rax_12 = *(var_88 + 0x14)
        *(var_88 + 0x14) -= 1
        
        if (rax_12 == 1 && var_88 != 0)
            sub_14100eba0(var_88)
            j_sub_140a74f90(var_88)

int64_t var_70 = 0
int64_t var_68 = *(r15 + 0x98)
int64_t* rcx_15 = *(r15 + 0x20)
int64_t var_98
int32_t rax_15 = (*(*rcx_15 + 0x40))(rcx_15, 0, &var_70, &var_98)

if (rax_15 != 0x887a0005)
    if (rax_15 s< 0)
        int64_t var_80 = 0
        int64_t var_78_1 = 0
        int64_t* var_d0_1 = &var_80
        sub_14106a020(rax_15, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 
            0x5b1, *(**(arg1 + 0x20) + 0x18))
    
    void var_60
    sub_14104c2a0(rbx, &var_60, 0)
    *arg4 = var_98
    int32_t var_48
    *arg5 = divu.dp.d(0:var_48, rax_7)
    int32_t var_50
    *arg6 = var_50
else
    *(**(arg1 + 0x20) + 0x54) = 1
    *arg4 = 0
    *arg6 = 0
    *arg5 = 0
    int64_t* rcx_20 = *(**(arg1 + 0x20) + 0x18)
    (*(*rcx_20 + 0x128))(rcx_20)

var_b0 = &data_142efcd90
int64_t* result = result_1

if (result != 0)
    int32_t rdi_1 = *(result + 0x14)
    *(result + 0x14) -= 1
    
    if (rdi_1 == 1 && result_1 != 0)
        sub_14100eba0(result_1)
        result = j_sub_140a74f90(result_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
