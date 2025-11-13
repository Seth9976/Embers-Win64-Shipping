// 函数: sub_1429b13d0
// 地址: 0x1429b13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
void* rdi = arg1[1]
int64_t result = *arg1
int64_t r14_2 = (rdi - result) s>> 5
int64_t rcx_2 = (arg1[2] - result) s>> 5

if (arg2 u<= rcx_2)
    if (arg2 u> r14_2)
        int64_t i_3 = arg2 - r14_2
        
        if (arg2 != r14_2)
            int64_t i
            
            do
                *(rdi + 0x10) = 0
                *(rdi + 0x18) = 0xf
                *rdi = 0
                rdi += 0x20
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        result = sub_1409091b0(rdi, rdi)
        arg1[1] = rdi
    else if (arg2 != r14_2)
        int64_t* rsi_2 = (arg2 << 5) + result
        result = sub_1409091b0(rsi_2, rdi)
        arg1[1] = rsi_2
    
    return result

if (arg2 u> 0x7ffffffffffffff)
    sub_140610c20()
    noreturn

uint64_t rdx_1 = rcx_2 u>> 1
int64_t rdi_1

if (rcx_2 u<= 0x7ffffffffffffff - rdx_1)
    rdi_1 = rdx_1 + rcx_2
    
    if (rdi_1 u< arg2)
        rdi_1 = arg2
else
    rdi_1 = arg2

int64_t arg_20 = rdi_1
int128_t* rax_1 = sub_1406aff30(arg1, rdi_1)
int128_t* var_40_1 = rax_1
void* rcx_6 = &rax_1[r14_2 * 2]
void* var_48_1 = rcx_6
int64_t i_2 = arg2 - r14_2
void* arg_10 = rcx_6

if (arg2 != r14_2)
    int64_t i_1
    
    do
        *(rcx_6 + 0x10) = 0
        *(rcx_6 + 0x18) = 0xf
        *rcx_6 = 0
        rcx_6 += 0x20
        arg_10 = rcx_6
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

sub_1409091b0(rcx_6, rcx_6)
sub_140909570(*arg1, arg1[1], rax_1)
return sub_14282e094(arg1, rax_1, arg2, rdi_1)
