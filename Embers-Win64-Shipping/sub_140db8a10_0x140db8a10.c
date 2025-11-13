// 函数: sub_140db8a10
// 地址: 0x140db8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0xb0)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = *arg2
    void* rax_2 = arg2[1]
    rbx[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 0xc) += 1
    
    *(rbx + 0x10) = *(arg2 + 0x10)
    *(rbx + 0x20) = *(arg2 + 0x20)
    *(rbx + 0x30) = *(arg2 + 0x30)
    *(rbx + 0x40) = *(arg2 + 0x40)
    *(rbx + 0x50) = *(arg2 + 0x50)
    *(rbx + 0x60) = *(arg2 + 0x60)
    rbx[0xe] = arg2[0xe]
    *(rbx + 0x78) = *(arg2 + 0x78)
    *(rbx + 0x88) = *(arg2 + 0x88)
    *(rbx + 0x98) = *(arg2 + 0x98)
    rbx[0x15].b = arg2[0x15].b

void*** result = j_sub_140a82f30(0x18)

if (result != 0)
    result[1].d = 1
    *result = &data_142ec7ae8
    *(result + 0xc) = 1
    result[2] = rbx

int64_t rdi_1 = sx.q(*(arg1 + 0xd0))
int32_t rax_4 = (rdi_1 + 1).d
*(arg1 + 0xd0) = rax_4

if (rax_4 s> *(arg1 + 0xd4))
    sub_1405a4f90(arg1 + 0xc8)

int64_t* rcx_3 = (rdi_1 << 4) + *(arg1 + 0xc8)
*rcx_3 = rbx
rcx_3[1] = result
return result
