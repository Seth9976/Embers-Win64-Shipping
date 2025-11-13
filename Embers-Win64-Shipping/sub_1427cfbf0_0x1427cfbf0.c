// 函数: sub_1427cfbf0
// 地址: 0x1427cfbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
int64_t rdx = *rax_1
char const* const rax_3

if ((*(rdx + 0x28))(rax_1, rdx) != 0)
    rax_3 = __std_type_info_name(&data_143cccb20, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

void*** result = (*(*rax + 8))(rax, 0x90, rax_3, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\SnSerializationRegistry.cpp", 
    0x11b)

if (result == 0)
    return result

return sub_1427cfc90(result, arg1) __tailcall
