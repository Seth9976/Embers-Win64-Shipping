// 函数: sub_141be5dd0
// 地址: 0x141be5dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= arg1[0x1b6].d)
    return 

int64_t* rcx_2 = (sx.q(arg2) << 4) + arg1[0x1b5]
int64_t* rdi_1 = rcx_2[1]
int64_t var_18 = *rcx_2

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (&var_18 != &arg1[0x1bd])
    var_18.o = *(arg1 + 0xde8)
    *(arg1 + 0xde8) = var_18.o

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int16_t** rax_4 = arg1[0x1bd]
int16_t* const rcx_5 = &data_142d40450
int16_t* rdx

if (rax_4[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *rax_4

if (arg1[0x24].d != 0)
    rcx_5 = arg1[0x23]

if (sub_140a54510(rcx_5, rdx) == 0)
    return 

sub_140597df0(&arg1[0x23], arg1[0x1bd])
bool cond:0_1 = arg1[0x1b9] == 0
var_18 = arg1[0x1bd]
void* rax_6 = arg1[0x1be]
void* var_10_2 = rax_6

if (not(cond:0_1))
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    sub_140f60ae0(arg1[0x1b7], &var_18)
    var_18 = arg1[0x1bd]
    void* rax_8 = arg1[0x1be]
    void* var_10_3 = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    sub_141bf4de0(arg1, &var_18)
    return 

if (rax_6 != 0)
    *(rax_6 + 8) += 1

(*(*arg1 + 0x2c8))(arg1, &var_18, 3)
