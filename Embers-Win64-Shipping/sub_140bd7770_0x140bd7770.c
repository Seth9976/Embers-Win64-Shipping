// 函数: sub_140bd7770
// 地址: 0x140bd7770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[5].b s>= 0 || (*(arg1 + 0x2a) & 0x20) != 0)
    int64_t* rcx = arg1[0x12]
    (*(*rcx + 0x128))(rcx)

void* rdx = *arg2

if (rdx == 0 || (*(*(rdx + 8) + 0x10) & 1) == 0)
    rdx = nullptr

void* var_68 = nullptr
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140cadcf0(arg1, &var_68, sub_140cbad20(&var_68, rdx))

if ((arg1[5].b & 1) != 0)
    void* r14_1 = arg1[0x16]
    sub_140ccfa10()
    void* rax_3 = var_68
    
    if (rax_3 == 0)
    label_140bd7830:
        
        if (var_50 != 0)
            rax_3 = sub_140cd0630(&var_68, r14_1, 0)
            
            if (rax_3 == 0 || (data_1439a9d98 & *(*(rax_3 + 8) + 0x10)) == 0)
                rax_3 = var_68
                
                if (rax_3 != 0)
                    var_60 = 0xffffffff
                    rax_3 = nullptr
                    int32_t var_5c_1 = 0
                    var_68 = rax_3
            else
                var_68 = rax_3
    else
        bool cond:1_1 = sub_140d3e110(&var_60) != 0
        rax_3 = var_68
        
        if (not(cond:1_1))
            goto label_140bd7830
    
    *arg2 = rax_3
    
    if (rax_3 == 0 && var_50 != 0)
        int32_t* r14_2 = arg1[0x15]
        uint64_t var_38 = 0
        int32_t var_2c_1 = 0
        sub_140ccfa10()
        
        if (var_68 == 0)
        label_140bd78b3:
            
            if (var_50 != 0)
                void* rax_6 = sub_140cd0630(&var_68, nullptr, 0)
                
                if (rax_6 != 0 && (data_1439a9d98 & *(*(rax_6 + 8) + 0x10)) != 0)
                    var_68 = rax_6
                else if (var_68 != 0)
                    var_60 = 0xffffffff
                    int32_t var_5c_2 = 0
                    var_68 = nullptr
        else if (sub_140d3e110(&var_60) == 0)
            goto label_140bd78b3
        
        int64_t rdi_1 = sx.q(var_50)
        void* var_48 = var_68
        int64_t var_40_1 = var_60.q
        int32_t var_30_1 = rdi_1.d
        
        if (rdi_1.d != 0 || var_2c_1 != 0)
            sub_1405c4a00(&var_38, var_50, var_2c_1)
            memcpy(var_38, var_58, (rdi_1 << 3).d)
        
        int64_t rsi_2 = sx.q(arg1[0x14].d)
        int32_t var_28_1 = *r14_2
        int32_t rax_10 = (rsi_2 + 1).d
        arg1[0x14].d = rax_10
        
        if (rax_10 s> *(arg1 + 0xa4))
            sub_1405c4ec0(&arg1[0x13])
        
        sub_140bd5660(arg1[0x13] + rsi_2 * 0x28, &var_48)
        uint64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)

if (var_58 != 0)
    sub_140a74f90(var_58)

return arg1
