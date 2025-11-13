// 函数: sub_141755af0
// 地址: 0x141755af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9528)

if (sub_140b4e7c0(arg2, &data_1439a9528) s>= 5)
    int64_t* rcx_2 = arg2[1]
    int32_t* rdx = *rcx_2
    
    if (&rdx[1] u> rcx_2[1])
        int32_t rax_4
        rax_4.b = *(arg1 + 0xa) != 0
        int32_t arg_10 = rax_4
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        *(arg1 + 0xa) = arg_10 != 0
    else
        void* rax_2
        rax_2.b = *rdx != 0
        *(arg1 + 0xa) = rax_2.b
        int64_t* rax_3 = arg2[1]
        *rax_3 += 4
    
    int64_t* rcx_4 = arg2[1]
    int32_t* rdx_2 = *rcx_4
    
    if (&rdx_2[1] u> rcx_4[1])
        int64_t rax_9 = *arg2
        int32_t rsi_1
        rsi_1.b = *(arg1 + 0xb) != 0
        int32_t arg_18 = rsi_1
        (*(rax_9 + 0x150))(arg2, &arg_18, 4)
        *(arg1 + 0xb) = arg_18 != 0
    else
        void* rax_7
        rax_7.b = *rdx_2 != 0
        *(arg1 + 0xb) = rax_7.b
        int64_t* rax_8 = arg2[1]
        *rax_8 += 4

if (sub_140b4e7c0(arg2, &data_1439a9528) s<= 0xa)
    *(arg1 + 0xb) = 1

(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)

if (sub_140b4e7c0(arg2, &data_1439a4b70) s<= 0x1d)
    char rax_18 = *(arg1 + 8)
    *(arg1 + 9) = rax_18
    return rax_18

int64_t* rcx_9 = arg2[1]
char* rdx_4 = *rcx_9

if (&rdx_4[1] u> rcx_9[1])
    jump(*(*arg2 + 0x150))

*(arg1 + 9) = *rdx_4
int64_t* rax_16 = arg2[1]
*rax_16 += 1
return rax_16
