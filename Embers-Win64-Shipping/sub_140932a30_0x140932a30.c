// 函数: sub_140932a30
// 地址: 0x140932a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140939120(*(arg1 + 8))
int32_t i = 0
int16_t arg_8

while (i s>= 0)
    if (i s>= *(arg2 + 8))
        break
    
    int64_t* rdi_1 = *(arg1 + 8)
    int64_t rsi_3 = (sx.q(i) << 4) + *arg2
    int32_t rcx_1 = rdi_1[4].d
    
    if (((rcx_1 - 2) & 0xfffffff5) != 0 || rcx_1 == 0xa)
        int64_t* rcx_2 = rdi_1[1]
        arg_8 = 0x2c
        (*(*rcx_2 + 0x150))(rcx_2, &arg_8, 2)
    
    (*(*rdi_1 + 0x10))(rdi_1, rsi_3)
    i += 1
    rdi_1[4].d = 7

void* rbx = *(arg1 + 8)
arg_8 = 0x5d
int64_t* rcx_4 = *(rbx + 8)
*(rbx + 0x24) -= 1
(*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)
*(rbx + 0x18) -= 1
int64_t result = sub_140679af0(rbx + 0x10)
*(rbx + 0x20) = 5
return result
