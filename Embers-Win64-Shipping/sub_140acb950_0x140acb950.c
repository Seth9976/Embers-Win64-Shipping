// 函数: sub_140acb950
// 地址: 0x140acb950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142e4a850
arg1[3] = 0
arg1[4].d = 0
sub_140a96170(&arg1[5])
*arg1 = &data_142e6c3b8
sub_140596d10(&arg1[8], arg2)

if (sub_140ab3dc0(arg3) != 0)
    void var_38
    int64_t* rax_1 = sub_140aae420(&var_38, &arg1[8])
    int64_t rdx_3 = arg1[5]
    arg1[5] = *rax_1
    *rax_1 = rdx_3
    int64_t rdx_4 = arg1[6]
    arg1[6] = rax_1[1]
    rax_1[1] = rdx_4
    arg1[7].d = rax_1[2].d
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rsi_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rsi_1))
else
    sub_14065da90(&arg1[5], arg3)

void var_78
int64_t* rax_6 = sub_140596d10(&var_78, &arg1[8])
void var_68
int64_t* rax_7 = sub_140596d10(&var_68, rax_6)
void*** rax_8 = sub_140a84c80(0, 0x30, 0)
void var_58

if (rax_8 != 0)
    sub_140acb770(rax_8, sub_140ad63d0, sub_140596d10(&var_58, rax_7))
int64_t rcx_13 = *rax_7

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *rax_6

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

void var_48

if (&var_48 != &arg1[3])
    if (rax_8 != 0)
        (*rax_8)[8](rax_8, &arg1[3])
    else if (arg1[4].d != 0)
        int64_t* rcx_16 = arg1[3]
        
        if (rcx_16 != 0)
            (*(*rcx_16 + 0x38))(rcx_16, 0)
            int64_t rcx_17 = arg1[3]
            
            if (rcx_17 != 0)
                arg1[3] = sub_140a84c80(rcx_17, 0, 0)
            
            arg1[4].d = 0

if (rax_8 != 0)
    (*rax_8)[7](rax_8, 0)
    int64_t rax_14 = sub_140a84c80(rax_8, 0, 0)
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)

return arg1
