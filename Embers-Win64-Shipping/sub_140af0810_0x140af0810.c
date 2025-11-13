// 函数: sub_140af0810
// 地址: 0x140af0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140aefb30(arg1, arg4, 0)

if (result == 0)
    result.b = 0
else
    int64_t var_b8 = 0
    int32_t rdx_1 = 0
    int32_t var_b0_1 = 0
    int32_t rcx = 0
    int32_t var_ac_1 = 0
    int64_t rsi_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_b8, rbx_1.d + 1)
            rcx = var_ac_1
            rdx_1 = var_b0_1
            rsi_1 = var_b8
        
        int32_t rax = rdx_1 + rbx_1.d + 1
        var_b0_1 = rax
        
        if (rax s> rcx)
            sub_140594770(&var_b8)
            rsi_1 = var_b8
        
        UnDecorator::getReferenceType(rsi_1, arg3, (rbx_1.d + 1) * 2)
    
    int32_t var_98
    sub_140a452d0(result, &var_98, &var_b8)
    int64_t rax_1 = sx.q(var_98)
    
    if (rax_1.d == 0xffffffff)
        result = nullptr
    else
        result = rax_1 * 0xb8 + *result
    
    void* rbx_3 = &result[2]
    
    if (result == 0)
        rbx_3 = nullptr
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rbx_3 == 0)
        result.b = 0
    else
        int32_t r10_1 = *(rbx_3 + 0x28)
        void* r9 = rbx_3 + 0x10
        var_b8:4.d = 1
        int32_t rcx_6 = 0
        var_b8.d = 0
        int32_t r8_3 = 0
        var_b0_1.q = r9
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r10_1 != 0)
            void* rax_3 = *(r9 + 0x10)
            
            if (rax_3 != 0)
                r9 = rax_3
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_7 = *r9
            
            if (rdx_7 != 0)
            label_140af0998:
                int32_t rax_10 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                var_b8:4.d = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_a4_1.d = r8_3 - rax_11 + 0x1f
                
                if (r8_3 - rax_11 + 0x1f s> r10_1)
                    var_a4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_a4_1:4.d = r8_3
                    var_b8.d = rcx_6
                    
                    if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                    var_a8_1 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_140af0998
                
                var_a4_1.d = r10_1
        
        double zmm4_1[0x2] = var_a8_1.o
        void* var_20_1 = rbx_3
        int16_t var_50_1 = 0
        double zmm3_1[0x2] = var_b8.o
        result = zmm3_1[0]
        int128_t var_88 = rbx_3.o
        double rcx_8 = zmm4_1[0]
        zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        double var_68_1[0x2] = zmm4_1
        
        if ((rcx_8 u>> 0x20).d s< result[3].d)
            int32_t i = zmm3_1[1]:4.d
            
            do
                int64_t r8_6 = sx.q(i) * 6
                int64_t r9_1 = *var_88.q
                int32_t rax_15 = *(r9_1 + (r8_6 << 3) + 0x20)
                int64_t rdx_9 = r9_1 + (r8_6 << 3)
                int32_t rcx_10 = rax_15 - 1
                int64_t* rax_16 = 0x18
                
                if (rax_15 == 0)
                    rcx_10 = 0
                
                if (rcx_10 s<= 0)
                    rax_16 = 8
                
                int16_t* const rbx_4
                
                if (*(rax_16 + rdx_9 + 8) == 0)
                    rbx_4 = &data_142d40450
                else
                    rbx_4 = *(rax_16 + rdx_9)
                
                int64_t* rax_17 = sub_140b5e690(r9_1 + (r8_6 << 3), &var_b8)
                int16_t* const rdx_11
                
                if (rax_17[1].d == 0)
                    rdx_11 = &data_142d40450
                else
                    rdx_11 = *rax_17
                
                int64_t* rcx_12
                
                if (arg2[1].d == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *arg2
                
                (*(*rcx_12 + 0x48))(rcx_12, rdx_11, rbx_4)
                int64_t rcx_13 = var_b8
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                zmm3_1[1].d &= not.d(var_88:0xc.d)
                sub_14059bdd0(&var_88:8)
                i = zmm3_1[1]:4.d
            while (i s< zmm3_1[0][3].d)
            
            if (var_50_1.b != 0 && var_50_1:1.b != 0)
                sub_140a6d3f0(rbx_3, *(rbx_3 + 8) - *(rbx_3 + 0x34), 1)
        
        result.b = 1

return result
