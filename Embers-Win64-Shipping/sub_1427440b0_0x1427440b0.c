// 函数: sub_1427440b0
// 地址: 0x1427440b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg4
float zmm7[0x4] = arg3

if ((*(arg1 + 0x20d) & 0x20) != 0)
    return 

int64_t* rcx = *(arg1 + 0x680)

if (rcx == 0)
    return 

int64_t* var_48 = nullptr
int32_t i_1 = 0

if ((*(*rcx + 0xc0))(rcx, &var_48, &i_1, 2) == 0)
    return 

int32_t i = i_1
int64_t* rbx_1 = nullptr

while (i != 0)
    int64_t* rax_2 = var_48
    i -= 1
    i_1 = i
    int64_t* rdi_1 = *rax_2
    var_48 = &var_48[1]
    
    if (rdi_1 != 0)
        char var_58
        char var_50
        
        if (rbx_1 == 0)
            int64_t* rax_4 = (*(*rdi_1 + 0x30))(rdi_1)
            rbx_1 = rax_4
            int64_t r9_1 = *rax_4
            (*(r9_1 + 0x358))(rax_4, 0, 0, r9_1, var_58, var_50)
            int64_t r9_2 = *rbx_1
            (*(r9_2 + 0x348))(rbx_1, 0, 0, r9_2)
        
        var_50 = arg6
        var_58 = arg5
        zmm6, zmm7 = sub_14225ed40(rdi_1, arg2, zmm7, zmm6, var_58, var_50)
        i = i_1
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x350))(rbx_1)
        (*(*rbx_1 + 0x360))(rbx_1)
        i = i_1
        rbx_1 = nullptr

i_1 = i - 1
int64_t* rcx_8 = *(arg1 + 0x680)
(*(*rcx_8 + 0xc8))(rcx_8)
