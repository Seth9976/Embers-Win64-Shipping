// 函数: sub_142bf9710
// 地址: 0x142bf9710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const i = *arg1
int32_t var_28
int32_t var_28_1 = var_28

for (; i == 0; i = *arg1)
    void* rbx = arg1[-2]
    
    if (rbx == 0)
        return &data_14369a5d0
    
    int128_t** i_2 = sub_140dc0ea0(1, 0x58)
    int128_t* i_1 = i_2
    
    if (i_2 != 0)
        sub_142bf97f0(i_2, rbx)
    
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
        int128_t* rax_2 = i[5].q
        int128_t* const rcx_1 = &data_14369a5d0
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        sub_142c09b70(rcx_1)
        i[5].q = 0
        j_sub_140a74f90(i)

return i
