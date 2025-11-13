// 函数: sub_140d8b720
// 地址: 0x140d8b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[0xa].b & 1) != 0)
    void*** rax = j_sub_140a82f30(0x58)
    
    if (rax == 0)
        *arg2 = rax
        return rax
    
    *rax = &data_142ec2808
    rax[3] = 0
    rax[4] = 0
    *arg2 = rax
    return rax

void*** rbx_2 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
void* rax_2 = &rbx_2[0xb]

if (rax_2 u> *(arg1 + 0x20))
    sub_140b0e3d0(arg1 + 0x18, 0x60)
    rbx_2 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
    rax_2 = &rbx_2[0xb]

*(arg1 + 0x18) = rax_2
memset(rbx_2, 0, 0x58)
*rbx_2 = &data_142ec2808
rbx_2[3] = 0
rbx_2[4] = 0
*arg2 = rbx_2
return rbx_2
