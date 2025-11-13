// 函数: sub_1427e7fd0
// 地址: 0x1427e7fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
char const* const rax_3

if ((*(*rax_1 + 0x28))(rax_1) != 0)
    rax_3 = __std_type_info_name(&data_143ccce58, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

return (*(*rax + 8))(rax, arg2, rax_3, arg3, arg4)
