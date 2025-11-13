// 函数: sub_14242eb40
// 地址: 0x14242eb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = data_143f5e404
void* rbx = arg1

if (*(arg1 + 0x59c) != result)
    int64_t rdi
    
    if (arg4 == arg1 || arg4 == 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    sub_140a4bcc0(u"XYXYXY XYXYXY Clearnupworld %p -> %p\n", rbx)
    void* rcx = *(rbx + 0x1f8)
    *(rbx + 0x59c) = data_143f5e404
    
    if (rcx != 0)
        sub_142281530(rcx)
    
    sub_14242e520(&data_143a306c8, rbx, arg2, arg3)
    int64_t* rax_1 = sub_142006940()
    (*(*rax_1 + 0x88))(rax_1, rbx, zx.q(arg2), zx.q(arg3), rdi.b)
    int64_t* rcx_2 = *(rbx + 0x138)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x270))(rcx_2, zx.q(arg2), zx.q(arg3), arg4)
    
    int32_t rsi_1 = 0
    
    if (arg3 == 1)
        int64_t* rcx_3 = *(rbx + 0x120)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x268))(rcx_3, 0)
        
        *(rbx + 0x120) = 0
    
    void* rcx_4 = data_143f5b298
    
    if (rcx_4 != 0)
        void* rax_4 = sub_1423de4b0(rcx_4, rbx)
        
        if (rax_4 != 0)
            int64_t* i = *(rax_4 + 0x220)
            
            for (void* r14_3 = &i[sx.q(*(rax_4 + 0x228)) * 2]; i != r14_3; i = &i[2])
                void* rcx_5 = *i
                
                if (rcx_5 != 0)
                    sub_1421755e0(*(rcx_5 + 0x6f0))
    
    int32_t i_1 = 0
    
    if (*(rbx + 0x150) s> 0)
        int64_t* r14_4 = nullptr
        
        do
            sub_1420deb90(*(r14_4 + *(rbx + 0x148)))
            i_1 += 1
            r14_4 = &r14_4[1]
        while (i_1 s< *(rbx + 0x150))
    
    int64_t* rcx_9 = *(rbx + 0x40)
    
    if (rcx_9 != 0 && (rcx_9[0x11].b & 1) != 0)
        sub_141efdf10(rcx_9)
    
    int64_t* rcx_10 = *(rbx + 0x48)
    
    if (rcx_10 != 0 && (rcx_10[0x11].b & 1) != 0)
        sub_141efdf10(rcx_10)
    
    int64_t* rcx_11 = *(rbx + 0x50)
    
    if (rcx_11 != 0 && (rcx_11[0x11].b & 1) != 0)
        sub_141efdf10(rcx_11)
    
    if (arg3 != 0)
        void* rcx_12 = *(rbx + 0x30)
        
        if (rcx_12 != 0)
            sub_1420eb5d0(rcx_12)
            void* rcx_13 = data_143e29f28
            
            if (rcx_13 != 0)
                sub_140e645a0(rcx_13)
    
    int32_t i_2 = 0
    
    if (*(rbx + 0x150) s> 0)
        int64_t* r14_5 = nullptr
        
        do
            sub_14242eb40(*(*(r14_5 + *(rbx + 0x148)) + 0x20), zx.q(arg2), zx.q(arg3), arg4)
            i_2 += 1
            r14_5 = &r14_5[1]
        while (i_2 s< *(rbx + 0x150))
    
    int64_t r14_6 = 0
    int64_t* rdi_1 = *(rbx + 0x98)
    uint64_t r12_2 = sx.q(*(rbx + 0xa0)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(rbx + 0xa0))])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rcx_16 = *(*rdi_1 + 0x128)
            
            if (rcx_16 != 0)
                sub_14242eb40(*(rcx_16 + 0x20), zx.q(arg2), zx.q(arg3), arg4)
            
            rdi_1 = &rdi_1[1]
            r14_6 += 1
        while (r14_6 != r12_2)
        
        rbx = arg1
    
    char* i_3 = *(rbx + 0x158)
    
    for (void* rdx_8 = sx.q(*(rbx + 0x160)) * 0x78 + i_3; i_3 != rdx_8; i_3 = &i_3[0x78])
        if (*i_3 == 1)
            int32_t var_b0_1 = 0
            int32_t r10_2 = *(i_3 + 0x50)
            int32_t var_ac_1 = 1
            int32_t rcx_18 = 0
            void* var_a8_1 = &i_3[0x38]
            int32_t var_a0_1 = 0xffffffff
            int32_t var_9c_1 = 0
            int32_t var_98_1 = 0
            
            if (r10_2 != 0)
                void* rax_10 = *(i_3 + 0x48)
                void* r8_6 = &i_3[0x38]
                
                if (rax_10 != 0)
                    r8_6 = rax_10
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_2 - 1)
                int32_t rdx_11 = *r8_6
                int32_t var_9c_3
                
                if (rdx_11 != 0)
                label_14242ee96:
                    int32_t rax_17 = neg.d(rdx_11) & rdx_11
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
                    int32_t var_ac_2 = rax_17
                    int32_t rax_18
                    
                    if (rax_17 == 0)
                        rax_18 = 0x20
                    else
                        rax_18 = 0x1f - temp0_2
                    
                    int32_t var_9c_2 = rcx_18 - rax_18 + 0x1f
                    
                    if (rcx_18 - rax_18 + 0x1f s> r10_2)
                        var_9c_3 = r10_2
                else
                    while (true)
                        int64_t rdx_12 = sx.q(rsi_1)
                        rcx_18 += 0x20
                        rsi_1 += 1
                        int32_t var_98_2 = rcx_18
                        var_b0_1 = rsi_1
                        
                        if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_11 = *(r8_6 + (rdx_12 << 2) + 4)
                        int32_t var_a0_2 = 0xffffffff
                        
                        if (rdx_11 != 0)
                            goto label_14242ee96
                    
                    var_9c_3 = r10_2
            
            int32_t rdx_14 = *(i_3 + 0x50)
            int32_t var_9c_4 = rdx_14
            int32_t r9_5 = 0xffffffff << (rdx_14.b & 0x1f)
            int32_t var_a0_3 = r9_5
            int128_t var_58_1 = var_b0_1.o
            int32_t r9_7 = rdx_14 & 0xffffffe0
            int32_t r8_8 = rdx_14 s>> 5
            int128_t var_48_1 = 0xffffffff
            int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_88 = (&i_3[0x28]).o
            int128_t var_78_1 = var_58_1
            
            if (rdx_14 != r10_2)
                void* rax_20 = *(i_3 + 0x48)
                void* r10_3 = &i_3[0x38]
                
                if (rax_20 != 0)
                    r10_3 = rax_20
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_2 - 1)
                int32_t rdx_18 = *(r10_3 + (sx.q(r8_8) << 2)) & r9_5
                int32_t var_9c_6
                
                if (rdx_18 != 0)
                label_14242ef63:
                    int32_t rax_27 = neg.d(rdx_18) & rdx_18
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
                    int32_t rdi_2
                    
                    if (rax_27 == 0)
                        rdi_2 = 0x20
                    else
                        rdi_2 = 0x1f - temp0_4
                    
                    int32_t var_9c_5 = r9_7 - rdi_2 + 0x1f
                    
                    if (r9_7 - rdi_2 + 0x1f s> r10_2)
                        var_9c_6 = r10_2
                else
                    while (true)
                        int64_t rcx_23 = sx.q(r8_8)
                        r9_7 += 0x20
                        r8_8 += 1
                        
                        if (rcx_23.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_18 = *(r10_3 + (rcx_23 << 2) + 4)
                        var_a0_3 = 0xffffffff
                        
                        if (rdx_18 != 0)
                            goto label_14242ef63
                    
                    var_9c_6 = r10_2
            
            while (true)
                int64_t rcx_25 = sx.q(var_78_1:0xc.d)
                int64_t* rax_29 = var_88.q
                
                if (rcx_25.d == (var_a0_3.q u>> 0x20).d && var_78_1.q == &i_3[0x38]
                        && rax_29 == &i_3[0x28])
                    break
                
                void* rcx_27 = *(*rax_29 + rcx_25 * 0x10)
                
                if (rcx_27 != 0)
                    sub_14242eb40(*(rcx_27 + 0x20), zx.q(arg2), zx.q(arg3), arg4)
                
                var_78_1:8.d &= not.d(var_88:0xc.d)
                sub_14059bdd0(&var_88:8)
            
            rbx = arg1
            break
    
    sub_142212660(rbx + 0x5f0)
    sub_14242e520(&data_143a306e0, rbx, arg2, arg3)
    result = sub_1423ac800(rbx + 0x648)
    int64_t* rcx_32 = *(rbx + 0x468)
    
    if (rcx_32 != 0 && rdi.b != 0)
        return sub_142198700(rcx_32)

return result
