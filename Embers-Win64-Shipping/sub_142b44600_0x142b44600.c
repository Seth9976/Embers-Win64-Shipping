// 函数: sub_142b44600
// 地址: 0x142b44600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x40)

if (rcx == 1)
    sub_142a48d70(arg2, u"precision-unlimited", 0, 0xffffffff)
    void* rax
    rax.b = 1
    return rax

if (rcx == 2)
    sub_142b41560(sx.d(*(arg1 + 0x48)), sx.d(*(arg1 + 0x4a)), arg2)
    void* rax_1
    rax_1.b = 1
    return rax_1

if (rcx == 3)
    sub_142b41480(sx.d(*(arg1 + 0x4c)), sx.d(*(arg1 + 0x4e)), arg2)
    int64_t rax_2
    rax_2.b = 1
    return rax_2

if (rcx != 4)
    if (rcx - 5 u<= 2)
        sub_142a48d70(arg2, u"precision-increment/", 0, 0xffffffff)
        sub_142b41650(zx.o(*(arg1 + 0x48)), sx.d(*(arg1 + 0x50)) - sx.d(*(arg1 + 0x52)), arg2)
        int64_t rax_9
        rax_9.b = 1
        return &data_14363ff01
    
    if (rcx != 8)
        int32_t rax_5
        rax_5.b = 0
        return rax_5
    
    if (*(arg1 + 0x48) != 0)
        sub_142a48d70(arg2, u"precision-currency-cash", 0, 0xffffffff)
        void* rax_7
        rax_7.b = 1
        return rax_7
    
    sub_142a48d70(arg2, u"precision-currency-standard", 0, 0xffffffff)
    void* rax_6
    rax_6.b = 1
    return rax_6

sub_142b41560(sx.d(*(arg1 + 0x48)), sx.d(*(arg1 + 0x4a)), arg2)
int16_t arg_8 = 0x2f
sub_142a48d70(arg2, &arg_8, 0, 1)
int16_t i_3 = *(arg1 + 0x4c)

if (i_3 == 0xffff)
    sub_142b41480(1, sx.d(*(arg1 + 0x4e)), arg2)
    int64_t rax_3
    rax_3.b = 1
    return rax_3

int32_t i_2 = sx.d(i_3)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        sub_142a48580(arg2, 0x40)
        i = i_1
        i_1 -= 1
    while (i != 1)

arg_8 = 0x2b
sub_142a48d70(arg2, &arg_8, 0, 1)
void* rax_4
rax_4.b = 1
return rax_4
