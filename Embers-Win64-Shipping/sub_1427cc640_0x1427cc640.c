// 函数: sub_1427cc640
// 地址: 0x1427cc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
int64_t rdx = *rax_1
char const* const rax_3

if ((*(rdx + 0x28))(rax_1, rdx) != 0)
    rax_3 = __std_type_info_name(&data_143ccc998, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

void*** result = (*(*rax + 8))(rax, 0x188, rax_3, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\SnSerialization.cpp", 
    0x1b0)

if (result == 0)
    return result

return sub_1427f5130(result) __tailcall
