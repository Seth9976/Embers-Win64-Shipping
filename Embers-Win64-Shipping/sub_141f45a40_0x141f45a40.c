// 函数: sub_141f45a40
// 地址: 0x141f45a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f46470(arg1)
int64_t* rcx

if (arg1[0x86] != 0)
    rcx = arg1[0xca]

void* result
int64_t* rcx_5

if (arg1[0x86] != 0 && rcx != 0)
    sub_141e0ada0(rcx, arg1)
    int64_t rsi_1 = 0
    int64_t** rdi = arg1[0xd8]
    result = &rdi[arg1[0xd9]]
    uint64_t r14_2 = sx.q(arg1[0xd9].d) << 3 u>> 3
    
    if (rdi u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            result = sub_141e0ada0(*rdi, arg1)
            rsi_1 += 1
            rdi = &rdi[1]
        while (rsi_1 != r14_2)
    
    rcx_5 = arg1[0xcb]
    goto label_141f45b15

result = sub_140d3c6e0(&arg1[0x87])
void* result_1 = result

if (result != 0)
    void* rax_1 = sub_142591550()
    void* rcx_3 = *(result_1 + 0x10)
    result = rax_1 + 0x30
    int64_t rdx_3 = sx.q(*(result + 8))
    
    if (rdx_3.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_3 << 3)) == result)
        rcx_5 = *(result_1 + 0x650)
    label_141f45b15:
        
        if (rcx_5 != 0)
            result = sub_141e0ada0(rcx_5, arg1)

void* rcx_6 = arg1[0x86]

if (rcx_6 != 0)
    result = zx.q(arg1[0x127].d - *(arg1 + 0x964))
    
    if (result.d s> 0)
        return sub_141de1ba0(rcx_6, &arg1[0x126], &arg1[0xa5], &arg1[0xa7]) __tailcall

return result
