// 函数: sub_141415d30
// 地址: 0x141415d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rbx = *(arg1 + 8)
int64_t rdi = sx.q(*(rbx + 0x68))
int32_t rax_2 = (rdi + 1).d
*(rbx + 0x68) = rax_2

if (rax_2 s> *(rbx + 0x6c))
    sub_1405fdd60(rbx + 0x60)

__builtin_memset(rdi * 0x70 + *(rbx + 0x60) + 0x40, 0, 0x24)
void* rdx_1 = *(arg1 + 8)
void* r14_1 = sx.q(*(rdx_1 + 0x68)) * 0x70 + *(rdx_1 + 0x60)
*(r14_1 - 0x10) = *(arg1 + 0x10)
*(r14_1 - 0x70) = *arg4
*(r14_1 - 0x60) = arg4[1]
*(r14_1 - 0x50) = arg4[2]
*(r14_1 - 0x40) = arg4[3]
int64_t* rcx_3 = arg2[1]
int64_t var_78 = *arg2
int64_t* var_70 = rcx_3

if (rcx_3 != 0)
    rcx_3[1].d += 1
    rcx_3 = var_70

int128_t zmm1

if (&var_78 != r14_1 - 0x30)
    zmm1 = var_78.o
    int128_t var_58_1 = zmm1
    var_78.o = *(r14_1 - 0x30)
    rcx_3 = var_70
    *(r14_1 - 0x30) = zmm1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**var_70)(var_70)
        int32_t rax_8 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_70 + 8))(var_70, 1)

int64_t* rcx_6 = arg3[1]
int64_t var_68 = *arg3
int64_t* var_60 = rcx_6

if (rcx_6 != 0)
    rcx_6[1].d += 1
    rcx_6 = var_60

if (&var_68 != r14_1 - 0x20)
    zmm1 = var_68.o
    int128_t var_48_1 = zmm1
    var_68.o = *(r14_1 - 0x20)
    rcx_6 = var_60
    *(r14_1 - 0x20) = zmm1

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**var_60)(var_60)
        int32_t rdi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rdi_1))

void* r8 = *(arg1 + 8)
int32_t temp1
int32_t temp2
temp1:temp2 = muls.dp.d(0x55555556, *(*arg3 + 8))
uint32_t result = temp1 u>> 0x1f
*(r8 + 0x70) += temp1 + result
__security_check_cookie(rax_1 ^ &var_98)
return result
