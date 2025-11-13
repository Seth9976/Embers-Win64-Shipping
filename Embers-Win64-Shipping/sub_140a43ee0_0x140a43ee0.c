// 函数: sub_140a43ee0
// 地址: 0x140a43ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

uint64_t rbx_1 = 0
int32_t arg_18 = 0
int64_t var_78 = 0
int32_t r8 = 0
int64_t var_70_1 = 0

if (*arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rdi_1.d + 1)
        r8 = var_70_1:4.d
    
    int32_t rax_1 = rdi_1.d + 1 + var_70_1.d
    var_70_1.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_78)
    
    memcpy(var_78, arg3, (rdi_1.d + 1) * 2)

int32_t r13_1 = 1
int16_t* rsi_2 = nullptr
int16_t* var_68
int32_t var_5c
uint64_t var_48
int64_t* rcx_7
int32_t rdi_5

if (arg4 == 0)
    int32_t var_40 = 0
    rcx_7 = &var_48
    rdi_5 = 2
else
    int32_t rdx_3 = 0
    var_68 = nullptr
    int32_t rcx_3 = 0
    int32_t var_60_1 = 0
    
    if (*arg4 != 0)
        int64_t rdi_3 = -1
        
        do
            rdi_3 += 1
        while (arg4[rdi_3] != 0)
        
        if (rdi_3.d + 1 s> 0)
            sub_1405947f0(&var_68, rdi_3.d + 1)
            rcx_3 = var_5c
            rdx_3 = var_60_1
            rsi_2 = var_68
        
        int32_t rax_2 = rdx_3 + rdi_3.d + 1
        var_60_1 = rax_2
        
        if (rax_2 s> rcx_3)
            sub_140594770(&var_68)
            rsi_2 = var_68
        
        memcpy(rsi_2, arg4, (rdi_3.d + 1) * 2)
    
    rcx_7 = &var_68
    rdi_5 = 1

*rcx_7 = 0
int32_t var_80_1 = rcx_7[1].d
int32_t var_7c_1 = *(rcx_7 + 0xc)
rcx_7[1] = 0
int16_t* var_88 = rsi_2

if ((rdi_5.b & 2) != 0)
    uint64_t rcx_8 = var_48
    rdi_5 &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((1 & rdi_5.b) != 0)
    int16_t* rcx_9 = var_68
    rdi_5 &= 0xfffffffe
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int32_t rax = var_70_1.d

if (rax != 0 && rax - 1 s>= 1)
    sub_140b214e0(&var_78)
    int16_t* var_58
    
    if (sub_140a23cf0(&var_88, &data_142d6bbe8, 1, 0, 0xffffffff) == 0xffffffff)
        char* const r11_1 = &data_1437020ab
        int16_t* r15_1 = var_88
        int16_t* const r9 = &data_142d40450
        
        if (var_80_1 != 0)
            r9 = r15_1
        
        while (true)
            uint32_t r8_5 = zx.d(*r9)
            r9 = &r9[1]
            int32_t r10_1 = sx.d(*r11_1)
            r11_1 = &r11_1[1]
            
            if (r8_5 != r10_1)
                uint32_t rdx_8
                
                if (((r8_5 | r10_1) & 0xffffff80) != 0)
                    rdx_8 = r8_5 - zx.d(r10_1.b)
                else
                    uint32_t rcx_13 = zx.d(*(zx.q(r10_1.b) + &data_142e5e8a0))
                    uint32_t rdx_7 = zx.d(*(zx.q(r8_5.w) + &data_142e5e8a0))
                    rdx_8 = rdx_7 - rcx_13
                    
                    if (rdx_7 == rcx_13)
                        continue
                
                if (rdx_8 != 0)
                    int32_t rsi_5
                    
                    if (var_80_1 == 0)
                        r15_1 = &data_142d40450
                        rsi_5 = 0
                    else
                        rsi_5 = var_80_1 - 1
                    
                    var_68 = nullptr
                    int32_t rdx_10 = 0
                    int32_t var_60_3 = 0
                    
                    if (rsi_5 s> 1)
                        rsi_5 = 1
                    
                    int32_t rax_11 = 0
                    int16_t* r13_2 = nullptr
                    int16_t* r9_1
                    int32_t r14_4
                    
                    if (r15_1 != 0 && *r15_1 != 0 && rsi_5 s> 0)
                        if (rsi_5 + 1 s> 0)
                            sub_1405947f0(&var_68, rsi_5 + 1)
                            rax_11 = var_5c
                            rdx_10 = var_60_3
                            r13_2 = var_68
                        
                        r14_4 = rsi_5 + 1 + rdx_10
                        
                        if (r14_4 s> rax_11)
                            sub_140594770(&var_68)
                            r13_2 = var_68
                        
                        memcpy(r13_2, r15_1, rsi_5 * 2)
                        r9_1 = r13_2
                        r13_2[sx.q(r14_4) - 1] = 0
                    
                    if (r15_1 == 0 || *r15_1 == 0 || rsi_5 s<= 0 || r14_4 == 0)
                        r9_1 = &data_142d40450
                    
                    void* const r11_2 = &data_142d6bbd4
                    int32_t rax_18
                    int16_t** rsi_8
                    int16_t* r12_1
                    int16_t* r15_3
                    
                    while (true)
                        uint32_t r8_8 = zx.d(*r9_1)
                        r9_1 = &r9_1[1]
                        int32_t r10_2 = sx.d(*r11_2)
                        r11_2 += 1
                        
                        if (r8_8 != r10_2)
                            uint32_t rdx_15
                            
                            if (((r8_8 | r10_2) & 0xffffff80) != 0)
                                rdx_15 = r8_8 - zx.d(r10_2.b)
                            else
                                uint32_t rcx_23 = zx.d(*(zx.q(r10_2.b) + &data_142e5e8a0))
                                uint32_t rdx_14 = zx.d(*(zx.q(r8_8.w) + &data_142e5e8a0))
                                rdx_15 = rdx_14 - rcx_23
                                
                                if (rdx_14 == rcx_23)
                                    continue
                            
                            if (rdx_15 != 0)
                                var_68 = nullptr
                                int32_t var_60_5 = 0
                                sub_1405947f0(&var_68, 3)
                                int32_t r12_2 = var_5c
                                int32_t rsi_9 = var_60_5 + 3
                                
                                if (rsi_9 s> r12_2)
                                    sub_140594770(&var_68)
                                    r12_2 = var_5c
                                
                                r15_3 = var_68
                                sub_1405a7220(r15_3, 3, "*.", 3, 0x3f)
                                
                                if (rsi_9 s> 1)
                                    int32_t r14_10
                                    
                                    if (var_80_1 == 0)
                                        r14_10 = 0
                                    else
                                        r14_10 = var_80_1 - 1
                                    
                                    int32_t rax_23
                                    
                                    if (rsi_9 == 0)
                                        rax_23 = rsi_9 + 1
                                    
                                    if (rsi_9 != 0 || r14_10 == 0)
                                        rax_23 = 0
                                    
                                    var_58 = r15_3
                                    int32_t rdx_26 = rsi_9 + r14_10 + rax_23
                                    r15_3 = nullptr
                                    
                                    if (rdx_26 s> r12_2)
                                        sub_1405947f0(&var_58, rdx_26)
                                    
                                    sub_140a20ba0(&var_58, var_88, r14_10)
                                    var_68 = var_58
                                    var_60_5 = rsi_9
                                    var_5c = r12_2
                                else
                                    int16_t* r14_8 = var_88
                                    var_68 = nullptr
                                    var_60_5 = var_80_1
                                    
                                    if (var_80_1 != 0)
                                        sub_1405a4c70(&var_68, var_80_1, 0)
                                        memcpy(var_68, r14_8, var_80_1 * 2)
                                    else
                                        var_5c = 0
                                
                                r12_1 = var_68
                                rsi_8 = &var_68
                                rax_18 = 0x30
                                break
                        else if (r8_8.w != 0)
                            continue
                        
                        var_68 = nullptr
                        int32_t var_60_4 = 0
                        sub_1405947f0(&var_68, 2)
                        int32_t r15_2 = var_5c
                        int32_t rsi_6 = var_60_4 + 2
                        
                        if (rsi_6 s> r15_2)
                            sub_140594770(&var_68)
                            r15_2 = var_5c
                        
                        r12_1 = var_68
                        sub_1405a7220(r12_1, 2, U"*", 2, 0x3f)
                        
                        if (rsi_6 s> 1)
                            int32_t r14_7
                            
                            if (var_80_1 == 0)
                                r14_7 = 0
                            else
                                r14_7 = var_80_1 - 1
                            
                            int32_t rax_19
                            
                            if (rsi_6 == 0)
                                rax_19 = rsi_6 + 1
                            
                            if (rsi_6 != 0 || r14_7 == 0)
                                rax_19 = 0
                            
                            var_68 = r12_1
                            int32_t rdx_20 = rax_19 + rsi_6 + r14_7
                            var_5c = r15_2
                            r12_1 = nullptr
                            
                            if (rdx_20 s> r15_2)
                                sub_1405947f0(&var_68, rdx_20)
                            
                            sub_140a20ba0(&var_68, var_88, r14_7)
                            rsi_8 = &var_58
                            r15_3 = var_68
                            var_58 = var_68
                            int32_t var_50_2 = rsi_6
                            int32_t var_4c_2 = var_5c
                            rax_18 = 0xc
                        else
                            int16_t* r14_5 = var_88
                            var_58 = nullptr
                            int32_t var_50_1 = var_80_1
                            
                            if (var_80_1 != 0)
                                sub_1405a4c70(&var_58, var_80_1, 0)
                                memcpy(var_58, r14_5, var_80_1 * 2)
                                r15_3 = var_68
                                rsi_8 = &var_58
                                rax_18 = 0xc
                            else
                                r15_3 = var_68
                                rsi_8 = &var_58
                                int32_t var_4c_1 = 0
                                rax_18 = 0xc
                        
                        break
                    
                    int16_t* rcx_38 = var_88
                    int32_t rdi_7 = rdi_5 | rax_18
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                    
                    int16_t* rax_27 = *rsi_8
                    *rsi_8 = nullptr
                    var_88 = rax_27
                    var_80_1 = rsi_8[1].d
                    int32_t var_7c_3 = *(rsi_8 + 0xc)
                    rsi_8[1] = 0
                    
                    if ((rdi_7.b & 0x20) != 0)
                        int16_t* rcx_39 = var_68
                        rdi_7 = (rax_18 | rdi_5) & 0xffffffdf
                        
                        if (rcx_39 != 0)
                            sub_140a74f90(rcx_39)
                    
                    if ((rdi_7.b & 0x10) != 0)
                        rdi_7 &= 0xffffffef
                        
                        if (r15_3 != 0)
                            sub_140a74f90(r15_3)
                    
                    if ((rdi_7.b & 8) != 0)
                        int16_t* rcx_41 = var_58
                        rdi_7 &= 0xfffffff7
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                    
                    if ((rdi_7.b & 4) != 0 && r12_1 != 0)
                        sub_140a74f90(r12_1)
                    
                    if (r13_2 != 0)
                        sub_140a74f90(r13_2)
                    
                    r13_1 = 1
                    break
            else if (r8_5.w != 0)
                continue
            
            var_68 = nullptr
            int32_t var_60_2 = 0
            sub_1405947f0(&var_68, 4)
            int32_t rsi_4 = var_5c
            int32_t rdi_6 = var_60_2 + 4
            
            if (rdi_6 s> rsi_4)
                sub_140594770(&var_68)
                rsi_4 = var_5c
            
            int16_t* r14_2 = var_68
            sub_1405a7220(r14_2, 4, "*.*", 4, 0x3f)
            int16_t* rcx_17 = var_88
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            var_88 = r14_2
            var_80_1 = rdi_6
            int32_t var_7c_2 = rsi_4
            break
    
    var_68 = nullptr
    int32_t var_60_6 = 0
    sub_1405947f0(&var_68, 2)
    int32_t r14_13 = var_5c
    int32_t rdi_9 = var_60_6 + 2
    
    if (rdi_9 s> r14_13)
        sub_140594770(&var_68)
        r14_13 = var_5c
    
    int16_t* r15_4 = var_68
    sub_1405a7220(r15_4, 2, &data_142d63b88, 2, 0x3f)
    int32_t rsi_11 = var_70_1.d
    int16_t* r12_3
    
    if (rsi_11 s> 1)
        int32_t rdi_10
        
        if (rdi_9 == 0)
            rdi_10 = 0
        else
            rdi_10 = rdi_9 - 1
        
        int32_t rax_30
        
        if (rsi_11 == 0)
            rax_30 = 1
        
        if (rsi_11 != 0 || rdi_10 == 0)
            rax_30 = 0
        
        int64_t r14_14 = var_78
        int32_t rcx_47 = rdi_10 + rax_30
        var_68 = nullptr
        
        if (rsi_11 != 0 || rcx_47 != 0)
            sub_1405a4c70(&var_68, rcx_47 + rsi_11, 0)
            memcpy(var_68, r14_14, rsi_11 * 2)
        else
            var_5c = 0
        
        sub_140a20ba0(&var_68, r15_4, rdi_10)
        r12_3 = var_68
        rdi_9 = rsi_11
        r14_13 = var_5c
        var_68 = nullptr
        int64_t var_60_7 = 0
    else
        r12_3 = r15_4
        r15_4 = nullptr
    
    int32_t rdi_11
    
    if (rdi_9 s> 1)
        int32_t rsi_14
        
        if (var_80_1 == 0)
            rsi_14 = 0
        else
            rsi_14 = var_80_1 - 1
        
        if (rdi_9 != 0 || rsi_14 == 0)
            r13_1 = 0
        
        var_58 = r12_3
        int32_t rdx_35 = rsi_14 + r13_1 + rdi_9
        int32_t var_4c_4 = r14_13
        
        if (rdx_35 s> r14_13)
            sub_1405947f0(&var_58, rdx_35)
        
        sub_140a20ba0(&var_58, var_88, rsi_14)
        rdi_11 = rdi_9
        rbx_1 = var_58
    else
        rdi_11 = var_80_1
        int16_t* rsi_12 = var_88
        var_48 = 0
        
        if (rdi_11 != 0)
            sub_1405a4c70(&var_48, rdi_11, 0)
            rbx_1 = var_48
            memcpy(rbx_1, rsi_12, rdi_11 * 2)
        
        if (r12_3 != 0)
            sub_140a74f90(r12_3)
    
    if (r15_4 != 0)
        sub_140a74f90(r15_4)
    
    uint64_t r8_21 = &data_142d40450
    int64_t r9_2
    r9_2.b = 1
    
    if (rdi_11 != 0)
        r8_21 = rbx_1
    
    (*(*arg1 + 0x78))(arg1, arg2, r8_21, r9_2, 0)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

int16_t* rcx_59 = var_88

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

int64_t rcx_60 = var_78

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)
