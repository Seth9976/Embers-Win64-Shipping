// 函数: sub_140633780
// 地址: 0x140633780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t arg_20 = 0
int64_t* rdi = arg2
int64_t r14 = arg1
int32_t r9 = rax - 1

if (rax == 0)
    r9 = 0

if (r9 s< 1)
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *arg3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    rax.b = 0
    return rax

sub_140b214e0(arg2)
sub_140a464c0()
int32_t r12 = 1
arg_20.q = &data_14399ea08
int16_t* const r13 = &data_142d40450

if (sub_140a23cf0(arg3, &data_142d6bbe8, 1, 0, 0xffffffff) == 0xffffffff)
    int16_t* rcx_4
    
    if (arg3[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *arg3
    
    int32_t rax_2 = sub_140a54570(rcx_4, &data_1437020ab)
    int16_t* var_68 = nullptr
    
    if (rax_2 != 0)
        int32_t rax_3 = arg3[1].d
        int16_t* const rcx_10
        int64_t r14_3
        int64_t var_60_2
        int32_t rsi_2
        int32_t rdi_2
        int16_t* r14_2
        
        if (rax_3 == 0)
            r14_2 = &data_142d40450
            var_60_2 = 0
            rdi_2 = 0
            rsi_2 = 0
            
            if (*r14_2 == 0 || rdi_2 s<= 0)
                r14_3 = 0
                rcx_10 = &data_142d40450
            else
            label_1406339f1:
                sub_1405947f0(&var_68, rdi_2 + 1)
                int32_t rsi_5 = rsi_2 + 1 + var_60_2.d
                var_60_2.d = rsi_5
                
                if (rsi_5 s> var_60_2:4.d)
                    sub_140594770(&var_68)
                    rsi_5 = var_60_2.d
                
                int16_t* r15_2 = var_68
                UnDecorator::getReferenceType(r15_2, r14_2, rdi_2 * 2)
                r14_3 = 0
                r15_2[sx.q(rsi_5) - 1] = 0
                
                rcx_10 = rsi_5 == 0 ? &data_142d40450 : r15_2
        else
            r14_2 = *arg3
            rdi_2 = rax_3 - 1
            
            if (rax_3 == 0)
                rdi_2 = 0
            
            if (rdi_2 s> 1)
                rdi_2 = 1
            
            var_60_2 = 0
            rsi_2 = rdi_2
            
            if (r14_2 != 0 && *r14_2 != 0 && rdi_2 s> 0)
                goto label_1406339f1
            
            r14_3 = 0
            rcx_10 = &data_142d40450
        int32_t rax_4 = sub_140a54570(rcx_10, U".")
        int64_t var_58 = 0
        int64_t* rcx_11 = &var_58
        int64_t var_50_1 = 0
        int64_t var_48
        int64_t rsi_6
        int32_t rdi_5
        int64_t r12_1
        int64_t r13_1
        int64_t* r15_3
        
        if (rax_4 != 0)
            sub_1405947f0(rcx_11, 3)
            int32_t r15_4 = var_50_1:4.d
            int32_t rsi_7 = var_50_1.d + 3
            var_50_1.d = rsi_7
            
            if (rsi_7 s> r15_4)
                sub_140594770(&var_58)
                r15_4 = var_50_1:4.d
                rsi_7 = var_50_1.d
            
            r12_1 = var_58
            sub_1405a7220(r12_1, 3, "*.", 3, 0x3f)
            int32_t rdi_6 = arg3[1].d
            
            if (rsi_7 s> 1)
                int32_t r14_6 = rdi_6 - 1
                
                if (rdi_6 == 0)
                    r14_6 = 0
                
                int32_t rax_8
                
                if (rsi_7 == 0)
                    rax_8 = 1
                
                if (rsi_7 != 0 || r14_6 == 0)
                    rax_8 = 0
                
                var_58 = r12_1
                int32_t rdx_16 = r14_6 + rax_8 + rsi_7
                var_50_1.d = rsi_7
                var_50_1:4.d = r15_4
                r12_1 = 0
                
                if (rdx_16 s> r15_4)
                    sub_1405947f0(&var_58, rdx_16)
                
                sub_140a20ba0(&var_58, *arg3, r14_6)
                rsi_6 = var_58
                int32_t var_40_3 = var_50_1.d
                int32_t var_3c_3 = var_50_1:4.d
                var_48 = rsi_6
            else
                var_48 = 0
                rsi_6 = 0
                int64_t r14_5 = *arg3
                int32_t var_40_2 = rdi_6
                
                if (rdi_6 != 0)
                    sub_1405a4c70(&var_48, rdi_6, 0)
                    rsi_6 = var_48
                    memcpy(rsi_6, r14_5, rdi_6 * 2)
                else
                    int32_t var_3c_2 = 0
            
            r13_1 = var_58
            r15_3 = &var_48
            r14_3 = var_58
            rdi_5 = 0xc
        else
            sub_1405947f0(rcx_11, rax_4 + 2)
            int32_t r15_1 = var_50_1:4.d
            int32_t rdi_3 = var_50_1.d + 2
            var_50_1.d = rdi_3
            
            if (rdi_3 s> r15_1)
                sub_140594770(&var_58)
                r15_1 = var_50_1:4.d
                rdi_3 = var_50_1.d
            
            r13_1 = var_58
            sub_1405a7220(r13_1, 2, U"*", 2, 0x3f)
            int32_t rsi_3 = arg3[1].d
            
            if (rdi_3 s> 1)
                int32_t r14_4 = rsi_3 - 1
                
                if (rsi_3 == 0)
                    r14_4 = 0
                
                if (rdi_3 != 0 || r14_4 == 0)
                    r12 = 0
                
                var_48 = r13_1
                int32_t rdx_10 = r14_4 + r12 + rdi_3
                r13_1 = 0
                
                if (rdx_10 s> r15_1)
                    sub_1405947f0(&var_48, rdx_10)
                
                sub_140a20ba0(&var_48, *arg3, r14_4)
                r14_3 = var_48
                var_50_1.d = rdi_3
                var_50_1:4.d = r15_1
                var_58 = r14_3
            else
                int64_t rdi_4 = *arg3
                var_58 = 0
                var_50_1.d = rsi_3
                
                if (rsi_3 != 0)
                    sub_1405a4c70(&var_58, rsi_3, 0)
                    r14_3 = var_58
                    memcpy(r14_3, rdi_4, rsi_3 * 2)
                else
                    var_50_1:4.d = 0
            
            r12_1 = var_58
            r15_3 = &var_58
            rsi_6 = var_48
            rdi_5 = 3
        
        if (arg3 != r15_3)
            int64_t rcx_27 = *arg3
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            int64_t rax_11 = *r15_3
            *r15_3 = 0
            *arg3 = rax_11
            arg3[1].d = r15_3[1].d
            int32_t rax_13 = *(r15_3 + 0xc)
            r15_3[1] = 0
            r14_3 = var_58
            rsi_6 = var_48
            *(arg3 + 0xc) = rax_13
        
        if ((rdi_5.b & 8) != 0)
            rdi_5 &= 0xfffffff7
            
            if (rsi_6 != 0)
                sub_140a74f90(rsi_6)
        
        if ((rdi_5.b & 4) != 0)
            rdi_5 &= 0xfffffffb
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
        
        if ((rdi_5.b & 2) != 0)
            rdi_5 &= 0xfffffffd
            
            if (r14_3 != 0)
                sub_140a74f90(r14_3)
        
        if ((rdi_5.b & 1) != 0 && r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int16_t* rcx_32 = var_68
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        r13 = &data_142d40450
    else
        int64_t var_60_1 = 0
        sub_1405947f0(&var_68, rax_2 + 4)
        int32_t r14_1 = var_60_1:4.d
        int32_t rsi_1 = var_60_1.d + 4
        var_60_1.d = rsi_1
        
        if (rsi_1 s> r14_1)
            sub_140594770(&var_68)
            r14_1 = var_60_1:4.d
            rsi_1 = var_60_1.d
        
        int16_t* rdi_1 = var_68
        sub_1405a7220(rdi_1, 4, "*.*", 4, 0x3f)
        
        if (arg3 != &var_68)
            int64_t rcx_8 = *arg3
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *arg3 = rdi_1
            arg3[1].d = rsi_1
            *(arg3 + 0xc) = r14_1
        else if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
    
    rdi = arg2
    r14 = arg1

int16_t* const r9_1

if (arg3[1].d == 0)
    r9_1 = &data_142d40450
else
    r9_1 = *arg3

if (rdi[1].d != 0)
    r13 = *rdi

(*(data_14399ea08 + 0x80))(&data_14399ea08, r14, r13, r9_1, 1, 0, 1)
int64_t rcx_33 = *rdi

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = *arg3

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rax_15
rax_15.b = 1
return rax_15
