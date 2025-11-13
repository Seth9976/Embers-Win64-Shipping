// 函数: sub_140f783a0
// 地址: 0x140f783a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int32_t rdi = 0
int64_t* rsi = arg1
int32_t var_2b8 = 0
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
int64_t rbx = *(arg3 + 0x18)
int64_t var_298 = *(arg3 + 0x20)
void* rax_3 = *(arg3 + 0x28)
int64_t var_2a0 = rbx
void* var_290 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void var_108
char var_288
int32_t var_1d4
char var_1c8
int32_t var_114

if (rbx == data_143e1e188)
    int64_t* rcx = *arg1
    char rax_5
    int32_t r8
    rax_5, r8 = (*(*rcx + 8))(rcx)
    char rax_6
    
    if (rax_5 != 0)
        rax_6 = (*(arg3 + 8)).b
    
    if (rax_5 == 0 || (rax_6 & 0xc) == 0)
        char rcx_4 = (*(arg3 + 8)).b
        int32_t var_2b0_1 = 0xbf800000
        int32_t rax_7
        rax_7.b = (rcx_4 & 0xc) != 0
        var_2b8 = rax_7
        int32_t var_2a4_1 = 0x3f800000
        int32_t rax_8
        rax_8.b = (rcx_4 & 3) != 0
        int32_t var_2b4_1 = 0
        int32_t var_2a8_1 = rax_8
        int32_t var_2ac_1 = 0
        char rax_9
        rax_9, arg5 = sub_140f7c300(rsi, &var_2b8, r8)
        arg5.o = zx.o(0)
        char* rdx_2
        int32_t rbx_1
        
        if (rax_9 == 0)
            int32_t var_114_2 = var_114 & 0xffffff00
            rdx_2 = &var_1c8
            var_1c8 = 0
            rbx_1 = 0
            int64_t var_1c0_2 = 0
            int64_t var_1b8_2 = 0
            char var_1a8_2 = 0
            int64_t var_1a0_1
            __builtin_memset(&var_1a0_1, 0, 0x88)
            rdi = 4
            int32_t var_118_2 = 0x20702
        else
            int32_t var_1d4_1 = var_1d4 & 0xffffff00
            rdx_2 = &var_288
            var_288 = 1
            rbx_1 = 2
            int64_t var_280_1 = 0
            int64_t var_278_1 = 0
            char var_268_1 = 0
            int64_t var_260_1
            __builtin_memset(&var_260_1, 0, 0x88)
            int32_t var_1d8_1 = 0x20702
        
        sub_140e51550(&var_108, rdx_2)
        
        if (rdi != 0)
            sub_140597700(&var_1c8)
        
        if (rbx_1 != 0)
            sub_140597700(&var_288)
        
        goto label_140f78688
    
    int32_t r8_1
    r8_1.b = (rax_6 & 3) != 0
    sub_140f7ba40(rsi, 2, r8_1, arg4.q)
    int32_t var_114_1 = var_114 & 0xffffff00
    var_1c8 = 1
    arg5.o = zx.o(0)
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x88)
    int32_t var_118_1 = 0x20702
    sub_1405979f0(arg2, &var_1c8)
    sub_140597700(&var_1c8)
else
    int32_t rdx_3
    char* rdx_6
    int32_t rbx_2
    int32_t r8_3
    bool cond:11_1
    
    if (rbx == data_143e1e1b8)
        int64_t* rcx_9 = *arg1
        char rax_11
        int32_t r8_2
        rax_11, r8_2 = (*(*rcx_9 + 8))(rcx_9)
        char rax_12
        
        if (rax_11 != 0)
            rax_12 = (*(arg3 + 8)).b
        
        if (rax_11 == 0 || (rax_12 & 0xc) == 0)
            char rcx_11 = (*(arg3 + 8)).b
            int32_t var_2b4_2 = 0
            int32_t var_2b0_2 = 0x3f800000
            int32_t rax_13
            rax_13.b = (rcx_11 & 0xc) != 0
            int32_t var_2a4_2 = 0x3f800000
            var_2b8 = rax_13
            int32_t rax_14
            rax_14.b = (rcx_11 & 3) != 0
            int32_t var_2ac_2 = 0
            int32_t var_2a8_2 = rax_14
            char rax_15
            rax_15, arg5 = sub_140f7c300(rsi, &var_2b8, r8_2)
            arg5.o = zx.o(0)
            
            if (rax_15 == 0)
                var_288 = 0
                rbx_2 = 0
                int64_t var_280_3 = 0
                int64_t var_278_3 = 0
                char var_268_3 = 0
                int64_t var_260_3 = 0
                int64_t var_208_1 = 0
                int64_t var_200_1 = 0
                rdi = 0x10
                goto label_140f7882a
            
            int32_t var_114_3 = var_114 & 0xffffff00
            rdx_6 = &var_1c8
            var_1c8 = 1
            rbx_2 = 8
            int64_t var_1c0_3 = 0
            int64_t var_1b8_3 = 0
            char var_1a8_3 = 0
            int64_t var_1a0_2
            __builtin_memset(&var_1a0_2, 0, 0x88)
            int32_t var_118_3 = 0x20702
            goto label_140f78867
        
        cond:11_1 = (rax_12 & 3) != 0
        rdx_3 = 3
        arg1 = rsi
    label_140f786cc:
        r8_3.b = cond:11_1
    label_140f786d0:
        sub_140f7ba40(arg1, rdx_3, r8_3, arg4.q)
        int32_t var_1d4_2 = var_1d4 & 0xffffff00
        var_288 = 1
        arg5.o = zx.o(0)
        int64_t var_280_2 = 0
        int64_t var_278_2 = 0
        char var_268_2 = 0
        int64_t var_260_2
        __builtin_memset(&var_260_2, 0, 0x88)
        int32_t var_1d8_2 = 0x20702
        sub_1405979f0(arg2, &var_288)
        sub_140597700(&var_288)
    else
        char* rdx_7
        
        if (rbx != data_143e1e1a0)
            if (rbx == data_143e1e1d0)
                var_2b8.q = 0
                int32_t rax_18
                rax_18.b = (*(arg3 + 8) & 3) != 0
                int32_t var_2ac_4 = 0x3f800000
                int32_t var_2a8_4 = rax_18
                int32_t var_2b0_4 = 0
                int32_t var_2a4_4 = 0x3f800000
                char rax_19
                rax_19, arg5 = sub_140f7c300(arg1, &var_2b8, arg3.d)
                arg5.o = zx.o(0)
                
                if (rax_19 == 0)
                    var_288 = 0
                    rbx_2 = 0
                    int64_t var_280_5 = 0
                    int64_t var_278_5 = 0
                    char var_268_5 = 0
                    int64_t var_260_5 = 0
                    int64_t var_208_3 = 0
                    int64_t var_200_3 = 0
                    rdi = 0x100
                    goto label_140f7882a
                
                int32_t var_114_5 = var_114 & 0xffffff00
                rdx_6 = &var_1c8
                var_1c8 = 1
                rbx_2 = 0x80
                int64_t var_1c0_5 = 0
                int64_t var_1b8_5 = 0
                char var_1a8_5 = 0
                int64_t var_1a0_4
                __builtin_memset(&var_1a0_4, 0, 0x88)
                int32_t var_118_5 = 0x20702
                goto label_140f78867
            
            if (rbx == data_143e1e170)
                char rax_20 = (*(arg3 + 8)).b
                rdx_3 = 2
                r8_3.b = (rax_20 & 3) != 0
                
                if ((rax_20 & 0xc) != 0)
                    rdx_3 = 0
                
                goto label_140f786d0
            
            if (rbx == data_143e1e158)
                char rax_21 = (*(arg3 + 8)).b
                rdx_3 = 3
                r8_3.b = (rax_21 & 3) != 0
                
                if ((rax_21 & 0xc) != 0)
                    rdx_3 = 1
                
                goto label_140f786d0
            
            if (rbx == data_143e1e128)
                cond:11_1 = (*(arg3 + 8) & 3) != 0
                rdx_3 = 4
                goto label_140f786cc
            
            if (rbx == data_143e1e140)
                rdi.b = (*(arg3 + 8) & 3) != 0
                arg5 = sub_140f7ba40(arg1, 5, rdi, arg4.q)
            label_140f792ed:
                rdx_7 = sub_140e194c0(&var_108)
                goto label_140f792f3
            
            char rax_23
            
            if (rbx == data_143e1e0b0)
                int64_t* rcx_16 = *arg1
                rax_23 = (**rcx_16)(rcx_16)
            
            char* rdx_11
            
            if (rbx != data_143e1e0b0 || rax_23 != 0)
                char rax_26
                
                if (rbx == data_143e1e098)
                    int64_t* rcx_20 = *rsi
                    rax_26 = (*(*rcx_20 + 0x50))(rcx_20, 9)
                
                if (rbx == data_143e1e098 && rax_26 != 0)
                    goto label_140f792ed
                
                if (rbx == data_143e1e0f8)
                    if (sub_140ab3dc0(&rsi[0xbf]) != 0)
                        char rax_28
                        char rdx_13
                        uint32_t r8_6
                        rax_28, rdx_13, r8_6 = sub_140f6a470(rsi)
                        
                        if (rax_28 == 0)
                            int64_t* rcx_26 = *rsi
                            
                            if ((**rcx_26)(rcx_26) != 0)
                            label_140f78cb8:
                                var_288 = 0
                                rbx_2 = 0
                                int64_t var_280_6 = 0
                                int64_t var_278_6 = 0
                                arg5.o = zx.o(0)
                                char var_268_6 = 0
                                int64_t var_260_6
                                __builtin_memset(&var_260_6, 0, 0x88)
                                rdi = 0x400
                                goto label_140f7882a
                            
                            int64_t* rcx_27 = *rsi
                            
                            if ((*(*rcx_27 + 0x30))(rcx_27) == 0)
                                goto label_140f78cb8
                            
                            char rax_34
                            rax_34, arg5 = sub_140f7a840(rsi)
                            
                            if (rax_34 == 0)
                                goto label_140f78cb8
                            
                            char rax_35
                            rax_35, arg5 = sub_140f7a840(rsi)
                            
                            if (rax_35 != 0)
                                sub_140f8b290(rsi, &rsi[0x101], 0)
                                int64_t* rcx_31 = rsi[9]
                                (*(*rcx_31 + 8))(rcx_31)
                                int64_t* rcx_32 = *rsi
                                (*(*rcx_32 + 0xa0))(rcx_32, &rsi[0x101], 3)
                        else
                            if (&var_2b8 != &rsi[0xf0] && rsi[0xf1].b != 0)
                                rsi[0xf1].b = 0
                            
                            sub_140f8fc70(rsi, rdx_13, r8_6)
                    else
                        sub_1405d9400()
                        char rdx_12
                        uint32_t r8_5
                        rdx_12, r8_5 = sub_14065da90(&rsi[0xbf], &data_143cd6fd8)
                        sub_140f8fc70(rsi, rdx_12, r8_5)
                    
                    int32_t var_114_6 = var_114 & 0xffffff00
                    rdx_6 = &var_1c8
                    var_1c8 = 1
                    arg5.o = zx.o(0)
                    rbx_2 = 0x200
                    int64_t var_1c0_6 = 0
                    int64_t var_1b8_6 = 0
                    char var_1a8_6 = 0
                    int64_t var_1a0_5
                    __builtin_memset(&var_1a0_5, 0, 0x88)
                    int32_t var_118_6 = 0x20702
                    goto label_140f78867
                
                int64_t rax_38 = data_143e1e200
                char* rdx_17
                int32_t rbx_3
                
                if (rbx == rax_38)
                    if ((*(arg3 + 8) & 3) != 0)
                        if (sub_140f6b950(rsi) != 0)
                            arg5 = sub_140f74090(rsi)
                            goto label_140f792ed
                        
                        rax_38 = data_143e1e200
                    
                    if (rbx != rax_38)
                        goto label_140f78e96
                    
                    int64_t* rcx_35 = *rsi
                    
                    if ((**rcx_35)(rcx_35) != 0)
                        goto label_140f78e96
                    
                    if (sub_140f6a470(rsi) == 0)
                        char rax_43 = (*(arg3 + 8)).b
                        
                        if ((rax_43 & 0xc) != 0 && (rax_43 & 0x30) == 0 && (rax_43 & 3) == 0)
                            int64_t* rcx_37 = *rsi
                            char rax_45
                            int32_t r8_7
                            rax_45, r8_7 = (*(*rcx_37 + 8))(rcx_37)
                            
                            if (rax_45 == 0)
                                int32_t var_2b0_5 = 0x3f800000
                                var_2b8.q = 1
                                int32_t var_2ac_5 = 0
                                int32_t var_2a8_5 = 1
                                int32_t var_2a4_5 = 0x3f800000
                                sub_140f7c300(rsi, &var_2b8, r8_7)
                            else
                                sub_140f7ba40(rsi, 3, 1, arg4.q)
                    
                    if (sub_140f77780(rsi, sub_140f6a640(rsi)) == 0)
                        int32_t var_1d4_4 = var_1d4 & 0xffffff00
                        rdx_17 = &var_288
                        var_288 = 0
                        rbx_3 = 0
                        int64_t var_280_7 = 0
                        int64_t var_278_7 = 0
                        char var_268_7 = 0
                        int64_t var_260_7
                        __builtin_memset(&var_260_7, 0, 0x88)
                        rdi = 0x1000
                        int32_t var_1d8_4 = 0x20702
                    else
                        int32_t var_114_7 = var_114 & 0xffffff00
                        rdx_17 = &var_1c8
                        var_1c8 = 1
                        rbx_3 = 0x800
                        int64_t var_1c0_7 = 0
                        int64_t var_1b8_7 = 0
                        char var_1a8_7 = 0
                        int64_t var_1a0_6
                        __builtin_memset(&var_1a0_6, 0, 0x88)
                        int32_t var_118_7 = 0x20702
                    
                    goto label_140f791c6
                
            label_140f78e96:
                int64_t rax_48 = data_143e1e1e8
                
                if (rbx == rax_48)
                    if ((*(arg3 + 8) & 0xc) != 0)
                        if (sub_140f6b8c0(rsi) != 0)
                            arg5 = sub_140f73ae0(rsi)
                            goto label_140f792ed
                        
                        rax_48 = data_143e1e1e8
                    
                    if (rbx == rax_48 && (*(arg3 + 8) & 3) != 0)
                        char rax_49
                        rax_49, arg5 = sub_140f6ba90(rsi)
                        
                        if (rax_49 != 0)
                            arg5 = sub_140f877c0(rsi)
                            goto label_140f792ed
                
                char rax_50 = sub_140f6baf0(rsi)
                char rax_51
                
                if (rax_50 != 0 && rbx == data_143e1e080)
                    rax_51 = (*(arg3 + 8)).b
                
                if (rax_50 != 0 && rbx == data_143e1e080 && (rax_51 & 0x30) != 0
                        && (rax_51 & 3) == 0)
                    arg5 = sub_140f8f5b0(rsi)
                    goto label_140f792ed
                
                int64_t* rcx_47 = *rsi
                char rax_53 = (**rcx_47)(rcx_47)
                char rax_55
                
                if (rax_53 == 0)
                    int64_t* rcx_48 = rsi[0xdf]
                    rax_55 = (*(*rcx_48 + 8))(rcx_48)
                
                int64_t rax_72
                
                if (rax_53 == 0 && rax_55 == 0)
                    if (rbx != data_143e1e548 || (*(arg3 + 8) & 0xc) == 0)
                        char rax_56
                        
                        if (rbx == data_143e1e560)
                            rax_56 = (*(arg3 + 8)).b
                        
                        if (rbx != data_143e1e560 || (rax_56 & 0xc) == 0 || (rax_56 & 3) == 0)
                            rax_72 = data_143e1e080
                            
                            if (rbx != rax_72)
                                goto label_140f79215
                            
                            char rcx_49 = (*(arg3 + 8)).b
                            
                            if ((rcx_49 & 0x30) == 0 || (rcx_49 & 3) == 0)
                                goto label_140f790f4
                    
                    int64_t* rcx_50 = *rsi
                    
                    if ((**rcx_50)(rcx_50) == 0 && rsi[0xf7].d != 0xffffffff)
                        int64_t* rcx_51 = rsi[0xdf]
                        
                        if ((*(*rcx_51 + 8))(rcx_51) == 0)
                            int32_t r13_2 = rsi[0xf7].d + 1
                            
                            if (rsi[0xf6].d s> r13_2)
                                int64_t* rbx_6 = (sx.q(r13_2) << 6) + rsi[0xf5]
                                sub_140f89a70(rsi, rbx_6)
                                char rax_61
                                int64_t zmm0_1
                                rax_61, zmm0_1 = sub_140f8b290(rsi, rbx_6, 0)
                                
                                if (rax_61 != 0)
                                    int64_t* rcx_54 = *rsi
                                    (*(*rcx_54 + 0x98))(rcx_54, rbx_6)
                                
                                rsi[0xf2] = rbx_6[5]
                                rsi[0xf3].b = rbx_6[6].b
                                *(rsi + 0x799) = *(rbx_6 + 0x31)
                                int64_t* rcx_55 = data_143e29f28
                                (*(*rcx_55 + 0x50))(rcx_55)
                                rsi[0xf4] = zmm0_1
                                sub_140f68510(&rsi[0xf0], &rbx_6[3])
                                bool cond:16_1 = rsi[0xf3].b == 1
                                int64_t* rcx_57 = *rsi
                                var_2b8 = rsi[0xf2].d
                                int32_t rax_68
                                rax_68.b = cond:16_1
                                
                                if (rax_68 + *(rsi + 0x794) s>= 0)
                                    rdi = rax_68 + *(rsi + 0x794)
                                
                                int32_t var_2b4_3 = rdi
                                char rdx_23
                                uint32_t r8_8
                                rdx_23, r8_8 = (*(*rcx_57 + 0xa8))(rcx_57, &var_2b8)
                                arg5 = sub_140f8fc70(rsi, rdx_23, r8_8)
                                int32_t rdx_24 = rsi[0xf6].d
                                rsi[0xf7].d = r13_2
                                
                                if (rdx_24 s<= r13_2 + 1)
                                    rsi[0xf7].d = 0xffffffff
                                    sub_140f89710(&rsi[0xf5], rdx_24 - 1, 1, 1)
                    
                    goto label_140f792ed
                
                rax_72 = data_143e1e080
            label_140f790f4:
                
                if (rbx == rax_72)
                    char rax_73 = (*(arg3 + 8)).b
                    
                    if ((rax_73 & 0xc) == 0 || (rax_73 & 0x30) != 0 || (rax_73 & 3) != 0)
                        goto label_140f79215
                    
                    int64_t* rcx_60 = *rsi
                    
                    if ((**rcx_60)(rcx_60) != 0)
                        goto label_140f79215
                    
                    int64_t zmm0_2 = sub_140f6a640(rsi)
                    int64_t* rcx_62 = *rsi
                    char rax_77
                    int32_t r8_9
                    rax_77, r8_9 = (*(*rcx_62 + 8))(rcx_62)
                    int64_t zmm0_3
                    
                    if (rax_77 == 0)
                        int32_t var_2b0_6 = 0xbf800000
                        int32_t var_2a4_6 = 0x3f800000
                        int32_t var_2ac_6 = 0
                        var_2b8.q = 1
                        int32_t var_2a8_6 = 1
                        zmm0_3 = sub_140f7c300(rsi, &var_2b8, r8_9)
                    else
                        zmm0_3 = sub_140f7ba40(rsi, 2, 1, zmm0_2)
                    
                    char* rax_79
                    
                    if (sub_140f77300(rsi, zmm0_3) == 0)
                        rax_79 = sub_140f19db0(&var_288)
                        rbx_3 = 0
                        rdi = 0x4000
                    else
                        rax_79 = sub_140e194c0(&var_1c8)
                        rbx_3 = 0x2000
                    
                    rdx_17 = rax_79
                label_140f791c6:
                    sub_140e51550(&var_108, rdx_17)
                    
                    if (rdi != 0)
                        sub_140597700(&var_288)
                    
                    if (rbx_3 != 0)
                        sub_140597700(&var_1c8)
                    
                    rdx_11 = &var_108
                    goto label_140f791f0
                
            label_140f79215:
                
                if (rbx == data_143e1e710)
                    int16_t rdx_27 = *(arg3 + 8)
                    int16_t rax_80 = rdx_27 & 0x30
                    int16_t rcx_73 = rdx_27 & 0xc
                    
                    if (rcx_73 != 0 && rax_80 == 0)
                        rbx.b = (rdx_27.b & 3) != 0
                        arg5 = sub_140f6a7a0(rsi, sub_140f764e0(rsi, &var_2b8), 1, rbx.b)
                        sub_1405970a0(&var_2b8)
                        goto label_140f792ed
                    
                    if (rcx_73 == 0 && rax_80 == 0)
                        rdx_27.b = (rdx_27.b & 3) != 0
                        arg5 = sub_140f6a1d0(rsi, rdx_27.b)
                        goto label_140f792ed
                
                char rax_82 = (*(arg3 + 8)).b
                int64_t rcx_78
                
                if ((rax_82 & 0x30) == 0 && (rax_82 & 0xc) == 0)
                    rcx_78 = *(arg3 + 0x18)
                    int32_t var_2b0
                    var_2b0.q = *(arg3 + 0x20)
                    void* rax_84 = *(arg3 + 0x28)
                    var_2b8.q = rcx_78
                    int32_t var_2a8
                    var_2a8.q = rax_84
                    
                    if (rax_84 != 0)
                        *(rax_84 + 8) += 1
                    
                    rdi = 1
                
                if ((rax_82 & 0x30) != 0 || (rax_82 & 0xc) != 0 || rcx_78 == data_143e1e098
                        || *(arg3 + 0x30) == 0)
                    rbx.b = 0
                else
                    rbx = 1
                
                if ((rdi.b & 1) != 0)
                    sub_140d430a0(&var_2b8)
                
                if (rbx.b != 0)
                    goto label_140f792ed
            else
                sub_140f6a640(rsi)
                sub_140f77530(rsi, *(arg3 + 0xa))
                rdx_11 = sub_140e194c0(&var_108)
            label_140f791f0:
                sub_1405979f0(arg2, rdx_11)
                sub_140597700(&var_108)
                arg5 = sub_140f74800(rsi)
        else
            int32_t var_2b0_3 = 0
            int32_t rax_16
            rax_16.b = (*(arg3 + 8) & 3) != 0
            int32_t var_2a4_3 = 0x3f800000
            int32_t var_2a8_3 = rax_16
            int32_t var_2ac_3 = 0xbf800000
            var_2b8.q = 0
            char rax_17
            rax_17, arg5 = sub_140f7c300(arg1, &var_2b8, arg3.d)
            arg5.o = zx.o(0)
            
            if (rax_17 == 0)
                var_288 = 0
                rbx_2 = 0
                int64_t var_280_4 = 0
                int64_t var_278_4 = 0
                char var_268_4 = 0
                int64_t var_260_4 = 0
                int64_t var_208_2 = 0
                int64_t var_200_2 = 0
                rdi = 0x40
            label_140f7882a:
                int32_t var_1d4_3 = var_1d4 & 0xffffff00
                rdx_6 = &var_288
                int32_t var_1d8_3 = 0x20702
                goto label_140f78867
            
            int32_t var_114_4 = var_114 & 0xffffff00
            rdx_6 = &var_1c8
            var_1c8 = 1
            rbx_2 = 0x20
            int64_t var_1c0_4 = 0
            int64_t var_1b8_4 = 0
            char var_1a8_4 = 0
            int64_t var_1a0_3
            __builtin_memset(&var_1a0_3, 0, 0x88)
            int32_t var_118_4 = 0x20702
        label_140f78867:
            sub_140e51550(&var_108, rdx_6)
            
            if (rdi != 0)
                sub_140597700(&var_288)
            
            if (rbx_2 == 0)
            label_140f78688:
                rdx_7 = &var_108
                goto label_140f792f3
            
            sub_140597700(&var_1c8)
            rdx_7 = &var_108
        label_140f792f3:
            sub_1405979f0(arg2, rdx_7)
            sub_140597700(&var_108)

if (*arg2 == 0 && sub_140e7af60(rsi[0x10f], arg3, arg5) != 0)
    sub_1405979f0(arg2, sub_140e194c0(&var_108))
    sub_140597700(&var_108)

sub_140597060(&var_298)
__security_check_cookie(rax_1 ^ &var_2d8)
return arg2
