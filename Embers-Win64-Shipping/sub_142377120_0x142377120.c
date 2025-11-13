// 函数: sub_142377120
// 地址: 0x142377120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rsi = arg2[1]
void* rcx = *arg2

if (rsi != 0)
    rsi[1].d += 1

*(arg1 + 0x30) = *(rcx + 0x10)
int32_t rax_3 = *(rcx + 0x14)
void* var_68 = rcx
int64_t* rcx_1 = rsi
*(arg1 + 0x34) = rax_3
void* result = arg1 + 0x40
int64_t* var_60 = rcx_1

if (rsi != 0)
    rsi[1].d += 1
    rcx_1 = var_60

if (&var_68 != result)
    int128_t zmm1 = var_68.o
    int128_t var_58_1 = zmm1
    var_68.o = *result
    rcx_1 = var_60
    *result = zmm1

if (rcx_1 != 0)
    result = zx.q(rcx_1[1].d)
    rcx_1[1].d -= 1
    
    if (result.d == 1)
        (**var_60)(var_60)
        result = zx.q(*(var_60 + 0xc))
        *(var_60 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*var_60 + 8))(var_60, 1)

if (rsi != 0)
    result = zx.q(rsi[1].d)
    rsi[1].d -= 1
    
    if (result.d == 1)
        (**rsi)(rsi)
        result = zx.q(*(rsi + 0xc))
        *(rsi + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rsi + 8))(rsi, 1)

*(arg1 + 0x50) = arg3
*(arg1 + 0x38) = arg4
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_88)
return result
