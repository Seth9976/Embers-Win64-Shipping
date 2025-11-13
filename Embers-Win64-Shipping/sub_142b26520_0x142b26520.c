// 函数: sub_142b26520
// 地址: 0x142b26520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f0 = -2
void var_218
void* result = __security_cookie ^ &var_218
void* result_1 = result

while (arg4.b u>= 0xc0)
    result = &__dos_header.e_magic[zx.q(jump_table_142b26958[sx.q(arg4 & 0xf)])]
    
    switch (result)
        case 0x142b26586
            result = *arg1
            arg4 = *(*(result + 8) + (zx.q(arg4) u>> 0xd << 2))
        case 0x142b2659a
            result = *arg1
            arg4 = **(result + 8)
        case 0x142b265af
            if (arg1[0x5f].d s<= 0)
                arg1[0x5f].d = 5
            
            goto label_142b26940
        case 0x142b265cb
            int64_t* rcx_3 = arg1[3]
            
            if (rcx_3 != 0)
                result =
                    (*(*rcx_3 + 8))(rcx_3, (zx.q(arg4) & 0xffffffffffffff00) << 0x20 | 0x5000500)
            
            goto label_142b26940
        case 0x142b265f8
            int64_t* rcx_4 = arg1[3]
            
            if (rcx_4 != 0)
                result = (*(*rcx_4 + 8))(rcx_4, zx.q(arg4) & 0xffffff00)
            
            goto label_142b26940
        case 0x142b2661c
            if (arg1[3] != 0)
                arg1[0x40] = ((zx.q(arg4) & 0xff0000) | 0x500000000) u>> 8
                    | (zx.q(arg4) & 0xffffffffff000000) << 0x20
                arg1[0x41] = zx.q((0xffffff00 & arg4) << 0x10) | 0x500
                int64_t* rcx_8 = arg1[3]
                result = (*(*rcx_8 + 0x10))(rcx_8, &arg1[0x40], 2)
            
            if ((arg1[0x38].w & 0xffe0) != 0)
                goto label_142b26940
            
            if (arg1[0x3f] != 0)
                result = sub_142b25ae0(arg1, arg2, arg3, arg1[2])
                goto label_142b26940
            
        label_142b268e8:
            void* rcx_26 = arg1[2]
            
            if (rcx_26 != 0)
                result = sub_142a9e9d0(rcx_26, arg2, arg3)
            
            goto label_142b26940
        case 0x142b266b3
            if (arg1[3] != 0)
                int32_t* r10_1 = *(*arg1 + 8) + (zx.q(arg4) u>> 0xd << 2)
                uint64_t i_1 = zx.q(arg4 u>> 8) & 0x1f
                int32_t i_2 = i_1.d
                
                if (i_1.d != 0)
                    void* r8_1 = &arg1[0x40]
                    i_1 = zx.q(i_2)
                    uint64_t i
                    
                    do
                        int32_t rdx_12 = *r10_1
                        uint32_t rcx_11 = zx.d(rdx_12.b)
                        int64_t rcx_14
                        
                        if (rcx_11 u>= 0xc0)
                            int32_t rdx_13 = rdx_12 - rcx_11
                            rcx_11.b &= 0xf
                            rcx_14 = zx.q(rdx_13)
                            
                            if (rcx_11.b == 1)
                                rcx_14 = rcx_14 << 0x20 | 0x5000500
                        else
                            rcx_14 = zx.q((rcx_11 | (rdx_12 & 0xffffff00) << 8) << 8)
                                | (zx.q(rdx_12) & 0xffffffffffff0000) << 0x20
                        
                        *r8_1 = rcx_14
                        r10_1 = &r10_1[1]
                        r8_1 += 8
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                int64_t* rcx_16 = arg1[3]
                result = (*(*rcx_16 + 0x10))(rcx_16, &arg1[0x40], zx.q(i_2), i_1)
            
            goto label_142b268cf
        case 0x142b2675d
            int64_t* rcx_17 = arg1[3]
            
            if (rcx_17 != 0)
                uint64_t r9_3 = zx.q(arg4) u>> 0xd
                result = (*(*rcx_17 + 0x10))(rcx_17, *(*arg1 + 0x10) + (r9_3 << 3), 
                    zx.q(arg4 u>> 8) & 0x1f, r9_3)
            
        label_142b268cf:
            
            if ((arg1[0x38].w & 0xffe0) != 0)
                goto label_142b26940
            
            if (arg1[0x3f] == 0)
                goto label_142b268e8
            
            result = sub_142b25ae0(arg1, arg2, arg3, arg1[2])
            goto label_142b26940
        case 0x142b26793
            result = sub_142b26ba0(arg1, arg2, arg3, arg4)
            goto label_142b26940
        case 0x142b267a6
            result = sub_142b26a70(arg1, arg2, arg3, arg4)
            goto label_142b26940
        case 0x142b267b9
            if (arg1[3] != 0)
                int64_t* rcx_20 = *arg1
                struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_1e8 =
                    &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_1e0_1 = *rcx_20
                int64_t* var_1d8_1 = rcx_20
                int32_t var_1d0_1 = 0
                void var_1b8
                void* var_1c8_1 = &var_1b8
                int32_t var_1c0_1 = 0x28
                char var_1bc_1 = 0
                int32_t var_78_1 = 0
                int64_t var_70_1 = 0
                int32_t var_68_1 = 0xffffffff
                char var_64_1 = 0
                var_1e8 =
                    &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                int64_t var_60_1
                __builtin_memset(&var_60_1, 0, 0x18)
                int16_t var_1f8 = 0
                int32_t rdi_1 = arg2
                
                if (arg2 s<= arg3)
                    while (true)
                        var_1f8 = rdi_1.w
                        sub_142b23ec0(&var_1e8)
                        int128_t var_58_1
                        var_58_1.q = &var_1f8
                        int16_t* var_60_2 = &var_1f8
                        void var_1f6
                        var_58_1:8.q = &var_1f6
                        int32_t rax_25 = sub_142b23000(&var_1e8, &arg1[0x5f])
                        
                        if (arg1[0x5f].d s> 0)
                            result = sub_142b28d80(&var_1e8)
                            break
                        
                        int64_t* rcx_23 = arg1[3]
                        int64_t r9_4 = *rcx_23
                        (*(r9_4 + 0x10))(rcx_23, var_1c8_1, zx.q(rax_25 - 1), r9_4)
                        rdi_1 += 1
                        
                        if (rdi_1 s> arg3)
                            goto label_142b268ca
                    
                    goto label_142b26940
                
            label_142b268ca:
                result = sub_142b28d80(&var_1e8)
            
            goto label_142b268cf
        case 0x142b26936
            goto label_142b26940

int64_t* rcx_27 = arg1[3]

if (rcx_27 != 0)
    int64_t r8_10 = *rcx_27
    result = (*(r8_10 + 8))(rcx_27, 
        zx.q(((arg4 & 0xffffff00) << 8 | zx.d(arg4.b)) << 8)
            | (zx.q(arg4) & 0xffffffffffff0000) << 0x20, 
        r8_10)

label_142b26940:
__security_check_cookie(result_1 ^ &var_218)
return result
