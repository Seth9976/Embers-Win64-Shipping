// 函数: sub_1427e8f00
// 地址: 0x1427e8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
char const* const rax_3

if ((*(*rax_1 + 0x28))(rax_1) != 0)
    rax_3 = __std_type_info_name(&data_143cccf18, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

int32_t var_28 = 0x36
void*** rax_4 = (*(*rax + 8))(rax, 0x78, rax_3, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
"xtD6Joint.cpp", 
    0x36)
void*** result

if (rax_4 == 0)
    result = nullptr
else
    int64_t rdx = *arg1
    var_28.q = arg4
    result = sub_1427e91d0(rax_4, (*(rdx + 0x20))(arg1, rdx), arg2, arg3, var_28, arg5)

void* r9_1 = &result[3]

if (result == 0)
    r9_1 = nullptr

int64_t rax_8 = (*(*arg1 + 0xf0))(arg1, arg2, arg4, r9_1, &data_143b7c000, 0x190)
result[0xc] = rax_8

if (rax_8 != 0)
    return result

(*result)[3](result, 1)
return nullptr
