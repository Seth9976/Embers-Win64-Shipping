// 函数: sub_14264d080
// 地址: 0x14264d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbx_1 = arg2
int64_t rax = sub_14269ce80()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> rbx_1[7].d || *(rbx_1[6] + (rax << 3)) != rdx)
    return 

void* rax_1
int32_t zmm0_1
rax_1, zmm0_1 = sub_14269ce80()
int64_t rax_2

if (rax_1 != 0)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_1 == 0 || rax_2.d s> rbx_1[7].d || *(rbx_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
    rbx_1 = nullptr

int64_t* rdi_1 = rbx_1[0x23]

if (rdi_1 == 0)
    (*(*rbx_1 + 0x390))(rbx_1)
    rdi_1 = rbx_1[0x23]

*(arg1 + 0x30) = rdi_1[6].d
(*(*rdi_1 + 0x280))(rdi_1)
*(arg1 + 0x34) = zmm0_1
*(arg1 + 0x44) = *(rdi_1 + 0x44)
*(arg1 + 0x38) = rdi_1[7].d
