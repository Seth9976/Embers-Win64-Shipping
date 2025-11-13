// 函数: sub_1417cd210
// 地址: 0x1417cd210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t rsi = *arg4
uint128_t var_58 = *arg3

if (rbx != 0)
    rbx[1].d += 1

int64_t rax = arg4[6]
uint128_t zmm0 = *(arg4 + 0x40)
int64_t rbp = arg4[2]
int64_t r15 = arg4[3]
int64_t r12 = arg4[4]
int64_t r13 = arg4[5]
int64_t rax_1 = arg4[7]
int32_t rax_2 = arg4[0xb].d
uint128_t var_48 = zmm0
uint128_t var_80 = zmm0
zmm0 = zx.o(arg4[0xa])
*arg1 = &data_142fcc460
sub_140d3a3a0(&arg1[1], arg2)
*(arg1 + 0x10) = var_58
arg1[4] = rsi
arg1[5] = rbx
int64_t rax_3
int64_t rcx_1
int32_t rdx
uint128_t zmm0_1
uint64_t zmm1

if (rbx == 0)
    zmm0_1 = var_48
    rax_3 = rax
    zmm1 = zmm0.q
    rcx_1 = rax_1
    rdx = rax_2
else
    rbx[1].d += 1
    rdx = rax_2
    zmm1 = zmm0.q
    zmm0_1 = var_80
    rcx_1 = rax_1
    rax_3 = rax

*(arg1 + 0x60) = zmm0_1
arg1[6] = rbp
arg1[0xe] = zmm1
arg1[0xf].d = rdx
arg1[7] = r15
arg1[8] = r12
arg1[9] = r13
arg1[0xa] = rax_3
arg1[0xb] = rcx_1
arg1[0x10] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_7 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_142fcc4b8
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1
