// 函数: sub_14193add0
// 地址: 0x14193add0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rdi
int64_t var_18 = rdi
int32_t r14 = arg3
int64_t r13
r13.b = strstr(*arg1, "#version 310 es") != 0
bool var_f8 = strstr(*arg1, "gl_ViewID_OVR") != 0
int64_t r15
r15.b = strstr(*arg1, "samplerExternalOES") != 0
int64_t rdx

for (char* i = strstr(*arg1, "// end extensions"); i != 0; 
        i = strstr(sx.q(i.d - rdx.d + 0x11) + rdx, "// end extensions"))
    rdx = *arg1

int32_t rax_7 = *arg4

if (rax_7 == 2)
    sub_141930a30(arg5, "#version 310 es")
    rdi = sx.q(arg5[1].d)
    int32_t rcx_7 = *(arg5 + 0xc)
    
    if (rdi.d s<= 0)
        int32_t rax_9 = (rdi + 2).d
        arg5[1].d = rax_9
        
        if (rax_9 s> rcx_7)
            sub_1405daba0(arg5)
        
        *(rdi + *arg5) = 0xa
    else
        int32_t rax_8 = (rdi + 1).d
        arg5[1].d = rax_8
        
        if (rax_8 s> rcx_7)
            sub_1405daba0(arg5)
        
        rdi = sx.q((rdi - 1).d)
        int64_t rdx_3 = *arg5 + rdi
        memmove(rdx_3 + 1, rdx_3, 1)
        (*arg5)[rdi] = 0xa
    
    sub_14194bee0(arg1, "#version 310 es", &data_1437020ab)
else if (rax_7 == 3)
    int64_t rdi_1 = sx.q(arg5[1].d)
    int32_t rcx_15 = *(arg5 + 0xc)
    
    if (rdi_1.d s<= 0)
        int32_t rax_11 = (rdi_1 + 0xe).d
        arg5[1].d = rax_11
        
        if (rax_11 s> rcx_15)
            sub_1405daba0(arg5)
        
        uint64_t* rcx_21 = rdi_1 + *arg5
        *rcx_21 = 0x6e6f697372657623
        __builtin_strcpy(&rcx_21[1], " 100\n")
    else
        int32_t rax_10 = (rdi_1 + 0xd).d
        arg5[1].d = rax_10
        
        if (rax_10 s> rcx_15)
            sub_1405daba0(arg5)
        
        int64_t rdi_2 = sx.q((rdi_1 - 1).d)
        int64_t rdx_7 = *arg5 + rdi_2
        memmove(rdx_7 + 0xd, rdx_7, 1)
        __builtin_strncpy(*arg5 + rdi_2, "#version 100\n", 0xd)
    
    char* rax_12 = strstr(*arg1, "#version 100")
    int32_t rbp_3 = rax_12.d
    
    if (rax_12 != 0)
        char* i_1
        
        do
            int32_t rbp_4 = rbp_3 - *arg1
            int32_t rcx_23 = arg1[1].d
            int32_t rax_14 = rcx_23 - rbp_4
            
            if (rax_14 != 0xc)
                memmove(sx.q(rbp_4) + *arg1, sx.q(rbp_4 + 0xc) + *arg1, rax_14 - 0xc)
                rcx_23 = arg1[1].d
            
            arg1[1].d = rcx_23 - 0xc
            sub_1405dac10(arg1)
            int32_t r14_1 = arg1[1].d
            
            if (r14_1 s> *(arg1 + 0xc))
                sub_1405daba0(arg1)
            
            int64_t rdi_3 = sx.q(rbp_4)
            int64_t rcx_29 = *arg1 + rdi_3
            memmove(rcx_29, rcx_29, r14_1 - rbp_4)
            i_1 = strstr(*arg1 + rdi_3, "#version 100")
            rbp_3 = i_1.d
        while (i_1 != 0)
        r14 = arg3
    
    int64_t rdi_4 = sx.q(arg5[1].d)
    int32_t rcx_32 = *(arg5 + 0xc)
    
    if (rdi_4.d s<= 0)
        int32_t rax_19 = (rdi_4 + 0x1e).d
        arg5[1].d = rax_19
        
        if (rax_19 s> rcx_32)
            sub_1405daba0(arg5)
        
        void* rcx_39 = rdi_4 + *arg5
        __builtin_strncpy(rcx_39, "#ifdef GL_EXT_dr", 0x10)
        *(rcx_39 + 0x10) = 0x6174736e695f7761
        __builtin_strcpy(rcx_39 + 0x18, "nced\n")
    else
        int32_t rax_18 = (rdi_4 + 0x1d).d
        arg5[1].d = rax_18
        
        if (rax_18 s> rcx_32)
            sub_1405daba0(arg5)
        
        int64_t rdi_5 = sx.q((rdi_4 - 1).d)
        int64_t rdx_15 = *arg5 + rdi_5
        memmove(rdx_15 + 0x1d, rdx_15, 1)
        void* rcx_36 = *arg5 + rdi_5
        __builtin_strncpy(rcx_36, "#ifdef GL_EXT_dr", 0x10)
        *(rcx_36 + 0x10) = 0x6174736e695f7761
        __builtin_strncpy(rcx_36 + 0x18, "nced\n", 5)
    
    int64_t rdi_6 = sx.q(arg5[1].d)
    int32_t rcx_40 = *(arg5 + 0xc)
    
    if (rdi_6.d s<= 0)
        int32_t rax_22 = (rdi_6 + 0x21).d
        arg5[1].d = rax_22
        
        if (rax_22 s> rcx_40)
            sub_1405daba0(arg5)
        
        __builtin_strncpy(rdi_6 + *arg5, "#define UE_EXT_draw_instanced 1\n", 0x21)
    else
        int32_t rax_20 = (rdi_6 + 0x20).d
        arg5[1].d = rax_20
        
        if (rax_20 s> rcx_40)
            sub_1405daba0(arg5)
        
        int64_t rdi_7 = sx.q((rdi_6 - 1).d)
        int64_t rdx_19 = *arg5 + rdi_7
        memmove(rdx_19 + 0x20, rdx_19, 1)
        __builtin_strncpy(rdi_7 + *arg5, "#define UE_EXT_draw_instanced 1\n", 0x20)
    
    rdi = sx.q(arg5[1].d)
    int32_t rcx_46 = *(arg5 + 0xc)
    
    if (rdi.d s<= 0)
        int32_t rax_24 = (rdi + 8).d
        arg5[1].d = rax_24
        
        if (rax_24 s> rcx_46)
            sub_1405daba0(arg5)
        
        *(rdi + *arg5) = 0xa6669646e6523
    else
        int32_t rax_23 = (rdi + 7).d
        arg5[1].d = rax_23
        
        if (rax_23 s> rcx_46)
            sub_1405daba0(arg5)
        
        rdi = sx.q((rdi - 1).d)
        int64_t rdx_23 = *arg5 + rdi
        memmove(rdx_23 + 7, rdx_23, 1)
        __builtin_strncpy(*arg5 + rdi, "#endif\n", 7)

if (r14 == 0x8b30 && *(arg4 + 0x16) != 0)
    char* rax_27 = strstr(*arg1, "layout(early_fragment_tests) in;")
    int32_t rbp_8 = rax_27.d
    
    if (rax_27 != 0)
        char* i_2
        
        do
            int32_t rbp_9 = rbp_8 - *arg1
            int32_t rcx_52 = arg1[1].d
            int32_t rax_29 = rcx_52 - rbp_9
            
            if (rax_29 != 0x20)
                memmove(sx.q(rbp_9) + *arg1, sx.q(rbp_9 + 0x20) + *arg1, rax_29 - 0x20)
                rcx_52 = arg1[1].d
            
            arg1[1].d = rcx_52 - 0x20
            sub_1405dac10(arg1)
            int32_t r14_3 = arg1[1].d
            
            if (r14_3 s> *(arg1 + 0xc))
                sub_1405daba0(arg1)
            
            rdi = sx.q(rbp_9)
            int64_t rcx_58 = *arg1 + rdi
            memmove(rcx_58, rcx_58, r14_3 - rbp_9)
            i_2 = strstr(*arg1 + rdi, "layout(early_fragment_tests) in;")
            rbp_8 = i_2.d
        while (i_2 != 0)
        r14 = arg3

if (*(arg4 + 0xb) != 0 && r14 == 0x8b30)
    rdi = sx.q(arg5[1].d)
    int32_t rcx_61 = *(arg5 + 0xc)
    
    if (rdi.d s<= 0)
        int32_t rax_34 = (rdi + 0x2b).d
        arg5[1].d = rax_34
        
        if (rax_34 s> rcx_61)
            sub_1405daba0(arg5)
        
        void* rcx_68 = rdi + *arg5
        __builtin_strncpy(rcx_68, "#define UE_EXT_shader_framebuffe", 0x20)
        *(rcx_68 + 0x20) = 0x2068637465665f72
        *(rcx_68 + 0x28) = 0xa31
        *(rcx_68 + 0x2a) = 0
    else
        int32_t rax_33 = (rdi + 0x2a).d
        arg5[1].d = rax_33
        
        if (rax_33 s> rcx_61)
            sub_1405daba0(arg5)
        
        rdi = sx.q((rdi - 1).d)
        int64_t rdx_31 = *arg5 + rdi
        memmove(rdx_31 + 0x2a, rdx_31, 1)
        void* rcx_65 = *arg5 + rdi
        __builtin_strncpy(rcx_65, "#define UE_EXT_shader_framebuffe", 0x20)
        *(rcx_65 + 0x20) = 0x2068637465665f72
        *(rcx_65 + 0x28) = 0xa31

if (r15.b != 0)
    char* rax_35 = strstr(*arg1, "// Uses samplerExternalOES")
    int32_t rbp_11 = rax_35.d
    
    if (rax_35 != 0)
        char* i_3
        
        do
            int32_t rbp_12 = rbp_11 - *arg1
            int32_t rcx_70 = arg1[1].d
            int32_t rax_37 = rcx_70 - rbp_12
            
            if (rax_37 != 0x1a)
                memmove(sx.q(rbp_12) + *arg1, sx.q(rbp_12 + 0x1a) + *arg1, rax_37 - 0x1a)
                rcx_70 = arg1[1].d
            
            arg1[1].d = rcx_70 - 0x1a
            sub_1405dac10(arg1)
            int32_t r14_5 = arg1[1].d
            
            if (r14_5 s> *(arg1 + 0xc))
                sub_1405daba0(arg1)
            
            int64_t rdi_8 = sx.q(rbp_12)
            int64_t rcx_76 = *arg1 + rdi_8
            memmove(rcx_76, rcx_76, r14_5 - rbp_12)
            i_3 = strstr(*arg1 + rdi_8, "// Uses samplerExternalOES")
            rbp_11 = i_3.d
        while (i_3 != 0)
    
    sub_141940e70(arg5, arg1)
    rdi = sx.q(arg5[1].d)
    int32_t rcx_80 = *(arg5 + 0xc)
    
    if (data_143f0f1c2 != 0)
        if (rdi.d s<= 0)
            int32_t rax_42 = (rdi + 3).d
            arg5[1].d = rax_42
            
            if (rax_42 s> rcx_80)
                sub_1405daba0(arg5)
            
            int16_t* rcx_86 = rdi + *arg5
            *rcx_86 = 0xa0a
            rcx_86[1].b = 0
        else
            int32_t rax_41 = (rdi + 2).d
            arg5[1].d = rax_41
            
            if (rax_41 s> rcx_80)
                sub_1405daba0(arg5)
            
            int64_t rdi_9 = sx.q((rdi - 1).d)
            int64_t rdx_40 = *arg5 + rdi_9
            memmove(rdx_40 + 2, rdx_40, 1)
            *(*arg5 + rdi_9) = 0xa0a
        
        int64_t rdi_10 = sx.q(arg5[1].d)
        int32_t rcx_87 = *(arg5 + 0xc)
        
        if (rdi_10.d s<= 0)
            int32_t rax_44 = (rdi_10 + 0x30).d
            arg5[1].d = rax_44
            
            if (rax_44 s> rcx_87)
                sub_1405daba0(arg5)
            
            __builtin_strcpy(rdi_10 + *arg5, "#extension GL_OES_EGL_image_external : require\n")
        else
            int32_t rax_43 = (rdi_10 + 0x2f).d
            arg5[1].d = rax_43
            
            if (rax_43 s> rcx_87)
                sub_1405daba0(arg5)
            
            int64_t rdi_11 = sx.q((rdi_10 - 1).d)
            int64_t rdx_44 = *arg5 + rdi_11
            memmove(rdx_44 + 0x2f, rdx_44, 1)
            void* rcx_91 = *arg5 + rdi_11
            __builtin_strncpy(rcx_91, "#extension GL_OES_EGL_image_exte", 0x20)
            *(rcx_91 + 0x20) = 0x72203a206c616e72
            __builtin_strncpy(rcx_91 + 0x28, "equire\n", 7)
        
        rdi = sx.q(arg5[1].d)
        int32_t rcx_93 = *(arg5 + 0xc)
        
        if (rdi.d s<= 0)
            int32_t rax_48 = (rdi + 3).d
            arg5[1].d = rax_48
            
            if (rax_48 s> rcx_93)
                sub_1405daba0(arg5)
            
            int16_t* rcx_99 = rdi + *arg5
            *rcx_99 = 0xa0a
            rcx_99[1].b = 0
        else
            int32_t rax_47 = (rdi + 2).d
            arg5[1].d = rax_47
            
            if (rax_47 s> rcx_93)
                sub_1405daba0(arg5)
            
            rdi = sx.q((rdi - 1).d)
            int64_t rdx_48 = *arg5 + rdi
            memmove(rdx_48 + 2, rdx_48, 1)
            *(*arg5 + rdi) = 0xa0a
    else if (rdi.d s<= 0)
        int32_t rax_50 = (rdi + 0x26).d
        arg5[1].d = rax_50
        
        if (rax_50 s> rcx_80)
            sub_1405daba0(arg5)
        
        __builtin_strcpy(rdi + *arg5, "#define samplerExternalOES sampler2D\n")
    else
        int32_t rax_49 = (rdi + 0x25).d
        arg5[1].d = rax_49
        
        if (rax_49 s> rcx_80)
            sub_1405daba0(arg5)
        
        rdi = sx.q((rdi - 1).d)
        int64_t rdx_52 = *arg5 + rdi
        memmove(rdx_52 + 0x25, rdx_52, 1)
        __builtin_strncpy(*arg5 + rdi, "#define samplerExternalOES sampler2D\n", 0x25)

if (var_f8 != 0)
    sub_141940e70(arg5, arg1)
    rdi = sx.q(arg5[1].d)
    int32_t rcx_108 = *(arg5 + 0xc)
    
    if (data_143f0f1c1 != 0)
        if (rdi.d s<= 0)
            int32_t rax_52 = (rdi + 3).d
            arg5[1].d = rax_52
            
            if (rax_52 s> rcx_108)
                sub_1405daba0(arg5)
            
            int16_t* rcx_114 = rdi + *arg5
            *rcx_114 = 0xa0a
            rcx_114[1].b = 0
        else
            int32_t rax_51 = (rdi + 2).d
            arg5[1].d = rax_51
            
            if (rax_51 s> rcx_108)
                sub_1405daba0(arg5)
            
            int64_t rdi_12 = sx.q((rdi - 1).d)
            int64_t rdx_57 = *arg5 + rdi_12
            memmove(rdx_57 + 2, rdx_57, 1)
            *(*arg5 + rdi_12) = 0xa0a
        
        int64_t rdi_13 = sx.q(arg5[1].d)
        int32_t rcx_115 = *(arg5 + 0xc)
        
        if (rdi_13.d s<= 0)
            int32_t rax_54 = (rdi_13 + 0x27).d
            arg5[1].d = rax_54
            
            if (rax_54 s> rcx_115)
                sub_1405daba0(arg5)
            
            __builtin_strncpy(rdi_13 + *arg5, "#extension GL_OVR_multiview2 : enable\n", 0x27)
        else
            int32_t rax_53 = (rdi_13 + 0x26).d
            arg5[1].d = rax_53
            
            if (rax_53 s> rcx_115)
                sub_1405daba0(arg5)
            
            int64_t rdi_14 = sx.q((rdi_13 - 1).d)
            int64_t rdx_61 = *arg5 + rdi_14
            memmove(rdx_61 + 0x26, rdx_61, 1)
            __builtin_strncpy(*arg5 + rdi_14, "#extension GL_OVR_multiview2 : enable\n", 0x26)
        
        rdi = sx.q(arg5[1].d)
        int32_t rcx_123 = *(arg5 + 0xc)
        
        if (rdi.d s<= 0)
            int32_t rax_56 = (rdi + 3).d
            arg5[1].d = rax_56
            
            if (rax_56 s> rcx_123)
                sub_1405daba0(arg5)
            
            int16_t* rcx_129 = rdi + *arg5
            *rcx_129 = 0xa0a
            rcx_129[1].b = 0
        else
            int32_t rax_55 = (rdi + 2).d
            arg5[1].d = rax_55
            
            if (rax_55 s> rcx_123)
                sub_1405daba0(arg5)
            
            rdi = sx.q((rdi - 1).d)
            int64_t rdx_65 = *arg5 + rdi
            memmove(rdx_65 + 2, rdx_65, 1)
            *(*arg5 + rdi) = 0xa0a
    else if (rdi.d s<= 0)
        int32_t rax_59 = (rdi + 0x19).d
        arg5[1].d = rax_59
        
        if (rax_59 s> rcx_108)
            sub_1405daba0(arg5)
        
        void* rcx_134 = rdi + *arg5
        __builtin_strncpy(rcx_134, "#define gl_ViewI", 0x10)
        *(rcx_134 + 0x10) = 0xa302052564f5f44
        *(rcx_134 + 0x18) = 0
    else
        int32_t rax_57 = (rdi + 0x18).d
        arg5[1].d = rax_57
        
        if (rax_57 s> rcx_108)
            sub_1405daba0(arg5)
        
        rdi = sx.q((rdi - 1).d)
        int64_t rdx_69 = *arg5 + rdi
        memmove(rdx_69 + 0x18, rdx_69, 1)
        int64_t rax_58 = *arg5
        __builtin_strncpy(rdi + rax_58, "#define gl_ViewI", 0x10)
        *(rdi + rax_58 + 0x10) = 0xa302052564f5f44

int32_t rax_60 = arg4[1]

if (rax_60 u> 0x18)
    if (r13.b != 0)
        rdi.b = 0
    else
        rdi.b = 1
else if (test_bit(0x100a040, rax_60) || r13.b != 0)
    rdi.b = 0
else
    rdi.b = 1

if ((rax_60 != 0xd && rax_60 != 0x18) || rdi.b == 0)
    sub_141940e70(arg5, arg1)
    
    if (*(arg4 + 9) != 0 || rdi.b == 0)
        int64_t rdi_15 = sx.q(arg5[1].d)
        int32_t rcx_138 = *(arg5 + 0xc)
        
        if (*arg4 != 1)
            if (rdi_15.d s<= 0)
                int32_t rax_69 = (rdi_15 + 0x37).d
                arg5[1].d = rax_69
                
                if (rax_69 s> rcx_138)
                    sub_1405daba0(arg5)
                
                __builtin_strncpy(rdi_15 + *arg5, 
                    "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n", 0x37)
            else
                int32_t rax_68 = (rdi_15 + 0x36).d
                arg5[1].d = rax_68
                
                if (rax_68 s> rcx_138)
                    sub_1405daba0(arg5)
                
                int64_t rdi_21 = sx.q((rdi_15 - 1).d)
                int64_t rdx_86 = *arg5 + rdi_21
                memmove(rdx_86 + 0x36, rdx_86, 1)
                __builtin_strncpy(*arg5 + rdi_21, 
                    "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n", 0x36)
            
            int64_t rdi_22 = sx.q(arg5[1].d)
            int32_t rcx_167 = *(arg5 + 0xc)
            
            if (rdi_22.d s<= 0)
                int32_t rax_71 = (rdi_22 + 0x8c).d
                arg5[1].d = rax_71
                
                if (rax_71 s> rcx_167)
                    sub_1405daba0(arg5)
                
                void* rcx_174 = rdi_22 + *arg5
                __builtin_strncpy(rcx_174, 
                    "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) "
                "layout(location=Pos) Modifiers Semantic { PreType P", 
                    0x80)
                *(rcx_174 + 0x80) = 0x3b6570795474736f
                *(rcx_174 + 0x88) = 0xa7d20
            else
                int32_t rax_70 = (rdi_22 + 0x8b).d
                arg5[1].d = rax_70
                
                if (rax_70 s> rcx_167)
                    sub_1405daba0(arg5)
                
                int64_t rdi_23 = sx.q((rdi_22 - 1).d)
                int64_t rdx_90 = *arg5 + rdi_23
                memmove(rdx_90 + 0x8b, rdx_90, 1)
                void* rcx_171 = *arg5 + rdi_23
                __builtin_strncpy(rcx_171, 
                    "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) "
                "layout(location=Pos) Modifiers Semantic { PreType P", 
                    0x80)
                *(rcx_171 + 0x80) = 0x3b6570795474736f
                *(rcx_171 + 0x88) = 0x7d20
                *(rcx_171 + 0x8a) = 0xa
        else
            if (rdi_15.d s<= 0)
                int32_t rax_62 = (rdi_15 + 0x34).d
                arg5[1].d = rax_62
                
                if (rax_62 s> rcx_138)
                    sub_1405daba0(arg5)
                
                __builtin_strcpy(rdi_15 + *arg5, 
                    "#extension GL_ARB_separate_shader_objects : enable\n")
            else
                int32_t rax_61 = (rdi_15 + 0x33).d
                arg5[1].d = rax_61
                
                if (rax_61 s> rcx_138)
                    sub_1405daba0(arg5)
                
                int64_t rdi_16 = sx.q((rdi_15 - 1).d)
                int64_t rdx_74 = *arg5 + rdi_16
                memmove(rdx_74 + 0x33, rdx_74, 1)
                __builtin_strncpy(*arg5 + rdi_16, 
                    "#extension GL_ARB_separate_shader_objects : enable\n", 0x33)
            
            int64_t rdi_17 = sx.q(arg5[1].d)
            int32_t rcx_146 = *(arg5 + 0xc)
            
            if (rdi_17.d s<= 0)
                int32_t rax_64 = (rdi_17 + 0x37).d
                arg5[1].d = rax_64
                
                if (rax_64 s> rcx_146)
                    sub_1405daba0(arg5)
                
                __builtin_strncpy(rdi_17 + *arg5, 
                    "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n", 0x37)
            else
                int32_t rax_63 = (rdi_17 + 0x36).d
                arg5[1].d = rax_63
                
                if (rax_63 s> rcx_146)
                    sub_1405daba0(arg5)
                
                int64_t rdi_18 = sx.q((rdi_17 - 1).d)
                int64_t rdx_78 = *arg5 + rdi_18
                memmove(rdx_78 + 0x36, rdx_78, 1)
                __builtin_strncpy(*arg5 + rdi_18, 
                    "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n", 0x36)
            
            int64_t rdi_19 = sx.q(arg5[1].d)
            int32_t rcx_154 = *(arg5 + 0xc)
            
            if (rdi_19.d s<= 0)
                int32_t rax_67 = (rdi_19 + 0x91).d
                arg5[1].d = rax_67
                
                if (rax_67 s> rcx_154)
                    sub_1405daba0(arg5)
                
                __builtin_strncpy(rdi_19 + *arg5, 
                    "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) "
                "layout(location=Pos) Interp Modifiers struct { PreType PostType; }\n", 
                    0x91)
            else
                int32_t rax_65 = (rdi_19 + 0x90).d
                arg5[1].d = rax_65
                
                if (rax_65 s> rcx_154)
                    sub_1405daba0(arg5)
                
                int64_t rdi_20 = sx.q((rdi_19 - 1).d)
                int64_t rdx_82 = *arg5 + rdi_20
                memmove(rdx_82 + 0x90, rdx_82, 1)
                __builtin_strncpy(rdi_20 + *arg5, 
                    "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) "
                "layout(location=Pos) Interp Modifiers struct { PreType PostType; }\n", 
                    0x90)
    else
        int32_t r9 = arg5[1].d
        
        if (r9 s<= 0)
            sub_1405f18d0(arg5, "#define INTERFACE_LOCATION(Pos) \n", 0x22)
        else
            sub_14193f080(arg5, "#define INTERFACE_LOCATION(Pos) \n", 0x21, r9 - 1)
        
        int32_t r9_2 = arg5[1].d
        
        if (r9_2 s<= 0)
            sub_1405f18d0(arg5, 
                "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) Modifiers "
            "Semantic { Interp PreType PostType; }\n", 
                0x7e)
        else
            sub_14193f080(arg5, 
                "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) Modifiers "
            "Semantic { Interp PreType PostType; }\n", 
                0x7d, r9_2 - 1)

if (*arg4 == 1 && strstr(*arg5, "#version 150") != 0)
    int32_t r9_4 = arg5[1].d
    
    if (r9_4 s<= 0)
        sub_1405f18d0(arg5, &data_14370204c, 3)
    else
        sub_14193f080(arg5, &data_14370204c, 2, r9_4 - 1)
    
    int32_t r9_6 = arg5[1].d
    
    if (r9_6 s<= 0)
        sub_1405f18d0(arg5, "#extension GL_ARB_gpu_shader5 : enable\n", 0x28)
    else
        sub_14193f080(arg5, "#extension GL_ARB_gpu_shader5 : enable\n", 0x27, r9_6 - 1)
    
    int32_t r9_8 = arg5[1].d
    
    if (r9_8 s<= 0)
        sub_1405f18d0(arg5, &data_14370204c, 3)
    else
        sub_14193f080(arg5, &data_14370204c, 2, r9_8 - 1)

if (arg2[1].d s> 1)
    int32_t r9_10 = arg5[1].d
    
    if (r9_10 s<= 0)
        sub_1405f18d0(arg5, &data_142ff7a98, 4)
    else
        sub_14193f080(arg5, &data_142ff7a98, 3, r9_10 - 1)
    
    void var_e8
    sub_1408f2b40(&var_e8, *arg2)
    char* var_60
    sub_141930a30(arg5, var_60)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int32_t r9_12 = arg5[1].d
    
    if (r9_12 s<= 0)
        sub_1405f18d0(arg5, &data_14370209c, 2)
    else
        sub_14193f080(arg5, &data_14370209c, 1, r9_12 - 1)

if (var_f8 != 0 && data_143f0f1c1 != 0 && arg3 == 0x8b31)
    int32_t r9_14 = arg5[1].d
    
    if (r9_14 s<= 0)
        sub_1405f18d0(arg5, &data_14370204c, 3)
    else
        sub_14193f080(arg5, &data_14370204c, 2, r9_14 - 1)
    
    int32_t r9_16 = arg5[1].d
    
    if (r9_16 s<= 0)
        sub_1405f18d0(arg5, "layout(num_views = 2) in;\n", 0x1b)
    else
        sub_14193f080(arg5, "layout(num_views = 2) in;\n", 0x1a, r9_16 - 1)
    
    int32_t r9_18 = arg5[1].d
    
    if (r9_18 s<= 0)
        sub_1405f18d0(arg5, &data_14370204c, 3)
    else
        sub_14193f080(arg5, &data_14370204c, 2, r9_18 - 1)
    
    goto label_14193c158

if (arg3 != 0x91b9)
label_14193c158:
    char const* const rdx_94 = "#define HLSLCC_DX11ClipSpace 0 \n"
    int32_t r9_20 = arg5[1].d
    
    if (data_143efbce0 == 0)
        rdx_94 = "#define HLSLCC_DX11ClipSpace 1 \n"
    
    if (r9_20 s<= 0)
        sub_1405f18d0(arg5, rdx_94, 0x21)
    else
        sub_14193f080(arg5, rdx_94, 0x20, r9_20 - 1)

int32_t r9_22 = arg5[1].d

if (r9_22 s<= 0)
    sub_1405f18d0(arg5, &data_14370204c, 3)
else
    sub_14193f080(arg5, &data_14370204c, 2, r9_22 - 1)

int64_t result = sub_141930a30(arg5, *arg1)
__security_check_cookie(rax_1 ^ &var_118)
return result
