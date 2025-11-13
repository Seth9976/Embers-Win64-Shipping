// 函数: sub_142815730
// 地址: 0x142815730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t rax_1 = PxGetFoundation()
char const* const rax_3

if ((*(*rax_1 + 0x28))(rax_1) != 0)
    rax_3 = __std_type_info_name(&data_143ccd1c8, &data_14401b730)
else
    rax_3 = "<allocation names disabled>"

int128_t* result_1 = (*(*rax + 8))(rax, 0x58, rax_3, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\Binary\SnConvX_MetaData.cpp", 
    0x119)
int128_t* result = result_1
int128_t* result_2

if (result_1 == 0)
    result = nullptr
    result_2 = nullptr
else
    __builtin_memset(&result_1[3], 0, 0x20)
    result_2 = result_1

*result = *arg5
result[1].q = arg5[1].q
*(result + 0x18) = arg4
result[2].q = arg2
*(result + 0x28) = arg3
*(result + 0x2c) = 0
result[5].b = 0
uint64_t rax_5 = zx.q(*(arg1 + 0x28))

if ((*(arg1 + 0x2c) & 0x7fffffff) u> rax_5.d)
    int128_t** rdx_3 = *(arg1 + 0x20) + (rax_5 << 3)
    
    if (rdx_3 != 0)
        *rdx_3 = result
    
    *(arg1 + 0x28) += 1
else
    sub_142815f90(arg1 + 0x20, &result_2)

return result
