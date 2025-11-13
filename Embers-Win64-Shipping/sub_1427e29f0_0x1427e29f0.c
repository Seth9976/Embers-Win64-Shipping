// 函数: sub_1427e29f0
// 地址: 0x1427e29f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int32_t var_12c = 0x3f800000
int128_t var_144 = data_142e6da00
int64_t var_128 = 0
char var_120 = 0
int16_t var_11f = 0
char var_11d = 0
int32_t var_148 = 4
int64_t var_134 = 0
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &var_148)
void var_78
physx::PxConvexMeshGeometryGeneratedInfo::PxConvexMeshGeometryGeneratedInfo(&var_78)
int64_t rdi_1 = *arg1
int64_t rbx_1 = arg1[1]
int64_t rsi = arg1[3]
int64_t r14 = arg1[4]
void var_d8
physx::PxConvexMeshGeometryGeneratedInfo::PxConvexMeshGeometryGeneratedInfo(&var_d8)
int64_t var_118 = rdi_1
int32_t* var_108 = &var_148
int64_t var_110 = rbx_1
int64_t var_100 = rsi
int64_t var_f8 = r14
int128_t var_f0 = zx.o(0)
sub_1427d8ba0(&var_118, &var_d8)
void var_b8
sub_1427d8d50(&var_118, &var_b8)
void var_98
void* result = sub_1427d8eb0(&var_118, &var_98)
void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_10 = arg1[1]
        (*(*rcx_10 + 0x20))(rcx_10, rdx_5)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_6 = *arg1

if (*(rdx_6 + 0x10) != 0)
    if (*(*(rdx_6 + 8) + zx.q(*(rdx_6 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_14 = arg1[1]
        (*(*rcx_14 + 0x20))(rcx_14, rdx_6)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
