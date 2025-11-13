// 函数: sub_140f74800
// 地址: 0x140f74800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x100].b == 0)
    return 

int64_t* rcx = arg1[3]
int64_t r8_1 = arg1[9]
int32_t rsi_1 = 0
int64_t var_38 = 0
int64_t var_30_1 = 0
(*(*rcx + 0x10))(rcx, &var_38, r8_1)
void var_28
sub_140aae2f0(&var_28, &var_38)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rax_2 = sub_140ac6680(&arg1[0xf8])
int16_t** rax_3 = sub_140ac6680(&var_28)
int16_t* const rcx_5 = &data_142d40450
int16_t* const r8_2

if (rax_2[1].d == 0)
    r8_2 = &data_142d40450
else
    r8_2 = *rax_2

if (rax_3[1].d != 0)
    rcx_5 = *rax_3

void* r8_3 = r8_2 - rcx_5
uint32_t i
uint32_t rdx_3

do
    rdx_3 = zx.d(*rcx_5)
    i = zx.d(*(rcx_5 + r8_3))
    
    if (rdx_3 != i)
        break
    
    rcx_5 = &rcx_5[1]
while (i != 0)

if (rdx_3 - i != 0)
    if (arg1[0xab].d == 0)
    label_140f748e4:
        
        if (arg1[0xab].d != 0)
            int64_t* rcx_7 = arg1[0xaa]
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x38))(rcx_7, 0)
                int64_t rcx_8 = arg1[0xaa]
                
                if (rcx_8 != 0)
                    arg1[0xaa] = sub_140a84c80(rcx_8, 0, 0)
                
                arg1[0xab].d = 0
        
        sub_14065da90(&arg1[0xa6], &var_28)
        arg1[0xa9].b = 1
    else
        int64_t* rcx_6 = arg1[0xaa]
        
        if (rcx_6 == 0)
            goto label_140f748e4
        
        if ((*(*rcx_6 + 0x28))(rcx_6) == 0)
            goto label_140f748e4
    
    sub_140f87ac0(arg1, &arg1[0xf8])
    int64_t* rcx_11 = arg1[9]
    (*(*rcx_11 + 8))(rcx_11)
    int64_t* rcx_12 = *arg1
    (*(*rcx_12 + 0x98))(rcx_12, &var_28)
    bool cond:1_1 = arg1[0xf3].b == 1
    int64_t* rcx_13 = *arg1
    int32_t arg_8 = arg1[0xf2].d
    int32_t rax_11
    rax_11.b = cond:1_1
    
    if (rax_11 + *(arg1 + 0x794) s>= 0)
        rsi_1 = rax_11 + *(arg1 + 0x794)
    
    int32_t arg_c = rsi_1
    (*(*rcx_13 + 0xa8))(rcx_13, &arg_8)
    sub_140f90a90(arg1, arg1.d)
    int64_t* rcx_15 = arg1[3]
    
    if ((*(*rcx_15 + 0x18))(rcx_15) != 0)
        sub_140f74d00(arg1, &var_28)

sub_140f89a00(&arg1[0xf8])
int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t rdi_3 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (rdi_3 == 1)
    (*(*var_20 + 8))(var_20, zx.q(rdi_3))
