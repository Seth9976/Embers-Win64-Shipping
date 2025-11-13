// 函数: sub_1405fe230
// 地址: 0x1405fe230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t var_40 = -2
char var_88 = 0

if (*arg2 != 0)
label_1405fe648:
    struct IMFSourceResolver ppISourceResolver = 0
    
    if (MFCreateSourceResolver(&ppISourceResolver) s>= 0)
        int64_t* var_98 = nullptr
        void var_78
        
        if (*arg2 == 0)
            int16_t* const rdx_11
            
            if (arg3[1].d == 0)
                rdx_11 = &data_142d40450
            else
                rdx_11 = *arg3
            
            struct IMFSourceResolver ppISourceResolver_5 = ppISourceResolver
            
            if ((*(*ppISourceResolver_5 + 0x18))(ppISourceResolver_5, rdx_11, 1, 0, &var_78, 
                &var_98) s>= 0)
            label_1405fe7ed:
                int64_t* var_80 = nullptr
                int64_t* rcx_38 = var_98
                
                if ((**rcx_38)(rcx_38, &data_142d60428, &var_80) s>= 0)
                    *arg1 = var_80
                    var_80 = nullptr
                    int64_t* rcx_42 = var_98
                    
                    if (rcx_42 != 0)
                        (*(*rcx_42 + 0x10))(rcx_42)
                    
                    struct IMFSourceResolver ppISourceResolver_7 = ppISourceResolver
                    
                    if (ppISourceResolver_7 != 0)
                        (*(*ppISourceResolver_7 + 0x10))(ppISourceResolver_7)
                else
                    *arg1 = 0
                    int64_t* rcx_39 = var_80
                    
                    if (rcx_39 != 0)
                        (*(*rcx_39 + 0x10))(rcx_39)
                    
                    int64_t* rcx_40 = var_98
                    
                    if (rcx_40 != 0)
                        (*(*rcx_40 + 0x10))(rcx_40)
                    
                    struct IMFSourceResolver ppISourceResolver_4 = ppISourceResolver
                    
                    if (ppISourceResolver_4 != 0)
                        (*(*ppISourceResolver_4 + 0x10))(ppISourceResolver_4)
            else
                *arg1 = 0
                int64_t* rcx_41 = var_98
                
                if (rcx_41 != 0)
                    (*(*rcx_41 + 0x10))(rcx_41)
                
                struct IMFSourceResolver ppISourceResolver_6 = ppISourceResolver
                
                if (ppISourceResolver_6 != 0)
                    (*(*ppISourceResolver_6 + 0x10))(ppISourceResolver_6)
        else
            void*** rax_32 = j_sub_140a82f30(0x58)
            void*** r14_3 = rax_32
            void*** var_38_1 = rax_32
            int64_t* var_48
            
            if (rax_32 == 0)
                r14_3 = nullptr
            else
                int64_t rcx_28 = *arg2
                int64_t var_50_1 = rcx_28
                int64_t* rax_33 = arg2[1]
                var_48 = rax_33
                
                if (rax_33 != 0)
                    rax_33[1].d += 1
                
                var_88 = 2
                *r14_3 = &data_142d5fba8
                r14_3[1] = &data_142d5fbd8
                r14_3[2].b = 0
                r14_3[3] = rcx_28
                r14_3[4] = rax_33
                
                if (rax_33 != 0)
                    rax_33[1].d += 1
                
                InitializeCriticalSection(&r14_3[5])
                SetCriticalSectionSpinCount(&r14_3[5], 0xfa0)
                r14_3[0xa].d = 0
            
            void*** var_30_1 = r14_3
            
            if (r14_3 != 0)
                (*r14_3)[1](r14_3)
            
            if ((var_88 & 2) != 0 && var_48 != 0)
                var_48[1].d -= 1
                
                if (var_48[1].d == 1)
                    (**var_48)(var_48)
                    int32_t r15_1 = *(var_48 + 0xc)
                    *(var_48 + 0xc) -= 1
                    
                    if (r15_1 == 1)
                        (*(*var_48 + 8))(var_48, zx.q(r15_1))
            
            void* r10_1 = &r14_3[1]
            
            if (r14_3 == 0)
                r10_1 = nullptr
            
            int16_t* const rdx_9
            
            if (arg3[1].d == 0)
                rdx_9 = &data_142d40450
            else
                rdx_9 = *arg3
            
            struct IMFSourceResolver ppISourceResolver_2 = ppISourceResolver
            
            if ((*(*ppISourceResolver_2 + 0x20))(ppISourceResolver_2, r10_1, rdx_9, 1, 0, &var_78, 
                    &var_98) s>= 0)
                if (r14_3 != 0)
                    (*r14_3)[2](r14_3)
                
                goto label_1405fe7ed
            
            *arg1 = 0
            
            if (r14_3 != 0)
                (*r14_3)[2](r14_3)
            
            int64_t* rcx_36 = var_98
            
            if (rcx_36 != 0)
                (*(*rcx_36 + 0x10))(rcx_36)
            
            struct IMFSourceResolver ppISourceResolver_3 = ppISourceResolver
            
            if (ppISourceResolver_3 != 0)
                (*(*ppISourceResolver_3 + 0x10))(ppISourceResolver_3)
    else
        *arg1 = 0
        struct IMFSourceResolver ppISourceResolver_1 = ppISourceResolver
        
        if (ppISourceResolver_1 != 0)
            (*(*ppISourceResolver_1 + 0x10))(ppISourceResolver_1)
else
    char rax_1 = sub_140a32ae0(arg3, u"audcap://", 1)
    char rax_2
    
    if (rax_1 == 0)
        rax_2 = sub_140a32ae0(arg3, u"vidcap://", 1)
    
    struct IMFMediaSource ppSource
    
    if (rax_1 != 0 || rax_2 != 0)
        int64_t r14_2 = *arg3
        struct IMFAttributes var_a8 = 0
        
        if (MFCreateAttributes(&var_a8, 2) s>= 0)
            int128_t* const r8 = &data_142d5b378
            
            if (rax_1 != 0)
                r8 = &data_142d5b368
            
            struct IMFAttributes rcx_20 = var_a8
            
            if ((*(*rcx_20 + 0xc0))(rcx_20, &data_142d5b2f8, r8) s>= 0)
                void* const rdx_6 = &data_142d5b328
                
                if (rax_1 != 0)
                    rdx_6 = &data_142d5b348
                
                struct IMFAttributes rcx_22 = var_a8
                
                if ((*(*rcx_22 + 0xc8))(rcx_22, rdx_6, r14_2 + 0x12) s>= 0)
                    ppSource = 0
                    
                    if (MFCreateDeviceSource(var_a8, &ppSource) s>= 0)
                        *arg1 = ppSource
                        ppSource = 0
                        struct IMFAttributes rcx_26 = var_a8
                        
                        if (rcx_26 != 0)
                            (*(*rcx_26 + 0x10))(rcx_26)
                    else
                        *arg1 = 0
                        struct IMFMediaSource ppSource_4 = ppSource
                        
                        if (ppSource_4 != 0)
                            (*(*ppSource_4 + 0x10))(ppSource_4)
                        
                        struct IMFAttributes rcx_25 = var_a8
                        
                        if (rcx_25 != 0)
                            (*(*rcx_25 + 0x10))(rcx_25)
                else
                    *arg1 = 0
                    struct IMFAttributes rcx_23 = var_a8
                    
                    if (rcx_23 != 0)
                        (*(*rcx_23 + 0x10))(rcx_23)
            else
                *arg1 = 0
                struct IMFAttributes rcx_21 = var_a8
                
                if (rcx_21 != 0)
                    (*(*rcx_21 + 0x10))(rcx_21)
        else
            *arg1 = 0
            struct IMFAttributes rcx_19 = var_a8
            
            if (rcx_19 != 0)
                (*(*rcx_19 + 0x10))(rcx_19)
    else
        if (sub_140a32ae0(arg3, u"file://", 1) == 0)
            goto label_1405fe648
        
        int64_t r13_1 = *arg3
        
        if (arg4 == 0)
            sub_140a464c0()
            char const (* r9)[0x4] = data_14399ea08
            int64_t rax_10 = (*(r9 + 0x18))(&data_14399ea08, r13_1 + 0xe, 0, r9)
            int64_t* ppSource_3 = j_sub_140a82f30(0x18)
            int64_t* ppSource_6 = ppSource_3
            ppSource = ppSource_3
            
            if (ppSource_3 == 0)
                ppSource_6 = nullptr
            else
                ppSource_3[1].d = 1
                *(ppSource_3 + 0xc) = 1
                *ppSource_6 = &data_142d42ea8
                ppSource_6[2] = rax_10
            
            int64_t var_60 = rax_10
            int64_t* ppSource_10 = ppSource_6
            
            if (arg2 != &var_60)
                *arg2 = rax_10
                var_60 = 0
                sub_1405aeff0(&arg2[1], &ppSource_10)
                ppSource_6 = ppSource_10
            
            if (ppSource_6 != 0)
                ppSource_6[1].d -= 1
                
                if (ppSource_6[1].d == 1)
                    (**ppSource_6)(ppSource_6)
                    int32_t rax_13 = *(ppSource_6 + 0xc)
                    *(ppSource_6 + 0xc) -= 1
                    
                    if (rax_13 == 1)
                        (*(*ppSource_6 + 8))(ppSource_6, 1)
        else
            struct IMFMediaSource ppSource_1 = j_sub_140a82f30(0xa8)
            struct IMFMediaSource ppSource_7 = ppSource_1
            ppSource = ppSource_1
            
            if (ppSource_1 == 0)
                ppSource_7 = 0
            else
                memset(ppSource_1, 0, 0x90)
                sub_140b4c2a0(ppSource_7)
                __builtin_memset(ppSource_7 + 0x90, 0, 0x18)
                *ppSource_7 = &data_142d5fff0
                sub_140b55290(ppSource_7, 1)
                (*(*ppSource_7 + 0xd8))(ppSource_7, 0)
            
            if (sub_140b1ef70(ppSource_7 + 0x98, r13_1 + 0xe, 0) != 0)
                int64_t* ppSource_2 = j_sub_140a82f30(0x18)
                int64_t* ppSource_5 = ppSource_2
                ppSource = ppSource_2
                
                if (ppSource_2 == 0)
                    ppSource_5 = nullptr
                else
                    ppSource_2[1].d = 1
                    *(ppSource_2 + 0xc) = 1
                    *ppSource_5 = &data_142d62ce0
                    ppSource_5[2] = ppSource_7
                
                struct IMFMediaSource ppSource_8 = ppSource_7
                int64_t* ppSource_9 = ppSource_5
                
                if (arg2 != &ppSource_8)
                    *arg2 = ppSource_7
                    ppSource_8 = 0
                    sub_1405aeff0(&arg2[1], &ppSource_9)
                    ppSource_5 = ppSource_9
                
                if (ppSource_5 != 0)
                    ppSource_5[1].d -= 1
                    
                    if (ppSource_5[1].d == 1)
                        (**ppSource_5)(ppSource_5)
                        int32_t rax_8 = *(ppSource_5 + 0xc)
                        *(ppSource_5 + 0xc) -= 1
                        
                        if (rax_8 == 1)
                            (*(*ppSource_5 + 8))(ppSource_5, 1)
            else if (ppSource_7 != 0)
                int64_t rcx_11 = *(ppSource_7 + 0x98)
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                sub_140b4cb40(ppSource_7)
                j_sub_140a74f90(ppSource_7)
        
        int64_t* rcx_17 = *arg2
        int64_t rax_16
        
        if (rcx_17 != 0)
            rax_16 = (*(*rcx_17 + 0x28))(rcx_17)
        
        if (rcx_17 != 0 && rax_16 != 0)
            goto label_1405fe648
        
        *arg1 = 0

sub_1405ec6a0(arg2)
return arg1
