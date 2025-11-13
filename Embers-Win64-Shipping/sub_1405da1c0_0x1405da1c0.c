// 函数: sub_1405da1c0
// 地址: 0x1405da1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t var_130 = arg4
j_sub_140b3db50()
void var_e0
int64_t* rax_3 = sub_140b3dbe0(*sub_140b58170(&var_e0, "ImageWriteQueue", 1))
int32_t result
int64_t* rdi_1

if (rax_3 != 0)
    void*** rax_4 = j_sub_140a82f30(0x90)
    void*** rsi_1 = rax_4
    
    if (rax_4 == 0)
        rsi_1 = nullptr
    else
        *rsi_1 = &data_142d56fb8
        rsi_1[1] = 0
        rsi_1[2] = 0
        rsi_1[3].b = 3
        *(rsi_1 + 0x1c) = 0
        rsi_1[4].b = 1
        rsi_1[6] = 0
        rsi_1[8] = 0
        __builtin_memset(&rsi_1[0xe], 0, 0x18)
    
    rsi_1[3].b = *(arg1 + 0x118)
    int16_t* const r8
    
    if (*(arg1 + 0x110) == 0)
        r8 = &data_142d40450
    else
        r8 = *(arg1 + 0x108)
    
    *(arg2 + 0x20)
    int64_t var_120
    sub_140a2e390(&var_120, u"%s%05d", r8)
    
    if (&rsi_1[1] == &var_120)
        int64_t rcx_5 = var_120
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    else
        int64_t rcx_4 = rsi_1[1]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rsi_1[1] = var_120
        int32_t var_118
        rsi_1[2].d = var_118
        int32_t var_114
        *(rsi_1 + 0x14) = var_114
    
    rsi_1[4].b = *(arg1 + 0x160)
    int128_t* rdx = nullptr
    *(rsi_1 + 0x1c) = *(arg1 + 0x164)
    int64_t rax_11 = *(arg1 + 0x120)
    int64_t var_d8 = rax_11
    int128_t* var_c8 = nullptr
    
    if (rax_11 != 0)
        void* rax_12 = *(arg1 + 0x130)
        void* rcx_6 = arg1 + 0x140
        
        if (rax_12 != 0)
            rcx_6 = rax_12
        
        (**rcx_6)(rcx_6, &var_c8)
        rdx = var_c8
    
    int128_t var_b8
    
    if (&rsi_1[6] != &var_d8)
        int128_t zmm5_1 = *(rsi_1 + 0x30)
        int128_t zmm4_1 = *(rsi_1 + 0x40)
        int128_t zmm3 = *(rsi_1 + 0x50)
        int128_t zmm2_1 = *(rsi_1 + 0x60)
        int128_t zmm1_1 = var_c8.o
        *(rsi_1 + 0x30) = var_d8.o
        int128_t zmm0_1 = var_b8
        *(rsi_1 + 0x40) = zmm1_1
        *(rsi_1 + 0x50) = zmm0_1
        var_c8.o = zmm4_1
        rdx = var_c8
        int128_t var_a8
        *(rsi_1 + 0x60) = var_a8
        int128_t var_98_1 = zmm5_1
        int128_t var_88_1 = zmm4_1
        int128_t var_78_1 = zmm3
        int128_t var_68_1 = zmm2_1
        var_d8.o = zmm5_1
        var_b8 = zmm3
        int128_t var_a8_1 = zmm2_1
    
    if (var_d8 != 0)
        int128_t* rcx_7 = &var_b8
        
        if (rdx != 0)
            rcx_7 = rdx
        
        (*(*rcx_7 + 0x10))(rcx_7, rdx)
    
    int32_t rax_15 = *(arg1 + 0xc0)
    int32_t var_138
    uint64_t rcx_14
    void*** r14_3
    
    if (rax_15 == 2)
        var_138 = arg5
        int32_t var_134_1 = arg6
        void*** rax_16 = j_sub_140a82f30(zx.q(rax_15 + 0x3e))
        r14_3 = rax_16
        
        if (rax_16 == 0)
            r14_3 = nullptr
        else
            rax_16[1] = var_138.q
            rax_16[2].d = 0
            *(rax_16 + 0x14) = 0x801
            *(rax_16 + 0x16) = 4
            __builtin_memset(&rax_16[3], 0, 0x28)
            *r14_3 = &data_142d56fd0
        
        int32_t rdi_2 = arg6 * arg5
        uint64_t r12_1 = 0
        var_130 = 0
        
        if (rdi_2 != 0)
            sub_1405c4a90(&var_130, rdi_2, 0)
            r12_1 = var_130
            memcpy(r12_1, arg4, rdi_2 << 2)
        
        int64_t r8_3 = r14_3[7]
        int64_t rax_17 = sx.q(rdi_2)
        r14_3[6] = rax_17
        
        if (rdi_2 != 0 || r8_3 != 0)
            sub_1405daa60(&r14_3[5], rax_17, r8_3)
            memcpy(r14_3[5], r12_1, rdi_2 << 2)
        else
            r14_3[7] = 0
        
        if (r12_1 == 0)
            goto label_1405da635
        
        rcx_14 = r12_1
    label_1405da630:
        sub_140a74f90(rcx_14)
    label_1405da635:
        int64_t* rcx_20 = rsi_1[0xe]
        rsi_1[0xe] = r14_3
        
        if (rcx_20 != 0)
            (**rcx_20)(rcx_20, 1)
    else if (rax_15 == 0xa)
        var_138 = arg5
        int32_t var_134_2 = arg6
        void*** rax_18 = j_sub_140a82f30(zx.q(rax_15 + 0x36))
        r14_3 = rax_18
        
        if (rax_18 == 0)
            r14_3 = nullptr
        else
            rax_18[1] = var_138.q
            rax_18[2].d = 1
            *(rax_18 + 0x14) = 0x1000
            *(rax_18 + 0x16) = 4
            __builtin_memset(&rax_18[3], 0, 0x28)
            *r14_3 = &data_142d56ff0
        
        int32_t i_2 = arg6 * arg5
        uint64_t r13_1 = 0
        uint64_t var_110 = 0
        int32_t i_3 = i_2
        
        if (i_2 != 0)
            sub_1405c4a00(&var_110, i_2, 0)
            uint64_t rax_19 = var_130
            r13_1 = var_110
            uint64_t rdx_8 = r13_1 - rax_19
            void* rcx_18 = rax_19 + 4
            int32_t i
            
            do
                *(rdx_8 + rcx_18 - 4) = 0
                *(rdx_8 + rcx_18 - 4) = *(rcx_18 - 4)
                *(rdx_8 + rcx_18 - 2) = *(rcx_18 - 2)
                *(rdx_8 + rcx_18) = *rcx_18
                *(rdx_8 + rcx_18 + 2) = *(rcx_18 + 2)
                rcx_18 += 8
                i = i_2
                i_2 -= 1
            while (i != 1)
            i_2 = i_3
        
        int64_t r8_6 = r14_3[7]
        uint64_t i_4 = sx.q(i_2)
        r14_3[6] = i_4
        
        if (i_2 != 0 || r8_6 != 0)
            sub_1405dab00(&r14_3[5], i_4, r8_6)
            int64_t* rdx_9 = r14_3[5]
            
            if (i_2 != 0)
                void* r8_7 = r13_1 + 4
                int32_t i_1
                
                do
                    *rdx_9 = 0
                    rdx_9 = &rdx_9[1]
                    int16_t rax_24 = *(r8_7 - 4)
                    r8_7 += 8
                    rdx_9[-1].w = rax_24
                    *(rdx_9 - 6) = *(r8_7 - 0xa)
                    *(rdx_9 - 4) = *(r8_7 - 8)
                    *(rdx_9 - 2) = *(r8_7 - 6)
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        else
            r14_3[7] = 0
        
        if (r13_1 == 0)
            goto label_1405da635
        
        rcx_14 = r13_1
        goto label_1405da630
    var_138.q = rsi_1
    int64_t* rax_30
    int64_t r9_1
    rax_30, r9_1 = (*(*rax_3 + 0x40))(rax_3)
    r9_1.b = 1
    void* var_f0
    result = (*(*rax_30 + 8))(rax_30, &var_f0, &var_138, r9_1, var_138)
    int64_t* rcx_23 = var_138.q
    
    if (rcx_23 != 0)
        result = (**rcx_23)(rcx_23, 1)
    
    if (*(arg1 + 0x168) == 0)
        void* rcx_24 = var_f0
        
        if (rcx_24 != 0)
            while (true)
                if (rcx_24 != 0)
                    int64_t* rcx_25 = *(rcx_24 + 0x70)
                    result = (*(*rcx_25 + 0x20))(rcx_25, 0xffffffff, 0)
                    
                    if (result.b != 0)
                        break
                    
                    rcx_24 = var_f0
    
    int64_t* var_e8
    
    if (var_e8 != 0)
        result = var_e8[1].d
        var_e8[1].d -= 1
        
        if (result == 1)
            (**var_e8)(var_e8)
            result = *(var_e8 + 0xc)
            *(var_e8 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_e8 + 8))(var_e8, 1)
    
    rdi_1 = *(arg3 + 8)
    
    if (rdi_1 != 0)
        goto label_1405da710
else
    result = sub_1405daf00(arg1, 0)
    rdi_1 = *(arg3 + 8)
    
    if (rdi_1 != 0)
    label_1405da710:
        result = rdi_1[1].d
        rdi_1[1].d -= 1
        
        if (result == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
__security_check_cookie(rax_1 ^ &var_158)
return result
