// 函数: sub_140d2c970
// 地址: 0x140d2c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = __security_cookie ^ &var_38
int64_t count = sx.q(*(arg4 + 0x58))
void* rdi

if (count.d != 0)
    int64_t rcx = sx.q((count + 0xf).d)
    int64_t rax_3 = rcx + 0xf
    
    if (rax_3 u<= rcx)
        rax_3 = 0xffffffffffffff0
    
    int64_t rax_4 = rax_3 & 0xfffffffffffffff0
    __chkstk(rax_4)
    void var_58
    rdi = (&var_58 - rax_4 + 0x2f) & 0xfffffffffffffff0
else
    rdi = nullptr

memset(rdi, 0, count)
char* rax_5 = *(arg2 + 0x20)
void* rsi = *(arg4 + 0x50)

while (*rax_5 != 0x16)
    *(arg2 + 0x38) = 0
    void* r8_1
    
    if (not(test_bit(zx.q(*(rsi + 0x40)), 8)))
        r8_1 = sx.q(*(rsi + 0x4c)) + rdi
    else
        r8_1 = nullptr
    
    char* rax_7 = *(arg2 + 0x20)
    uint32_t rcx_2 = zx.d(*rax_7)
    *(arg2 + 0x20) = &rax_7[1]
    (&data_143e1cd60)[zx.q(rcx_2)](*(arg2 + 0x18), arg2, r8_1)
    rax_5 = *(arg2 + 0x20)
    rsi = *(rsi + 0x20)

*(arg2 + 0x20) = &rax_5[1]

for (int64_t* i = *(arg4 + 0x80); i != 0; i = i[0xd])
    int64_t rax_11 = i[8]
    
    if (not(test_bit(rax_11, 8)) && (not.b((rax_11 u>> 0x24).b) & 1) != 0)
        (*(*i + 0xe8))(i, sx.q(*(i + 0x4c)) + rdi)

void* result = sub_140be0b10(arg4)

if (result != 0)
    if ((not.b((*(result + 0x40) u>> 0x24).b) & 1) != 0)
        int64_t r8_3 = *result
        (*(r8_3 + 0xe8))(result, arg3, r8_3)
    
    result = memset(arg3, 0, sx.q(*(result + 0x3c) * *(result + 0x38)))

__security_check_cookie(var_38 ^ &var_38)
return result
