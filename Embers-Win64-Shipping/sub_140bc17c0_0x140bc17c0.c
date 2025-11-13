// 函数: sub_140bc17c0
// 地址: 0x140bc17c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t var_1b8 = 0
void var_1b0
void** var_1a8
int64_t* r9 = *(**SymBuffer::end(sub_140b4cb20(&var_1a8, arg1), &var_1b0) + 8)
int64_t* rcx_3 = r9[1]
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &var_1b8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_3, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_3, 4)
else
    var_1b8 = *rdx_2
    int64_t* rax_7 = r9[1]
    *rax_7 += 4

sub_140b4cbb0(&var_1a8)
int32_t rdx_4 = var_1b8

if (rdx_4 == 0)
    *arg2 = 0
else if (rdx_4 s<= 0)
    void* r10_1
    
    if (rdx_4 s< 0)
        r10_1 = *(arg1 + 0xa0)
    
    if (rdx_4 s>= 0 || 0xffffffff - rdx_4 s>= *(r10_1 + 0x3c))
        sub_1405c61a0(arg1, zx.q(not.d(rdx_4)), arg2)
    else
        int64_t r11_1 = sx.q(*(*(r10_1 + 0x28) + (sx.q(0xffffffff - rdx_4) << 2)))
        
        if (data_14399fa4c == 0 || r11_1.d s>= *(r10_1 + 0x34))
            *arg2 = sub_140bc8740((r11_1 << 4) + *(r10_1 + 8))
        else
            *arg2 = sub_140bc79e0(r11_1.d, *(r10_1 + 8), *(r10_1 + 0x18), *(r10_1 + 0x10))
else
    uint64_t rdx_5 = zx.q(rdx_4 - 1)
    
    if (rdx_5.d s>= *(arg1 + 0xc8))
        sub_1405c61a0(arg1, rdx_5, arg2)
    else
        *arg2 = *(**(arg1 + 0xb8) + sx.q(rdx_5.d) * 0x10)

__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
