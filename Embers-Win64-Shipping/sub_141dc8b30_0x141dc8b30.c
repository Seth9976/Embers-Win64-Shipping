// 函数: sub_141dc8b30
// 地址: 0x141dc8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int32_t var_d8 = var_d8 & 0xfffffffe
int32_t rsi = 0
int32_t var_90
int32_t var_90_1 = var_90 & 0xffffffe0
int64_t var_d0 = 0
int32_t var_c8 = 0
char* var_c0 = nullptr
int32_t* result = arg2
int32_t var_b8 = 0
char* var_b0
__builtin_memset(&var_b0, 0, 0x1c)
void* rax = sub_140d3c6e0(&arg_20)
void* var_f0 = rax
void* r14 = rax
int64_t var_a0

if (rax == 0)
    sub_141db7370(result, &var_d8)
else
    void* rax_1 = sub_142452380()
    void* rdx = *(r14 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        r14 = *(r14 + 0x20)
        var_f0 = r14
        
        if (r14 == 0)
            sub_141db7370(result, &var_d8)
        else
            void* rax_4 = sub_142452380()
            void* rdx_1 = *(r14 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
                    || r14 == 0)
                sub_141db7370(result, &var_d8)
            else
            label_141dc8c0f:
                sub_141db8300(&var_d8, arg1)
                int32_t rax_7 = var_b8
                char* rdi = var_c0
                int64_t* var_e8
                char* var_e0
                
                if (rax_7 s> 0)
                    do
                        if ((*rdi & 1) != 0)
                            sub_141dd7400(rdi, 
                                *sub_141dd0960(&var_e0, sub_140d3c6e0(rdi + 0xc), r14, arg3))
                            sub_141dd7530(rdi, 
                                *sub_141dd0960(&var_e8, sub_140d3c6e0(rdi + 0x14), r14, arg3))
                            rax_7 = var_b8
                        
                        rsi += 1
                        rdi = &rdi[0x50]
                    while (rsi s< rax_7)
                
                char* r14_1 = var_b0
                int32_t i = 0
                int32_t i_3 = 0
                int64_t var_a8
                void* var_88
                int64_t var_80
                int64_t* var_70
                
                if (var_a8.d s> 0)
                    do
                        if ((*r14_1 & 1) != 0)
                            int32_t j = 0
                            
                            if (*(r14_1 + 0x10) s> 0)
                                void* r12_1 = nullptr
                                
                                do
                                    int64_t r13_1 = *(r14_1 + 8)
                                    int64_t* rax_12 = sub_140d3c6e0(r12_1 + 0x28 + r13_1)
                                    int64_t* rbx_1 = rax_12
                                    int64_t* var_78_1
                                    
                                    if (rax_12 != 0)
                                    label_141dc8d23:
                                        
                                        if (rbx_1 == 0)
                                            var_78_1 = rbx_1
                                        else
                                            void* rax_17 = sub_1425492f0()
                                            
                                            if (rax_17 == 0)
                                                var_78_1 = rbx_1
                                            else
                                                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                                                
                                                if (rax_18.d s> rbx_1[7].d
                                                        || *(rbx_1[6] + (rax_18 << 3))
                                                        != rax_17 + 0x30)
                                                    var_78_1 = rbx_1
                                                else
                                                    void* rax_20 = sub_1425492f0()
                                                    int64_t rax_21
                                                    
                                                    if (rax_20 != 0)
                                                        rax_21 = sx.q(*(rax_20 + 0x38))
                                                    
                                                    int64_t* rsi_1
                                                    
                                                    if (rax_20 == 0 || rax_21.d s> rbx_1[7].d
                                                            || *(rbx_1[6] + (rax_21 << 3))
                                                            != rax_20 + 0x30)
                                                        rsi_1 = nullptr
                                                    else
                                                        rsi_1 = rbx_1
                                                    
                                                    int64_t* rdi_1 = rsi_1[0x23]
                                                    
                                                    if (rdi_1 != 0)
                                                    label_141dc8db1:
                                                        
                                                        if ((*(*rdi_1 + 0x268))(rdi_1) == 0)
                                                            var_78_1 = rbx_1
                                                        else
                                                            rbx_1 = *(*(*rdi_1 + 0x270))(rdi_1, 
                                                                &var_e8, var_f0, arg3, i_3, var_f0)
                                                    else
                                                        (*(*rsi_1 + 0x390))(rsi_1)
                                                        rdi_1 = rsi_1[0x23]
                                                        
                                                        if (rdi_1 != 0)
                                                            goto label_141dc8db1
                                                        
                                                        var_78_1 = rbx_1
                                    else
                                        int64_t* rax_13 = sub_141debaa0(&var_e0)
                                        
                                        if (*rax_13 == 0)
                                            rbx_1 = nullptr
                                            var_78_1 = rbx_1
                                        else
                                            void* rax_14 = sub_1425492f0()
                                            
                                            if (rax_14 == 0)
                                                rbx_1 = nullptr
                                                var_78_1 = rbx_1
                                            else
                                                rbx_1 = *rax_13
                                                int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                                                
                                                if (rax_15.d s<= rbx_1[7].d
                                                        && *(rbx_1[6] + (rax_15 << 3))
                                                        == rax_14 + 0x30)
                                                    goto label_141dc8d23
                                                
                                                rbx_1 = nullptr
                                                var_78_1 = rbx_1
                                    
                                    if (rbx_1 != 0)
                                        void* rax_28 = sub_1425492f0()
                                        
                                        if (rax_28 != 0)
                                            int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                                            
                                            if (rax_29.d s<= rbx_1[7].d
                                                    && *(rbx_1[6] + (rax_29 << 3))
                                                    == rax_28 + 0x30)
                                                sub_140d3a3a0(r12_1 + 0x28 + r13_1, rbx_1)
                                                *(r13_1 + r12_1 + 0x20) = rbx_1
                                    
                                    j += 1
                                    r12_1 += 0x48
                                while (j s< *(r14_1 + 0x10))
                                
                                i = i_3
                            
                            int32_t j_1 = 0
                            
                            if (*(r14_1 + 0x20) s> 0)
                                void* r12_2 = nullptr
                                
                                do
                                    int64_t r13_2 = *(r14_1 + 0x18)
                                    int64_t* rax_31 = sub_140d3c6e0(r12_2 + 0x28 + r13_2)
                                    int64_t* rbx_3 = rax_31
                                    
                                    if (rax_31 != 0)
                                    label_141dc8ea5:
                                        
                                        if (rbx_3 == 0)
                                            var_70 = rbx_3
                                        else
                                            void* rax_36 = sub_1425492f0()
                                            
                                            if (rax_36 == 0)
                                                var_70 = rbx_3
                                            else
                                                int64_t rax_37 = sx.q(*(rax_36 + 0x38))
                                                
                                                if (rax_37.d s> rbx_3[7].d
                                                        || *(rbx_3[6] + (rax_37 << 3))
                                                        != rax_36 + 0x30)
                                                    var_70 = rbx_3
                                                else
                                                    void* rax_39 = sub_1425492f0()
                                                    int64_t rax_40
                                                    
                                                    if (rax_39 != 0)
                                                        rax_40 = sx.q(*(rax_39 + 0x38))
                                                    
                                                    int64_t* rsi_2
                                                    
                                                    if (rax_39 == 0 || rax_40.d s> rbx_3[7].d
                                                            || *(rbx_3[6] + (rax_40 << 3))
                                                            != rax_39 + 0x30)
                                                        rsi_2 = nullptr
                                                    else
                                                        rsi_2 = rbx_3
                                                    
                                                    int64_t* rdi_2 = rsi_2[0x23]
                                                    
                                                    if (rdi_2 != 0)
                                                    label_141dc8f33:
                                                        
                                                        if ((*(*rdi_2 + 0x268))(rdi_2) == 0)
                                                            var_70 = rbx_3
                                                        else
                                                            rbx_3 = *(*(*rdi_2 + 0x270))(rdi_2, 
                                                                &var_88, var_f0, arg3, i_3, var_f0)
                                                    else
                                                        (*(*rsi_2 + 0x390))(rsi_2)
                                                        rdi_2 = rsi_2[0x23]
                                                        
                                                        if (rdi_2 != 0)
                                                            goto label_141dc8f33
                                                        
                                                        var_70 = rbx_3
                                    else
                                        int64_t* rax_32 = sub_141debaa0(&var_80)
                                        
                                        if (*rax_32 == 0)
                                            rbx_3 = nullptr
                                            var_70 = rbx_3
                                        else
                                            void* rax_33 = sub_1425492f0()
                                            
                                            if (rax_33 == 0)
                                                rbx_3 = nullptr
                                                var_70 = rbx_3
                                            else
                                                rbx_3 = *rax_32
                                                int64_t rax_34 = sx.q(*(rax_33 + 0x38))
                                                
                                                if (rax_34.d s<= rbx_3[7].d
                                                        && *(rbx_3[6] + (rax_34 << 3))
                                                        == rax_33 + 0x30)
                                                    goto label_141dc8ea5
                                                
                                                rbx_3 = nullptr
                                                var_70 = rbx_3
                                    
                                    if (rbx_3 != 0)
                                        void* rax_47 = sub_1425492f0()
                                        
                                        if (rax_47 != 0)
                                            int64_t rax_48 = sx.q(*(rax_47 + 0x38))
                                            
                                            if (rax_48.d s<= rbx_3[7].d
                                                    && *(rbx_3[6] + (rax_48 << 3))
                                                    == rax_47 + 0x30)
                                                sub_140d3a3a0(r12_2 + 0x28 + r13_2, rbx_3)
                                                *(r13_2 + r12_2 + 0x20) = rbx_3
                                    
                                    j_1 += 1
                                    r12_2 += 0x60
                                while (j_1 s< *(r14_1 + 0x20))
                                
                                i = i_3
                        
                        i += 1
                        r14_1 = &r14_1[0x70]
                        i_3 = i
                    while (i s< var_a8.d)
                
                int32_t var_98
                int32_t rcx_32 = var_98
                int32_t rdx_20 = var_a8.d + rcx_32
                
                if (rdx_20 s> var_a8:4.d)
                    sub_1408e7380(&var_b0, rdx_20)
                    rcx_32 = var_98
                
                uint64_t r10_1 = zx.q(rcx_32 - 1)
                int32_t var_f8_1 = r10_1.d
                
                if (r10_1.d s>= 0)
                    TEB* gsbase
                    void* r13_3 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
                    int64_t rax_51 = sx.q(r10_1.d)
                    var_80 = rax_51
                    var_88 = r13_3
                    
                    do
                        char* rsi_5 = rax_51 * 0x50 + var_a0
                        var_e0 = rsi_5
                        
                        if ((*rsi_5 & 1) != 0)
                            int64_t* rax_52 = sub_140d3c6e0(&rsi_5[0x40])
                            void* r12_3
                            
                            if (rax_52 == 0)
                            label_141dc90b1:
                                
                                if (data_143f38e58 s> *(0x14 + *r13_3))
                                    _Init_thread_header(&data_143f38e58)
                                    
                                    if (data_143f38e58 == 0xffffffff)
                                        data_143f38e48 = 0
                                        data_143f38e50 = 0
                                        atexit(sub_142cf8f50)
                                        _Init_thread_footer(&data_143f38e58)
                                
                                r12_3 = &data_143f38e48
                            else
                                void* rax_53 = sub_142549b60()
                                
                                if (rax_53 == 0)
                                    goto label_141dc90b1
                                
                                int64_t rax_54 = sx.q(*(rax_53 + 0x38))
                                
                                if (rax_54.d s> rax_52[7].d
                                        || *(rax_52[6] + (rax_54 << 3)) != rax_53 + 0x30)
                                    goto label_141dc90b1
                                
                                void* rdi_3 = rax_52[0x23]
                                
                                if (rdi_3 != 0)
                                    sub_141dcd610(rdi_3)
                                    r12_3 = rdi_3 + 0x28
                                else
                                    (*(*rax_52 + 0x390))(rax_52)
                                    rdi_3 = rax_52[0x23]
                                    
                                    if (rdi_3 == 0)
                                        goto label_141dc90b1
                                    
                                    sub_141dcd610(rdi_3)
                                    r12_3 = rdi_3 + 0x28
                            
                            int64_t rbx_6 = sx.q(var_a8.d)
                            int32_t rax_59 = (rbx_6 + 1).d
                            var_a8.d = rax_59
                            
                            if (rax_59 s> var_a8:4.d)
                                sub_1405fdd60(&var_b0)
                            
                            void* rbx_7 = rbx_6 * 0x70
                            memset(var_b0 + rbx_7, 0, 0x70)
                            char* rax_60 = var_b0
                            void* r14_2 = rbx_7 + rax_60
                            *(rbx_7 + rax_60 + 0x30) = *(rsi_5 + 0x10)
                            *(rbx_7 + rax_60 + 0x40) = *(rsi_5 + 0x20)
                            *(rbx_7 + rax_60 + 0x50) = *(rsi_5 + 0x30)
                            int32_t rcx_42 = *(r12_3 + 8)
                            
                            if (rcx_42 s> *(r14_2 + 0x14))
                                sub_140775c70(r14_2 + 8, rcx_42)
                                rcx_42 = *(r12_3 + 8)
                            
                            int32_t i_1 = 0
                            
                            if (rcx_42 s> 0)
                                int64_t r13_4 = 0
                                
                                do
                                    int64_t rbx_8 = sx.q(*(r14_2 + 0x10))
                                    int128_t* rdi_4 = *r12_3
                                    int32_t rax_61 = (rbx_8 + 1).d
                                    *(r14_2 + 0x10) = rax_61
                                    
                                    if (rax_61 s> *(r14_2 + 0x14))
                                        sub_140775520(r14_2 + 8)
                                    
                                    int64_t rdx_25 = *(r14_2 + 8)
                                    int64_t rcx_45 = rbx_8 * 9
                                    *(rdx_25 + (rcx_45 << 3)) = *(rdi_4 + r13_4)
                                    *(rdx_25 + (rcx_45 << 3) + 0x10) = *(rdi_4 + r13_4 + 0x10)
                                    *(rdx_25 + (rcx_45 << 3) + 0x20) = *(rdi_4 + r13_4 + 0x20)
                                    *(rdx_25 + (rcx_45 << 3) + 0x30) = *(rdi_4 + r13_4 + 0x30)
                                    *(rdx_25 + (rcx_45 << 3) + 0x40) = *(rdi_4 + r13_4 + 0x40)
                                    int64_t* rax_63 = *(r14_2 + 8) + (rcx_45 << 3)
                                    var_e8 = rax_63
                                    int64_t* rax_65 = sub_140d3c6e0(&rax_63[5])
                                    int64_t* rbx_9 = rax_65
                                    int64_t* var_60_1
                                    
                                    if (rax_65 != 0)
                                    label_141dc920d:
                                        
                                        if (rbx_9 == 0)
                                            var_60_1 = rbx_9
                                        else
                                            void* rax_70 = sub_1425492f0()
                                            
                                            if (rax_70 == 0)
                                                var_60_1 = rbx_9
                                            else
                                                int64_t rax_71 = sx.q(*(rax_70 + 0x38))
                                                
                                                if (rax_71.d s> rbx_9[7].d
                                                        || *(rbx_9[6] + (rax_71 << 3))
                                                        != rax_70 + 0x30)
                                                    var_60_1 = rbx_9
                                                else
                                                    void* rax_73 = sub_1425492f0()
                                                    int64_t rax_74
                                                    
                                                    if (rax_73 != 0)
                                                        rax_74 = sx.q(*(rax_73 + 0x38))
                                                    
                                                    int64_t* rsi_6
                                                    
                                                    if (rax_73 == 0 || rax_74.d s> rbx_9[7].d
                                                            || *(rbx_9[6] + (rax_74 << 3))
                                                            != rax_73 + 0x30)
                                                        rsi_6 = nullptr
                                                    else
                                                        rsi_6 = rbx_9
                                                    
                                                    int64_t* rdi_5 = rsi_6[0x23]
                                                    
                                                    if (rdi_5 != 0)
                                                    label_141dc9297:
                                                        void var_68
                                                        
                                                        if ((*(*rdi_5 + 0x268))(rdi_5) == 0)
                                                            var_60_1 = rbx_9
                                                        else
                                                            rbx_9 = *(*(*rdi_5 + 0x270))(rdi_5, 
                                                                &var_68, var_f0, arg3, var_f8_1, var_f0)
                                                    else
                                                        (*(*rsi_6 + 0x390))(rsi_6)
                                                        rdi_5 = rsi_6[0x23]
                                                        
                                                        if (rdi_5 != 0)
                                                            goto label_141dc9297
                                                        
                                                        var_60_1 = rbx_9
                                    else
                                        int64_t* rax_66 = sub_141debaa0(&var_70)
                                        
                                        if (*rax_66 == 0)
                                            rbx_9 = nullptr
                                            var_60_1 = rbx_9
                                        else
                                            void* rax_67 = sub_1425492f0()
                                            
                                            if (rax_67 == 0)
                                                rbx_9 = nullptr
                                                var_60_1 = rbx_9
                                            else
                                                rbx_9 = *rax_66
                                                int64_t rax_68 = sx.q(*(rax_67 + 0x38))
                                                
                                                if (rax_68.d s<= rbx_9[7].d
                                                        && *(rbx_9[6] + (rax_68 << 3))
                                                        == rax_67 + 0x30)
                                                    goto label_141dc920d
                                                
                                                rbx_9 = nullptr
                                                var_60_1 = rbx_9
                                    
                                    if (rbx_9 != 0)
                                        void* rax_81 = sub_1425492f0()
                                        
                                        if (rax_81 != 0)
                                            int64_t rax_82 = sx.q(*(rax_81 + 0x38))
                                            
                                            if (rax_82.d s<= rbx_9[7].d
                                                    && *(rbx_9[6] + (rax_82 << 3))
                                                    == rax_81 + 0x30)
                                                sub_140d3a3a0(&rax_63[5], rbx_9)
                                                var_e8[4] = rbx_9
                                    
                                    i_1 += 1
                                    r13_4 += 0x48
                                while (i_1 s< *(r12_3 + 8))
                                
                                rsi_5 = var_e0
                                r13_3 = var_88
                            
                            int64_t* rax_85 = sub_140d3c6e0(&rsi_5[0x40])
                            void* r13_5
                            
                            if (rax_85 == 0)
                            label_141dc9397:
                                
                                if (data_143f38e70 s> *(0x14 + *r13_3))
                                    _Init_thread_header(&data_143f38e70)
                                    
                                    if (data_143f38e70 == 0xffffffff)
                                        data_143f38e60 = 0
                                        data_143f38e68 = 0
                                        atexit(sub_142cf8f70)
                                        _Init_thread_footer(&data_143f38e70)
                                
                                r13_5 = &data_143f38e60
                            else
                                void* rax_86 = sub_142549b60()
                                
                                if (rax_86 == 0)
                                    goto label_141dc9397
                                
                                int64_t rax_87 = sx.q(*(rax_86 + 0x38))
                                
                                if (rax_87.d s> rax_85[7].d
                                        || *(rax_85[6] + (rax_87 << 3)) != rax_86 + 0x30)
                                    goto label_141dc9397
                                
                                void* rdi_6 = rax_85[0x23]
                                
                                if (rdi_6 != 0)
                                    sub_141dcd610(rdi_6)
                                    r13_5 = rdi_6 + 0x38
                                else
                                    (*(*rax_85 + 0x390))(rax_85)
                                    rdi_6 = rax_85[0x23]
                                    
                                    if (rdi_6 == 0)
                                        goto label_141dc9397
                                    
                                    sub_141dcd610(rdi_6)
                                    r13_5 = rdi_6 + 0x38
                            
                            int64_t rbx_12 = sx.q(var_a8.d)
                            int32_t rax_92 = (rbx_12 + 1).d
                            var_a8.d = rax_92
                            
                            if (rax_92 s> var_a8:4.d)
                                sub_1405fdd60(&var_b0)
                            
                            void* rbx_13 = rbx_12 * 0x70
                            memset(var_b0 + rbx_13, 0, 0x70)
                            char* rax_93 = var_b0
                            void* r14_3 = rbx_13 + rax_93
                            *(rbx_13 + rax_93 + 0x30) = *(rsi_5 + 0x10)
                            *(rbx_13 + rax_93 + 0x40) = *(rsi_5 + 0x20)
                            *(rbx_13 + rax_93 + 0x50) = *(rsi_5 + 0x30)
                            int32_t rcx_62 = *(r13_5 + 8)
                            
                            if (rcx_62 s> *(r14_3 + 0x24))
                                sub_14090a730(r14_3 + 0x18, rcx_62)
                                rcx_62 = *(r13_5 + 8)
                            
                            int32_t i_2 = 0
                            
                            if (rcx_62 s> 0)
                                int64_t r12_4 = 0
                                
                                do
                                    int64_t rbx_14 = sx.q(*(r14_3 + 0x20))
                                    int128_t* rdi_7 = *r13_5
                                    int32_t rax_94 = (rbx_14 + 1).d
                                    *(r14_3 + 0x20) = rax_94
                                    
                                    if (rax_94 s> *(r14_3 + 0x24))
                                        sub_14090a6a0(r14_3 + 0x18)
                                    
                                    int64_t rax_95 = *(r14_3 + 0x18)
                                    int64_t rcx_66 = rbx_14 * 0x60
                                    *(rcx_66 + rax_95) = *(rdi_7 + r12_4)
                                    *(rcx_66 + rax_95 + 0x10) = *(rdi_7 + r12_4 + 0x10)
                                    *(rcx_66 + rax_95 + 0x20) = *(rdi_7 + r12_4 + 0x20)
                                    *(rcx_66 + rax_95 + 0x30) = *(rdi_7 + r12_4 + 0x30)
                                    *(rcx_66 + rax_95 + 0x40) = *(rdi_7 + r12_4 + 0x40)
                                    *(rcx_66 + rax_95 + 0x50) = *(rdi_7 + r12_4 + 0x50)
                                    int64_t* rax_97 = *(r14_3 + 0x18) + rcx_66
                                    var_e8 = rax_97
                                    var_e0 = &rax_97[5]
                                    int64_t* rax_99 = sub_140d3c6e0(&rax_97[5])
                                    int64_t* rbx_15 = rax_99
                                    int64_t* var_48_1
                                    
                                    if (rax_99 != 0)
                                    label_141dc94fa:
                                        
                                        if (rbx_15 == 0)
                                            var_48_1 = rbx_15
                                        else
                                            void* rax_104 = sub_1425492f0()
                                            
                                            if (rax_104 == 0)
                                                var_48_1 = rbx_15
                                            else
                                                int64_t rax_105 = sx.q(*(rax_104 + 0x38))
                                                
                                                if (rax_105.d s> rbx_15[7].d
                                                        || *(rbx_15[6] + (rax_105 << 3))
                                                        != rax_104 + 0x30)
                                                    var_48_1 = rbx_15
                                                else
                                                    void* rax_107 = sub_1425492f0()
                                                    int64_t rax_108
                                                    
                                                    if (rax_107 != 0)
                                                        rax_108 = sx.q(*(rax_107 + 0x38))
                                                    
                                                    int64_t* rsi_7
                                                    
                                                    if (rax_107 == 0 || rax_108.d s> rbx_15[7].d
                                                            || *(rbx_15[6] + (rax_108 << 3))
                                                            != rax_107 + 0x30)
                                                        rsi_7 = nullptr
                                                    else
                                                        rsi_7 = rbx_15
                                                    
                                                    int64_t* rdi_8 = rsi_7[0x23]
                                                    
                                                    if (rdi_8 != 0)
                                                    label_141dc9584:
                                                        void var_50
                                                        
                                                        if ((*(*rdi_8 + 0x268))(rdi_8) == 0)
                                                            var_48_1 = rbx_15
                                                        else
                                                            rbx_15 = *(*(*rdi_8 + 0x270))(rdi_8, 
                                                                &var_50, var_f0, arg3, var_f8_1, var_f0)
                                                    else
                                                        (*(*rsi_7 + 0x390))(rsi_7)
                                                        rdi_8 = rsi_7[0x23]
                                                        
                                                        if (rdi_8 != 0)
                                                            goto label_141dc9584
                                                        
                                                        var_48_1 = rbx_15
                                    else
                                        void var_58
                                        int64_t* rax_100 = sub_141debaa0(&var_58)
                                        
                                        if (*rax_100 == 0)
                                            rbx_15 = nullptr
                                            var_48_1 = rbx_15
                                        else
                                            void* rax_101 = sub_1425492f0()
                                            
                                            if (rax_101 == 0)
                                                rbx_15 = nullptr
                                                var_48_1 = rbx_15
                                            else
                                                rbx_15 = *rax_100
                                                int64_t rax_102 = sx.q(*(rax_101 + 0x38))
                                                
                                                if (rax_102.d s<= rbx_15[7].d
                                                        && *(rbx_15[6] + (rax_102 << 3))
                                                        == rax_101 + 0x30)
                                                    goto label_141dc94fa
                                                
                                                rbx_15 = nullptr
                                                var_48_1 = rbx_15
                                    
                                    if (rbx_15 != 0)
                                        void* rax_115 = sub_1425492f0()
                                        
                                        if (rax_115 != 0)
                                            int64_t rax_116 = sx.q(*(rax_115 + 0x38))
                                            
                                            if (rax_116.d s<= rbx_15[7].d
                                                    && *(rbx_15[6] + (rax_116 << 3))
                                                    == rax_115 + 0x30)
                                                sub_140d3a3a0(var_e0, rbx_15)
                                                var_e8[4] = rbx_15
                                    
                                    i_2 += 1
                                    r12_4 += 0x60
                                while (i_2 s< *(r13_5 + 8))
                            
                            int32_t rdx_46 = var_98
                            r10_1 = sx.q(var_f8_1)
                            int32_t rcx_78 = rdx_46 - r10_1.d - 1
                            
                            if (rcx_78 s>= 1)
                                rcx_78 = 1
                            
                            if (rcx_78 != 0)
                                memcpy(r10_1 * 0x50 + var_a0, 
                                    sx.q(rdx_46 - rcx_78) * 0x50 + var_a0, rcx_78 * 0x50)
                                rdx_46 = var_98
                                r10_1 = zx.q(var_f8_1)
                            
                            rax_51 = var_80
                            r13_3 = var_88
                            var_98 = rdx_46 - 1
                        
                        r10_1 = zx.q(r10_1.d - 1)
                        rax_51 -= 1
                        var_f8_1 = r10_1.d
                        var_80 = rax_51
                    while (r10_1.d s>= 0)
                
                result = arg2
                sub_141db7370(result, &var_d8)
    else
        if (r14 != 0)
            goto label_141dc8c0f
        
        sub_141db7370(result, &var_d8)

if (var_a0 != 0)
    sub_140a74f90(var_a0)

sub_141db7f30(&var_b0)
sub_141db7ed0(&var_c0)
sub_140745b20(&var_d0)
return result
