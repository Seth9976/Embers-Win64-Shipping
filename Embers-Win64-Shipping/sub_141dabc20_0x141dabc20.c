// 函数: sub_141dabc20
// 地址: 0x141dabc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = *arg2
void* rax_1 = arg2[1]
void* var_70 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 2, 9, &var_78)
int32_t var_40 = 6
char var_38 = 0
void** const var_48 = &data_142dd6130
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

if (arg4 == 0 || rax_3 != 0xc8)
    (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
else
    int64_t* rcx_1 = *arg3
    int64_t var_68
    (*(*rcx_1 + 0x48))(rcx_1, &var_68)
    int32_t i_1 = arg1[0x5c].d
    void*** rbx_1 = arg1[0x5b]
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rbx_1 = &data_143238800
            int64_t rcx_2 = rbx_1[5]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = rbx_1[3]
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = rbx_1[1]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            *rbx_1 = &data_142e1f570
            rbx_1 = &rbx_1[8]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[0x5c].d = 0
    
    if (*(arg1 + 0x2e4) != 0)
        sub_1405a52a0(&arg1[0x5b], 0)
    
    if ((*(arg1[0x5a] + 0x30))(&arg1[0x5a], &var_68) != 0)
        sub_141da4d40(arg1[0x5b], arg1[0x5c].d, arg5)
        int32_t var_40_1 = 0
    else
        (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
    
    int64_t rcx_9 = var_68
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (arg1[0x55].d != 0)
    int64_t* rcx_11 = arg1[0x54]
    
    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
        int64_t* rcx_12
        
        if (arg1[0x55].d == 0)
            rcx_12 = nullptr
        else
            rcx_12 = arg1[0x54]
        
        (*(*rcx_12 + 0x50))(rcx_12, &var_48)

void var_58

if (&var_58 != &arg1[0x54] && arg1[0x55].d != 0)
    int64_t* rcx_13 = arg1[0x54]
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x38))(rcx_13, 0)
        int64_t rcx_14 = arg1[0x54]
        
        if (rcx_14 != 0)
            arg1[0x54] = sub_140a84c80(rcx_14, 0, 0)
        
        arg1[0x55].d = 0

int64_t* rbx_3 = arg2[1]
int32_t result = 0x42d5a028
var_48 = &data_142d5a028

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    result = rbx_4[1].d
    rbx_4[1].d -= 1
    
    if (result == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

return result
