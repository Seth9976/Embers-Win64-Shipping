// 函数: sub_1427e2760
// 地址: 0x1427e2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int64_t var_98 = 3
int64_t var_90 = 0
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &var_98)
void var_28
physx::PxBoxGeometryGeneratedInfo::PxBoxGeometryGeneratedInfo(&var_28)
int64_t rdi_1 = *arg1
int64_t rbx_1 = arg1[1]
int64_t rsi = arg1[3]
int64_t rbp = arg1[4]
void var_48
physx::PxBoxGeometryGeneratedInfo::PxBoxGeometryGeneratedInfo(&var_48)
int64_t var_80 = rdi_1
int64_t* var_70 = &var_98
int64_t var_78 = rbx_1
int64_t var_68 = rsi
int64_t var_60 = rbp
int128_t var_58 = zx.o(0)
void* result = sub_1427d8950(&var_80, &var_48)
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
