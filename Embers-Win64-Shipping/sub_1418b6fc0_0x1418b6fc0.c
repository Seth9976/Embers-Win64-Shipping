// 函数: sub_1418b6fc0
// 地址: 0x1418b6fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

void** rax = *(arg1 + 0x58)

if (rax == 0 || rax[1].d s<= 0)
    return 

void* const rbx_1 = data_143f5b298
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx_1 != 0)
    rax_1 = sub_1424ad0c0()
    rdx_1 = *(rbx_1 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx_1 == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx_1 = nullptr

rax = *(arg1 + 0x50)

if (rax == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x58)

if (rcx_1 == 0 || rcx_1[1].d s<= 0 || rbx_1 == 0)
    return 

void** var_18 = rax

if (rcx_1 != 0)
    *(rcx_1 + 0xc) += 1

if (&var_18 != rbx_1 + 0xdf0)
    var_18.o = *(rbx_1 + 0xdf0)
    *(rbx_1 + 0xdf0) = var_18.o

if (rcx_1 == 0)
    return 

int32_t temp0_1 = *(rcx_1 + 0xc)
*(rcx_1 + 0xc) -= 1

if (temp0_1 == 1)
    (*(*rcx_1 + 8))(rcx_1, 1)
