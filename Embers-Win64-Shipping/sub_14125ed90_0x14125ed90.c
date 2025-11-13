// 函数: sub_14125ed90
// 地址: 0x14125ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1

if (*(rsi + 0xf0) == 0)
    return 

int32_t i = 0
int32_t arg_8
arg_8.q = 0xffffffff.q
int32_t rcx = *(rsi + 0xc0) - 1

if (rcx s>= 0)
    while (i u>= *(*(rsi + 0xb8) + (sx.q(rcx) << 2)))
        i += 1
        int32_t temp0_1 = rcx
        rcx -= 1
        
        if (temp0_1 - 1 s< 0)
            break

int32_t i_1 = *(rsi + 0xb0)
int32_t arg_c = rcx
int64_t rbx_1 = i.q
arg_c = 0xffffffff

while (rbx_1.d != i_1 || (rbx_1 u>> 0x20).d != (i_1.q u>> 0x20).d)
    void var_48
    sub_14125fef0((sx.q(rbx_1.d) << 7) + *(rsi + 0xa8), &var_48)
    int32_t j = (rbx_1 + 1).d
    int32_t rcx_6 = rbx_1:4.d
    
    if (rcx_6 s>= 0)
        while (j u>= *(*(rsi + 0xb8) + (sx.q(rcx_6) << 2)))
            j += 1
            int32_t temp1_1 = rcx_6
            rcx_6 -= 1
            
            if (temp1_1 - 1 s< 0)
                break
    
    arg_c = rcx_6
    rbx_1 = j.q
