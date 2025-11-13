// 函数: sub_1416f5610
// 地址: 0x1416f5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rsi = *arg2

if ((arg1[5].b & 1) != 0)
    void*** rax_1 = j_sub_140a82f30(0x48)
    
    if (rax_1 != 0)
        void*** rsi_1 = nullptr
        __builtin_memset(&rax_1[1], 0, 0x14)
        *rax_1 = &data_142fc4250
        rax_1[5] = 0
        rax_1[6] = 0
        rax_1[4] = &data_142fc4220
        rax_1[7].b = 0
        sub_14172eb30(rax_1, &rax_1[4])
        *rax_1 = &data_142fc4af8
        void*** rax_2 = j_sub_140a82f30(0xd8)
        
        if (rax_2 != 0)
            int32_t var_18_1 = 0
            void*** rax_3
            rax_3, arg3 = sub_141703130(rax_2, rax_1, data_1439b8dec, 0)
            rsi_1 = rax_3
        
        rax_1[8] = rsi_1
        rsi = rax_1
        *arg2 = rax_1

sub_141754910(rsi, arg1, arg3)
void* rsi_2 = rsi[8]
sub_14090ad70(arg1, rsi_2 + 0x18, arg3)
int512_t zmm1 = sub_1416f1dc0(arg1, rsi_2 + 0x28)
int64_t* rcx_5 = arg1[1]
int32_t* r8_2 = *rcx_5

if (&r8_2[1] u<= rcx_5[1])
    *(rsi_2 + 0x88) = *r8_2
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, rsi_2 + 0x88, zmm1)
else
    (*(*arg1 + 0x150))(arg1, rsi_2 + 0x88, 4)

int64_t* rax_8
int512_t zmm1_1
rax_8, zmm1_1 = sub_1417078f0(arg1, rsi_2 + 0x90, zmm1)
return sub_141707c80(rax_8, rsi_2 + 0xa0, zmm1_1) __tailcall
