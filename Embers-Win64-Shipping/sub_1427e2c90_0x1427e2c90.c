// 函数: sub_1427e2c90
// 地址: 0x1427e2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "Geometry")
sub_1427e5da0(arg1, arg3)
class physx::PxShape* rdx_1 = arg1[2]
int32_t arg_20 = 1
physx::PxShapeGeometryPropertyHelper::getGeometry(arg2 + 0x18, rdx_1, &arg_20)
void arg_10
physx::PxPlaneGeometryGeneratedInfo::PxPlaneGeometryGeneratedInfo(&arg_10)
int64_t* rdi = arg1[3]
int64_t* rbx_1 = arg1[1]
char arg_8 = 0
(**rdi)(rdi, &arg_8, 1)
(*(*rbx_1 + 0x10))(rbx_1, arg3, rdi[4])
void* result = nullptr
rdi[3] = 0
void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_12 = arg1[1]
        (*(*rcx_12 + 0x20))(rcx_12, rdx_5)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
