// 函数: sub_141ec7c70
// 地址: 0x141ec7c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
char* rsi = arg4
int64_t rbp = arg3
char* rdi = arg1
arg2.b = 0
char rax = 0
arg3.b = 0
arg4.b = 0
arg1.b = 0

if ((rbx[5].b & 2) != 0)
    if (*(rdi + 0x10) f!= *(rdi + 0x1c) || *(rdi + 0x14) f!= *(rdi + 0x20)
            || *(rdi + 0x18) f!= *(rdi + 0x24))
        arg2.b = 0
    else
        arg2.b = 1
    
    if (*(rdi + 0x28) f!= *(rdi + 0x34) || *(rdi + 0x2c) f!= *(rdi + 0x38)
            || *(rdi + 0x30) f!= *(rdi + 0x3c))
        rax = 0
    else
        rax = 1
    
    arg3.b = *(rdi + 0x5c) == 0xffffffff
    arg4.b = *(rdi + 4) == 0xffffffff
    
    if (0f f!= *(rdi + 0x58))
        arg1.b = 0
    else
        arg1.b = 1

arg1.b *= 2
arg1.b |= arg4.b
arg1.b *= 2
arg1.b |= arg3.b
arg1.b *= 2
arg1.b |= rax
arg1.b *= 2
arg1.b |= arg2.b
arg1.b <<= 2
arg1.b |= *rdi & 3
int64_t rax_2 = *rbx
uint8_t arg_10 = arg1.b
(*(rax_2 + 0x158))(rbx, &arg_10, 7)
uint8_t r12 = arg_10
*rdi ^= (*rdi ^ r12) & 3
int64_t* rcx_1 = rbx[1]
int32_t* r8 = *rcx_1

if (&r8[1] u<= rcx_1[1])
    *(rdi + 8) = *r8
    int64_t* rax_9 = rbx[1]
    *rax_9 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, &rdi[8], arg5)
else
    (*(*rbx + 0x150))(rbx, &rdi[8], 4)

*rsi = 1
char arg_8 = 1
sub_141ec8070(&rdi[0x10], rbx, rbp, &arg_8)
*rsi &= arg_8
sub_141ec81a0(&rdi[0x28], rbx, rbp, &arg_8)
*rsi &= arg_8

if ((r12 u>> 2 & 1) == 0)
    sub_141ec8070(&rdi[0x1c], rbx, rbp, &arg_8)
    *rsi &= arg_8
else if ((rbx[5].b & 1) != 0)
    int32_t rax_14 = *(rdi + 0x18)
    *(rdi + 0x1c) = *(rdi + 0x10)
    *(rdi + 0x24) = rax_14

if ((r12 u>> 3 & 1) == 0)
    sub_141ec81a0(&rdi[0x34], rbx, rbp, &arg_8)
    *rsi &= arg_8
else if ((rbx[5].b & 1) != 0)
    int32_t rax_16 = *(rdi + 0x30)
    *(rdi + 0x34) = *(rdi + 0x28)
    *(rdi + 0x3c) = rax_16

sub_141ec8070(&rdi[0x40], rbx, rbp, &arg_8)
*rsi &= arg_8
int512_t zmm1 = sub_141ec8070(&rdi[0x4c], rbx, rbp, &arg_8)
*rsi &= arg_8

if ((r12 u>> 6 & 1) == 0)
    int64_t* rcx_9 = rbx[1]
    int32_t* r8_7 = *rcx_9
    
    if (&r8_7[1] u<= rcx_9[1])
        *(rdi + 0x58) = *r8_7
        int64_t* rax_21 = rbx[1]
        *rax_21 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &rdi[0x58], zmm1)
    else
        (*(*rbx + 0x150))(rbx, &rdi[0x58], 4)
    
    goto label_141ec7f17

if ((rbx[5].b & 1) != 0)
    *(rdi + 0x58) = 0
label_141ec7f17:
    
    if ((rbx[5].b & 1) != 0 && *rsi != 0)
        float zmm0_2 = *(rdi + 0x24) f- *(rdi + 0x48)
        zmm1.o = *(rdi + 0x1c)
        float zmm2_1 = *(rdi + 0x20) f- *(rdi + 0x44)
        zmm1.d = zmm1.d f- *(rdi + 0x40)
        zmm1.d = zmm1.d f* zmm1.d
        *(rdi + 0xc) = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 f+ zmm1.d + zmm0_2 * zmm0_2)

if ((r12 u>> 4 & 1) == 0)
    int64_t* rcx_11 = rbx[1]
    int32_t* r8_8 = *rcx_11
    
    if (&r8_8[1] u<= rcx_11[1])
        *(rdi + 0x5c) = *r8_8
        int64_t* rax_25 = rbx[1]
        *rax_25 += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &rdi[0x5c], zmm1)
    else
        (*(*rbx + 0x150))(rbx, &rdi[0x5c], 4)
else if ((rbx[5].b & 1) != 0)
    *(rdi + 0x5c) = 0xffffffff

(*(*rbx + 0x108))(rbx, &rdi[0x60])
(*(*rbx + 0x108))(rbx, &rdi[0x68])
(*(*rbx + 0x108))(rbx, &rdi[0x70])
(*(*rbx + 0x140))(rbx, &rdi[0x78])
int64_t* result

if ((r12 u>> 5 & 1) == 0)
    int64_t* rcx_17 = rbx[1]
    int32_t* r8_9 = *rcx_17
    
    if (&r8_9[1] u<= rcx_17[1])
        *(rdi + 4) = *r8_9
        result = rbx[1]
        *result += 4
    else if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, &rdi[4], zmm1)
    else
        (*(*rbx + 0x150))(rbx, &rdi[4], 4)
else if ((rbx[5].b & 1) != 0)
    *(rdi + 4) = 0xffffffff

result.b = 1
return result
