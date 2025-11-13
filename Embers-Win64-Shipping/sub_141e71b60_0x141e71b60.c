// 函数: sub_141e71b60
// 地址: 0x141e71b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    void* rbx_3 = (sx.q(i) << 6) + *var_38
    int64_t* rcx_1 = *(rbx_3 + 8)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x28))(rcx_1)
        sub_141e895d0(*(rbx_3 + 8))
        int64_t* rcx_3 = *(rbx_3 + 8)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        *(rbx_3 + 8) = 0
    
    int64_t rcx_4 = *(rbx_3 + 0x18)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
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
int64_t rcx_8 = arg1[4]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9) __tailcall
