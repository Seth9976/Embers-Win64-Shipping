// 函数: sub_14183a8c0
// 地址: 0x14183a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rsi
rsi.b = (*(*arg2 + 0x1d0))(arg2) != 0
int16_t* var_a8
int32_t var_a0
int16_t* const var_98
int32_t var_90
int16_t* var_78

if ((*(*arg2 + 0x160))(arg2) s>= 3)
    char rax_10 = (*(*arg2 + 0x1d0))(arg2)
    int64_t r9_1 = *arg2
    int16_t* var_88
    int32_t var_80
    int16_t* rcx_17
    
    if (rax_10 != 0)
        int32_t rax_16 = (*(r9_1 + 0x160))(arg2, arg5, arg6, r9_1)
        int64_t r9_4 = *arg2
        int16_t* rcx_32
        
        if (rax_16 s> 9)
            (*(r9_4 + 0x200))(arg2, arg4, &var_a8, r9_4)
            int32_t rax_27 = (*(*arg2 + 0x160))(arg2)
            sub_140b291e0(arg4, &var_88, 0)
            int16_t* rsi_4 = &data_142d40450
            int16_t* r13_3 = &data_142d40450
            
            if (var_80 != 0)
                r13_3 = var_88
            
            wchar16 const* const r14_3
            
            if (rax_27 s>= 3)
                r14_3 = u"FilesV3"
                
                if (rax_27 s< 0xc)
                    r14_3 = u"FilesV2"
            else
                r14_3 = u"Files"
            
            int16_t* var_b0_3 = r13_3
            int16_t* var_b8_3 = var_a8
            sub_140b21160(arg4, 0x10, 0)
            sub_140a2e390(&var_98, u"%s/%02d/%016llX_%s.file", r14_3)
            int16_t* const rax_30 = &data_142d40450
            
            if (var_90 != 0)
                rax_30 = var_98
            
            if (arg3[1].d != 0)
                rsi_4 = *arg3
            
            int32_t var_70
            var_70.q = rax_30
            var_78 = rsi_4
            *arg1 = 0
            arg1[1] = 0
            sub_140b0f5f0(arg1, &var_78, 2)
            rcx_17 = var_98
        label_14183ad50:
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rcx_32 = var_88
        else
            int64_t var_68
            __builtin_memset(&var_68, 0, 0x14)
            (*(r9_4 + 0x1f8))(arg2, arg4, &var_68, r9_4)
            int32_t rax_18 = (*(*arg2 + 0x160))(arg2)
            sub_140b291e0(arg4, &var_98, 0)
            int16_t* rsi_3 = &data_142d40450
            int16_t* rax_19 = &data_142d40450
            
            if (var_90 != 0)
                rax_19 = var_98
            
            var_78 = rax_19
            sub_141829dd0(&var_a8, &var_68, 0x14)
            int16_t* rax_20 = &data_142d40450
            int16_t* rbx_4 = var_a8
            
            if (var_a0 != 0)
                rax_20 = rbx_4
            
            var_a8 = rax_20
            wchar16 const* const r14_2
            
            if (rax_18 s>= 3)
                r14_2 = u"FilesV3"
                
                if (rax_18 s< 0xc)
                    r14_2 = u"FilesV2"
            else
                r14_2 = u"Files"
            
            sub_140b21160(arg4, 0x10, 0)
            int16_t* var_b0_2 = var_78
            int16_t* var_b8_2 = var_a8
            sub_140a2e390(&var_88, u"%s/%02d/%s_%s.file", r14_2)
            int16_t* rax_25 = &data_142d40450
            
            if (var_80 != 0)
                rax_25 = var_88
            
            if (arg3[1].d != 0)
                rsi_3 = *arg3
            
            var_a0.q = rax_25
            var_a8 = rsi_3
            *arg1 = 0
            arg1[1] = 0
            sub_140b0f5f0(arg1, &var_a8, 2)
            int16_t* rcx_25 = var_88
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            rcx_32 = var_98
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
    else
        (*(r9_1 + 0x1d8))(arg2, arg4, &var_78, r9_1)
        int32_t rax_12 = (*(*arg2 + 0x160))(arg2)
        
        if (rax_12 s>= 3)
            sub_140b291e0(arg4, &var_88, 0)
            int16_t* const rsi_2 = &data_142d40450
            int16_t* const r13_1 = &data_142d40450
            
            if (var_80 != 0)
                r13_1 = var_88
            
            wchar16 const* const r14_1
            
            if (rax_12 s>= 6)
                r14_1 = u"ChunksV4"
                
                if (rax_12 s< 0xf)
                    r14_1 = u"ChunksV3"
            else
                r14_1 = u"ChunksV2"
            
            int16_t* const var_b0_1 = r13_1
            int16_t* var_b8_1 = var_78
            sub_140b21160(arg4, 0x10, 0)
            sub_140a2e390(&var_a8, u"%s/%02d/%016llX_%s.chunk", r14_1)
            int16_t* rax_15 = &data_142d40450
            
            if (var_a0 != 0)
                rax_15 = var_a8
            
            if (arg3[1].d != 0)
                rsi_2 = *arg3
            
            var_90.q = rax_15
            var_98 = rsi_2
            *arg1 = 0
            arg1[1] = 0
            sub_140b0f5f0(arg1, &var_98, 2)
            rcx_17 = var_a8
            goto label_14183ad50
        
        sub_14183a160(arg1, arg3, arg4)
else if (rsi == 0)
    sub_14183a160(arg1, arg3, arg4)
else if (rsi == 1)
    sub_140b291e0(arg4, &var_78, 0)
    int16_t* const rsi_1 = &data_142d40450
    sub_140a2e390(&var_a8, u"Files/%02d/%s.file", zx.q(sub_140b212b0(arg4, 0x10, 0) u% 0x64))
    int16_t* const rax_8 = &data_142d40450
    
    if (var_a0 != 0)
        rax_8 = var_a8
    
    if (arg3[1].d != 0)
        rsi_1 = *arg3
    
    *arg1 = 0
    arg1[1] = 0
    var_98 = rsi_1
    var_90.q = rax_8
    sub_140b0f5f0(arg1, &var_98, 2)
    int16_t* rcx_6 = var_a8
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    *arg1 = 0
    arg1[1] = 0
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
