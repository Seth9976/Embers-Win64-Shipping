// 函数: sub_1426b81d0
// 地址: 0x1426b81d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xe4)
int32_t var_20 = arg3
*(arg1 + 0xe4) = r9 + 1
int32_t r9_1 = *(arg2 + 0x60)
int32_t var_1c = r9_1

if (arg3 == 0)
    int32_t rax
    rax.b = 0
    return rax

int64_t* rsi = arg1[0x19]
int64_t* rdx = rsi
int64_t r11 = sx.q(arg1[0x1a].d)
int64_t r14 = r11 * 0x18
void* rax_1 = &rsi[r11 * 3]
int128_t* rax_4
int64_t rdx_4

if (rsi != rax_1)
    while (*rdx != arg2 || rdx[1].d != arg3 || *(rdx + 0xc) != r9_1)
        rdx = &rdx[3]
        
        if (rdx == rax_1)
            goto label_1426b825a
    
    int64_t rdx_3
    rdx_3:rax_4 = muls.dp.q(0x2aaaaaaaaaaaaaab, rdx - rsi)
    rdx_4 = rdx_3 s>> 2

if (rsi == rax_1 || (rdx_4 + (rdx_4 u>> 0x3f)).d == 0xffffffff)
label_1426b825a:
    int32_t rax_2 = (r11 + 1).d
    arg1[0x1a].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xd4))
        sub_1405a4df0(&arg1[0x19])
    
    rax_4 = arg1[0x19]
    *(rax_4 + r14) = arg2.o
    *(rax_4 + r14 + 0x10) = r9.q
    
    if (arg1[0x1a].d == 1)
        rdx.b = 1
        (*(*arg1 + 0x340))(arg1, rdx)
    
    rax_4.b = 1
else
    rax_4.b = 0

return rax_4
