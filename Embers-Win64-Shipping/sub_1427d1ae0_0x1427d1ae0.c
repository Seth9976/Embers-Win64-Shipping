// 函数: sub_1427d1ae0
// 地址: 0x1427d1ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
int64_t r8 = *rax_1
char const* const rax_3

if ((*(r8 + 0x28))(rax_1, arg3, r8) != 0)
    rax_3 = __std_type_info_name(&data_143cccc88, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

void*** result = (*(*rax + 8))(rax, 0x40, rax_3, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
"xtDefaultCpuDispatcher.cpp", 
    0x2d)

if (result == 0)
    return result

return sub_1427d1d30(result, arg1, arg2) __tailcall
