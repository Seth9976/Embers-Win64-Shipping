// 函数: sub_1427e2d80
// 地址: 0x1427e2d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int32_t arg_8 = 0
int32_t arg_c = 0
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &arg_8)
void var_58
physx::PxSphereGeometryGeneratedInfo::PxSphereGeometryGeneratedInfo(&var_58)
int64_t rdi_1 = *arg1
int64_t rbx_1 = arg1[1]
int64_t rsi = arg1[3]
int64_t rbp = arg1[4]
void var_90
physx::PxSphereGeometryGeneratedInfo::PxSphereGeometryGeneratedInfo(&var_90)
int64_t var_c8 = rdi_1
int32_t* var_b8 = &arg_8
int64_t var_c0 = rbx_1
int64_t var_b0 = rsi
int64_t var_a8 = rbp
int128_t var_a0 = zx.o(0)
void var_78
void* result = sub_1427d3f70(&var_c8, &var_78)
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_3)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_12 = arg1[1]
        (*(*rcx_12 + 0x20))(rcx_12, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
