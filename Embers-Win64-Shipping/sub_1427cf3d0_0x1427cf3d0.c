// 函数: sub_1427cf3d0
// 地址: 0x1427cf3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int32_t* result_1

if (arg2 == 0)
    result_1 = nullptr
else
    result_1 = sub_1427cefa0(arg1, rsi * 0xc, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
    "sArray.h", 
        0x25d)

int32_t* rdx_2 = *arg1
int32_t* result = result_1
void* r8 = &result_1[zx.q(arg1[1].d) * 3]

if (r8 u> result_1)
    do
        if (result != 0)
            *result = *rdx_2
            result[1] = rdx_2[1]
            result[2] = rdx_2[2]
        
        result = &result[3]
        rdx_2 = &rdx_2[3]
    while (result u< r8)

if (*(arg1 + 0xc) s< 0)
    *(arg1 + 0xc) = rsi.d
    *arg1 = result_1
    return result

int64_t rbp = *arg1

if (rbp != 0)
    class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_3
    result = (*(r8_1 + 0x10))(rax_3, rbp, r8_1)

*arg1 = result_1
*(arg1 + 0xc) = rsi.d
return result
