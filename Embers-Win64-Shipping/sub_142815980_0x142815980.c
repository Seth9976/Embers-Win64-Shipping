// 函数: sub_142815980
// 地址: 0x142815980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14_1

if (arg3 == 1)
    r14_1 = 8
else
    if (arg3 != 2)
        sub_142817350(arg1, 0x20, 
            "PxBinaryConverter: Wrong meta data type, please check the source metadata.\n", arg4)
        return 0
    
    r14_1 = 0x10

class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
int64_t rax_2 = PxGetFoundation()
int64_t rdx = *rax_2
char const* const rax_4

if ((*(rdx + 0x28))(rax_2, rdx) != 0)
    rax_4 = __std_type_info_name(&data_143ccd1a0, &data_14401b730)
else
    rax_4 = "<allocation names disabled>"

void** rax_5 = (*(*rax_1 + 8))(rax_1, 0x60, rax_4, 
    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
"erialization\Binary\SnConvX_MetaData.cpp", 
    0x2d6)

if (rax_5 == 0)
    rax_5 = nullptr
else
    *rax_5 = arg1
    __builtin_memset(&rax_5[1], 0, 0x2c)
    __builtin_memset(&rax_5[7], 0, 0x11)
    rax_5[0xa] = 0
    rax_5[0xb] = 0

*(r14_1 + arg1) = rax_5

if (sub_1428141f0(rax_5, arg2, arg3) == 0)
    void* rdi_1 = *(r14_1 + arg1)
    
    if (rdi_1 != 0)
        sub_142814080(rdi_1)
        class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_7
        (*(r8_2 + 0x10))(rax_7, rdi_1, r8_2)
        *(r14_1 + arg1) = 0

return *(r14_1 + arg1)
