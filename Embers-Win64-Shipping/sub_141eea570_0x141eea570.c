// 函数: sub_141eea570
// 地址: 0x141eea570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x5c0))()

if (result == 0)
    return result

sub_141f209c0(arg1)
int64_t rax_1 = *arg1
*(arg1 + 0x387) |= 0x20
(*(rax_1 + 0x9c0))(arg1)
int64_t rsi_1 = 0
int64_t r14_1 = *(arg1[0x29] + 0x298)

if (r14_1 == 0 || ((arg1[0x5e].d).b & 3) != 3 || 2.4000001f f< *(arg1 + 0x2f4)
        || 0f f< *(arg1 + 0xcc))
    arg1[0x5e].d &= 0xfffffff8
    *(arg1 + 0x2f4) = 0
    memset(arg1 + 0x2fc, 0, 0x88)
    *(arg1 + 0x304) = 0x3f800000
else
    rsi_1 = sub_140d3c6e0(arg1 + 0x36c)

char rbx_2 = arg1[0x2d].b
int64_t rbp

if (rbx_2 == *(arg1 + 0x385) || rbx_2 == 4)
    rbp.b = 1
else
    rbp.b = 0

char rax_7

if ((arg1[0x1e].b & 8) != 0)
    rax_7 = (*(*arg1 + 0x448))(arg1)

if ((arg1[0x1e].b & 8) == 0 || rax_7 == 0)
    if (((arg1[0x5e].d).b & 3) != 3)
    label_141eea694:
        
        if (rbx_2 != 3 && arg1[0x2d].b - 5 u> 1)
            (*(*arg1 + 0x590))(arg1, 3, 0)
    else
        if (r14_1 != 0)
            if (rsi_1 != 0)
                goto label_141eea6ea
            
            goto label_141eea694
        
        if (rsi_1 != 0)
        label_141eea6ea:
            
            if (rbp.b != 0)
                (*(*arg1 + 0x590))(arg1, zx.q(*(arg1 + 0x384)), 0)
            else if (rbx_2 == 3)
                int512_t zmm2_1
                zmm2_1.o = zx.o(0)
                (*(*arg1 + 0x758))(arg1, arg1 + 0x2fc, zmm2_1, 0, arg2)
else if (rbp.b == 0)
    (*(*arg1 + 0x590))(arg1, zx.q(*(arg1 + 0x385)), 0)

return (*(*arg1 + 0x618))(arg1)
