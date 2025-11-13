// 函数: sub_1423fece0
// 地址: 0x1423fece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    void* rsi_3 = (sx.q(i) << 6) + *var_38
    int64_t* rbx_1 = *(rsi_3 + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_14094ab00(rsi_3 + 8)
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
int64_t rcx_7 = arg1[4]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8) __tailcall
