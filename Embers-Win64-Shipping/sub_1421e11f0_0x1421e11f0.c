// 函数: sub_1421e11f0
// 地址: 0x1421e11f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if ((*(arg1 + 0x8a) & 1) == 0 || arg1[0x81] == 0)
    return 0

void* rdx = arg1[0x15]

if (rdx == 0)
    void* rax_1
    rax_1, arg2 = sub_141ee69e0(arg1)
    rdx = rax_1

void var_38
sub_142076cb0(&var_38, rdx, 0, 0, *(arg1 + 0x431) u>> 7)

if (arg1[0xc1].d s> 0)
    sub_142187c60(arg1, arg1[0x81], arg2)

uint64_t rax_4 = sub_142189670(arg1, *(sub_141ee6400(arg1) + 8))
void*** result
void*** rax_7

if (sub_1421886f0(arg1) == 0)
    rax_7 = j_sub_140a82f30(0x3f0)
    
    if (rax_7 == 0)
        result = nullptr
    else
        result = sub_1421d6c30(rax_7, arg1, rax_4, 0)
else
    *(arg1[0x81] + 0xe4) = 1
    rax_7 = j_sub_140a82f30(0x3f0)
    
    if (rax_7 == 0)
        result = nullptr
    else
        result = sub_1421d6c30(rax_7, arg1, rax_4, 1)

if (rax_4 != 0 && *(rax_4 + 0x70) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rax_9 = *(rax_4 + 0x68)
        int64_t* rcx_6 = rax_4 + 8
        int64_t rsi_1 = sx.q(result[0x7d].d)
        
        if (rax_9 != 0)
            rcx_6 = rax_9
        
        int32_t rax_10 = (rsi_1 + 1).d
        int64_t r12_1 = *(rcx_6 + r14_1)
        result[0x7d].d = rax_10
        
        if (rax_10 s> *(result + 0x3ec))
            sub_1405a4d70(&result[0x7c])
        
        i += 1
        r14_1 += 8
        result[0x7c][rsi_1] = r12_1
    while (i s< *(rax_4 + 0x70))

sub_142079870(&var_38)
return result
