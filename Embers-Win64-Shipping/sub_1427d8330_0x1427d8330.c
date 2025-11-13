// 函数: sub_1427d8330
// 地址: 0x1427d8330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_90 = *arg2
int128_t var_80 = arg2[1]
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[6]
int32_t rcx = 0xc0

if (rax != 0)
    rcx = 0xc0 + *rax

int32_t* rax_2 = arg1[5]
char var_98 = 1
int32_t var_94 = rcx

if (rax_2 != 0)
    *rax_2 += 1

void var_70
memset(&var_70, 0, 0x60)
physx::PxClothMotionConstraintConfigGeneratedInfo::PxClothMotionConstraintConfigGeneratedInfo(
    &var_70)
arg1[5]
void* result = sub_1427d9550(arg1)
void* rdx_2 = *arg1

if (*(rdx_2 + 0x10) != 0)
    if (*(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_7 = arg1[1]
        (*(*rcx_7 + 0x20))(rcx_7, rdx_2)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
