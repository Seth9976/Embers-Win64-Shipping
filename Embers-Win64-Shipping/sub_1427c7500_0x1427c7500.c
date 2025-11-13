// 函数: sub_1427c7500
// 地址: 0x1427c7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1[1]
uint64_t rbp = arg1[2]

if (result != rbp)
    goto label_1427c7570

int64_t* rcx = *arg1
(*(*rcx + 0x18))(rcx, zx.q(arg1[3].d))
int64_t* rcx_1 = *arg1
void* arg_8
result = (*(*rcx_1 + 0x10))(rcx_1, &arg_8)
void* rdx_3 = arg_8
arg1[3].d = rdx_3.d
*(arg1 + 0x1c) = rdx_3 == 0

if (rdx_3 == 0)
label_1427c760c:
    result.b = 0
else
    void* rcx_3 = rdx_3 + result
    arg1[2] = rcx_3
    rbp = zx.q(rcx_3.d)
label_1427c7570:
    uint32_t count = rbp.d - result.d
    int32_t r14_3 = (zx.d(*(&data_1434cbe40 + (zx.q(*result) << 1))) u>> 0xb) + 1
    
    if (count u< r14_3)
        memmove(arg1 + 0x1d, result, count)
        int64_t* rcx_6 = *arg1
        (*(*rcx_6 + 0x18))(rcx_6, zx.q(arg1[3].d))
        arg1[3].d = 0
        
        do
            int64_t* rcx_7 = *arg1
            result = (*(*rcx_7 + 0x10))(rcx_7, &arg_8)
            void* rcx_8 = arg_8
            
            if (rcx_8 == 0)
                goto label_1427c760c
            
            uint32_t count_1 = r14_3 - count
            
            if (rcx_8.d u< count_1)
                count_1 = rcx_8.d
            
            memcpy(zx.q(count) + 0x1d + arg1, result, count_1)
            int64_t* rcx_12 = *arg1
            count += count_1
            (*(*rcx_12 + 0x18))(rcx_12, zx.q(count_1))
        while (count u< r14_3)
        
        arg1[1] = arg1 + 0x1d
        arg1[2] = arg1 + 0x1d + zx.q(r14_3)
    else if (count u>= 5)
        arg1[1] = result
    else
        memmove(arg1 + 0x1d, result, count)
        int64_t* rcx_16 = *arg1
        (*(*rcx_16 + 0x18))(rcx_16, zx.q(arg1[3].d))
        arg1[3].d = 0
        arg1[1] = arg1 + 0x1d
        arg1[2] = arg1 + 0x1d + zx.q(count)
    
    result.b = 1

return result
