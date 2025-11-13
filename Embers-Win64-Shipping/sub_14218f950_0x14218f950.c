// 函数: sub_14218f950
// 地址: 0x14218f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) s> 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rbx = sx.q(*(arg2 + 0x40))
int64_t rsi = sx.q(*(arg1 + 0x40))
int32_t rax_1 = (rsi + rbx).d
*(arg1 + 0x40) = rax_1

if (rax_1 s> *(arg1 + 0x44))
    sub_1405a4d70(arg1 + 0x38)

int64_t rdx_1 = *(arg1 + 0x38)
int64_t count = rbx << 3
memmove(count + rdx_1, rdx_1, (rsi << 3).d)
memset(*(arg1 + 0x38), 0, count)
int512_t zmm3
zmm3.o = arg3
int32_t rax_3 = *(arg2 + 0x2c) ^ *(arg1 + 0x2c)
*(arg1 + 8) |= 8
*(arg1 + 0x2c) ^= rax_3 & 1
int64_t* rcx_3 = *(arg2 + 0x30)
int64_t rax_6 = (*(*rcx_3 + 0x2f0))(rcx_3, arg2, arg1, zmm3, arg4, 0, arg5)
zmm3.o = arg3
*(arg1 + 0x30) = rax_6
int64_t* rcx_4 = *(arg2 + 0x50)
*(arg1 + 0x50) = (*(*rcx_4 + 0x2f0))(rcx_4, arg2, arg1, zmm3, arg4, 0)
int64_t* rcx_5 = *(arg2 + 0x48)

if (rcx_5 != 0)
    zmm3.o = arg3
    *(arg1 + 0x48) = (*(*rcx_5 + 0x2f0))(rcx_5, arg2, arg1, zmm3, arg4, 0)

int32_t i = 0
int64_t rax_8

if (*(arg2 + 0x40) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t r15_1 = *(arg1 + 0x38)
        int64_t* rcx_6 = *(rbx_1 + *(arg2 + 0x38))
        
        if (rcx_6 == 0)
            rax_8 = 0
        else
            zmm3.o = arg3
            rax_8 = (*(*rcx_6 + 0x2f0))(rcx_6, arg2, arg1, zmm3, arg4, 0)
        
        *(rbx_1 + r15_1) = rax_8
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< *(arg2 + 0x40))

rax_8.b = 1
return rax_8
