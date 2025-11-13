// 函数: sub_142921ac0
// 地址: 0x142921ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_18
int32_t r8_1

if (arg1 != 0)
    if (*arg1 != 0 && arg1[1] != 0)
        sub_1428a5c40(data_144020538)
        int64_t* i = data_143fecf90
        int32_t rax = 0
        int32_t rax_3
        int32_t r8_4
        
        if (i == 0)
            if (data_143fecf98 != 0)
                rax_3 = 0x45
            label_142921ba2:
                r8_4 = 0x6e
            label_142921bbb:
                sub_1428a5670(0x26, 0x78, r8_4, "crypto\engine\eng_list.c", rax_3)
                sub_1428a5670(0x26, 0x69, 0x6e, "crypto\engine\eng_list.c", 0xdf)
                sub_1428a5d00(data_144020538)
                return 0
            
            data_143fecf90 = arg1
            arg1[0x16] = 0
            sub_1428e32f0(sub_1429220e0)
        else
            uint32_t rdx_2
            
            do
                if (rax != 0)
                    goto label_142921b89
                
                char* rax_1 = *i
                void* r8_3 = *arg1 - rax_1
                uint32_t j
                
                do
                    uint32_t rdx_1 = zx.d(*rax_1)
                    j = zx.d(*(rax_1 + r8_3))
                    rdx_2 = rdx_1 - j
                    
                    if (rdx_1 != j)
                        break
                    
                    rax_1 = &rax_1[1]
                while (j != 0)
                i = i[0x17]
                rax.b = rdx_2 == 0
            while (i != 0)
            
            if (rdx_2 == 0)
            label_142921b89:
                rax_3 = 0x3f
                r8_4 = 0x67
                goto label_142921bbb
            
            void* rax_2 = data_143fecf98
            
            if (rax_2 == 0 || *(rax_2 + 0xb8) != i)
                rax_3 = 0x51
                goto label_142921ba2
            
            *(rax_2 + 0xb8) = arg1
            arg1[0x16] = rax_2
        int32_t rcx_3 = *(arg1 + 0x9c) + 1
        arg1[0x17] = 0
        *(arg1 + 0x9c) = rcx_3
        CRITICAL_SECTION* rcx_4 = data_144020538
        data_143fecf98 = arg1
        sub_1428a5d00(rcx_4)
        return 1
    
    var_18 = 0xda
    r8_1 = 0x6c
else
    var_18 = 0xd6
    r8_1 = 0x43

sub_1428a5670(0x26, 0x69, r8_1, "crypto\engine\eng_list.c", var_18)
return 0
