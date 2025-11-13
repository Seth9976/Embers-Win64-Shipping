// 函数: sub_142674160
// 地址: 0x142674160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg3

if (arg2[1].d != 0)
    int128_t* rdx = *arg2
    int32_t result_1 = *(result + 0x48) u>> 4 & 1
    int64_t var_68 = 0
    uint32_t r10_1 = 0
    uint32_t var_60_1 = 0
    int32_t r9 = 0
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x20)
    int32_t r8 = 0
    int96_t zmm1 = (*rdx).12
    
    if (arg4[1].d == 0)
        goto label_142674234
    
    int64_t* rcx_2 = *arg4
    
    if (rcx_2 == 0)
        goto label_142674234
    
    char rax_6 = (*(*rcx_2 + 0x28))(rcx_2)
    int64_t var_48
    
    if (rax_6 != 0)
        int64_t* rcx_3
        
        if (arg4[1].d == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *arg4
        
        result = (*(*rcx_3 + 0x48))(rcx_3, arg1 + 0x88, &var_48)
    
    int64_t var_40
    
    if (rax_6 == 0 || var_40.d != 0)
        int64_t var_50
        r8 = var_50.d
        int32_t var_5c
        r9 = var_5c
        r10_1 = var_60_1
    label_142674234:
        uint32_t rdi_1 = zmm1:4.d * 3
        result = zx.q(zmm1:8.d)
        uint32_t rbx_1 = (result * 3).d
        
        if (rbx_1 s> 0)
            if (rdi_1 s> r10_1)
                var_60_1 = rdi_1
                
                if (rdi_1 s> r9)
                    sub_1406105e0(&var_68)
                    r8 = var_50.d
            else if (rdi_1 s< r10_1)
                uint32_t rsi_2 = r10_1 - rdi_1
                
                if (r10_1 != rdi_1)
                    uint32_t rax_10 = r10_1 - rsi_2
                    
                    if (rax_10 != rdi_1)
                        int64_t r9_1 = var_68
                        memmove(r9_1 + (sx.q(rdi_1) << 2), r9_1 + (sx.q(rsi_2 + rdi_1) << 2), 
                            (rax_10 - rdi_1) << 2)
                        r10_1 = var_60_1
                    
                    var_60_1 = r10_1 - rsi_2
                    sub_1405dac90(&var_68)
                    r8 = var_50.d
            
            if (rbx_1 s> r8)
                var_50.d = rbx_1
                
                if (rbx_1 s> var_50:4.d)
                    sub_1405a4cf0(&var_58)
            else if (rbx_1 s< r8)
                int32_t rsi_4 = r8 - rbx_1
                
                if (r8 != rbx_1)
                    int32_t rax_15 = r8 - rsi_4
                    
                    if (rax_15 != rbx_1)
                        int64_t r9_2 = var_58
                        memmove(r9_2 + (sx.q(rbx_1) << 2), r9_2 + (sx.q(rsi_4 + rbx_1) << 2), 
                            (rax_15 - rbx_1) << 2)
                        r8 = var_50.d
                    
                    var_50.d = r8 - rsi_4
                    sub_1405dac90(&var_58)
            
            memcpy(var_68, &rdx[3], rdi_1 << 2)
            memcpy(var_58, rdx + (sx.q((zmm1.q u>> 0x20).d) + 4) * 0xc, rbx_1 << 2)
            int64_t rdi_2 = sx.q(*(arg1 + 0x2f8))
            int32_t rax_19 = (rdi_2 + 1).d
            *(arg1 + 0x2f8) = rax_19
            
            if (rax_19 s> *(arg1 + 0x2fc))
                sub_1407c3b60(arg1 + 0x2f0)
            
            int64_t* rcx_16 = rdi_2 * 0x38 + *(arg1 + 0x2f0)
            *rcx_16 = 0
            *rcx_16 = var_68
            __builtin_memset(&var_68, 0, 0x30)
            rcx_16[1].d = var_60_1
            *(rcx_16 + 0xc) = var_5c
            rcx_16[2] = 0
            rcx_16[2] = var_58
            rcx_16[3].d = var_50.d
            *(rcx_16 + 0x1c) = var_50:4.d
            rcx_16[4] = 0
            rcx_16[4] = var_48
            rcx_16[5].d = var_40.d
            *(rcx_16 + 0x2c) = var_40:4.d
            result = zx.q(result_1)
            rcx_16[6].d = result.d
    
    int64_t rcx_17 = var_48
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
    
    int64_t r9_3 = var_58
    
    if (r9_3 != 0)
        result = sub_140a74f90(r9_3)
    
    int64_t r9_4 = var_68
    
    if (r9_4 != 0)
        return sub_140a74f90(r9_4)

return result
