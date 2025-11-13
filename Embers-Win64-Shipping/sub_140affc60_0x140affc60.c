// 函数: sub_140affc60
// 地址: 0x140affc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ae8560(arg2, arg1 + 8, arg3)

if ((arg2[5].b & 1) != 0)
    int64_t rcx_1 = *(arg1 + 0x48)
    
    if (rcx_1 != 0)
        *(arg1 + 0x48) = sub_140a84c80(rcx_1, 0, 0)
    
    *(arg1 + 0x50) = 0
    zmm1 = sub_140aed150(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

int64_t* rcx_3 = arg2[1]
int32_t* rdx_3 = *rcx_3
int32_t arg_8

if (&rdx_3[1] u> rcx_3[1])
    int32_t rax_4
    rax_4.b = *(arg1 + 0x58) != 0
    arg_8 = rax_4
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x58) = arg_8 != 0
else
    void* rax_2
    rax_2.b = *rdx_3 != 0
    *(arg1 + 0x58) = rax_2.b
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4

int64_t* rcx_5 = arg2[1]
int32_t* rdx_5 = *rcx_5

if (&rdx_5[1] u> rcx_5[1])
    int64_t rax_9 = *arg2
    int32_t rbp
    rbp.b = *(arg1 + 0x59) != 0
    arg_8 = rbp
    (*(rax_9 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x59) = arg_8 != 0
else
    void* rax_7
    rax_7.b = *rdx_5 != 0
    *(arg1 + 0x59) = rax_7.b
    int64_t* rax_8 = arg2[1]
    *rax_8 += 4

int64_t* rcx_7 = arg2[1]
char* r8 = *rcx_7

if (&r8[1] u> rcx_7[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x5a, 1)
else
    *(arg1 + 0x5a) = *r8
    int64_t* rax_13 = arg2[1]
    *rax_13 += 1

int512_t zmm1_8 = sub_140a1d9d0(arg2, &data_143de5800, 
    sub_140a1d9d0(arg2, &data_143de57f0, 
        sub_140a1d9d0(arg2, &data_143de57e0, 
            sub_140a1d9d0(arg2, &data_143de57d0, 
                sub_140a1d9d0(arg2, &data_143de57c0, 
                    sub_140a1d9d0(arg2, &data_143de57b0, 
                        sub_140a1d9d0(arg2, &data_143de57a0, 
                            sub_140a1d9d0(arg2, &data_143de5790, zmm1))))))))
return sub_140a1d9d0(arg2, &data_143de5780, 
    sub_140a1d9d0(arg2, &data_143de5850, 
        sub_140a1d9d0(arg2, &data_143de5840, 
            sub_140a1d9d0(arg2, &data_143de5830, 
                sub_140a1d9d0(arg2, &data_143de5820, 
                    sub_140a1d9d0(arg2, &data_143de5810, zmm1_8)))))) __tailcall
