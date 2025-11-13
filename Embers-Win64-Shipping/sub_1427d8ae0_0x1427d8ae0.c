// 函数: sub_1427d8ae0
// 地址: 0x1427d8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_70 = *arg2
int128_t var_60 = arg2[1]
sub_1427e5d10(arg1, *arg2)
int32_t* rcx = arg1[0xc]
int32_t rax = 0

if (rcx != 0)
    rax = *rcx

int32_t var_74 = rax
int32_t* rax_1 = arg1[0xb]
char var_78 = 1

if (rax_1 != 0)
    *rax_1 += 1

int64_t var_50
__builtin_memset(&var_50, 0, 0x40)
physx::PxMeshScaleGeneratedInfo::PxMeshScaleGeneratedInfo(&var_50)
void* rax_2 = arg1[0xb]
void arg_8
void* rdx_1 = &arg_8

if (rax_2 != 0)
    rdx_1 = rax_2

sub_1427d9630(arg1, rdx_1, &var_78, &var_50)
return sub_1427e5c70(arg1) __tailcall
