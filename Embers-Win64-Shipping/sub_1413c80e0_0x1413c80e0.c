// 函数: sub_1413c80e0
// 地址: 0x1413c80e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *arg1
int32_t rdi = 0
int64_t* rsi = *(arg1 + 8)
uint64_t r14_1 = zx.q(rbp * rbp)
int128_t __saved_zmm6 = arg3
int32_t rcx = *(rsi + 0xc)
rsi[1].d = 0
uint32_t rbx_1 = (r14_1 * 3).d * 2

if (rcx != rbx_1)
    sub_1405c5570(rsi, rbx_1)
    rcx = *(rsi + 0xc)
    rdi = rsi[1].d

int32_t rax = rdi + rbx_1
rsi[1].d = rax

if (rax s> rcx)
    sub_1405a4d70(rsi)

memset(*rsi + (sx.q(rdi) << 3), 0, sx.q(rbx_1) << 3)
int32_t var_50 = rbp
int32_t var_4c = rbp
int32_t i = 0
void* r15 = data_143ec4d80
int64_t rdi_1 = 0
int64_t var_58 = 0
arg3 = var_58.o
int64_t result

do
    int64_t* rcx_7 = data_143f0f180
    int64_t r8_2 = *(r15 + 0x10)
    var_58 = 0
    var_50.q = 0
    int64_t rax_2 = *rcx_7
    int128_t var_48 = arg3
    (*(rax_2 + 0x650))(rcx_7, arg2, r8_2, &var_48, &var_58, i, 0, 0, var_58, var_50, var_48, 
        __saved_zmm6)
    result = memcpy(*rsi + rdi_1, var_58, (r14_1 << 3).d)
    int64_t rcx_10 = var_58
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)
    
    i += 1
    rdi_1 += sx.q(r14_1.d) << 3
while (i s< 6)

return result
