// 函数: sub_142c00060
// 地址: 0x142c00060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t** i = *arg1
int32_t var_68
int32_t var_68_1 = var_68

for (; i == 0; i = *arg1)
    void* rbx = arg1[-0x22]
    
    if (rbx == 0)
        return &data_14369a5d0
    
    int32_t** i_1 = sub_140dc0ea0(1, 0x10)
    
    if (i_1 != 0)
        int32_t var_48 = 0
        int128_t var_40
        __builtin_memset(&var_40, 0, 0x15)
        int32_t var_28_1 = 0
        int64_t var_20_1 = 0
        int32_t var_18_1 = sub_142bfb130(rbx)
        char var_14_1 = 1
        *i_1 = sub_142bfc910(&var_48, sub_142bfb150(rbx, 0x73626978))
        int32_t rax_4 = *(rbx + 0x30)
        
        if (rax_4 == 0xffffffff)
            rax_4 = sub_142bf77e0(rbx)
        
        i_1[1].d = rax_4
    
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
        int32_t* rax_6 = *i
        int32_t* rcx_4 = &data_14369a5d0
        
        if (rax_6 != 0)
            rcx_4 = rax_6
        
        sub_142c09b70(rcx_4)
        *i = nullptr
        j_sub_140a74f90(i)

return i
