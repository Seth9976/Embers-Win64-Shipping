// 函数: sub_141a53930
// 地址: 0x141a53930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* var_10 = rbx
int64_t var_28 = 0
int64_t var_20 = 0

if (sub_140ce37a0(*arg2, &var_28, 1) == 0)
    rbx.b = 0
else
    int64_t* var_38 = nullptr
    int32_t i_4 = 0
    sub_140a2ccb0(&var_28, &var_38, U":\t", 0)
    int32_t i_2 = i_4
    
    if (i_2 != 4)
        rbx = var_38
        
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t rcx_41 = *rbx
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                rbx = &rbx[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rbx = var_38
        
        if (rbx != 0)
            sub_140a74f90(rbx)
        
        rbx.b = 0
    else
        int16_t* var_48 = nullptr
        int32_t var_40_1 = 0
        sub_1405947f0(&var_48, i_2 + 1)
        int32_t rdi_1 = var_40_1 + 5
        
        if (rdi_1 s> 0)
            sub_140594770(&var_48)
        
        int16_t* rsi_1 = var_48
        sub_1405a7220(rsi_1, 5, "Open", 5, 0x3f)
        int64_t* rcx_5 = var_38
        int16_t* const _String_1 = &data_142d40450
        int16_t* const rdx_4 = &data_142d40450
        
        if (rdi_1 != 0)
            rdx_4 = rsi_1
        
        int16_t* const rcx_6
        
        if (rcx_5[1].d == 0)
            rcx_6 = &data_142d40450
        else
            rcx_6 = *rcx_5
        
        rdi_1.b = sub_140a54510(rcx_6, rdx_4) == 0
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        if (rdi_1.b == 0)
            var_48 = nullptr
            int32_t var_40_2 = 0
            sub_1405947f0(&var_48, 0xa)
            int32_t rdi_2 = var_40_2 + 0xa
            
            if (rdi_2 s> 0)
                sub_140594770(&var_48)
            
            int16_t* rsi_2 = var_48
            sub_1405a7220(rsi_2, 0xa, "Inclusive", 0xa, 0x3f)
            int64_t* rcx_11 = var_38
            int16_t* rdx_6 = &data_142d40450
            
            if (rdi_2 != 0)
                rdx_6 = rsi_2
            
            int16_t* const rcx_12
            
            if (rcx_11[1].d == 0)
                rcx_12 = &data_142d40450
            else
                rcx_12 = *rcx_11
            
            rdi_2.b = sub_140a54510(rcx_12, rdx_6) == 0
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
            
            wchar16* _String
            
            if (rdi_2.b == 0)
                var_48 = nullptr
                int32_t var_40_3 = 0
                sub_1405947f0(&var_48, 0xa)
                int32_t rdi_3 = var_40_3 + 0xa
                
                if (rdi_3 s> 0)
                    sub_140594770(&var_48)
                
                int16_t* rsi_3 = var_48
                sub_1405a7220(rsi_3, 0xa, "Exclusive", 0xa, 0x3f)
                int64_t* rcx_17 = var_38
                int16_t* rdx_8 = &data_142d40450
                
                if (rdi_3 != 0)
                    rdx_8 = rsi_3
                
                int16_t* const rcx_18
                
                if (rcx_17[1].d == 0)
                    rcx_18 = &data_142d40450
                else
                    rcx_18 = *rcx_17
                
                rdi_3.b = sub_140a54510(rcx_18, rdx_8) == 0
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
                
                if (rdi_3.b != 0)
                    int64_t* rax_6 = var_38
                    
                    if (rax_6[3].d == 0)
                        _String = &data_142d40450
                    else
                        _String = rax_6[2]
                    
                    var_48.b = 0
                    var_48:4.d = _wtoi(_String)
                    *arg1 = var_48
            else
                int64_t* rax_4 = var_38
                
                if (rax_4[3].d == 0)
                    _String = &data_142d40450
                    var_48.b = 1
                else
                    _String = rax_4[2]
                    var_48.b = 1
                
                var_48:4.d = _wtoi(_String)
                *arg1 = var_48
        else
            var_48:4.d = 0
            var_48.b = 2
            *arg1 = var_48
        
        var_48 = nullptr
        int32_t var_40_4 = 0
        sub_1405947f0(&var_48, 5)
        int32_t rdi_4 = var_40_4 + 5
        
        if (rdi_4 s> 0)
            sub_140594770(&var_48)
        
        int16_t* rsi_4 = var_48
        sub_1405a7220(rsi_4, 5, "Open", 5, 0x3f)
        int64_t* rcx_23 = var_38
        int16_t* const rdx_10 = &data_142d40450
        
        if (rdi_4 != 0)
            rdx_10 = rsi_4
        
        int16_t* const rcx_24
        
        if (rcx_23[5].d == 0)
            rcx_24 = &data_142d40450
        else
            rcx_24 = rcx_23[4]
        
        rdi_4.b = sub_140a54510(rcx_24, rdx_10) == 0
        
        if (rsi_4 != 0)
            sub_140a74f90(rsi_4)
        
        if (rdi_4.b == 0)
            var_48 = nullptr
            int32_t var_40_5 = 0
            sub_1405947f0(&var_48, 0xa)
            int32_t rdi_5 = var_40_5 + 0xa
            
            if (rdi_5 s> 0)
                sub_140594770(&var_48)
            
            int16_t* rsi_5 = var_48
            sub_1405a7220(rsi_5, 0xa, "Inclusive", 0xa, 0x3f)
            int64_t* rcx_29 = var_38
            int16_t* rdx_12 = &data_142d40450
            
            if (rdi_5 != 0)
                rdx_12 = rsi_5
            
            int16_t* const rcx_30
            
            if (rcx_29[5].d == 0)
                rcx_30 = &data_142d40450
            else
                rcx_30 = rcx_29[4]
            
            rdi_5.b = sub_140a54510(rcx_30, rdx_12) == 0
            
            if (rsi_5 != 0)
                sub_140a74f90(rsi_5)
            
            if (rdi_5.b == 0)
                var_48 = nullptr
                int32_t var_40_6 = 0
                sub_1405947f0(&var_48, 0xa)
                int32_t rdi_6 = var_40_6 + 0xa
                
                if (rdi_6 s> 0)
                    sub_140594770(&var_48)
                
                int16_t* rsi_6 = var_48
                sub_1405a7220(rsi_6, 0xa, "Exclusive", 0xa, 0x3f)
                int64_t* rcx_35 = var_38
                int16_t* rdx_14 = &data_142d40450
                
                if (rdi_6 != 0)
                    rdx_14 = rsi_6
                
                int16_t* const rcx_36
                
                if (rcx_35[5].d == 0)
                    rcx_36 = &data_142d40450
                else
                    rcx_36 = rcx_35[4]
                
                rdi_6.b = sub_140a54510(rcx_36, rdx_14) == 0
                
                if (rsi_6 != 0)
                    sub_140a74f90(rsi_6)
                
                if (rdi_6.b != 0)
                    int64_t* rax_13 = var_38
                    
                    if (rax_13[7].d != 0)
                        _String_1 = rax_13[6]
                    
                    var_48.b = 0
                    var_48:4.d = _wtoi(_String_1)
                    arg1[1] = var_48
            else
                int64_t* rax_11 = var_38
                
                if (rax_11[7].d != 0)
                    _String_1 = rax_11[6]
                
                var_48.b = 1
                var_48:4.d = _wtoi(_String_1)
                arg1[1] = var_48
        else
            var_48:4.d = 0
            var_48.b = 2
            arg1[1] = var_48
        
        int32_t i_3 = i_4
        rbx = var_38
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t rcx_39 = *rbx
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                rbx = &rbx[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbx = var_38
        
        if (rbx != 0)
            sub_140a74f90(rbx)
        
        rbx.b = 1

int64_t rcx_43 = var_28

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

return zx.q(rbx.b)
