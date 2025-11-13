// 函数: sub_140ba1330
// 地址: 0x140ba1330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_70 = nullptr
int32_t var_68 = 0
void var_20
sub_140a96170(&var_20)
int64_t* rdi

if (sub_140bbcf00(arg1, &var_70, nullptr) != 0)
    sub_140ba9350()
    
    if (sub_140a32a50(&var_70, 0x143e1a680, 1) != 0)
        rdi.b = 0
    else
        sub_140ba9350()
        
        if (sub_140a32a50(&var_70, 0x143e1a690, 1) != 0)
            rdi.b = 0
        else if (sub_140bacf70(&var_70, 1, &var_20) == 0)
            rdi.b = 0
        else if (data_143e1a480 == 0)
        label_140ba156c:
            int64_t var_30 = 0
            int64_t var_28_1 = 0
            void* var_50 = nullptr
            int64_t var_48_1 = 0
            
            if (sub_140bbd1d0(&var_70, &var_50, &var_30) == 0)
                int64_t* rdi_1 = &data_142d40450
                
                if (var_68 != 0)
                    rdi_1 = var_70
                
                sub_140af98a0("Unknown", 0x200, 
                    LongPackageNameToFilename failed to convert '%s'. Path does not map to any roots.", 
                    rdi_1)
                sub_140afbb40()
            
            int64_t rcx_17 = var_30
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            char rax_17 = sub_140ba7b70(&var_50, &var_50)
            rdi = zx.q(rax_17)
            
            if (rax_17 != 0 && arg3 != 0)
                sub_140597df0(arg3, &var_50)
            
            void* rcx_20 = var_50
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        else
            int64_t* rcx_9 = data_143e1a478
            
            if (rcx_9 == 0)
                goto label_140ba156c
            
            if ((*(*rcx_9 + 0x28))(rcx_9) == 0)
                goto label_140ba156c
            
            rdi = &data_142d40450
            int64_t* rdx_4 = &data_142d40450
            
            if (var_68 != 0)
                rdx_4 = var_70
            
            void var_78
            int64_t* rax_10 = sub_140b58260(&var_78, rdx_4, 1)
            int64_t* rcx_11 = nullptr
            
            if (data_143e1a480 != 0)
                rcx_11 = data_143e1a478
            
            int64_t r8_3 = *rcx_11
            
            if ((*(r8_3 + 0x48))(rcx_11, *rax_10, r8_3) == 0)
                rdi.b = 0
            else
                if (arg3 != 0)
                    int64_t var_40 = 0
                    int64_t var_38_1 = 0
                    void* var_60 = nullptr
                    int64_t var_58_1 = 0
                    
                    if (sub_140bbd1d0(&var_70, &var_60, &var_40) == 0)
                        if (var_68 != 0)
                            rdi = var_70
                        
                        sub_140af98a0("Unknown", 0x200, 
                            LongPackageNameToFilename failed to convert '%s'. Path does not map to any "
                        "roots.", rdi)
                        sub_140afbb40()
                    
                    if (arg3 == &var_60)
                        void* rcx_14 = var_60
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                    else
                        void* rcx_13 = *arg3
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                        
                        *arg3 = var_60
                        arg3[1].d = var_58_1.d
                        *(arg3 + 0xc) = var_58_1:4.d
                    
                    int64_t rcx_15 = var_40
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                
                rdi.b = 1
else
    sub_140bacf70(arg1, 1, &var_20)
    rdi.b = 0

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t rsi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *var_18
            (*(r8_1 + 8))(var_18, zx.q(rsi_1), r8_1)

int64_t* rcx_5 = var_70

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rdi.b)
