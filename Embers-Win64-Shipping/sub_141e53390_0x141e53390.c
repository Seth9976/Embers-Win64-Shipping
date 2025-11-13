// 函数: sub_141e53390
// 地址: 0x141e53390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_48 = 0
int32_t var_40 = 0
(*(rax + 0x360))(arg1, arg2, &var_88, &var_48)
void*** var_78
int32_t var_70
int64_t* var_38
int64_t** rcx_5

if (var_40 s> 0)
    var_38 = nullptr
    int32_t var_30_1 = 0
    
    if (arg3 != &var_38 && arg3[1].d != 0)
        int64_t* rcx = *arg3
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &var_38)
    
    int64_t rdi = sx.q(var_80)
    int64_t rsi_1 = var_88
    uint64_t var_28 = 0
    int32_t var_20_1 = rdi.d
    int32_t var_1c
    
    if (rdi.d != 0)
        sub_140638750(&var_28, rdi.d, 0)
        memcpy(var_28, rsi_1, (rdi << 2).d)
    else
        var_1c = 0
    
    var_78 = nullptr
    void*** rax_2 = sub_140a84c80(0, 0x40, 0)
    var_78 = rax_2
    var_70 = 4
    
    if (rax_2 != 0)
        *rax_2 = &data_14324cde0
        rax_2[1] = 0
        rax_2[2].d = 0
        
        if (&var_38 != &rax_2[1] && var_30_1 != 0)
            int64_t* rcx_3 = var_38
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x40))(rcx_3, &rax_2[1])
        
        rax_2[3] = 0
        rax_2[3] = var_28
        var_28 = 0
        rax_2[4].d = var_20_1
        *(rax_2 + 0x24) = var_1c
        var_20_1.q = 0
        rax_2[6] = sub_140a387b0()
        *rax_2 = &data_14324ce38
    
    uint64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rcx_5 = &var_38
    goto label_141e53596

int32_t rdi_2 = var_80
int64_t* var_58

if (rdi_2 != 0)
    var_78 = nullptr
    int32_t var_70_2 = 0
    var_38.o = zx.o(0)
    
    if (arg3 != &var_78 && arg3[1].d != 0)
        int64_t* rcx_15 = *arg3
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x40))(rcx_15, &var_78)
            rdi_2 = var_80
    
    int64_t rsi_3 = var_88
    uint64_t var_68 = 0
    int32_t var_5c
    
    if (rdi_2 != 0)
        sub_140638750(&var_68, rdi_2, 0)
        memcpy(var_68, rsi_3, rdi_2 << 2)
    else
        var_5c = 0
    
    var_58 = nullptr
    int32_t var_50_4 = 0
    void*** rax_17 = sub_1405978f0(0x38, &var_58)
    
    if (rax_17 != 0)
        *rax_17 = &data_14324cf40
        rax_17[1] = 0
        rax_17[2].d = 0
        
        if (&var_78 != &rax_17[1] && var_70_2 != 0)
            void*** rcx_18 = var_78
            
            if (rcx_18 != 0)
                (*rcx_18)[8](rcx_18, &rax_17[1])
        
        rax_17[3] = 0
        rax_17[3] = var_68
        var_68 = 0
        rax_17[4].d = rdi_2
        *(rax_17 + 0x24) = var_5c
        int32_t var_60_1
        var_60_1.q = 0
        rax_17[6] = sub_140a387b0()
        *rax_17 = &data_14324cf98
    
    (*(*arg1 + 0x488))(arg1, &var_88, &var_58, zx.q(arg4), &var_38)
    uint64_t rcx_20 = var_68
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    sub_140745b20(&var_78)
else
    var_58 = nullptr
    int32_t var_50_1 = 0
    
    if (arg3 != &var_58 && arg3[1].d != 0)
        int64_t* rcx_6 = *arg3
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x40))(rcx_6, &var_58)
    
    var_78 = nullptr
    void*** rax_9 = sub_140a84c80(0, 0x30, 0)
    var_78 = rax_9
    var_70 = 3
    
    if (rax_9 != 0)
        *rax_9 = &data_14324ce90
        rax_9[1] = 0
        rax_9[2].d = 0
        
        if (&var_58 != &rax_9[1] && var_50_1 != 0)
            int64_t* rcx_7 = var_58
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x40))(rcx_7)
        
        rax_9[4] = sub_140a387b0()
        *rax_9 = &data_14324cee8
    
    rcx_5 = &var_58
label_141e53596:
    sub_140745b20(rcx_5)
    var_58 = nullptr
    int32_t var_50_2 = 0
    var_38.o = zx.o(0)
    sub_14238bbe0(&var_78, &var_38, &var_58)
    int64_t* rax_13
    
    if (var_50_2 == 0)
        rax_13 = var_58
    label_141e535f7:
        
        if (rax_13 != 0)
            sub_140a74f90(rax_13)
    else
        int64_t* rcx_9 = var_58
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x38))(rcx_9, 0)
            rax_13 = var_58
            
            if (rax_13 != 0)
                rax_13 = sub_140a84c80(rax_13, 0, 0)
                var_58 = rax_13
            
            int32_t var_50_3 = 0
            goto label_141e535f7
    void*** rax_15
    
    if (var_70 == 0)
        rax_15 = var_78
    label_141e53643:
        
        if (rax_15 != 0)
            sub_140a74f90(rax_15)
    else
        void*** rcx_12 = var_78
        
        if (rcx_12 != 0)
            (*rcx_12)[7](rcx_12, 0)
            rax_15 = var_78
            
            if (rax_15 != 0)
                rax_15 = sub_140a84c80(rax_15, 0, 0)
                var_78 = rax_15
            
            int32_t var_70_1 = 0
            goto label_141e53643
int64_t rcx_22 = var_48

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = var_88

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

return sub_140745b20(arg3)
