// 函数: sub_141967ad0
// 地址: 0x141967ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141976740()

if (result == 0)
    return result

AcquireSRWLockExclusive(&data_143f01fc8)
int64_t* rcx_1 = data_143f0f148

if (rcx_1 != 0)
    sub_141965f50(rcx_1, 1)
    int32_t r10_1 = (data_1439c8048).d
    int32_t rcx_2 = 0
    data_143f0f148 = 0
    int32_t r8_1 = 0
    int32_t var_78_1 = 0
    int32_t var_74_1 = 1
    void* var_70_1 = &data_1439c8030
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r10_1 != 0)
        void* rax = data_1439c8040
        void* r9_1 = &data_1439c8030
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_141967bb8:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_74_2 = rax_7
            int32_t arg_8 = temp0_1
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_64_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r10_1)
                var_64_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_64_1:4.d = r8_1
                var_78_1 = rcx_2
                
                if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_68_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_141967bb8
            
            var_64_1.d = r10_1
    
    int128_t var_40_1 = 0xffffffff
    int128_t var_50_1
    var_50_1:8.d = 0xffffffff << (r10_1.b & 0x1f)
    var_50_1:0xc.d = r10_1
    int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_30 = (&data_1439c8020).o
    int128_t var_20_1 = var_78_1.o
    int64_t var_10_1 = temp0_2
    
    while (true)
        int64_t rax_10 = sx.q(var_20_1:0xc.d)
        int64_t* rdx_6 = var_30.q
        
        if (rax_10.d == (var_50_1:8.q u>> 0x20).d && var_20_1.q == &data_1439c8030
                && rdx_6 == &data_1439c8020)
            break
        
        void* rdx_7 = *rdx_6 + rax_10 * 0x18
        *(*(rdx_7 + 8) + 0x18) = -1
        **(rdx_7 + 8) = -1
        void* rdx_8 = *(rdx_7 + 8)
        *(rdx_8 + 8)
        *(rdx_8 + 8) = -1
        var_20_1:8.d &= not.d(var_30:0xc.d)
        sub_14059bdd0(&var_30:8)
    
    sub_1408e2150(&data_1439c7f80, 0)
    sub_1408e2150(&data_1439c7fd0, 0)
    sub_14196cbc0(&data_1439c8070, 0)
    int32_t rax_14 = data_1439c80b8
    
    if (rax_14 s> 0)
        int64_t r8_3 = 0
        uint64_t r9_2 = zx.q(rax_14)
        
        while (true)
            void* rcx_11 = data_1439c80b0
            void* rax_16 = &data_1439c80a8
            int64_t rdx_10 = sx.q(rax_14 - 1) & r8_3
            
            if (rcx_11 != 0)
                rax_16 = rcx_11
            
            r8_3 += 1
            *(rax_16 + (rdx_10 << 2)) = 0xffffffff
            uint64_t temp3_1 = r9_2
            r9_2 -= 1
            
            if (temp3_1 == 1)
                break
            
            rax_14 = data_1439c80b8
    
    sub_14084eee0(&data_1439c80c0, 0)
    data_143f01cc8 = 0

return ReleaseSRWLockExclusive(&data_143f01fc8)
