// 函数: sub_1418803b0
// 地址: 0x1418803b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
void arg_10
sub_141828370(&arg_10)
int16_t* const r14 = &data_142d40450
int16_t* const rdx

if (*(arg1 + 0x10) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 8)

char rax_1
int32_t rdx_1
rax_1, rdx_1 = (*(data_14399ea08 + 0x50))(&data_14399ea08, rdx)

if (rax_1 != 0)
    int32_t rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = *(arg1 + 8)
    void* i_3 = nullptr
    int32_t i_6 = 0
    int16_t* var_c8 = nullptr
    sub_1405a4c70(&var_c8, sbb.d(rdx_1, rdx_1, rbx_1 != 0) + 0xc + rbx_1, 0)
    memcpy(var_c8, rdi_1, rbx_1 * 2)
    sub_140a2cf70(&var_c8, u"*.manifest", 0xa)
    int64_t r9_1
    r9_1.b = 1
    
    if (rbx_1 != 0)
        r14 = var_c8
    
    (*(data_14399ea08 + 0x78))(&data_14399ea08, &i_3, r14, r9_1, 0)
    int16_t* rcx_4 = var_c8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    sub_1418283a0(*(arg1 + 0x330), &arg_10)
    sub_141828370(&arg_10)
    void* i = i_3
    int64_t* r14_1 = nullptr
    int32_t i_4 = 0
    void* rax_7 = (sx.q(i_6) << 4) + i
    int64_t* var_f8 = nullptr
    int64_t var_f0_1 = 0
    int128_t entry_zmm2
    int128_t entry_zmm3
    
    for (; i != rax_7; i += 0x10)
        int32_t rax_8 = *(i + 8)
        int32_t r15_1 = *(arg1 + 0x10)
        int32_t rsi_1 = rax_8 - 1
        
        if (rax_8 == 0)
            rsi_1 = 0
        
        int32_t rax_10
        
        if (r15_1 == 0)
            rax_10 = r15_1 + 2
        
        if (r15_1 != 0 || rsi_1 == 0xffffffff)
            rax_10 = 1
        
        int64_t var_e8 = 0
        int32_t rcx_7 = rsi_1 + rax_10
        int64_t r12_1 = *(arg1 + 8)
        
        if (r15_1 != 0 || rcx_7 != 0)
            sub_1405a4c70(&var_e8, r15_1 + rcx_7, 0)
            memcpy(var_e8, r12_1, r15_1 * 2)
        else
            int32_t var_dc_1 = 0
        
        sub_140a2cf70(&var_e8, *i, rsi_1)
        int64_t r15_2 = var_e8
        int64_t var_78[0x2]
        var_78[0] = 0
        int64_t var_68_1 = 0
        void* var_b8 = arg1
        uint64_t var_b0 = 0
        int32_t var_a8_1 = r15_1
        
        if (r15_1 != 0)
            sub_1405a4c70(&var_b0, r15_1, 0)
            memcpy(var_b0, r15_2, r15_1 * 2)
        else
            int32_t var_a4_1 = 0
        
        void* var_a0
        entry_zmm2, entry_zmm3 = sub_1418568e0(&var_a0, 3, &var_b8, &var_78, entry_zmm2, entry_zmm3)
        uint64_t rcx_14 = var_b0
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t i_9 = sx.q(i_4)
        i_4 = (i_9 + 1).d
        var_f0_1.d = i_4
        
        if (i_4 s> var_f0_1:4.d)
            sub_1405a4f90(&var_f8)
            i_4 = var_f0_1.d
            r14_1 = var_f8
        
        void* rax_11 = var_a0
        int64_t rcx_17 = i_9 * 2
        var_a0 = nullptr
        r14_1[rcx_17] = rax_11
        int64_t var_98
        r14_1[rcx_17 + 1] = var_98
        int64_t rcx_18 = var_e8
        var_98 = 0
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    void* r15_5 = &r14_1[sx.q(i_4) * 2]
    
    if (r14_1 != r15_5)
        do
            void* rbx_2 = *r14_1
            
            while (true)
                bool z_1
                
                if (0 == *(rbx_2 + 0x78))
                    *(rbx_2 + 0x78) = 0
                    z_1 = true
                else
                    int64_t rax_13
                    rax_13.b = *(rbx_2 + 0x78)
                    z_1 = false
                
                if (not(z_1))
                    break
                
                int64_t* rcx_19 = *(rbx_2 + 0x70)
                (*(*rcx_19 + 0x20))(rcx_19, 0xffffffff, 0)
            
            int64_t rax_15 = *(rbx_2 + 0x80)
            int64_t* rbx_3 = *(rbx_2 + 0x88)
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            if (rax_15 != 0)
                int64_t var_90 = rax_15
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                entry_zmm2, entry_zmm3 = sub_141880850(arg1, &var_90, entry_zmm2, entry_zmm3)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_18 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_18 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            sub_1418283a0(*(arg1 + 0x330), &arg_10)
            sub_141828370(&arg_10)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_22 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_22 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            r14_1 = &r14_1[2]
        while (r14_1 != r15_5)
        
        i_4 = var_f0_1.d
        r14_1 = var_f8
    
    if (i_4 != 0)
        void* r14_2 = &r14_1[1]
        int32_t i_1
        
        do
            int64_t* rbx_4 = *r14_2
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_26 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_26 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            r14_2 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        r14_1 = var_f8
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int32_t i_5 = i_6
    void* i_7 = i_3
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_30 = *i_7
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            i_7 += 0x10
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    void* i_8 = i_3
    
    if (i_8 != 0)
        sub_140a74f90(i_8)

return sub_1418283a0(*(arg1 + 0x330), &arg_10)
