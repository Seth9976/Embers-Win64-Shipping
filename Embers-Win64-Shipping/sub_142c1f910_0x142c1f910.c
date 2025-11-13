// 函数: sub_142c1f910
// 地址: 0x142c1f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = *arg1
int32_t var_68
int32_t var_68_1 = var_68

for (; i == 0; i = *arg1)
    void* rbx = arg1[-6]
    
    if (rbx == 0)
        return sub_142c09c40() __tailcall
    
    int32_t var_48 = 0
    int128_t var_40
    __builtin_memset(&var_40, 0, 0x15)
    int32_t var_28_1 = 0
    int64_t var_20_1 = 0
    int32_t var_18_1 = sub_142bfb130(rbx)
    char var_14_1 = 1
    int32_t* i_1 = sub_142c18c00(&var_48, sub_142bfb150(rbx, 0x6b65726e))
    i = i_1
    
    if (i_1 == 0)
        i = &data_14369a5d0
    
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
        sub_142c09b70(i)

return i
