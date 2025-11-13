// 函数: sub_142a3f390
// 地址: 0x142a3f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a3fbc0(arg1, arg2)
j_sub_142a44ce0(arg2[0xb] + 0xc0, 1)
int32_t rbp_1 = neg.d(*(arg1 + 0x40))
int64_t* rcx_2 = arg2[0xb]

if (rbp_1 s< 0)
    sub_142a43f80(rcx_2, 1)
else
    j_sub_142a44ce0(rcx_2, 1)

int64_t rcx_3 = sx.q(rbp_1)
arg2[4] += (rcx_3 s>> 0x3f & 0xfffffffffffffffe) + 1
int64_t rax_4 = arg2[4]

if (rax_4 u> arg2[5])
    arg2[5] = rax_4

arg2[6] += rcx_3
int64_t rax_5 = arg2[6]

if (rax_5 u> arg2[7])
    arg2[7] = rax_5

*(arg1 + 0x60) = 0
int64_t result
int64_t result_1

do
    result_1 = data_14400f108
    *(arg1 + 0x20) = result_1
    result = result_1
    
    if (result == data_14400f108)
        data_14400f108 = arg1
    else
        result = data_14400f108
while (result_1 != result)
data_14400f110 += 1
return result
