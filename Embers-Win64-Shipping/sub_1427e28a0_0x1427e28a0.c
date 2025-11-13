// 函数: sub_1427e28a0
// 地址: 0x1427e28a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int64_t var_d8 = 2
int32_t var_d0 = 0
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &var_d8)
void var_48
physx::PxCapsuleGeometryGeneratedInfo::PxCapsuleGeometryGeneratedInfo(&var_48)
int64_t rdi_1 = *arg1
int64_t rbx_1 = arg1[1]
int64_t rsi = arg1[3]
int64_t rbp = arg1[4]
void var_88
physx::PxCapsuleGeometryGeneratedInfo::PxCapsuleGeometryGeneratedInfo(&var_88)
int64_t var_c8 = rdi_1
int64_t* var_b8 = &var_d8
int64_t var_c0 = rbx_1
int64_t var_b0 = rsi
int64_t var_a8 = rbp
int128_t var_a0 = zx.o(0)
sub_1427d3f70(&var_c8, &var_88)
void var_68
void* result = sub_1427d3f70(&var_c8, &var_68)
void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_9 = arg1[1]
        (*(*rcx_9 + 0x20))(rcx_9, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_13 = arg1[1]
        (*(*rcx_13 + 0x20))(rcx_13, rdx_5)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
