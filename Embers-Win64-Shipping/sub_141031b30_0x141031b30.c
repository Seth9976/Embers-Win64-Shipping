// 函数: sub_141031b30
// 地址: 0x141031b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c7a38 == 1 || data_1439b4ac8 == 0)
    return 

int64_t* rax_1 = sub_141024080(*(arg1 + 0x128), arg2)
int32_t rdx = *(arg1 + 0x130)
int32_t rbx_1

if (rdx != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rdx)
    rbx_1 = temp0_1
    int32_t arg_18 = rbx_1
else
    rbx_1 = rdx + 0x20

int32_t* rcx_1 = rax_1[2]
void* rdx_3 = &rcx_1[sx.q(rax_1[3].d) * 8]

if (rcx_1 == rdx_3)
label_141031ba6:
    rcx_1 = nullptr
else
    while (not(test_bit(*rcx_1, rbx_1)))
        rcx_1 = &rcx_1[8]
        
        if (rcx_1 == rdx_3)
            goto label_141031ba6

if (*(rcx_1 + 0x10) == *(rcx_1 + 8))
    return 

void** var_18
int32_t r8_1 = sub_141022330(arg1, &var_18, 0)
int64_t* var_10

if (var_10 != 0)
    int32_t rax_3 = *(var_10 + 0x14)
    *(var_10 + 0x14) -= 1
    
    if (rax_3 == 1)
        r8_1 = sub_141011360(var_10, rax_3.b)

sub_1410380a0(rax_1, rbx_1, sbb.d(r8_1, r8_1, *(arg1 + 0x136) != 0) & 2)
