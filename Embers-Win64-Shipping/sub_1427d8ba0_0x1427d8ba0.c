// 函数: sub_1427d8ba0
// 地址: 0x1427d8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_70 = *arg2
int128_t var_60 = arg2[1]
sub_1427e5da0(arg1, *arg2)
int32_t* rcx = arg1[6]
int32_t rax = 0

if (rcx != 0)
    rax = *rcx

int32_t var_74 = rax
int32_t* rax_1 = arg1[5]
char var_78 = 1

if (rax_1 != 0)
    *rax_1 += 1

int64_t var_50
__builtin_memset(&var_50, 0, 0x40)
physx::PxMeshScaleGeneratedInfo::PxMeshScaleGeneratedInfo(&var_50)
arg1[5]
void* result = sub_1427d9710(arg1)
void* rdx_2 = *arg1

if (*(rdx_2 + 0x10) != 0)
    if (*(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg1[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_2)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
