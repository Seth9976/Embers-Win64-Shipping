// 函数: sub_140d94fd0
// 地址: 0x140d94fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    void* rbx_3 = (sx.q(i) << 6) + *var_38
    int64_t* rcx_1 = *(rbx_3 + 0x18)
    
    if (rcx_1 != 0)
        int32_t temp0_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)
    
    int64_t* rcx_2 = *(rbx_3 + 8)
    
    if (rcx_2 != 0)
        int32_t temp1_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a52a0(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_6 = arg1[4]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
