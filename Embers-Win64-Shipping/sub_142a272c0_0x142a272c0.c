// 函数: sub_142a272c0
// 地址: 0x142a272c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg9
int32_t result_1 = 1 << (arg2[0x114f]).b
int32_t rbx_2 = (arg2[0xd7] + 7) s>> 3

if (arg8 s< result_1)
    result_1 = arg8

if (r13[3].d == 0 || rbx_2 != *(r13 + 0x1c) || result_1 s> r13[5].d)
    sub_142a27c20(r13)
    sub_142a27a60(r13, arg2, rbx_2, arg2[0x5a], result_1)

memset(r13[2], 0xffffffff, sx.q(rbx_2) << 2)
void* rbx_3 = arg7
int32_t r15 = 0
int64_t result = sx.q(result_1)

if (result_1 s> 0)
    int64_t r14 = result
    void** rsi_1 = rbx_3 + 0x18
    int32_t rbx_4 = arg4
    int64_t r12_1 = 0
    int64_t i
    
    do
        int64_t* rdi_2 = r13[4] + r12_1
        rsi_1[-1] = sub_142a26ec0
        *rsi_1 = r13
        rsi_1[1] = rdi_2
        sub_142a26ba0(rdi_2, arg1, arg2, arg3)
        *(rdi_2 + 0x194) = arg5
        rdi_2[0x33].d = arg6
        rdi_2[0x32].d = rbx_4
        
        if (r15 != result_1 - 1)
            result = data_143cc7030(&rsi_1[-3])
        else
            result = data_143cc7038(&rsi_1[-3])
        
        r15 += 1
        rbx_4 += 8
        rsi_1 = &rsi_1[6]
        r12_1 += 0x1a0
        i = r14
        r14 -= 1
    while (i != 1)
    rbx_3 = arg7

if (result_1 s> 0)
    uint64_t i_2 = zx.q(result_1)
    uint64_t i_1
    
    do
        result = data_143cc7028(rbx_3)
        rbx_3 += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
