// 函数: sub_1424254c0
// 地址: 0x1424254c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 1
int64_t rax_1 = (*(*(arg1 + 0xd8) + 0x18))(arg1 + 0xd8)
int64_t rdx_2

if (rax_1 != 0)
    int32_t r8_1 = *(arg1 + 0x5c)
    rdx_2 = sx.q(*(arg1 + 0x58) - 1 + r8_1) & sx.q(neg.d(r8_1))

void* var_38

if (rax_1 == 0 || rdx_2 s<= 0)
label_14242551f:
    void* rax_3 = *(arg1 + 0x50)
    var_38 = arg1
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_1406328d0(&var_38)
    void* rcx_6 = rax_3
    
    if (rcx_6 != 0)
        while (test_bit(zx.q(*(rcx_6 + 0x40)), 9))
            void* rax_5 = *(rcx_6 + 0x20)
            sub_1406328d0(&var_38)
            rcx_6 = rax_5
            
            if (rcx_6 == 0)
                goto label_142425577
        
        r14.b = 0
else
    char* rax_2 = nullptr
    
    while (rax_2[rax_1] == 0)
        rax_2 = &rax_2[1]
        
        if (rax_2 s>= rdx_2)
            goto label_14242551f
    
    r14.b = 0

label_142425577:
void* i_2 = *(arg1 + 0x50)
int64_t rsi
rsi.b = 1
var_38 = arg1
int32_t var_28_2 = 0xffffffff
int16_t var_24_2 = 0x101
char var_22_2 = 0
sub_1406328d0(&var_38)
void* i_3

for (void* i = i_2; i != 0; i = i_3)
    if (not(test_bit(zx.q(*(i + 0x40)), 0x1e)))
        rsi.b = 0
        break
    
    i_3 = *(i + 0x20)
    sub_1406328d0(&var_38)

char rdi = rsi.b

if (rsi.b == 0)
    void* i_4 = *(arg1 + 0x50)
    rdi = 1
    var_38 = arg1
    int32_t var_28_3 = 0xffffffff
    int16_t var_24_3 = 0x101
    char var_22_3 = rsi.b
    sub_1406328d0(&var_38)
    void* i_5
    
    for (void* i_1 = i_4; i_1 != 0; i_1 = i_5)
        if ((*(i_1 + 0x40) & 0x1000000000) == 0)
            rdi = 0
            break
        
        i_5 = *(i_1 + 0x20)
        sub_1406328d0(&var_38)

int32_t result = *(arg1 + 0xb0) | 0xe000
*(arg1 + 0xb0) = result

if (r14.b == 0)
    result &= 0xffff7fff
    *(arg1 + 0xb0) = result

if (rsi.b == 0)
    result &= 0xffffdfff
    *(arg1 + 0xb0) = result

if (rdi == 0)
    result &= 0xffffbfff
    *(arg1 + 0xb0) = result

return result
