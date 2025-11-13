// 函数: sub_141ea8dc0
// 地址: 0x141ea8dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[0x26]
int64_t* rax
char rdx
rax, rdx = sub_140a84c80(0, 0x30, 0)
int64_t* var_18 = rax
void*** rdi = rax
int32_t var_10 = 3
char arg_8

if (rax != 0)
    *rdi = &data_1432595c8
    sub_140d3a3a0(&rdi[1], arg1)
    rdi[2] = j_sub_141eaf840
    rdi[4] = sub_140a387b0()
    *rdi = &data_143259620
    rdx = sub_1408d6c30(rsi + 0x158, &arg_8, &var_18)
    int64_t* rax_3
    
    if (var_10 == 0)
        rax_3 = var_18
    label_141ea8e7f:
        
        if (rax_3 != 0)
            rdx = sub_140a74f90(rax_3)
    else
        int64_t* rdi_1 = var_18
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x38))(rdi_1, 0)
            rax_3, rdx = sub_140a84c80(rdi_1, 0, 0)
            goto label_141ea8e7f

if ((*(arg1 + 0x25c) & 1) != 0)
    sub_141e93350(arg1, rdx)

int64_t* rdi_2 = (*(*arg1 + 0x150))(arg1) + 0x508
int64_t rsi_1 = sx.q(rdi_2[1].d)
int32_t rax_6 = (rsi_1 + 1).d
rdi_2[1].d = rax_6

if (rax_6 s> *(rdi_2 + 0xc))
    sub_1405a4d70(rdi_2)

int64_t rax_7 = *rdi_2
arg_8 = 0
*(rax_7 + (rsi_1 << 3)) = arg1
return sub_141e8e550(*rdi_2, rdi_2[1].d)
