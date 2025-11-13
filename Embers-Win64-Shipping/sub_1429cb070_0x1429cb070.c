// 函数: sub_1429cb070
// 地址: 0x1429cb070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t arg_10 = arg2
int32_t r9 = arg2 * 2
int64_t r10 = **(arg1 + 8)
int32_t rsi = *(r10 + (sx.q(r9) << 2))
int64_t r15 = sx.q(*(r10 + (sx.q(r9 + 1) << 2)))

if (rsi s>= *(arg1 + 4))
    void** rax_5 = *(arg1 + 0x18)
    void** rbx_1 = rax_5
    void** rcx_1 = rax_5[1]
    
    while (*(rcx_1 + 0x19) == 0)
        if (rcx_1[4].d s>= arg2)
            rbx_1 = rcx_1
            rcx_1 = *rcx_1
        else
            rcx_1 = rcx_1[2]
    
    if (rbx_1 == rax_5 || arg2 s< rbx_1[4].d)
        int32_t* arg_20 = &arg_10
        int64_t* rax_6 = sub_1429c9300(arg1 + 0x18, &data_1435fc448, &arg_20)
        void** arg_8
        sub_1429c9630(arg1 + 0x18, &arg_8, rbx_1, &rax_6[4], rax_6)
        rbx_1 = arg_8
    
    int32_t rax_7 = *(arg1 + 4)
    
    if (rsi s<= rax_7)
        sub_14058d4e0(&rbx_1[5], sx.q(rax_7 + 1))
        memcpy(rbx_1[5], **(arg1 + 0x10) + (r15 << 2), *(arg1 + 4) << 2)
        *(rbx_1[5] + (sx.q(*(arg1 + 4)) << 2)) = arg3
    else
        sub_140909dc0(&rbx_1[5], &arg_18)
else
    *(**(arg1 + 0x10) + (sx.q(r15.d + rsi) << 2)) = arg3

int64_t rdx_5 = sx.q(arg_10 * 2)
int64_t* result = *(arg1 + 8)
int64_t rcx_8 = *result
*(rcx_8 + (rdx_5 << 2)) += 1
return result
