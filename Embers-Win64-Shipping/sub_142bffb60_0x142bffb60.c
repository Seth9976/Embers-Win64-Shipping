// 函数: sub_142bffb60
// 地址: 0x142bffb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t** i = *arg1
int32_t var_68
int32_t var_68_1 = var_68

for (; i == 0; i = *arg1)
    void* rbx = arg1[-9]
    
    if (rbx == 0)
        return &data_14369a5d0
    
    int32_t** i_1 = sub_140dc0ea0(1, 0xc0)
    
    if (i_1 != 0)
        sub_142c015e0(i_1, rbx)
    
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
        int32_t var_20_1 = i[5].d
        int64_t var_28_1 = i[3]
        int64_t var_30_1 = i[2]
        char const* const var_38_1 = "end [%p..%p] %u edit requests"
        int32_t var_40_1 = 0xffffffff
        int64_t var_48_1 = 0
        sub_142c09b70(i[6])
        i[6] = 0
        i[3] = 0
        i[2] = 0
        int64_t rcx_3 = i[0xa]
        
        if (rcx_3 != 0)
            j_sub_140a74f90(rcx_3)
        
        i[9] = 0
        i[0xa] = 0
        int32_t j_4 = i[0x13].d
        
        if (j_4 != 0)
            int64_t* rdi_3 = &i[0x14][4]
            uint64_t j_2 = zx.q(j_4)
            uint64_t j
            
            do
                int64_t rcx_4 = *rdi_3
                
                if (rcx_4 != 0)
                    j_sub_140a74f90(rcx_4)
                
                rdi_3[-1] = 0
                *rdi_3 = 0
                rdi_3 = &rdi_3[5]
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        int64_t rcx_5 = i[0x14]
        
        if (rcx_5 != 0)
            j_sub_140a74f90(rcx_5)
        
        i[0x13] = 0
        i[0x14] = 0
        int32_t j_5 = i[0x15].d
        
        if (j_5 != 0)
            int64_t* rdi_5 = &i[0x16][4]
            uint64_t j_3 = zx.q(j_5)
            uint64_t j_1
            
            do
                int64_t rcx_6 = *rdi_5
                
                if (rcx_6 != 0)
                    j_sub_140a74f90(rcx_6)
                
                rdi_5[-1] = 0
                *rdi_5 = 0
                rdi_5 = &rdi_5[6]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        int64_t rcx_7 = i[0x16]
        
        if (rcx_7 != 0)
            j_sub_140a74f90(rcx_7)
        
        i[0x15] = 0
        i[0x16] = 0
        sub_142c09b70(*i)
        *i = nullptr
        j_sub_140a74f90(i)

return i
