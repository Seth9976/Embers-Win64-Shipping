// 函数: sub_1427e2b80
// 地址: 0x1427e2b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int32_t var_c8 = 6
int64_t var_c0 = 0
char var_ac = 0
int16_t var_ab = 0
char var_a9 = 0
int32_t var_b8 = 0x3f800000
int32_t var_b4 = 0x3f800000
int32_t var_b0 = 0x3f800000
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &var_c8)
void var_a8
int64_t rdx_2 =
    physx::PxHeightFieldGeometryGeneratedInfo::PxHeightFieldGeometryGeneratedInfo(&var_a8)
arg1[3]
arg1[1]
int64_t var_d8 = arg1[4]
void* result = sub_1427e1890(*arg1, rdx_2)
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_7 = arg1[1]
        (*(*rcx_7 + 0x20))(rcx_7, rdx_3)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_11 = arg1[1]
        (*(*rcx_11 + 0x20))(rcx_11, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
