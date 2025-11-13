// 函数: sub_140693ba0
// 地址: 0x140693ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
void* rsi = *arg1
int16_t* const rdx = &data_142d40450

if (data_143cddfd8 != 0)
    rdx = data_143cddfd0

sub_140b1f3f0(&data_143cddfe0, rdx, 0)
int64_t* rbx = data_143cddfe0
int64_t r14 = sx.q(data_143cddfe8)
void* r15_2 = &rbx[r14 * 2]

if (rbx != r15_2)
    do
        int16_t* rdx_1
        
        if (*(rsi + 0x110) == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *(rsi + 0x108)
        
        int16_t* const rcx
        
        if (rbx[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rbx
        
        if (sub_140a54510(rcx, rdx_1) == 0)
            goto label_140693cb5
        
        rbx = &rbx[2]
    while (rbx != r15_2)
    
    r14 = zx.q(data_143cddfe8)

int32_t rax_2 = (r14 + 1).d
bool cond:1_1 = rax_2 s<= data_143cddfec
data_143cddfe8 = rax_2

if (not(cond:1_1))
    sub_1405a4f90(&data_143cddfe0)

sub_140596d10((sx.q(r14.d) << 4) + data_143cddfe0, rsi + 0x108)

if (data_143cddfd8 != 0)
    rbp = data_143cddfd0

sub_140a464c0()
sub_140b270f0(&data_143cddfe0, rbp, 0, &data_14399ea08, 0)
label_140693cb5:
int64_t* rcx_4 = *arg1
void var_38
(*(*rcx_4 + 0x2a8))(rcx_4, &var_38)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

*(arg2 + 0xb4) &= 0xffffff00
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb0) = 0x20702
return arg2
