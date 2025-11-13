// 函数: sub_140d05480
// 地址: 0x140d05480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_1
int64_t zmm1

if (arg2 == 0)
    int32_t var_88 = 0xffffffff
    rax_1 = &var_88
    int64_t var_84
    __builtin_memset(&var_84, 0, 0x18)
else
    int32_t var_38_1 = *(arg2 + 0x18)
    int128_t var_50
    rax_1 = &var_50
    zmm1 = arg2[1].q
    var_50 = *arg2
    int64_t var_40_1 = zmm1

int32_t r9 = *(rax_1 + 0x18)
int64_t var_b8 = rax_1[1].q
int128_t var_c8 = *rax_1
int128_t* rax_3

if (arg3 == 0)
    int32_t var_6c = 0xffffffff
    rax_3 = &var_6c
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x18)
else
    int32_t var_1c_1 = *(arg3 + 0x18)
    int128_t var_34
    rax_3 = &var_34
    zmm1 = arg3[1].q
    var_34 = *arg3
    int64_t var_24_1 = zmm1

int32_t r8 = *(rax_3 + 0x18)
zmm1 = rax_3[1].q
int128_t var_a8 = *rax_3
uint64_t rsi

if (((arg4 u>> 0x16).b & 1) != 0)
    rsi.b = 0
label_140d0559e:
    
    if (sub_140d3c6e0(&var_c8) != 0)
    label_140d0561e:
        
        if (sub_140d3c6e0(&var_a8) != 0)
        label_140d056a6:
            uint64_t rax_30 = sub_140d3c6e0(&var_c8)
            uint64_t rdx_8 = rax_30
            
            if (rax_30 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                if (rax_30.d == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_30 = zx.q(data_1439a9d84)
                
                if (rax_30.d != var_c8:8.d || var_c8.d != 0xffffffff)
                    void* rax_31 = sub_140ccdeb0(&var_c8:0xc)
                    sub_140d3a3a0(&var_c8, rax_31)
                    
                    if (rax_31 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_32 = 0
                        
                        if (0 == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_32 = data_1439a9d84
                        
                        var_c8:8.d = rax_32
                    
                    rdx_8 = sub_140d3c6e0(&var_c8)
            
            int64_t rdi_1 = *(rdx_8 + 0x10)
            uint64_t rax_34 = sub_140d3c6e0(&var_a8)
            uint64_t rdx_10 = rax_34
            
            if (rax_34 == 0 && (var_a8:0xc.d | zmm1.d | zmm1:4.d | r8) != 0)
                if (rax_34.d == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_34 = zx.q(data_1439a9d84)
                
                if (rax_34.d != var_a8:8.d || var_a8.d != 0xffffffff)
                    void* rax_35 = sub_140ccdeb0(&var_a8:0xc)
                    sub_140d3a3a0(&var_a8, rax_35)
                    
                    if (rax_35 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_36 = 0
                        
                        if (0 == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_36 = data_1439a9d84
                        
                        var_a8:8.d = rax_36
                    
                    rdx_10 = sub_140d3c6e0(&var_a8)
            
            if (rdi_1 == *(rdx_10 + 0x10))
                uint8_t rax_39 = (arg4 u>> 9).b & 1
                
                if (not(test_bit(arg4, 0xa)))
                label_140d058b9:
                    
                    if (rax_39 != 0)
                        goto label_140d058c5
                else
                    if (rax_39 == 0)
                        uint64_t rax_40 = sub_140d3c6e0(&var_c8)
                        uint64_t rdi_2 = rax_40
                        
                        if (rax_40 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                            if (rax_40.d == data_1439a9d84)
                                data_1439a9d84 = 0
                            else
                                rax_40 = zx.q(data_1439a9d84)
                            
                            if (rax_40.d != var_c8:8.d || var_c8.d != 0xffffffff)
                                void* rax_41 = sub_140ccdeb0(&var_c8:0xc)
                                sub_140d3a3a0(&var_c8, rax_41)
                                
                                if (rax_41 != 0 || data_143e1d7b4 == 0)
                                    int32_t rax_42 = 0
                                    
                                    if (0 == data_1439a9d84)
                                        data_1439a9d84 = 0
                                    else
                                        rax_42 = data_1439a9d84
                                    
                                    var_c8:8.d = rax_42
                                
                                rdi_2 = sub_140d3c6e0(&var_c8)
                        
                        uint64_t rax_44 = sub_140d3c6e0(&var_a8)
                        uint64_t r8_2 = rax_44
                        
                        if (rax_44 == 0 && (var_a8:0xc.d | zmm1.d | zmm1:4.d | r8) != 0)
                            if (rax_44.d == data_1439a9d84)
                                data_1439a9d84 = 0
                            else
                                rax_44 = zx.q(data_1439a9d84)
                            
                            if (rax_44.d != var_a8:8.d || var_a8.d != 0xffffffff)
                                void* rax_45 = sub_140ccdeb0(&var_a8:0xc)
                                sub_140d3a3a0(&var_a8, rax_45)
                                
                                if (rax_45 != 0 || data_143e1d7b4 == 0)
                                    int32_t rax_46 = 0
                                    
                                    if (0 == data_1439a9d84)
                                        data_1439a9d84 = 0
                                    else
                                        rax_46 = data_1439a9d84
                                    
                                    var_a8:8.d = rax_46
                                
                                r8_2 = sub_140d3c6e0(&var_a8)
                        
                        char rax_48 = sub_140d23dc0(r8_2, 0x30)
                        rax_39 = sub_140d23dc0(rdi_2, 0x30) != rax_48
                        goto label_140d058b9
                    
                label_140d058c5:
                    uint64_t rax_49 = sub_140d3c6e0(&var_a8)
                    uint64_t rbx_8 = rax_49
                    
                    if (rax_49 == 0 && (var_a8:0xc.d | zmm1.d | zmm1:4.d | r8) != 0)
                        if (rax_49.d == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_49 = zx.q(data_1439a9d84)
                        
                        if (rax_49.d != var_a8:8.d || var_a8.d != 0xffffffff)
                            void* rax_50 = sub_140ccdeb0(&var_a8:0xc)
                            sub_140d3a3a0(&var_a8, rax_50)
                            
                            if (rax_50 != 0 || data_143e1d7b4 == 0)
                                int32_t rax_51 = 0
                                
                                if (0 == data_1439a9d84)
                                    data_1439a9d84 = 0
                                else
                                    rax_51 = data_1439a9d84
                                
                                var_a8:8.d = rax_51
                            
                            rbx_8 = sub_140d3c6e0(&var_a8)
                    
                    int64_t rbx_10 = *(rbx_8 + 0x18)
                    uint64_t rax_53 = sub_140d3c6e0(&var_c8)
                    uint64_t rdx_15 = rax_53
                    
                    if (rax_53 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                        if (rax_53.d == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_53 = zx.q(data_1439a9d84)
                        
                        if (rax_53.d != var_c8:8.d || var_c8.d != 0xffffffff)
                            void* rax_54 = sub_140ccdeb0(&var_c8:0xc)
                            sub_140d3a3a0(&var_c8, rax_54)
                            
                            if (rax_54 != 0 || data_143e1d7b4 == 0)
                                int32_t rax_55 = 0
                                
                                if (0 == data_1439a9d84)
                                    data_1439a9d84 = 0
                                else
                                    rax_55 = data_1439a9d84
                                
                                var_c8:8.d = rax_55
                            
                            rdx_15 = sub_140d3c6e0(&var_c8)
                    
                    if (*(rdx_15 + 0x18) == rbx_10)
                        uint64_t rax_57 = sub_140d3c6e0(&var_c8)
                        uint64_t rbx_11 = rax_57
                        
                        if (rax_57 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                            if (rax_57.d == data_1439a9d84)
                                data_1439a9d84 = 0
                            else
                                rax_57 = zx.q(data_1439a9d84)
                            
                            if (rax_57.d != var_c8:8.d || var_c8.d != 0xffffffff)
                                void* rax_58 = sub_140ccdeb0(&var_c8:0xc)
                                sub_140d3a3a0(&var_c8, rax_58)
                                
                                if (rax_58 != 0 || data_143e1d7b4 == 0)
                                    int32_t rax_59 = 0
                                    
                                    if (0 == data_1439a9d84)
                                        data_1439a9d84 = 0
                                    else
                                        rax_59 = data_1439a9d84
                                    
                                    var_c8:8.d = rax_59
                                
                                rbx_11 = sub_140d3c6e0(&var_c8)
                        
                        uint64_t rbx_13 = *(rbx_11 + 0x18)
                        uint64_t rax_61 = sub_140d3c6e0(&var_c8)
                        uint64_t r8_3 = rax_61
                        
                        if (rax_61 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                            if (rax_61.d == data_1439a9d84)
                                data_1439a9d84 = 0
                            else
                                rax_61 = zx.q(data_1439a9d84)
                            
                            if (rax_61.d != var_c8:8.d || var_c8.d != 0xffffffff)
                                void* rax_62 = sub_140ccdeb0(&var_c8:0xc)
                                sub_140d3a3a0(&var_c8, rax_62)
                                
                                if (rax_62 != 0 || data_143e1d7b4 == 0)
                                    int32_t rax_63 = 0
                                    
                                    if (0 == data_1439a9d84)
                                        data_1439a9d84 = 0
                                    else
                                        rax_63 = data_1439a9d84
                                    
                                    var_c8:8.d = rax_63
                                
                                r8_3 = sub_140d3c6e0(&var_c8)
                        
                        if (sub_140bdd980(*(r8_3 + 0x10), rbx_13) != 0)
                            uint64_t rax_66 = sub_140d3c6e0(&var_a8)
                            uint64_t rdi_5 = rax_66
                            
                            if (rax_66 == 0 && (var_a8:0xc.d | zmm1.d | zmm1:4.d | r8) != 0)
                                if (rax_66.d == data_1439a9d84)
                                    data_1439a9d84 = 0
                                else
                                    rax_66 = zx.q(data_1439a9d84)
                                
                                if (rax_66.d != var_a8:8.d || var_a8.d != 0xffffffff)
                                    void* rax_67 = sub_140ccdeb0(&var_a8:0xc)
                                    sub_140d3a3a0(&var_a8, rax_67)
                                    
                                    if (rax_67 != 0 || data_143e1d7b4 == 0)
                                        int32_t rax_68 = 0
                                        
                                        if (0 == data_1439a9d84)
                                            data_1439a9d84 = 0
                                        else
                                            rax_68 = data_1439a9d84
                                        
                                        var_a8:8.d = rax_68
                                    
                                    rdi_5 = sub_140d3c6e0(&var_a8)
                            
                            int64_t* rax_70 = sub_140d3c6e0(&var_c8)
                            int64_t* r9_1 = rax_70
                            
                            if (rax_70 == 0 && (var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
                                if (rax_70.d == data_1439a9d84)
                                    data_1439a9d84 = 0
                                else
                                    rax_70 = zx.q(data_1439a9d84)
                                
                                if (rax_70.d != var_c8:8.d || var_c8.d != 0xffffffff)
                                    void* rax_71 = sub_140ccdeb0(&var_c8:0xc)
                                    sub_140d3a3a0(&var_c8, rax_71)
                                    
                                    if (rax_71 != 0 || data_143e1d7b4 == 0)
                                        int32_t rax_72 = 0
                                        
                                        if (0 == data_1439a9d84)
                                            data_1439a9d84 = 0
                                        else
                                            rax_72 = data_1439a9d84
                                        
                                        var_c8:8.d = rax_72
                                    
                                    r9_1 = sub_140d3c6e0(&var_c8)
                            
                            rsi = zx.q(sub_140cf1f00(r9_1, rdi_5, arg4))
        else if ((var_a8:0xc.d | zmm1.d | zmm1:4.d | r8) != 0)
            int32_t rax_26 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_26 = data_1439a9d84
            
            if (rax_26 != var_a8:8.d || var_a8.d != 0xffffffff)
                void* rax_27 = sub_140ccdeb0(&var_a8:0xc)
                sub_140d3a3a0(&var_a8, rax_27)
                
                if (rax_27 != 0 || data_143e1d7b4 == 0)
                    int32_t rax_28 = 0
                    
                    if (0 == data_1439a9d84)
                        data_1439a9d84 = 0
                    else
                        rax_28 = data_1439a9d84
                    
                    var_a8:8.d = rax_28
                
                if (sub_140d3c6e0(&var_a8) != 0)
                    goto label_140d056a6
    else if ((var_c8:0xc.d | var_b8.d | var_b8:4.d | r9) != 0)
        int32_t rax_17 = 0
        
        if (0 == data_1439a9d84)
            data_1439a9d84 = 0
        else
            rax_17 = data_1439a9d84
        
        if (rax_17 != var_c8:8.d || var_c8.d != 0xffffffff)
            void* rax_18 = sub_140ccdeb0(&var_c8:0xc)
            sub_140d3a3a0(&var_c8, rax_18)
            
            if (rax_18 != 0 || data_143e1d7b4 == 0)
                int32_t rax_19 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_19 = data_1439a9d84
                
                var_c8:8.d = rax_19
            
            if (sub_140d3c6e0(&var_c8) != 0)
                goto label_140d0561e
else
    int32_t rdx_5 = ((var_a8:8.q u>> 0x20).d ^ (var_c8:8.q u>> 0x20).d)
        | ((zmm1 u>> 0x20).d ^ (var_b8 u>> 0x20).d) | (zmm1.d ^ var_b8.d) | (r8 ^ r9)
    rsi.b = rdx_5 == 0
    
    if (rdx_5 != 0)
        goto label_140d0559e

return zx.q(rsi.b)
