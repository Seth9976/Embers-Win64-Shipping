// 函数: sub_140d8b890
// 地址: 0x140d8b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[0xa].b & 1) != 0)
    void*** rax = j_sub_140a82f30(0x78)
    
    if (rax == 0)
        *arg2 = nullptr
        return 0
    
    *rax = &data_142ec2818
    __builtin_memset(&rax[3], 0, 0x16)
    rax[6] = 0
    *(rax + 0x38) = data_14399f5e0
    __builtin_memset(&rax[9], 0, 0x18)
    rax[0xc].d = 0x18
    *(rax + 0x64) = 3
    rax[0xd] = 0
    rax[0xe] = 0
    *arg2 = rax
    return rax

void*** rbx_2 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
void* rax_2 = &rbx_2[0xf]

if (rax_2 u> *(arg1 + 0x20))
    sub_140b0e3d0(arg1 + 0x18, 0x80)
    rbx_2 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
    rax_2 = &rbx_2[0xf]

*(arg1 + 0x18) = rax_2
memset(rbx_2, 0, 0x78)
*rbx_2 = &data_142ec2818
rbx_2[4] = 0
rbx_2[5].d = 0
*(rbx_2 + 0x2c) = 0
rbx_2[6] = 0
*(rbx_2 + 0x38) = data_14399f5e0
__builtin_memset(&rbx_2[9], 0, 0x18)
rbx_2[0xc].d = 0x18
*(rbx_2 + 0x64) = 3
rbx_2[0xd] = 0
rbx_2[0xe] = 0
*arg2 = rbx_2
return rbx_2
