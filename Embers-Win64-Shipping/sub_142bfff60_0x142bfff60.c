// 函数: sub_142bfff60
// 地址: 0x142bfff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const i = *arg1
int32_t var_28
int32_t var_28_1 = var_28

for (; i == 0; i = *arg1)
    void* rbx = arg1[-5]
    
    if (rbx == 0)
        return &data_14369a5d0
    
    int32_t** i_2 = sub_140dc0ea0(1, 0x38)
    int128_t* i_1 = i_2
    
    if (i_2 != 0)
        sub_142c02410(i_2, rbx)
    
    i = &data_14369a5d0
    
    if (i_1 != 0)
        i = i_1
    
    bool z_1
    
    if (0 == *arg1)
        *arg1 = i
        z_1 = true
    else
        *arg1
        z_1 = false
    
    if (z_1)
        break
    
    if (i != 0 && i != &data_14369a5d0)
        int64_t rcx_1 = i[2].q
        
        if (rcx_1 != 0)
            j_sub_140a74f90(rcx_1)
        
        *(i + 0x18) = 0
        i[2].q = 0
        j_sub_140a74f90(i[3].q)
        int128_t* rax_2 = *i
        int128_t* const rcx_3 = &data_14369a5d0
        
        if (rax_2 != 0)
            rcx_3 = rax_2
        
        sub_142c09b70(rcx_3)
        *i = 0
        j_sub_140a74f90(i)

return i
