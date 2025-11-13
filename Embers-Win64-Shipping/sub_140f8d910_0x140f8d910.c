// 函数: sub_140f8d910
// 地址: 0x140f8d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[1]

if (r8 == 0)
    return 

int64_t* rcx = *(r8 + 0x18)
int64_t r8_1 = *(r8 + 0x48)
int64_t var_58 = 0
int64_t var_50_1 = 0
(*(*rcx + 0x10))(rcx, &var_58, r8_1)
void var_20
sub_140aae2f0(&var_20, &var_58)
int64_t rcx_2 = var_58

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

(*(*arg1 + 0x28))(arg1, zx.q(arg2), zx.q(arg3), 0)
sub_140f74180(arg1[1])
sub_140f7acf0(arg1[1], arg4)
void* r8_3 = arg1[1]
int64_t var_48 = 0
int64_t var_40_1 = 0
int64_t* rcx_6 = *(r8_3 + 0x18)
(*(*rcx_6 + 0x10))(rcx_6, &var_48, *(r8_3 + 0x48))
void var_38
sub_140aae2f0(&var_38, &var_48)
int64_t rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_3 = sub_140ac6680(&var_20)
int16_t** rax_4 = sub_140ac6680(&var_38)
int16_t* const rcx_11 = &data_142d40450
int16_t* const r8_5

if (rax_3[1].d == 0)
    r8_5 = &data_142d40450
else
    r8_5 = *rax_3

if (rax_4[1].d != 0)
    rcx_11 = *rax_4

void* r8_6 = r8_5 - rcx_11
uint32_t i
uint32_t rdx_6

do
    rdx_6 = zx.d(*rcx_11)
    i = zx.d(*(rcx_11 + r8_6))
    
    if (rdx_6 != i)
        break
    
    rcx_11 = &rcx_11[1]
while (i != 0)

if (rdx_6 - i != 0)
    void* rbx_2 = arg1[1]
    
    if (*(rbx_2 + 0x558) == 0)
    label_140f8da6a:
        
        if (*(rbx_2 + 0x558) != 0)
            int64_t* rcx_13 = *(rbx_2 + 0x550)
            
            if (rcx_13 != 0)
                (*(*rcx_13 + 0x38))(rcx_13, 0)
                int64_t rcx_14 = *(rbx_2 + 0x550)
                
                if (rcx_14 != 0)
                    *(rbx_2 + 0x550) = sub_140a84c80(rcx_14, 0, 0)
                
                *(rbx_2 + 0x558) = 0
        
        sub_14065da90(rbx_2 + 0x530, &var_38)
        *(rbx_2 + 0x548) = 1
    else
        int64_t* rcx_12 = *(rbx_2 + 0x550)
        
        if (rcx_12 == 0)
            goto label_140f8da6a
        
        if ((*(*rcx_12 + 0x28))(rcx_12) == 0)
            goto label_140f8da6a
    
    int64_t* rcx_16 = *(arg1[1] + 0x48)
    (*(*rcx_16 + 8))(rcx_16)
    int64_t* rcx_17 = *arg1[1]
    (*(*rcx_17 + 0x98))(rcx_17, &var_38)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        i = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (i == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* var_18

if (var_18 == 0)
    return 

var_18[1].d -= 1

if (var_18[1].d != 1)
    return 

(**var_18)(var_18)
int32_t rdi_1 = *(var_18 + 0xc)
*(var_18 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_18 + 8))(var_18, zx.q(rdi_1))
