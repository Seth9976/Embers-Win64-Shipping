// 函数: sub_1418c96c0
// 地址: 0x1418c96c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r13 = *arg1
int64_t* r12 = arg1[1]
*arg2 = *r13
arg2[1] = r13[1]
arg2[2].q = r13[2].q
*(arg2 + 0x28) = *(r13 + 0x28)
arg2[3].q = 0
int32_t i_1 = *(r13 + 0x38)
void* rdi = r13[3].q
*(arg2 + 0x38) = i_1

if (i_1 != 0)
    sub_140808f70(&arg2[3], i_1, 0)
    int64_t* rbx_1 = arg2[3].q
    void* rdi_1 = rdi + 0x10
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi_1 - 8))
        int64_t r15_1 = *(rdi_1 - 0x10)
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_140808f70(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r15_1, (rsi_1 * 0x18).d)
        else
            *(rbx_1 + 0xc) = 0
        
        int32_t rax_1 = *rdi_1
        rdi_1 += 0x18
        rbx_1[2].d = rax_1
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg2 + 0x3c) = 0

arg2[4].d = r13[4].d
*(arg2 + 0x44) = *(r13 + 0x44)
sub_1418cde00(arg2 + 0x48, r13 + 0x48)
arg2[0x18].q = *r12
return arg2
