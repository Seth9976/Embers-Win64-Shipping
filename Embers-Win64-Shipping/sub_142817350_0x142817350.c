// 函数: sub_142817350
// 地址: 0x142817350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t rdi = sx.q(arg2)
int32_t rdx = *(arg1 + 0x15c)

if (rdx == 0)
    return 

int32_t r9 = *(arg1 + 0x158)
int32_t r8 = *(arg1 + 0x154)
int32_t rbx_1 = r8 + r9

if (rbx_1 s>= 0xa)
    return 

int64_t rsi
rsi.b = 0

if (rdi.d u> 0x20 || not(test_bit(0x100000110, rdi)))
    if (rdi.d == 2)
        rsi.b = 1
        *(arg1 + 0x158) = r9 + 1
        goto label_142817412
    
    if (rbx_1 == 0 && rdx == 2)
        goto label_142817412
else
    rsi.b = 1
    *(arg1 + 0x154) = r8 + 1
label_142817412:
    physx::shdfnd::Foundation::errorImpl(physx::shdfnd::Foundation::getInstance(), rdi.d, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Binary\SnConvX_Error.cpp", 
        0x4b, arg3, &arg_20)
    
    if (rsi.b != 0)
        if (rbx_1 == 0)
            physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 1, 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnConvX_Error.cpp", 
                rbx_1 + 0x53, "Hit warnings or errors: skipping further verbose output.\n")
        else if (rbx_1 == 9)
            physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 1, 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnConvX_Error.cpp", 
                rbx_1 + 0x4e, "Exceeding 10 warnings or errors: skipping further output.\n")
