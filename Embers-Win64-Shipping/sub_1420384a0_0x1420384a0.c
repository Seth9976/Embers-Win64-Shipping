// 函数: sub_1420384a0
// 地址: 0x1420384a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = data_143de5434
uint64_t r13
r13.b = 0

if (r8 != 0 || data_143f5b2a0 != r8.b || data_143de5438 != r8.b)
    int64_t* rsi_1 = *(arg1 + 0xa8)
    uint64_t i_1 = 0
    int64_t r14
    r14.b = 0
    int64_t r15_1 = 0
    uint64_t var_58 = 0
    int32_t var_50_1 = 0
    
    if (rsi_1 != 0)
        int32_t rax_1 = rsi_1[1].d
        
        if (rax_1 == 0)
            rsi_1 = nullptr
        else
            rsi_1[1].d = rax_1 + 1
            r15_1 = *(arg1 + 0xa0)
            r8 = data_143de5434
    
    if (r8 == 0 && data_143f5b2a1 != 0)
        r14 = 0
        
        if (r15_1 != 0)
            r14 = 1
    
    int32_t arg_18
    int32_t i_4 = *((*(*arg2 + 0x18))(arg2, &arg_18, r8) + 4)
    int32_t i_6
    int32_t var_78 = *(*(*arg2 + 0x18))(arg2, &i_6)
    int32_t i_3 = i_4
    int32_t var_70_1 = 0
    int128_t var_48
    bool r14_1
    
    if (r14.b == 0 || data_143e29f28 == 0)
        var_48 = zx.o(0)
        int128_t entry_zmm3
        r14_1 = sub_1423de330(arg2, &var_58, &var_48, entry_zmm3)
    else
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        var_48.q = r15_1
        var_48:8.q = rsi_1
        
        if (rsi_1 != 0)
            int32_t rax_7 = rsi_1[1].d
            rsi_1[1].d = rax_7
            
            if (rax_7 == 0)
                (**rsi_1)(rsi_1)
                int32_t temp3_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        r14_1 = sub_140e8c070(data_143e29f28, &var_48, &var_58, &var_78)
        int64_t* rbx_1 = var_48:8.q
        data_143de543c = var_78
        data_143de5440 = i_3
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t rdx_3 = *rbx_1
                (*rdx_3)(rbx_1, rdx_3)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r14_1 != 0)
        int64_t* rax_13 = data_143a2e078
        int64_t rdx_5 = sx.q(data_143a2e080)
        void* rcx_13 = &rax_13[rdx_5 * 2]
        
        if (rax_13 == rcx_13)
        label_142038685:
            int32_t rbx_2 = (data_143f5b340).d
            int64_t r14_2 = data_143f5b338
            uint64_t var_68 = 0
            int32_t var_60_1 = rbx_2
            int32_t var_5c
            
            if (rbx_2 != 0)
                sub_1405a4c70(&var_68, rbx_2, 0)
                memcpy(var_68, r14_2, rbx_2 * 2)
                rbx_2 = var_60_1
            else
                var_5c = 0
            
            int64_t var_88
            int64_t var_80
            
            if (data_143de5434 != 0 && rbx_2 s<= 1)
                var_88 = 0
                var_80 = 0
                sub_1423ee750(&var_88, 0, 1)
                int64_t rcx_26 = var_88
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                int32_t rbx_5 = (data_143f5b340).d
                int64_t r14_6 = data_143f5b338
                var_60_1 = rbx_5
                
                if (rbx_5 != 0 || var_5c != 0)
                    sub_1405a4c70(&var_68, rbx_5, var_5c)
                    memcpy(var_68, r14_6, rbx_5 * 2)
                else
                    int32_t var_5c_1 = 0
            
            sub_142090dd0()
            sub_142099dc0(&data_143a2e330, &var_58)
            int32_t rdx_13 = 0
            int32_t r13_1 = data_143de543c
            int32_t rax_28 = 0
            int32_t rbx_6 = data_143de5440
            
            if (data_143de5438 != 0)
                sub_142090dd0()
                r13_1 = data_143a2e348
                rbx_6 = data_143a2e34c
                rdx_13 = data_143a2e340
                rax_28 = data_143a2e344
            
            int32_t r13_3 = r13_1 - rdx_13
            int32_t i_2 = rbx_6 - rax_28
            arg_18 = r13_3
            
            if (r13_3 != 0 || i_2 != 0)
                int64_t r8_11 = sx.q(var_78)
                int32_t i_5 = i_3
                i_6 = i_5
                
                if (i_2 s> 0)
                    uint64_t r14_7 = var_58
                    var_88 = r8_11 << 2
                    int64_t r13_2 = var_88
                    int64_t r12_3 = sx.q(r13_3) << 2
                    i_1 = zx.q(i_2)
                    int64_t r15_2 = r14_7 + ((sx.q(rax_28 * r8_11.d) + sx.q(rdx_13)) << 2)
                    uint64_t i
                    
                    do
                        memmove(r14_7, r15_2, r12_3.d)
                        r15_2 += r13_2
                        r14_7 += r12_3
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    r13_3 = arg_18
                    i_5 = i_6
                    r8_11 = zx.q(r8_11.d)
                
                int32_t r10_1 = i_5 * r8_11.d
                int32_t r9_5 = i_2 * r13_3
                int32_t r14_9 = r10_1 - r9_5
                
                if (r10_1 != r9_5)
                    int32_t rax_31 = var_50_1
                    int32_t rcx_35 = rax_31 - r9_5
                    
                    if (rcx_35 != r14_9)
                        uint64_t rcx_37 = var_58
                        memmove(rcx_37 + (sx.q(r9_5) << 2), rcx_37 + (sx.q(r10_1) << 2), 
                            (rcx_35 - r14_9) << 2)
                        rax_31 = var_50_1
                    
                    var_50_1 = rax_31 - r14_9
                
                var_78 = r13_3
                i_3 = i_2
                int32_t var_70_2 = i_1.d
            
            int64_t* rax_35 = sub_140b19c30(&var_88, &var_68, 0)
            int64_t rcx_40 = var_88
            int32_t rbx_7 = rax_35[1].d
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            if (rbx_7 s> 1)
                int64_t* rax_36 = sub_140b18720(&var_88, &var_68, 0)
                
                if (&var_68 != rax_36)
                    uint64_t rcx_42 = var_68
                    
                    if (rcx_42 != 0)
                        sub_140a74f90(rcx_42)
                    
                    var_68 = *rax_36
                    *rax_36 = i_1
                    var_60_1 = rax_36[1].d
                    int32_t var_5c_2 = *(rax_36 + 0xc)
                    rax_36[1] = 0
                
                int64_t rcx_44 = var_88
                
                if (rcx_44 != 0)
                    sub_140a74f90(rcx_44)
                
                sub_140a20ba0(&var_68, u".png", 4)
            
            var_48.q = i_1
            var_48:8.q = 0
            sub_142083b00(var_78, i_3, &var_58, &var_48)
            uint64_t rbx_9 = &data_142d40450
            var_88 = var_48.q
            
            if (var_60_1 != 0)
                rbx_9 = var_68
            
            var_80.d = var_48:8.d
            var_88.o = var_88.o
            sub_140a464c0()
            char rax_41 = sub_140b27070(&var_88, rbx_9, &data_14399ea08, 0)
            int64_t rcx_48 = var_48.q
            r13 = zx.q(rax_41)
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            uint64_t rcx_49 = var_68
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
        else
            while (rax_13[1].d == 0 || *rax_13 == 0)
                rax_13 = &rax_13[2]
                
                if (rax_13 == rcx_13)
                    goto label_142038685
            
            if (*data_143f40688 == 0)
                goto label_142038685
            
            uint64_t rcx_14 = var_58
            int64_t r8_4 = rcx_14 + (sx.q(var_50_1) << 2)
            
            if (rcx_14 != r8_4)
                do
                    *(rcx_14 + 3) = 0xff
                    rcx_14 += 4
                while (rcx_14 != r8_4)
                
                rdx_5 = zx.q(data_143a2e080)
            
            int32_t rax_16 = (rdx_5 - 1).d
            int32_t rcx_16 = data_143a2e08c + 1
            r13 = zx.q(var_78)
            r15_1.b = 0
            data_143a2e08c = rcx_16
            int64_t rbx_3 = sx.q(rax_16)
            
            if (rax_16 s>= 0)
                int64_t r14_4 = rbx_3 << 4
                int64_t temp8_1
                
                do
                    int64_t rax_17 = data_143a2e078
                    
                    if (*(r14_4 + rax_17 + 8) == 0)
                        r15_1.b = 1
                    else
                        int64_t* rcx_17 = *(r14_4 + rax_17)
                        
                        if (rcx_17 == 0)
                            r15_1.b = 1
                        else if ((*(*rcx_17 + 0x50))(rcx_17, zx.q(r13.d), zx.q(i_3), &var_58) == 0)
                            r15_1.b = 1
                    
                    r14_4 -= 0x10
                    temp8_1 = rbx_3
                    rbx_3 -= 1
                while (temp8_1 - 1 s>= 0)
                rcx_16 = data_143a2e08c
                rdx_5 = zx.q(data_143a2e080)
            
            data_143a2e08c = rcx_16 - 1
            
            if (r15_1.b != 0 && rcx_16 - 1 s<= 0)
                int32_t r14_5 = rdx_5.d
                
                if (rdx_5.d s> 0)
                    int64_t* rbx_4 = nullptr
                    
                    do
                        int64_t rax_20 = data_143a2e078
                        
                        if (*(rbx_4 + rax_20 + 8) == 0)
                            sub_1405a4880(&data_143a2e078, i_1.d, 1, 1)
                        else
                            int64_t* rcx_19 = *(rbx_4 + rax_20)
                            
                            if (rcx_19 == 0)
                                sub_1405a4880(&data_143a2e078, i_1.d, 1, 1)
                            else if ((*(*rcx_19 + 0x20))(rcx_19) != 0)
                                sub_1405a4880(&data_143a2e078, i_1.d, 1, 1)
                            else
                                i_1 = zx.q(i_1.d + 1)
                                rbx_4 = &rbx_4[2]
                        
                        rdx_5 = zx.q(data_143a2e080)
                    while (i_1.d s< rdx_5.d)
                
                int32_t rax_23 = (rdx_5 * 2).d
                
                if (rax_23 s<= 2)
                    rax_23 = 2
                
                data_143a2e088 = rax_23
                
                if (r14_5 s> rax_23 && data_143a2e084 != rdx_5.d)
                    sub_1405a5410(&data_143a2e078, rdx_5.d)
            
            r13.b = 0
    
    sub_1423ee9d0()
    sub_140599090(&data_143a302b8)
    data_14399fa08 = data_143de5433
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp1_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    uint64_t rcx_22 = var_58
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

return zx.q(r13.b)
