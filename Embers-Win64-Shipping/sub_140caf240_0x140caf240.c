// 函数: sub_140caf240
// 地址: 0x140caf240
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
        sub_140b54070(r9, rdx_3, arg4)
    else
        (*(*r9 + 0x150))(r9, rdx_3, 4)
else
    var_1b8 = *rdx_2
    int64_t* rax_7 = r9[1]
    *rax_7 += 4

sub_140b4cbb0(&var_1a8)

if (data_143de5452 == 0 || *(arg1 + 0xa0) == 0)
    *arg2 = sub_140cc12f0(arg1 - 0x200, var_1b8, arg3)
else
    int32_t rax_9 = var_1b8
    
    if (rax_9 == 0)
        *arg2 = 0
    else if (rax_9 s<= 0)
        *arg2 = *(sx.q(0xffffffff - rax_9) * 0x38 + *(arg1 - 0x1f8) + 0x20)
    else
        *arg2 = *((sx.q(rax_9 - 1) << 7) + *(arg1 - 0x1e8) + 0x40)

__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
