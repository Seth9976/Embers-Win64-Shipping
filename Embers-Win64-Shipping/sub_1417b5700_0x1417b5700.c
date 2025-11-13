// 函数: sub_1417b5700
// 地址: 0x1417b5700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rsi = arg2[1]
int64_t r8 = *arg2

if (rsi != 0)
    rsi[1].d += 1

void* r15 = *arg1
int64_t r12 = sx.q(arg1[1].d)
int64_t* rcx = rsi
int64_t var_58 = r8
int64_t* var_50 = rcx
*(*(r15 + 0x80) + (r12 << 3)) = r8
int128_t* rdx_2 = (r12 << 4) + *(r15 + 0x98)

if (rsi != 0)
    rsi[1].d += 1
    rcx = var_50

if (&var_58 != rdx_2)
    int128_t zmm1 = var_58.o
    int128_t var_48_1 = zmm1
    var_58.o = *rdx_2
    rcx = var_50
    *rdx_2 = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_5 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_50 + 8))(var_50, 1)

sub_14175b390(r15, r12.d)
int32_t result = sub_141744270(r15, r12.d)

if (rsi != 0)
    result = rsi[1].d
    rsi[1].d -= 1
    
    if (result == 1)
        (**rsi)(rsi)
        result = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi + 8))(rsi, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_78)
return result
