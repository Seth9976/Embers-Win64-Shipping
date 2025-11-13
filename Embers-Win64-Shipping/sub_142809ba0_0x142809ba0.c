// 函数: sub_142809ba0
// 地址: 0x142809ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (arg2 == 0)
    rdi = 0
else
    int64_t* rcx = **arg1
    rdi = (*(*rcx + 8))(rcx, zx.q(arg2), "<no allocation names in this config>", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int64_t result = zx.q(arg1[2].d) + rdi

if (result u> rdi)
    result = memcpy(rdi, arg1[1], result.d - rdi.d)

if (*(arg1 + 0x14) s>= 0)
    int64_t rdx_2 = arg1[1]
    
    if (rdx_2 != 0)
        int64_t* rcx_2 = **arg1
        result = (*(*rcx_2 + 0x10))(rcx_2, rdx_2)

*(arg1 + 0x14) = arg2
arg1[1] = rdi
return result
