// 函数: sub_141ea41a0
// 地址: 0x141ea41a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bdf210(arg1, arg2)
int64_t* rsi = arg1[8]
int64_t rbp = rsi[0x23]

if (rbp == 0)
    (*(*rsi + 0x390))(rsi)
    rbp = rsi[0x23]

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_1 << 3)) = rbp
int64_t rbp_1 = arg1[0x53]

if (rbp_1 != 0)
    int64_t rsi_2 = sx.q(arg2[1].d)
    int32_t rax_4 = (rsi_2 + 1).d
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_2 << 3)) = rbp_1

int64_t rcx_4 = arg1[0x23]
int64_t result

if (rcx_4 != 0)
label_141ea4257:
    int64_t* arg_8 = arg2
    int64_t** var_10_1 = &arg_8
    int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_141e97340
    result = sub_140d3bfe0(rcx_4, &var_18, 1, 0, 0)
else
    result = (*(*arg1 + 0x390))(arg1)
    rcx_4 = arg1[0x23]
    
    if (rcx_4 != 0)
        goto label_141ea4257

int64_t rbp_2 = arg1[0x50]

if (rbp_2 != 0)
    int64_t rsi_3 = sx.q(arg2[1].d)
    int32_t rax_7 = (rsi_3 + 1).d
    arg2[1].d = rax_7
    
    if (rax_7 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *arg2
    *(result + (rsi_3 << 3)) = rbp_2

int64_t rsi_4 = arg1[0x4f]

if (rsi_4 != 0)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *arg2
    *(result + (rdi_1 << 3)) = rsi_4

return result
