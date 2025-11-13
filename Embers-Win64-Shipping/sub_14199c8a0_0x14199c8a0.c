// 函数: sub_14199c8a0
// 地址: 0x14199c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
*arg3 = 0

if (rcx != 0)
    (*(*rcx + 0x38))(rcx)

void*** rax_2 = j_sub_140a82f30(0xf8)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    __builtin_memset(&rax_2[1], 0, 0x18)
    rax_2[5] = 0
    rax_2[6].d = 0
    *(rax_2 + 0x34) = 1
    rax_2[0xa] = 0
    rax_2[0xb].d = 0
    *(rax_2 + 0x5c) = 1
    __builtin_memset(&rax_2[0xc], 0, 0x30)
    *rbx = &data_143009f38
    *(rbx + 0x90) = *arg2
    *(rbx + 0xa0) = arg2[1]
    *(rbx + 0xb0) = arg2[2]
    *(rbx + 0xc0) = arg2[3]
    int128_t zmm0_1 = arg2[4]
    rbx[0x1c].b = 0
    rbx[0x1d] = 0
    *(rbx + 0xd0) = zmm0_1
    rbx[0x1e].d = 0xffffffff

int64_t* result = sub_14117bb20(&rbx[1], arg4)
int64_t* rdi_1 = *arg3
*arg3 = rbx

if (rbx != 0)
    result = (*rbx)[6](rbx)

if (rdi_1 == 0)
    return result

return (*(*rdi_1 + 0x38))(rdi_1)
