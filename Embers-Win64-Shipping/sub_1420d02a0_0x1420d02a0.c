// 函数: sub_1420d02a0
// 地址: 0x1420d02a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_r9

if (entry_r9 != 0 && sub_140cbe180(entry_r9) != 0)
    int32_t r9 = *(entry_r9 + 0xc0)
    int32_t rdx = r9 - 1
    
    if (arg3 s< 0)
        rdx = 0
    else if (arg3 s< rdx)
        rdx = arg3
    
    int32_t r10 = *(entry_r9 + 0xc4)
    int32_t r8 = r10 - 1
    
    if (arg4 s< 0)
        r8 = 0
    else if (arg4 s< r8)
        r8 = arg4
    
    int32_t r15 = 1
    int32_t rbx
    
    if (arg5 s>= 1)
        rbx = r9
        
        if (arg5 s< r9)
            rbx = arg5
    else
        rbx = 1
    
    if (arg6 s>= 1)
        r15 = r10
        
        if (arg6 s< r10)
            r15 = arg6
    
    int32_t rcx_2 = rdx - r9
    int32_t var_5c = 0x467a0000
    int32_t rax_6 = 0
    int32_t var_78 = rdx
    
    if (rcx_2 + rbx s>= 0)
        rax_6 = rcx_2 + rbx
    
    int32_t var_74 = r8
    int32_t rbx_1 = rbx - rax_6
    int64_t var_68 = 6
    char var_60 = 1
    int32_t rcx_5 = r8 - r10
    int16_t var_58 = 0
    int32_t rax_7 = 0
    
    if (rcx_5 + r15 s>= 0)
        rax_7 = rcx_5 + r15
    
    int32_t r15_1 = r15 - rax_7
    int32_t var_70 = rdx + rbx_1
    int32_t var_6c = r8 + r15_1
    void* rax_10 = sub_140cbe180(entry_r9)
    int64_t* r12 = rax_10 + 0x48
    
    if (rax_10 == 0)
        r12 = nullptr
    
    char rax_11 = *(entry_r9 + 0xe0)
    uint32_t rdi_1
    
    if (rax_11 != 0)
        rdi_1 = zx.d(rax_11)
    else
        rdi_1 = sub_1405d9520(zx.d(*(entry_r9 + 0xdb)))
    
    int32_t rbx_2 = rbx_1 * r15_1
    int128_t var_48
    int128_t zmm0
    int128_t entry_zmm3
    
    if (rdi_1 == 2)
        int32_t rax_16 = arg1[1].d
        
        if (rbx_2 s> rax_16)
            arg1[1].d = rbx_2
            
            if (rbx_2 s> *(arg1 + 0xc))
                sub_1406105e0(arg1)
        else if (rbx_2 s< rax_16 && rbx_2 != rax_16)
            arg1[1].d = rbx_2
            sub_1405dac90(arg1)
        
        zmm0 = var_78.o
        int64_t rdx_4 = *arg1
        var_48 = var_68.o
        var_78.o = zmm0
        int32_t var_38_2 = var_58.d
        
        if (sub_1423eba80(r12, rdx_4, &var_48, &var_78, entry_zmm3) == 0)
            rdi_1 = 0
    else
        char rax_15
        
        if (rdi_1 == 0xa)
            int32_t rax_13 = arg2[1].d
            
            if (rbx_2 s> rax_13)
                arg2[1].d = rbx_2
                
                if (rbx_2 s> *(arg2 + 0xc))
                    sub_140610660(arg2)
            else if (rbx_2 s< rax_13 && rbx_2 != rax_13)
                arg2[1].d = rbx_2
                sub_1405a5010(arg2)
            
            zmm0 = var_78.o
            int64_t rdx_2 = *arg2
            var_48 = var_68.o
            var_78.o = zmm0
            int32_t var_38_1 = var_58.d
            rax_15 = sub_1423eb800(r12, rdx_2, &var_48, &var_78, entry_zmm3)
        
        if (rdi_1 != 0xa || rax_15 == 0)
            rdi_1 = 0
    return zx.q(rdi_1)

return 0
