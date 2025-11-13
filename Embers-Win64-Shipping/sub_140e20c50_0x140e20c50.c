// 函数: sub_140e20c50
// 地址: 0x140e20c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax
int128_t zmm0
rax, zmm0 = j_sub_140a82f30(0x28)
int32_t* rbp_1

if (rax == 0)
    rbp_1 = nullptr
else
    int64_t* r14_1 = data_143e20d08
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    
    if (arg4 != &var_28 && arg4[1].d != 0)
        int64_t* rcx = *arg4
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &var_28)
    
    (*(*r14_1 + 0x50))(r14_1)
    zmm0.q = zmm0.q f+ fconvert.d(arg3.d)
    rbp_1 = sub_140d91260(rax, arg3.q.d, &var_28, zmm0)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142ecd2d8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbp_1

*arg2 = rbp_1
arg2[1] = rax_4
sub_140db8fd0(data_143e20d08, arg2)
int64_t r14_2 = sx.q(*(arg1 + 0x170))
int32_t rax_5 = (r14_2 + 1).d
*(arg1 + 0x170) = rax_5

if (rax_5 s> *(arg1 + 0x174))
    sub_1405a4f90(arg1 + 0x168)

int64_t* rcx_8 = (r14_2 << 4) + *(arg1 + 0x168)
*rcx_8 = *arg2
void* rax_7 = arg2[1]
rcx_8[1] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

*(arg1 + 0x2e) |= 8

if (sub_140db3510(arg1 + 0x18) != 0)
    sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

sub_140745b20(arg4)
return arg2
