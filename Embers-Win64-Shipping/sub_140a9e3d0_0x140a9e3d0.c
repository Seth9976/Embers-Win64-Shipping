// 函数: sub_140a9e3d0
// 地址: 0x140a9e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rcx

if (arg4[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg4

int64_t var_48 = 0
int64_t var_40 = 0
int32_t var_24 = 0
int128_t var_38 = *arg6
int32_t rax_1 = sub_140a5ff80(rcx, 0)

if (&var_48 != arg5)
    int32_t rbx_1 = arg5[1].d
    int64_t rdi_1 = *arg5
    var_40.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_48, rbx_1, 0)
        memcpy(var_48, rdi_1, rbx_1 * 2)

int32_t result_2
int32_t result_1 = result_2
int128_t zmm1 = *arg3
int128_t var_88 = *arg2
int128_t var_78 = zmm1
sub_140aab040(arg1, &result_2, &var_88)
int64_t result_3 = sx.q(result_2)
int32_t* result

if (result_3.d == 0xffffffff)
    result = nullptr
else
    result = result_3 * 0x50 + *arg1

void* rbx_2 = &result[8]

if (result == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
    zmm1 = *arg3
    int128_t var_68
    var_88.q = &var_68
    var_88:8.q = &var_48
    var_68 = *arg2
    int128_t var_58_1 = zmm1
    result = sub_140a91d10(arg1, &result_2, &var_88, nullptr)
else if (result_1 s< *(rbx_2 + 0x24))
    if (rbx_2 != &var_48)
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *rbx_2 = var_48
        var_48 = 0
        *(rbx_2 + 8) = var_40.d
        *(rbx_2 + 0xc) = var_40:4.d
        int64_t var_40_1 = 0
    
    *(rbx_2 + 0x10) = var_38
    *(rbx_2 + 0x20) = rax_1
    result = zx.q(result_1)
    *(rbx_2 + 0x24) = result.d

int64_t rcx_6 = var_48

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
