// 函数: sub_1427cf4a0
// 地址: 0x1427cf4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1

if (arg2 == 0)
    result_1 = nullptr
else
    result_1 = sub_1427cf040(arg1, zx.q(arg2) << 4, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int64_t* result = result_1
int64_t* rdx_2 = *arg1
void* r8_2 = &result_1[zx.q(arg1[1].d) * 2]

if (r8_2 u> result_1)
    do
        if (result != 0)
            *result = *rdx_2
            result[1].d = rdx_2[1].d
            *(result + 0xc) = *(rdx_2 + 0xc)
        
        result = &result[2]
        rdx_2 = &rdx_2[2]
    while (result u< r8_2)

if (*(arg1 + 0xc) s< 0)
    *(arg1 + 0xc) = arg2
    *arg1 = result_1
    return result

int64_t rbp = *arg1

if (rbp != 0)
    class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_2
    result = (*(r8_3 + 0x10))(rax_2, rbp, r8_3)

*arg1 = result_1
*(arg1 + 0xc) = arg2
return result
