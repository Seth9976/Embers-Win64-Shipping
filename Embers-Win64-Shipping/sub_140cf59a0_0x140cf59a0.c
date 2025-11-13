// 函数: sub_140cf59a0
// 地址: 0x140cf59a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rbp_1 = (zx.q(*(*arg1 + 0x40)) u>> 9).b & 1
uint8_t rsi_1 = (zx.q(*(arg1[1] + 0x40)) u>> 9).b & 1
void* rbx_1

if ((not.b(arg1[6].b) & 1) != 0)
    rbx_1 = sx.q(*(arg1 + 0x2c) * arg2) + *arg1[2]
else
    int64_t* rax_3 = arg1[2]
    void* rcx = *rax_3
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + rax_3
    
    rbx_1 = sx.q(*(arg1 + 0x2c) * arg2) + rcx

int64_t result

if (rbp_1 != 0 || rsi_1 != 0)
    result = memset(rbx_1, 0, sx.q(*(arg1 + 0x24)))

if ((rbp_1 == 0 && rsi_1 == 0) || rbp_1 == 0)
    int64_t* rcx_3 = *arg1
    
    if (not(test_bit(zx.q(rcx_3[8].d), 9)))
        result = (*(*rcx_3 + 0xf0))(rcx_3, sx.q(*(rcx_3 + 0x4c)) + rbx_1)
    else
        result = memset(sx.q(*(rcx_3 + 0x4c)) + rbx_1, 0, sx.q(*(rcx_3 + 0x3c) * rcx_3[7].d))

if (rsi_1 != 0)
    return result

int64_t* rcx_6 = arg1[1]

if (not(test_bit(zx.q(rcx_6[8].d), 9)))
    return (*(*rcx_6 + 0xf0))(rcx_6, sx.q(*(rcx_6 + 0x4c)) + rbx_1)

return memset(sx.q(*(rcx_6 + 0x4c)) + rbx_1, 0, sx.q(*(rcx_6 + 0x3c) * rcx_6[7].d)) __tailcall
