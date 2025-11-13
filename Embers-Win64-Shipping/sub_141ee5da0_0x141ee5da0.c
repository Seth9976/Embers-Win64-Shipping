// 函数: sub_141ee5da0
// 地址: 0x141ee5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = *(arg1 + 0x380)

if (rax != 0)
    return rax

void*** rax_1 = j_sub_140a82f30(0xa0)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = rax_1
else
    rbx_1[1] = 0
    rbx_1[2].d = 0
    *(rbx_1 + 0x14) = 0
    *rbx_1 = &data_143264308
    __builtin_memset(&rbx_1[3], 0, 0x2c)
    __builtin_memset(&rbx_1[9], 0, 0x13)
    rbx_1[0x10].d &= 0xfffffffe
    rbx_1[0xc].d = 0
    rbx_1[0xd] = 0
    rbx_1[0xe] = 0
    rbx_1[0xf].d = 0x3e000000
    *(rbx_1 + 0x7c) = 0x3e000000
    *(rbx_1 + 0x84) = 0
    *(rbx_1 + 0x8c) = 0
    rbx_1[0x12] = 0
    rbx_1[0x13].d = 0
    int64_t* rax_2 = sub_1424b0d70()
    
    if (rax_2[0x23] == 0)
        (*(*rax_2 + 0x390))(rax_2)
    
    void* rax_4 = rax_2[0x23]
    
    if (rax_4 != 0)
        *(rbx_1 + 0x7c) = *(rax_4 + 0x280)
    
    void* rax_6 = sub_1405be820(arg1 - 0x140)
    
    if (rax_6 != 0)
        rbx_1[0x13].d = *(rax_6 + 0x520)
        rbx_1[1].d = *(rax_6 + 0x520)
    
    rbx_1[0xf].d = *(rbx_1 + 0x7c)

*(arg1 + 0x380) = rbx_1
return rbx_1
