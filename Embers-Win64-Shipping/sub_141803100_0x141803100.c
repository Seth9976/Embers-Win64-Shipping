// 函数: sub_141803100
// 地址: 0x141803100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef9f00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef9f00)
    
    if (data_143ef9f00 == 0xffffffff)
        j_sub_140a1b080()
        int64_t var_78 = 0
        int32_t rdx_4 = 0
        int32_t var_70_2 = 0
        int32_t rcx_3 = 0
        int32_t var_6c_1 = 0
        int64_t rbx_2 = -1
        int64_t rdi_2 = -1
        
        do
            rdi_2 += 1
        while ((*u"++UE4+Release-4.25-CL-14469661")[rdi_2] != 0)
        
        if (rdi_2.d + 1 s> 0)
            sub_1405947f0(&var_78, rdi_2.d + 1)
            rcx_3 = var_6c_1
            rdx_4 = var_70_2
        
        int32_t rax_3 = rdi_2.d + 1 + rdx_4
        int32_t var_70_1 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_78)
        
        UnDecorator::getReferenceType(var_78, u"++UE4+Release-4.25-CL-14469661", (rdi_2.d + 1) * 2)
        int32_t rdx_5 = 0
        int32_t rcx_6 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int64_t var_88 = 0
        
        if ((*u"Embers")[0] != 0)
            do
                rbx_2 += 1
            while ((*u"Embers")[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_2.d + 1)
                rcx_6 = var_7c_1
                rdx_5 = var_80_1
            
            int32_t rax_4 = rbx_2.d + 1 + rdx_5
            int32_t var_80_2 = rax_4
            
            if (rax_4 s> rcx_6)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, u"Embers", (rbx_2.d + 1) * 2)
        
        int64_t var_38
        int64_t var_28
        int64_t* rax_6 = sub_141801000(&var_38, sub_140b698e0(&var_28))
        int16_t* const rbx_4 = &data_142d40450
        int16_t* const r15_1
        
        if (rax_6[1].d == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *rax_6
        
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 8)
        int32_t rax_7 = var_90_1 + 8
        var_90_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_98)
        
        int16_t var_a8_1 = 0x3f
        sub_1405a7220(var_98, 8, "Windows", 8, 0x3f)
        int64_t var_48
        int64_t* rax_8 = sub_141801000(&var_48, &var_98)
        int16_t* const rsi_1
        
        if (rax_8[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_8
        
        int64_t var_58
        int64_t* rax_9 = sub_141801000(&var_58, &var_78)
        
        if (rax_9[1].d != 0)
            *rax_9
        
        int64_t var_68
        int16_t** rax_10 = sub_141801000(&var_68, &var_88)
        
        if (rax_10[1].d != 0)
            rbx_4 = *rax_10
        
        int16_t* const var_a0_1 = r15_1
        var_a8_1.q = rsi_1
        sub_140a2e390(&data_143ef9ef0, u"%s/%s %s/%s", rbx_4)
        int64_t rcx_18 = var_68
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t rcx_19 = var_58
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = var_48
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = var_98
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_38
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = var_28
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_88
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = var_78
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        atexit(sub_142cebd50)
        _Init_thread_footer(&data_143ef9f00)

*arg1 = 0
int32_t rbx_1 = (data_143ef9ef8).d
int64_t rdi_1 = data_143ef9ef0
arg1[1].d = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(arg1, rbx_1, 0)
    memcpy(*arg1, rdi_1, rbx_1 * 2)
else
    *(arg1 + 0xc) = 0

return arg1
