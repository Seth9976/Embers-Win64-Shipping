// 函数: sub_1414f96f0
// 地址: 0x1414f96f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
uint64_t var_30 = __security_cookie ^ &var_a8
*(arg1 + 1) = 0
__builtin_memset(&arg1[8], 0, 0x18)
uint64_t r12 = arg2
uint64_t rax_1
rax_1.b = arg4 != 0
*arg1 = rax_1.b
char* result = arg1
__builtin_memset(&arg1[0x20], 0, 0x58)

if (arg4 == 0 || arg6 == 0)
    arg1.b = 0
else
    arg1.b = 1

result[3] = arg1.b

if (arg4 != 0 && arg1.b == 0)
    arg2 = zx.q(*(arg4 + 0x3c))

if (arg4 == 0 || arg1.b != 0 || ((arg2 - 5).d & 0xffffffed) != 0 || arg2.d == 0x15)
    arg2.b = 0
else
    arg2.b = 1

result[1] = arg2.b

if (arg4 == 0 || arg1.b != 0 || arg2.b != 0 || (arg3 - 2).b u> 2)
    rax_1.b = 0
else
    rax_1.b = 1

int32_t r13 = 0
result[2] = rax_1.b

if (data_1439c7a08 s> 1)
    r13 = 0x10

uint32_t rcx = zx.d(arg3.b)
int128_t var_88
int32_t var_5c
int64_t rbx_1
int32_t rdi_1
int32_t r14_1

if (arg3.b == 0)
    rbx_1 = arg5
    r14_1 = 1
    rdi_1 = arg5:4.d
    
    if (arg4 != 0)
        int32_t rax_78 = data_1439c7ae8
        int16_t var_50_24 = 0
        var_88 = data_1439c7ad8
        int32_t var_78_25 = rax_78
        int32_t var_74_24 = rbx_1.d
        int32_t var_70_24 = rdi_1
        int32_t var_6c_25 = 0
        int32_t var_68_24 = 1
        int32_t var_64_24 = 0x10000
        int16_t var_60_24 = 1
        var_5c = 2
        int32_t var_58_5 = r13
        int32_t var_54_24 = 9
        wchar16 const* const var_48_24 = u"UnknownTexture2D"
        int16_t var_40_24 = 1
        char var_3e_25 = 0
        void*** rax_79 = sub_141188e50(r12, &var_88, u"RenderTexture0", 0)
        arg2 = zx.q(result[1])
        *(result + 8) = rax_79
        *(result + 0x60) = rax_79
    
    if (arg2.b != 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1.d)
        int32_t var_78_26 = data_143f02318
        int16_t var_50_25 = 0
        var_88 = data_143f02308
        int32_t var_6c_26 = 0
        int32_t var_68_25 = 1
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rbx_1:4.d)
        int32_t var_74_25 = ((temp2_1 & 3) + temp3_1) s>> 2
        int32_t var_64_25 = 0x10000
        int32_t var_70_25 = (temp5_1 + (temp4_1 & 3)) s>> 2
        int16_t var_60_25 = 1
        var_5c.q = 0x44
        int32_t var_54_25 = 0x10000
        wchar16 const* const var_48_25 = u"UnknownTexture2D"
        int16_t var_40_25 = 1
        char var_3e_26 = 0
        void*** rax_86 = sub_141188e50(r12, &var_88, u"CompressTexture0", 0)
        *(result + 0x20) = rax_86
        *(result + 0x60) = rax_86
    
label_1414fa49f:
    
    if (result[3] != 0)
        int32_t var_78_27 = data_1439c7ae8
        char var_3e_27 = 0
        int32_t var_6c_27 = 0
        int32_t var_58_6 = r13
        int32_t var_5c_2 = 2
    label_1414fa4cb:
        int16_t var_50_26 = 0
        int32_t var_74_26 = rbx_1.d
        var_88 = data_1439c7ad8
        int32_t var_70_26 = rdi_1
        int32_t var_68_26 = r14_1
        int32_t var_64_26 = 0x10000
        int16_t var_60_26 = r14_1.w
        int32_t var_54_26 = 9
        wchar16 const* const var_48_26 = u"UnknownTexture2D"
        int16_t var_40_26 = r14_1.w
        void*** rax_88 = sub_141188e50(r12, &var_88, u"CopyTexture0", 0)
        *(result + 0x48) = rax_88
        *(result + 0x60) = rax_88
else
    if (rcx == 2)
        rbx_1 = arg5
        r14_1 = 1
        
        if (arg4 != 0)
            int32_t rax_56 = data_1439c7ae8
            int32_t rdi_8 = arg5:4.d
            var_88 = data_1439c7ad8
            int16_t var_50_17 = 0
            int32_t var_78_18 = rax_56
            int32_t var_74_17 = rbx_1.d
            int32_t var_70_17 = rdi_8
            int32_t var_6c_18 = 0
            int32_t var_68_17 = 1
            int32_t var_64_17 = 0x10000
            int16_t var_60_17 = 1
            var_5c = 2
            int32_t var_58_3 = r13
            int32_t var_54_17 = 9
            wchar16 const* const var_48_17 = u"UnknownTexture2D"
            int16_t var_40_17 = 1
            char var_3e_18 = 0
            void*** rax_57 = sub_141188e50(r12, &var_88, u"RenderTexture0", 0)
            *(result + 8) = rax_57
            *(result + 0x60) = rax_57
            int32_t var_78_19 = data_1439c7ba8
            int16_t var_50_18 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_19 = 0
            char var_3e_19 = 0
            int32_t var_74_18 = rbx_1.d
            int32_t var_70_18 = rdi_8
            int32_t var_68_18 = 1
            int32_t var_64_18 = 0x10000
            int16_t var_60_18 = 1
            var_5c.q = 2
            int32_t var_54_18 = 9
            wchar16 const* const var_48_18 = u"UnknownTexture2D"
            int16_t var_40_18 = 1
            *(result + 0x10) = sub_141188e50(r12, &var_88, u"RenderTexture1", 0)
            int32_t var_78_20 = data_1439c7ba8
            int16_t var_50_19 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_20 = 0
            char var_3e_20 = 0
            int32_t var_74_19 = rbx_1.d
            int32_t var_70_19 = rdi_8
            int32_t var_68_19 = 1
            int32_t var_64_19 = 0x10000
            int16_t var_60_19 = 1
            var_5c.q = 2
            int32_t var_54_19 = 9
            wchar16 const* const var_48_19 = u"UnknownTexture2D"
            int16_t var_40_19 = 1
            void*** rax_61 = sub_141188e50(r12, &var_88, u"RenderTexture2", 0)
            arg2 = zx.q(result[1])
            *(result + 0x18) = rax_61
        
        if (arg2.b != 0)
            int32_t var_78_21 = data_143f02318
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(rbx_1.d)
            int16_t var_50_20 = 0
            var_88 = data_143f02308
            int32_t var_6c_21 = 0
            int32_t var_68_20 = 1
            int32_t var_64_20 = 0x10000
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(rbx_1:4.d)
            int32_t rdi_10 = ((temp7_1 & 3) + temp8_1) s>> 2
            int32_t var_74_20 = rdi_10
            int16_t var_60_20 = 1
            int32_t var_70_20 = (temp10_1 + (temp9_1 & 3)) s>> 2
            var_5c.q = 0x30
            int32_t var_54_20 = 0x10000
            wchar16 const* const var_48_20 = u"UnknownTexture2D"
            int16_t var_40_20 = 1
            char var_3e_21 = 0
            void*** rax_68 = sub_141188e50(r12, &var_88, u"CompressTexture0", 0)
            *(result + 0x28) = rax_68
            *(result + 0x60) = rax_68
            int32_t var_78_22 = data_143f02318
            int32_t temp11_1
            int32_t temp12_1
            temp11_1:temp12_1 = sx.q(rbx_1:4.d)
            int16_t var_50_21 = 0
            var_88 = data_143f02308
            int32_t var_74_21 = rdi_10
            int32_t var_70_21 = (temp12_1 + (temp11_1 & 3)) s>> 2
            int32_t var_6c_22 = 0
            char var_3e_22 = 0
            int32_t var_68_21 = 1
            int32_t var_64_21 = 0x10000
            int16_t var_60_21 = 1
            var_5c.q = 0x30
            int32_t var_54_21 = 0x10000
            wchar16 const* const var_48_21 = u"UnknownTexture2D"
            int16_t var_40_21 = 1
            void*** rax_73 = sub_141188e50(r12, &var_88, u"CompressTexture1", 0)
            *(result + 0x30) = rax_73
            *(result + 0x68) = rax_73
        
        rdi_1 = arg5:4.d
        
        if (result[2] != 0)
            int32_t var_78_23 = data_1439c7ae8
            int16_t var_50_22 = 0
            var_88 = data_1439c7ad8
            int32_t var_6c_23 = 0
            char var_3e_23 = 0
            int32_t var_74_22 = rbx_1.d
            int32_t var_70_22 = rdi_1
            int32_t var_68_22 = 1
            int32_t var_64_22 = 0x10000
            int16_t var_60_22 = 1
            int32_t var_5c_1 = 2
            int32_t var_58_4 = r13
            int32_t var_54_22 = 9
            wchar16 const* const var_48_22 = u"UnknownTexture2D"
            int16_t var_40_22 = 1
            void*** rax_75 = sub_141188e50(r12, &var_88, u"CopyTexture0", 0)
            *(result + 0x48) = rax_75
            *(result + 0x60) = rax_75
            int32_t var_78_24 = data_1439c7ae8
            int16_t var_50_23 = 0
            var_88 = data_1439c7ad8
            int32_t var_6c_24 = 0
            char var_3e_24 = 0
            int32_t var_74_23 = rbx_1.d
            int32_t var_70_23 = rdi_1
            int32_t var_68_23 = 1
            int32_t var_64_23 = 0x10000
            int16_t var_60_23 = 1
            var_5c_1.q = 2
            int32_t var_54_23 = 9
            wchar16 const* const var_48_23 = u"UnknownTexture2D"
            int16_t var_40_23 = 1
            void*** rax_77 = sub_141188e50(r12, &var_88, u"CopyTexture1", 0)
            *(result + 0x50) = rax_77
            *(result + 0x68) = rax_77
        
        goto label_1414fa49f
    
    void*** rax_27
    
    if (rcx == 3)
        rbx_1 = arg5
        r14_1 = 1
        
        if (arg4 != 0)
            int32_t rax_34 = data_1439c7ae8
            int32_t rdi_5 = arg5:4.d
            var_88 = data_1439c7ad8
            int16_t var_50_11 = 0
            int32_t var_78_12 = rax_34
            int32_t var_74_11 = rbx_1.d
            int32_t var_70_11 = rdi_5
            int32_t var_6c_12 = 0
            int32_t var_68_11 = 1
            int32_t var_64_11 = 0x10000
            int16_t var_60_11 = 1
            var_5c = 2
            int32_t var_58_2 = r13
            int32_t var_54_11 = 9
            wchar16 const* const var_48_11 = u"UnknownTexture2D"
            int16_t var_40_11 = 1
            char var_3e_12 = 0
            void*** rax_35 = sub_141188e50(r12, &var_88, u"RenderTexture0", 0)
            *(result + 8) = rax_35
            *(result + 0x60) = rax_35
            int32_t var_78_13 = data_1439c7ba8
            int16_t var_50_12 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_13 = 0
            char var_3e_13 = 0
            int32_t var_74_12 = rbx_1.d
            int32_t var_70_12 = rdi_5
            int32_t var_68_12 = 1
            int32_t var_64_12 = 0x10000
            int16_t var_60_12 = 1
            var_5c.q = 2
            int32_t var_54_12 = 9
            wchar16 const* const var_48_12 = u"UnknownTexture2D"
            int16_t var_40_12 = 1
            *(result + 0x10) = sub_141188e50(r12, &var_88, u"RenderTexture1", 0)
            int32_t var_78_14 = data_1439c7ba8
            int16_t var_50_13 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_14 = 0
            char var_3e_14 = 0
            int32_t var_74_13 = rbx_1.d
            int32_t var_70_13 = rdi_5
            int32_t var_68_13 = 1
            int32_t var_64_13 = 0x10000
            int16_t var_60_13 = 1
            var_5c.q = 2
            int32_t var_54_13 = 9
            wchar16 const* const var_48_13 = u"UnknownTexture2D"
            int16_t var_40_13 = 1
            void*** rax_39 = sub_141188e50(r12, &var_88, u"RenderTexture2", 0)
            arg2 = zx.q(result[1])
            *(result + 0x18) = rax_39
        
        if (arg2.b == 0)
            goto label_1414f9bc2
        
        int32_t var_78_15 = data_143f02318
        int32_t temp13_1
        int32_t temp14_1
        temp13_1:temp14_1 = sx.q(rbx_1.d)
        int16_t var_50_14 = 0
        var_88 = data_143f02308
        int32_t var_6c_15 = 0
        int32_t var_68_14 = 1
        int32_t var_64_14 = 0x10000
        int32_t temp15_1
        int32_t temp16_1
        temp15_1:temp16_1 = sx.q(rbx_1:4.d)
        int32_t rdi_7 = ((temp13_1 & 3) + temp14_1) s>> 2
        int32_t var_74_14 = rdi_7
        int16_t var_60_14 = 1
        int32_t var_70_14 = (temp16_1 + (temp15_1 & 3)) s>> 2
        var_5c.q = 0x30
        int32_t var_54_14 = 0x10000
        wchar16 const* const var_48_14 = u"UnknownTexture2D"
        int16_t var_40_14 = 1
        char var_3e_15 = 0
        void*** rax_46 = sub_141188e50(r12, &var_88, u"CompressTexture0", 0)
        *(result + 0x28) = rax_46
        *(result + 0x60) = rax_46
        int32_t var_78_16 = data_143f02318
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(rbx_1:4.d)
        int16_t var_50_15 = 0
        var_88 = data_143f02308
        int32_t var_74_15 = rdi_7
        int32_t var_70_15 = (temp18_1 + (temp17_1 & 3)) s>> 2
        int32_t var_6c_16 = 0
        char var_3e_16 = 0
        int32_t var_68_15 = 1
        int32_t var_64_15 = 0x10000
        int16_t var_60_15 = 1
        var_5c.q = 0x30
        int32_t var_54_15 = 0x10000
        wchar16 const* const var_48_15 = u"UnknownTexture2D"
        int16_t var_40_15 = 1
        void*** rax_51 = sub_141188e50(r12, &var_88, u"CompressTexture1", 0)
        *(result + 0x30) = rax_51
        *(result + 0x68) = rax_51
        int32_t rcx_24 = data_143f02318
        int32_t temp19_1
        int32_t temp20_1
        temp19_1:temp20_1 = sx.q(rbx_1:4.d)
        int16_t var_50_16 = 0
        var_88 = data_143f02308
        int32_t var_78_17 = rcx_24
        int32_t var_70_16 = (temp20_1 + (temp19_1 & 3)) s>> 2
        int32_t var_6c_17 = 0
        int32_t var_74_16 = rdi_7
        int32_t var_68_16 = 1
        int32_t var_64_16 = 0x10000
        int16_t var_60_16 = 1
        var_5c.q = 0x44
        int32_t var_54_16 = 0x10000
        wchar16 const* const var_48_16 = u"UnknownTexture2D"
        int16_t var_40_16 = 1
        char var_3e_17 = 0
        rax_27 = sub_141188e50(r12, &var_88, u"CompressTexture2", 0)
        *(result + 0x38) = rax_27
    label_1414f9bba:
        *(result + 0x70) = rax_27
    label_1414f9bc2:
        rdi_1 = arg5:4.d
        
        if (result[2] != 0)
            int32_t var_78_9 = data_1439c7ae8
            int16_t var_50_8 = 0
            var_88 = data_1439c7ad8
            int32_t var_6c_9 = 0
            char var_3e_9 = 0
            int32_t var_74_8 = rbx_1.d
            int32_t var_70_8 = rdi_1
            int32_t var_68_8 = 1
            int32_t var_64_8 = 0x10000
            int16_t var_60_8 = 1
            var_5c.q = 2
            int32_t var_54_8 = 9
            wchar16 const* const var_48_8 = u"UnknownTexture2D"
            int16_t var_40_8 = 1
            void*** rax_29 = sub_141188e50(r12, &var_88, u"CopyTexture0", 0)
            *(result + 0x48) = rax_29
            *(result + 0x60) = rax_29
            int32_t var_78_10 = data_1439c7ae8
            int16_t var_50_9 = 0
            var_88 = data_1439c7ad8
            int32_t var_6c_10 = 0
            char var_3e_10 = 0
            int32_t var_74_9 = rbx_1.d
            int32_t var_70_9 = rdi_1
            int32_t var_68_9 = 1
            int32_t var_64_9 = 0x10000
            int16_t var_60_9 = 1
            var_5c.q = 2
            int32_t var_54_9 = 9
            wchar16 const* const var_48_9 = u"UnknownTexture2D"
            int16_t var_40_9 = 1
            void*** rax_31 = sub_141188e50(r12, &var_88, u"CopyTexture1", 0)
            *(result + 0x50) = rax_31
            *(result + 0x68) = rax_31
            int32_t var_78_11 = data_1439c7ae8
            int16_t var_50_10 = 0
            var_88 = data_1439c7ad8
            int32_t var_6c_11 = 0
            char var_3e_11 = 0
            int32_t var_74_10 = rbx_1.d
            int32_t var_70_10 = rdi_1
            int32_t var_68_10 = 1
            int32_t var_64_10 = 0x10000
            int16_t var_60_10 = 1
            var_5c.q = 2
            int32_t var_54_10 = 9
            wchar16 const* const var_48_10 = u"UnknownTexture2D"
            int16_t var_40_10 = 1
            void*** rax_33 = sub_141188e50(r12, &var_88, u"CopyTexture2", 0)
            *(result + 0x58) = rax_33
            *(result + 0x70) = rax_33
        
        goto label_1414fa49f
    
    if (rcx == 4)
        rbx_1 = arg5
        r14_1 = 1
        
        if (arg4 != 0)
            int32_t rax_5 = data_1439c7ae8
            int32_t rdi_2 = arg5:4.d
            var_88 = data_1439c7ad8
            int16_t var_50_2 = 0
            int32_t var_78_3 = rax_5
            int32_t var_74_2 = rbx_1.d
            int32_t var_70_2 = rdi_2
            int32_t var_6c_3 = 0
            int32_t var_68_2 = 1
            int32_t var_64_2 = 0x10000
            int16_t var_60_2 = 1
            var_5c = 2
            int32_t var_58_1 = r13
            int32_t var_54_2 = 9
            wchar16 const* const var_48_2 = u"UnknownTexture2D"
            int16_t var_40_2 = 1
            char var_3e_3 = 0
            void*** rax_6 = sub_141188e50(r12, &var_88, u"RenderTexture0", 0)
            *(result + 8) = rax_6
            *(result + 0x60) = rax_6
            int32_t var_78_4 = data_1439c7ba8
            int16_t var_50_3 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_4 = 0
            char var_3e_4 = 0
            int32_t var_74_3 = rbx_1.d
            int32_t var_70_3 = rdi_2
            int32_t var_68_3 = 1
            int32_t var_64_3 = 0x10000
            int16_t var_60_3 = 1
            var_5c.q = 2
            int32_t var_54_3 = 9
            wchar16 const* const var_48_3 = u"UnknownTexture2D"
            int16_t var_40_3 = 1
            *(result + 0x10) = sub_141188e50(r12, &var_88, u"RenderTexture1", 0)
            int32_t var_78_5 = data_1439c7ba8
            int16_t var_50_4 = 0
            var_88 = data_1439c7b98
            int32_t var_6c_5 = 0
            char var_3e_5 = 0
            int32_t var_74_4 = rbx_1.d
            int32_t var_70_4 = rdi_2
            int32_t var_68_4 = 1
            int32_t var_64_4 = 0x10000
            int16_t var_60_4 = 1
            var_5c.q = 2
            int32_t var_54_4 = 9
            wchar16 const* const var_48_4 = u"UnknownTexture2D"
            int16_t var_40_4 = 1
            void*** rax_10 = sub_141188e50(r12, &var_88, u"RenderTexture2", 0)
            arg2 = zx.q(result[1])
            *(result + 0x18) = rax_10
        
        if (arg2.b == 0)
            goto label_1414f9bc2
        
        int32_t var_78_6 = data_143f02318
        int32_t temp21_1
        int32_t temp22_1
        temp21_1:temp22_1 = sx.q(rbx_1.d)
        int16_t var_50_5 = 0
        var_88 = data_143f02308
        int32_t var_6c_6 = 0
        int32_t var_68_5 = 1
        int32_t var_64_5 = 0x10000
        int32_t temp23_1
        int32_t temp24_1
        temp23_1:temp24_1 = sx.q(rbx_1:4.d)
        int32_t rdi_4 = ((temp21_1 & 3) + temp22_1) s>> 2
        int32_t var_74_5 = rdi_4
        int16_t var_60_5 = 1
        int32_t var_70_5 = (temp24_1 + (temp23_1 & 3)) s>> 2
        var_5c.q = 0x30
        int32_t var_54_5 = 0x10000
        wchar16 const* const var_48_5 = u"UnknownTexture2D"
        int16_t var_40_5 = 1
        char var_3e_6 = 0
        void*** rax_17 = sub_141188e50(r12, &var_88, u"CompressTexture0", 0)
        *(result + 0x28) = rax_17
        *(result + 0x60) = rax_17
        int32_t var_78_7 = data_143f02318
        int32_t temp25_1
        int32_t temp26_1
        temp25_1:temp26_1 = sx.q(rbx_1:4.d)
        int16_t var_50_6 = 0
        var_88 = data_143f02308
        int32_t var_74_6 = rdi_4
        int32_t var_70_6 = (temp26_1 + (temp25_1 & 3)) s>> 2
        int32_t var_6c_7 = 0
        char var_3e_7 = 0
        int32_t var_68_6 = 1
        int32_t var_64_6 = 0x10000
        int16_t var_60_6 = 1
        var_5c.q = 0x30
        int32_t var_54_6 = 0x10000
        wchar16 const* const var_48_6 = u"UnknownTexture2D"
        int16_t var_40_6 = 1
        void*** rax_22 = sub_141188e50(r12, &var_88, u"CompressTexture1", 0)
        *(result + 0x30) = rax_22
        *(result + 0x68) = rax_22
        int32_t rcx_12 = data_143f02318
        int32_t temp27_1
        int32_t temp28_1
        temp27_1:temp28_1 = sx.q(rbx_1:4.d)
        int16_t var_50_7 = 0
        var_88 = data_143f02308
        int32_t var_78_8 = rcx_12
        int32_t var_70_7 = (temp28_1 + (temp27_1 & 3)) s>> 2
        int32_t var_6c_8 = 0
        int32_t var_74_7 = rdi_4
        int32_t var_68_7 = 1
        int32_t var_64_7 = 0x10000
        int16_t var_60_7 = 1
        var_5c.q = 0x30
        int32_t var_54_7 = 0x10000
        wchar16 const* const var_48_7 = u"UnknownTexture2D"
        int16_t var_40_7 = 1
        char var_3e_8 = 0
        rax_27 = sub_141188e50(r12, &var_88, u"CompressTexture2", 0)
        *(result + 0x40) = rax_27
        goto label_1414f9bba
    
    if (rcx == 5)
        rbx_1 = arg5
        r14_1 = rcx - 4
        rdi_1 = arg5:4.d
        
        if (arg4 != 0)
            int32_t rax_2 = data_1439c7ae8
            int32_t var_68_1 = rcx - 4
            var_88 = data_1439c7ad8
            int16_t var_50_1 = 0
            int32_t var_78_1 = rax_2
            int32_t var_74_1 = rbx_1.d
            int32_t var_70_1 = rdi_1
            int32_t var_6c_1 = 0
            int32_t var_64_1 = 0x10000
            int16_t var_60_1 = r14_1.w
            var_5c.q = 4
            int32_t var_54_1 = 9
            wchar16 const* const var_48_1 = u"UnknownTexture2D"
            int16_t var_40_1 = r14_1.w
            char var_3e_1 = 0
            void*** rax_3 = sub_141188e50(r12, &var_88, u"RenderTexture0", 0)
            *(result + 8) = rax_3
            *(result + 0x60) = rax_3
        
        if (result[3] != 0)
            int32_t var_78_2 = data_1439c7ae8
            int32_t var_6c_2 = 0
            var_5c.q = 2
            char var_3e_2 = 0
            goto label_1414fa4cb
__security_check_cookie(var_30 ^ &var_a8)
return result
