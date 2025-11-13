// 函数: sub_14285a290
// 地址: 0x14285a290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
char* _Str1 = arg5
int32_t rsi = 0
int64_t* i_3 = nullptr
void** i_28 = nullptr

if (_Str1 != 0 && arg3 != 0 && arg4 != 0)
    int32_t rdi_1 = 0
    int32_t rbp_1 = 1
    int32_t rcx_1
    
    if (strncmp(_Str1, "SUITEB128ONLY", 0xd) != 0)
        if (strncmp(_Str1, "SUITEB128C2", 0xb) != 0)
            if (strncmp(_Str1, "SUITEB128", 9) != 0)
                rcx_1 = 0
                
                if (strncmp(_Str1, "SUITEB192", 9) == 0)
                    rcx_1 = 0x20000
                
                if (rcx_1 == 0)
                    rcx_1 = *(arg6 + 0x1c) & 0x30000
                else
                    *(arg6 + 0x1c) &= 0xfffcffff
                    *(arg6 + 0x1c) |= rcx_1
            else
                rcx_1 = 0x30000
                *(arg6 + 0x1c) &= 0xfffcffff
                *(arg6 + 0x1c) |= 0x30000
        else
            rcx_1 = 0x30000
            rdi_1 = 1
            *(arg6 + 0x1c) &= 0xfffcffff
            *(arg6 + 0x1c) |= 0x30000
    else
        rcx_1 = 0x10000
        *(arg6 + 0x1c) &= 0xfffcffff
        *(arg6 + 0x1c) |= 0x10000
    
    if (rcx_1 == 0)
    label_14285a456:
        int32_t rdi_2 = data_143feaefc
        int32_t r12 = data_143feafc4
        int32_t r13 = data_143feafc8
        arg5.d = data_143feafc0
        int64_t r14 = sx.q((*(arg1 + 0xa8))(rcx_1))
        void* rax_14 = sub_1428a6730(r14 << 5)
        
        if (rax_14 != 0)
            sub_142859520(arg1, r14.d, r12, r13, rdi_2, arg5.d, rax_14, &i_3, &i_28)
            void** i_51 = i_28
            int64_t* i_11 = i_3
            void** i_49 = i_51
            
            if (i_51 != 0)
                int64_t* i_21 = i_11
                int64_t* i_30
                
                do
                    int64_t* i_16 = i_11
                    i_30 = i_21
                    
                    if (i_21 == 0)
                        break
                    
                    void* rax_16 = *i_30
                    int64_t** r10_1 = &i_21[2]
                    i_21 = i_21[2]
                    
                    if ((*(rax_16 + 0x1c) & 4) != 0 && (*(rax_16 + 0x20) & 8) != 0
                            && i_30[1].d == 0)
                        if (i_30 != i_49)
                            void* rax_17 = i_30[3]
                            i_11 = i_21
                            
                            if (i_30 != i_16)
                                i_11 = i_16
                            
                            int64_t* i_34 = i_21
                            
                            if (rax_17 != 0)
                                *(rax_17 + 0x10) = i_21
                                i_34 = *r10_1
                            
                            if (i_34 != 0)
                                i_34[3] = i_30[3]
                            
                            i_49[2] = i_30
                            i_30[3] = i_49
                            i_49 = i_30
                            *r10_1 = nullptr
                        
                        i_30[1].d = 1
                while (i_30 != i_51)
            
            int64_t* i_25 = i_11
            void** i_35 = i_49
            
            if (i_49 != 0)
                void** i_14
                
                do
                    int64_t* i_40 = i_25
                    i_14 = i_11
                    
                    if (i_11 == 0)
                        break
                    
                    void* r11_2 = &i_11[2]
                    i_11 = i_11[2]
                    
                    if ((*(*i_14 + 0x1c) & 4) != 0 && i_14[1].d == 0)
                        if (i_14 != i_35)
                            void* rax_20 = i_14[3]
                            i_25 = i_11
                            
                            if (i_14 != i_40)
                                i_25 = i_40
                            
                            int64_t* i_22 = i_11
                            
                            if (rax_20 != 0)
                                *(rax_20 + 0x10) = i_11
                                i_22 = *r11_2
                            
                            if (i_22 != 0)
                                i_22[3] = i_14[3]
                            
                            i_35[2] = i_14
                            i_14[3] = i_35
                            i_35 = i_14
                            *r11_2 = 0
                        
                        i_14[1].d = 1
                while (i_14 != i_49)
            
            int64_t* i_39 = i_25
            void** i_50 = i_35
            
            if (i_25 != 0)
                void** i_44
                
                do
                    void** i_66 = i_50
                    i_44 = i_35
                    
                    if (i_35 == 0)
                        break
                    
                    void* r11_3 = &i_35[3]
                    i_35 = i_35[3]
                    
                    if ((*(*i_44 + 0x1c) & 4) != 0 && i_44[1].d != 0)
                        if (i_44 != i_39)
                            void* rax_23 = i_44[2]
                            i_50 = i_35
                            
                            if (i_44 != i_66)
                                i_50 = i_66
                            
                            void** i_54 = i_35
                            
                            if (rax_23 != 0)
                                *(rax_23 + 0x18) = i_35
                                i_54 = *r11_3
                            
                            if (i_54 != 0)
                                i_54[2] = i_44[2]
                            
                            i_39[3] = i_44
                            i_44[2] = i_39
                            i_39 = i_44
                            *r11_3 = 0
                        
                        i_44[1].d = 0
                while (i_44 != i_25)
            
            int64_t* i_47 = i_39
            void** i_73 = i_50
            
            if (i_50 != 0)
                void** i_45
                
                do
                    int64_t* i_67 = i_47
                    i_45 = i_39
                    
                    if (i_39 == 0)
                        break
                    
                    void* r11_4 = &i_39[2]
                    i_39 = i_39[2]
                    
                    if ((*(*i_45 + 0x24) & 0x3000) != 0 && i_45[1].d == 0)
                        if (i_45 != i_73)
                            void* rax_26 = i_45[3]
                            i_47 = i_39
                            
                            if (i_45 != i_67)
                                i_47 = i_67
                            
                            int64_t* i_55 = i_39
                            
                            if (rax_26 != 0)
                                *(rax_26 + 0x10) = i_39
                                i_55 = *r11_4
                            
                            if (i_55 != 0)
                                i_55[3] = i_45[3]
                            
                            i_73[2] = i_45
                            i_45[3] = i_73
                            i_73 = i_45
                            *r11_4 = 0
                        
                        i_45[1].d = 1
                while (i_45 != i_50)
            
            int64_t* i_65 = i_47
            void** i_84 = i_73
            
            if (i_73 != 0)
                void** i_61
                
                do
                    int64_t* i_79 = i_65
                    i_61 = i_47
                    
                    if (i_47 == 0)
                        break
                    
                    void* rbx_1 = &i_47[2]
                    i_47 = i_47[2]
                    
                    if ((*(*i_61 + 0x24) & 0x80000) != 0 && i_61[1].d == 0)
                        if (i_61 != i_84)
                            void* rax_29 = i_61[3]
                            i_65 = i_47
                            
                            if (i_61 != i_79)
                                i_65 = i_79
                            
                            int64_t* i_68 = i_47
                            
                            if (rax_29 != 0)
                                *(rax_29 + 0x10) = i_47
                                i_68 = *rbx_1
                            
                            if (i_68 != 0)
                                i_68[3] = i_61[3]
                            
                            i_84[2] = i_61
                            i_61[3] = i_84
                            i_84 = i_61
                            *rbx_1 = 0
                        
                        i_61[1].d = 1
                while (i_61 != i_73)
            
            int64_t* i_77 = i_65
            void** i_88 = i_84
            
            if (i_84 != 0)
                void** i_75
                
                do
                    int64_t* i_89 = i_77
                    i_75 = i_65
                    
                    if (i_65 == 0)
                        break
                    
                    void* r10_2 = &i_65[2]
                    i_65 = i_65[2]
                    
                    if ((*(*i_75 + 0x24) & 0x3c0c0) != 0 && i_75[1].d == 0)
                        if (i_75 != i_88)
                            void* rax_32 = i_75[3]
                            i_77 = i_65
                            
                            if (i_75 != i_89)
                                i_77 = i_89
                            
                            int64_t* i_80 = i_65
                            
                            if (rax_32 != 0)
                                *(rax_32 + 0x10) = i_65
                                i_80 = *r10_2
                            
                            if (i_80 != 0)
                                i_80[3] = i_75[3]
                            
                            i_88[2] = i_75
                            i_75[3] = i_88
                            i_88 = i_75
                            *r10_2 = 0
                        
                        i_75[1].d = 1
                while (i_75 != i_84)
            
            int64_t* i_78 = i_77
            void** i_94 = i_88
            
            if (i_88 != 0)
                void** i_86
                
                do
                    int64_t* i_85 = i_78
                    i_86 = i_77
                    
                    if (i_77 == 0)
                        break
                    
                    void* r10_3 = &i_77[2]
                    i_77 = i_77[2]
                    
                    if (i_86[1].d == 0)
                        if (i_86 != i_94)
                            i_78 = i_77
                            int64_t* i_90 = i_77
                            
                            if (i_86 != i_85)
                                i_78 = i_85
                            
                            void* rax_34 = i_86[3]
                            
                            if (rax_34 != 0)
                                *(rax_34 + 0x10) = i_77
                                i_90 = *r10_3
                            
                            if (i_90 != 0)
                                i_90[3] = i_86[3]
                            
                            i_94[2] = i_86
                            i_86[3] = i_94
                            i_94 = i_86
                            *r10_3 = 0
                        
                        i_86[1].d = 1
                while (i_86 != i_88)
            
            int64_t* i_63 = i_78
            void** i_93 = i_94
            
            if (i_94 != 0)
                void** i_87
                
                do
                    int64_t* i_81 = i_63
                    i_87 = i_78
                    
                    if (i_78 == 0)
                        break
                    
                    void* rbx_2 = &i_78[2]
                    i_78 = i_78[2]
                    
                    if ((*(*i_87 + 0x28) & 1) != 0 && i_87[1].d != 0 && i_87 != i_93)
                        void* rax_37 = i_87[3]
                        i_63 = i_78
                        
                        if (i_87 != i_81)
                            i_63 = i_81
                        
                        int64_t* i_91 = i_78
                        
                        if (rax_37 != 0)
                            *(rax_37 + 0x10) = i_78
                            i_91 = *rbx_2
                        
                        if (i_91 != 0)
                            i_91[3] = i_87[3]
                        
                        i_93[2] = i_87
                        i_87[3] = i_93
                        i_93 = i_87
                        *rbx_2 = 0
                while (i_87 != i_94)
            
            int64_t* i_52 = i_63
            void** i_92 = i_93
            
            if (i_93 != 0)
                void** i_76
                
                do
                    int64_t* i_69 = i_52
                    i_76 = i_63
                    
                    if (i_63 == 0)
                        break
                    
                    void* rbx_3 = &i_63[2]
                    i_63 = i_63[2]
                    
                    if ((*(*i_76 + 0x20) & 4) != 0 && i_76[1].d != 0 && i_76 != i_92)
                        void* rax_40 = i_76[3]
                        i_52 = i_63
                        
                        if (i_76 != i_69)
                            i_52 = i_69
                        
                        int64_t* i_82 = i_63
                        
                        if (rax_40 != 0)
                            *(rax_40 + 0x10) = i_63
                            i_82 = *rbx_3
                        
                        if (i_82 != 0)
                            i_82[3] = i_76[3]
                        
                        i_92[2] = i_76
                        i_76[3] = i_92
                        i_92 = i_76
                        *rbx_3 = 0
                while (i_76 != i_93)
            
            int64_t* i_36 = i_52
            void** i_83 = i_92
            
            if (i_92 != 0)
                void** i_62
                
                do
                    int64_t* i_56 = i_36
                    i_62 = i_52
                    
                    if (i_52 == 0)
                        break
                    
                    void* rbx_4 = &i_52[2]
                    i_52 = i_52[2]
                    
                    if ((*(*i_62 + 0x1c) & 1) != 0 && i_62[1].d != 0 && i_62 != i_83)
                        void* rax_43 = i_62[3]
                        i_36 = i_52
                        
                        if (i_62 != i_56)
                            i_36 = i_56
                        
                        int64_t* i_70 = i_52
                        
                        if (rax_43 != 0)
                            *(rax_43 + 0x10) = i_52
                            i_70 = *rbx_4
                        
                        if (i_70 != 0)
                            i_70[3] = i_62[3]
                        
                        i_83[2] = i_62
                        i_62[3] = i_83
                        i_83 = i_62
                        *rbx_4 = 0
                while (i_62 != i_92)
            
            int64_t* i_18 = i_36
            void** i_74 = i_83
            
            if (i_83 != 0)
                void** i_46
                
                do
                    int64_t* i_41 = i_18
                    i_46 = i_36
                    
                    if (i_36 == 0)
                        break
                    
                    void* rbx_5 = &i_36[2]
                    i_36 = i_36[2]
                    
                    if ((*(*i_46 + 0x1c) & 8) != 0 && i_46[1].d != 0 && i_46 != i_74)
                        void* rax_46 = i_46[3]
                        i_18 = i_36
                        
                        if (i_46 != i_41)
                            i_18 = i_41
                        
                        int64_t* i_57 = i_36
                        
                        if (rax_46 != 0)
                            *(rax_46 + 0x10) = i_36
                            i_57 = *rbx_5
                        
                        if (i_57 != 0)
                            i_57[3] = i_46[3]
                        
                        i_74[2] = i_46
                        i_46[3] = i_74
                        i_74 = i_46
                        *rbx_5 = 0
                while (i_46 != i_83)
            
            int64_t* i_12 = i_18
            void** i_58 = i_74
            
            if (i_74 != 0)
                void** i_31
                
                do
                    int64_t* i_17 = i_12
                    i_31 = i_18
                    
                    if (i_18 == 0)
                        break
                    
                    void* rbx_6 = &i_18[2]
                    i_18 = i_18[2]
                    
                    if ((*(*i_31 + 0x24) & 4) != 0 && i_31[1].d != 0 && i_31 != i_58)
                        void* rax_49 = i_31[3]
                        i_12 = i_18
                        
                        if (i_31 != i_17)
                            i_12 = i_17
                        
                        int64_t* i_37 = i_18
                        
                        if (rax_49 != 0)
                            *(rax_49 + 0x10) = i_18
                            i_37 = *rbx_6
                        
                        if (i_37 != 0)
                            i_37[3] = i_31[3]
                        
                        i_58[2] = i_31
                        i_31[3] = i_58
                        i_58 = i_31
                        *rbx_6 = 0
                while (i_31 != i_74)
            
            i_3 = i_12
            i_28 = i_58
            
            if (sub_14285a0a0(&i_3, &i_28) != 0)
                int64_t* i_10 = i_3
                void** i_53 = i_28
                int64_t* i_27 = i_10
                
                if (i_10 != 0)
                    void** i_48 = i_53
                    void** i_32
                    
                    do
                        void** i_64 = i_53
                        i_32 = i_48
                        
                        if (i_48 == 0)
                            break
                        
                        void* r10_4 = &i_48[3]
                        i_48 = i_48[3]
                        
                        if (*(*i_32 + 0x2c) == 0x303 && i_32[1].d != 0 && i_32 != i_27)
                            void* rax_53 = i_32[2]
                            bool cond:14_1 = i_32 != i_53
                            i_53 = i_48
                            void** i_71 = i_48
                            
                            if (cond:14_1)
                                i_53 = i_64
                            
                            if (rax_53 != 0)
                                *(rax_53 + 0x18) = i_48
                                i_71 = *r10_4
                            
                            if (i_71 != 0)
                                i_71[2] = i_32[2]
                            
                            i_27[3] = i_32
                            i_32[2] = i_27
                            i_27 = i_32
                            *r10_4 = 0
                    while (i_32 != i_10)
                
                int64_t* i_26 = i_27
                void** i_38 = i_53
                
                if (i_27 != 0)
                    void** i_33
                    
                    do
                        void** i_59 = i_38
                        i_33 = i_53
                        
                        if (i_53 == 0)
                            break
                        
                        void* rbx_7 = &i_53[3]
                        i_53 = i_53[3]
                        
                        if ((*(*i_33 + 0x28) & 0x40) != 0 && i_33[1].d != 0 && i_33 != i_26)
                            void* rax_56 = i_33[2]
                            i_38 = i_53
                            
                            if (i_33 != i_59)
                                i_38 = i_59
                            
                            void** i_72 = i_53
                            
                            if (rax_56 != 0)
                                *(rax_56 + 0x18) = i_53
                                i_72 = *rbx_7
                            
                            if (i_72 != 0)
                                i_72[2] = i_33[2]
                            
                            i_26[3] = i_33
                            i_33[2] = i_26
                            i_26 = i_33
                            *rbx_7 = 0
                    while (i_33 != i_27)
                
                int64_t* i_13 = i_26
                void** i_19 = i_38
                
                if (i_26 != 0)
                    void** i_15
                    
                    do
                        void** i_42 = i_19
                        i_15 = i_38
                        
                        if (i_38 == 0)
                            break
                        
                        void* rbx_8 = &i_38[3]
                        i_38 = i_38[3]
                        
                        if ((*(*i_15 + 0x1c) & 6) != 0 && i_15[1].d != 0 && i_15 != i_13)
                            void* rax_59 = i_15[2]
                            i_19 = i_38
                            
                            if (i_15 != i_42)
                                i_19 = i_42
                            
                            void** i_60 = i_38
                            
                            if (rax_59 != 0)
                                *(rax_59 + 0x18) = i_38
                                i_60 = *rbx_8
                            
                            if (i_60 != 0)
                                i_60[2] = i_15[2]
                            
                            i_13[3] = i_15
                            i_15[2] = i_13
                            i_13 = i_15
                            *rbx_8 = 0
                    while (i_15 != i_26)
                
                int64_t* i_6 = i_13
                void** i_8 = i_19
                
                if (i_13 != 0)
                    int64_t* i_7
                    
                    do
                        void** i_23 = i_8
                        i_7 = i_19
                        
                        if (i_19 == 0)
                            break
                        
                        void* rax_61 = *i_7
                        void* rbx_9 = &i_19[3]
                        i_19 = i_19[3]
                        
                        if ((*(rax_61 + 0x1c) & 6) != 0 && (*(rax_61 + 0x28) & 0x40) != 0
                                && i_7[1].d != 0 && i_7 != i_6)
                            void* rax_62 = i_7[2]
                            i_8 = i_19
                            
                            if (i_7 != i_23)
                                i_8 = i_23
                            
                            void** i_43 = i_19
                            
                            if (rax_62 != 0)
                                *(rax_62 + 0x18) = i_19
                                i_43 = *rbx_9
                            
                            if (i_43 != 0)
                                i_43[2] = i_7[2]
                            
                            i_6[3] = i_7
                            i_7[2] = i_6
                            i_6 = i_7
                            *rbx_9 = 0
                    while (i_7 != i_13)
                
                void** i = i_6
                void** i_24 = i_8
                
                if (i_6 != 0)
                    void** i_4
                    
                    do
                        void** i_29 = i_24
                        i_4 = i_8
                        
                        if (i_8 == 0)
                            break
                        
                        void*** r11_5 = &i_8[3]
                        i_8 = i_8[3]
                        
                        if (i_4[1].d != 0)
                            if (i_4 != i)
                                i_24 = i_8
                                void** i_20 = i_8
                                
                                if (i_4 != i_29)
                                    i_24 = i_29
                                
                                void* rax_64 = i_4[2]
                                
                                if (rax_64 != 0)
                                    *(rax_64 + 0x18) = i_8
                                    i_20 = *r11_5
                                
                                if (i_20 != 0)
                                    i_20[2] = i_4[2]
                                
                                i[3] = i_4
                                i_4[2] = i
                                i = i_4
                                *r11_5 = nullptr
                            
                            i_4[1].d = 0
                    while (i_4 != i_6)
                
                i_3 = i
                i_28 = i_24
                void** rax_67 = sub_1428a6730(sx.q((r14 + 0x4d).d) << 3)
                
                if (rax_67 != 0)
                    int32_t r12_1 = not.d(r12)
                    int32_t r10_6 = not.d(rdi_2)
                    int32_t r11_7 = not.d(arg5.d)
                    int32_t r13_1 = not.d(r13)
                    void** rdx_5 = rax_67
                    
                    for (; i != 0; i = i[2])
                        *rdx_5 = *i
                        rdx_5 = &rdx_5[1]
                    
                    void* const rcx_13 = &data_1434da260
                    int64_t i_5 = 0x13
                    void* r8_6 = &data_1434da2e0
                    int64_t i_1
                    
                    do
                        int32_t rax_70 = *(rcx_13 - 4)
                        
                        if (rax_70 == 0 || (rax_70 & r12_1) != 0)
                            int32_t rax_71 = *rcx_13
                            
                            if (rax_71 == 0 || (r13_1 & rax_71) != 0)
                                int32_t rax_72 = *(rcx_13 + 4)
                                
                                if (rax_72 == 0 || (r10_6 & rax_72) != 0)
                                    int32_t rax_73 = *(rcx_13 + 8)
                                    
                                    if (rax_73 == 0 || (r11_7 & rax_73) != 0)
                                        *rdx_5 = r8_6 - 0xa0
                                        rdx_5 = &rdx_5[1]
                        
                        int32_t rax_75 = *(rcx_13 + 0x4c)
                        
                        if (rax_75 == 0 || (rax_75 & r12_1) != 0)
                            int32_t rax_76 = *(rcx_13 + 0x50)
                            
                            if (rax_76 == 0 || (r13_1 & rax_76) != 0)
                                int32_t rax_77 = *(rcx_13 + 0x54)
                                
                                if (rax_77 == 0 || (r10_6 & rax_77) != 0)
                                    int32_t rax_78 = *(rcx_13 + 0x58)
                                    
                                    if (rax_78 == 0 || (r11_7 & rax_78) != 0)
                                        *rdx_5 = r8_6 - 0x50
                                        rdx_5 = &rdx_5[1]
                        
                        int32_t rax_80 = *(rcx_13 + 0x9c)
                        
                        if (rax_80 == 0 || (rax_80 & r12_1) != 0)
                            int32_t rax_81 = *(rcx_13 + 0xa0)
                            
                            if (rax_81 == 0 || (r13_1 & rax_81) != 0)
                                int32_t rax_82 = *(rcx_13 + 0xa4)
                                
                                if (rax_82 == 0 || (r10_6 & rax_82) != 0)
                                    int32_t rax_83 = *(rcx_13 + 0xa8)
                                    
                                    if (rax_83 == 0 || (r11_7 & rax_83) != 0)
                                        *rdx_5 = r8_6
                                        rdx_5 = &rdx_5[1]
                        
                        int32_t rax_84 = *(rcx_13 + 0xec)
                        
                        if (rax_84 == 0 || (rax_84 & r12_1) != 0)
                            int32_t rax_85 = *(rcx_13 + 0xf0)
                            
                            if (rax_85 == 0 || (r13_1 & rax_85) != 0)
                                int32_t rax_86 = *(rcx_13 + 0xf4)
                                
                                if (rax_86 == 0 || (r10_6 & rax_86) != 0)
                                    int32_t rax_87 = *(rcx_13 + 0xf8)
                                    
                                    if (rax_87 == 0 || (r11_7 & rax_87) != 0)
                                        *rdx_5 = r8_6 + 0x50
                                        rdx_5 = &rdx_5[1]
                        
                        r8_6 += 0x140
                        rcx_13 += 0x140
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    *rdx_5 = nullptr
                    void* _Str1_1 = _Str1
                    int32_t rax_89 = strncmp(_Str1, "DEFAULT", zx.q((i_5 + 7).d))
                    int32_t var_88_1
                    int32_t rax_90
                    
                    if (rax_89 == 0)
                        var_88_1.q = arg6
                        rax_90 = sub_142859ae0("ALL:!COMPLEMENTOFDEFAULT:!eNULL", &i_3, &i_28, 
                            rax_67, var_88_1)
                        _Str1_1 = &_Str1[7]
                        rbp_1 = rax_90
                        
                        if (_Str1[7] == 0x3a)
                            _Str1_1 = &_Str1[8]
                    
                    if (rax_89 != 0 || rax_90 != 0)
                        int32_t i_2 = 0
                        void* _Str1_2 = _Str1_1
                        
                        if (*_Str1_1 != 0)
                            while (i_2 u< 0x80000000)
                                _Str1_2 += 1
                                i_2 += 1
                                
                                if (*_Str1_2 == 0)
                                    break
                        
                        if ((i_2 & 0x7fffffff) u> 0)
                            var_88_1.q = arg6
                            rbp_1 = sub_142859ae0(_Str1_1, &i_3, &i_28, rax_67, var_88_1)
                    
                    sub_1428a6780(rax_67)
                    
                    if (rbp_1 != 0)
                        int32_t* result = sub_142898ba0()
                        
                        if (result != 0)
                            if (sub_142898c70(arg2) s<= 0)
                            label_14285b051:
                                int64_t* i_9 = i_3
                                
                                if (i_9 == 0)
                                label_14285b090:
                                    sub_1428a6780(rax_14)
                                    
                                    if (sub_14285b640(arg4, result) != 0)
                                        sub_142898a10(*arg3)
                                        *arg3 = result
                                        return result
                                else
                                    while (true)
                                        if (i_9[1].d != 0 && sub_142898d50(result, *i_9) == 0)
                                            sub_1428a6780(rax_14)
                                            break
                                        
                                        i_9 = i_9[2]
                                        
                                        if (i_9 == 0)
                                            goto label_14285b090
                            else
                                while (sub_142898d50(result, sub_142898ea0(arg2, rsi)) != 0)
                                    rsi += 1
                                    
                                    if (rsi s>= sub_142898c70(arg2))
                                        goto label_14285b051
                            
                            sub_142898a10(result)
                        else
                            sub_1428a6780(rax_14)
                    else
                        sub_1428a6780(rax_14)
                else
                    sub_1428a6780(rax_14)
                    sub_1428a5670(0x14, 0xa6, 0x41, "ssl\ssl_ciph.c", 0x615)
            else
                sub_1428a6780(rax_14)
        else
            sub_1428a5670(0x14, 0xa6, 0x41, "ssl\ssl_ciph.c", 0x5a3)
        
        return nullptr
    
    if ((*(*(arg1 + 0xc0) + 0x60) & 0x10) != 0)
        if (rcx_1 == 0x10000)
            _Str1 = "ECDHE-ECDSA-AES128-GCM-SHA256"
        else if (rcx_1 == 0x20000)
            _Str1 = "ECDHE-ECDSA-AES256-GCM-SHA384"
        else if (rcx_1 == 0x30000)
            _Str1 = "ECDHE-ECDSA-AES256-GCM-SHA384"
            
            if (rdi_1 == 0)
                _Str1 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384"
        
        goto label_14285a456
    
    sub_1428a5670(0x14, 0x14b, 0x9e, "ssl\ssl_ciph.c", 0x4e0)

return 0
