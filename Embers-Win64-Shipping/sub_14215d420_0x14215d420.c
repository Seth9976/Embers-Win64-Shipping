// 函数: sub_14215d420
// 地址: 0x14215d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    int64_t rdx_1 = sx.q(i) * 5
    int64_t rcx_1 = *var_38
    int64_t* rbx_1 = *(rcx_1 + (rdx_1 << 3) + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t rcx_4 = *(rcx_1 + (rdx_1 << 3))
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c5660(arg1, 0)

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
