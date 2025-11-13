// 函数: sub_1427e6120
// 地址: 0x1427e6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi

if (arg2.d == 0)
    rdi = nullptr
else
    int32_t rdx = (arg2 << 3).d
    
    if (arg1[0x41].b != 0 || rdx u> 0x200)
        int64_t* rcx = **arg1
        rdi = (*(*rcx + 8))(rcx, rdx, "<no allocation names in this config>", 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        arg1[0x41].b = 1
        rdi = &arg1[1]

uint64_t rcx_1 = zx.q(arg1[0x43].d)
void* result = rdi + (rcx_1 << 3)

if (result u> rdi)
    result = memcpy(rdi, arg1[0x42], (rcx_1 << 3).d)

if (*(arg1 + 0x21c) s>= 0)
    int64_t rdx_2 = arg1[0x42]
    result = &arg1[1]
    
    if (rdx_2 == result)
        arg1[0x41].b = 0
    else if (rdx_2 != 0)
        int64_t* rcx_3 = **arg1
        result = (*(*rcx_3 + 0x10))(rcx_3, rdx_2)

*(arg1 + 0x21c) = arg2.d
arg1[0x42] = rdi
return result
