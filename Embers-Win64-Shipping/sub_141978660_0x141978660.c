// 函数: sub_141978660
// 地址: 0x141978660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdi = 0

if (sub_141976740() != 0 && sub_141978390() != 0)
    AcquireSRWLockShared(&data_143f01fc8)
    int128_t var_78
    int32_t var_5c
    
    if (data_1439c7fd8 - data_1439c8004 s<= 0)
    label_1419788b9:
        
        if (data_143f01cc8 u> 0)
            int32_t r8_4 = (data_1439c8098).d
            int32_t var_98_2 = 0
            int32_t rcx_9 = 0
            int32_t var_94_3 = 1
            void* var_90_2 = &data_1439c8080
            int32_t var_88_4 = 0xffffffff
            int64_t var_84_2 = 0
            
            if (r8_4 != 0)
                void* rax_26 = data_1439c8090
                void* r9_3 = &data_1439c8080
                
                if (rax_26 != 0)
                    r9_3 = rax_26
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r8_4 - 1)
                int32_t rdx_12 = *r9_3
                
                if (rdx_12 != 0)
                label_141978942:
                    int32_t rax_33 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_33)
                    int32_t var_94_4 = rax_33
                    int32_t r15_1
                    
                    if (rax_33 == 0)
                        r15_1 = 0x20
                    else
                        r15_1 = 0x1f - temp0_4
                    
                    var_84_2.d = rcx_9 - r15_1 + 0x1f
                    
                    if (rcx_9 - r15_1 + 0x1f s> r8_4)
                        var_84_2.d = r8_4
                else
                    while (true)
                        int64_t rdx_13 = sx.q(rbx)
                        rcx_9 += 0x20
                        rbx += 1
                        var_84_2:4.d = rcx_9
                        var_98_2 = rbx
                        
                        if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_12 = *(r9_3 + (rdx_13 << 2) + 4)
                        int32_t var_88_5 = 0xffffffff
                        
                        if (rdx_12 != 0)
                            goto label_141978942
                    
                    var_84_2.d = r8_4
            
            var_84_2.d = r8_4
            int128_t var_38_2 = 0xffffffff
            int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            var_78 = (&data_1439c8070).o
            int96_t var_68_2 = var_98_2.o:8.12
            int64_t var_58_2 = temp0_5
            
            while (true)
                int64_t rax_35 = sx.q(var_5c)
                int64_t rdx_15 = var_78.q
                
                if (rax_35.d == ((0xffffffff << (r8_4.b & 0x1f)).q u>> 0x20).d
                        && var_68_2.q == &data_1439c8080 && rdx_15 == &data_1439c8070)
                    break
                
                int64_t r9_4 = sx.q(sub_141973920(rax_35 * 0x1c4 + *rdx_15))
                
                if (data_1439c8028 != data_1439c8054)
                    void* rdx_16 = data_1439c8060
                    void* rcx_18 = &data_1439c8058
                    
                    if (rdx_16 != 0)
                        rcx_18 = rdx_16
                    
                    int32_t i = *(rcx_18 + ((sx.q(data_1439c8068 - 1) & r9_4) << 2))
                    
                    if (i != 0xffffffff)
                        int64_t r8_7 = data_1439c8020
                        
                        do
                            int64_t i_1 = sx.q(i)
                            int64_t rdx_17 = i_1 * 3
                            
                            if (*(r8_7 + (rdx_17 << 3)) == r9_4.d)
                                if (i != 0xffffffff)
                                    void* rax_38 = r8_7 + i_1 * 0x18
                                    
                                    if (rax_38 != 0)
                                        void* rax_39 = *(rax_38 + 8)
                                        
                                        if (rax_39 != 0 && *(rax_39 + 0x18) s> 0)
                                            rdi += 1
                                
                                break
                            
                            i = *(r8_7 + (rdx_17 << 3) + 0x10)
                        while (i != 0xffffffff)
                
                var_68_2:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)
    else
        int32_t r9_1 = (data_1439c7ff8).d
        int32_t rcx_1 = 0
        void* var_90_1 = &data_1439c7fe0
        int32_t r8_1 = 0
        int32_t var_98_1 = 0
        int32_t var_94_1 = 1
        int32_t var_88_1 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r9_1 != 0)
            void* rax_4 = data_1439c7ff0
            void* r10_1 = &data_1439c7fe0
            
            if (rax_4 != 0)
                r10_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_1 - 1)
            int32_t rdx_3 = *r10_1
            
            if (rdx_3 != 0)
            label_141978764:
                int32_t rax_11 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_94_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                var_84_1.d = r8_1 - rax_12 + 0x1f
                
                if (r8_1 - rax_12 + 0x1f s> r9_1)
                    var_84_1.d = r9_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_84_1:4.d = r8_1
                    var_98_1 = rcx_1
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_141978764
                
                var_84_1.d = r9_1
        
        int128_t var_38_1 = 0xffffffff
        var_84_1.d = r9_1
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_78 = (&data_1439c7fd0).o
        int96_t var_68_1 = var_98_1.o:8.12
        int64_t var_58_1 = temp0_3
        
        while (true)
            int64_t rax_14 = sx.q(var_5c)
            int64_t* rdx_6 = var_78.q
            
            if (rax_14.d == ((0xffffffff << (r9_1.b & 0x1f)).q u>> 0x20).d
                    && var_68_1.q == &data_1439c7fe0 && rdx_6 == &data_1439c7fd0)
                break
            
            int32_t* r10_2 = *rdx_6 + rax_14 * 0x28
            
            if (data_1439c8028 == data_1439c8054)
            label_14197888a:
                
                if ((r10_2[6].b & 1) != 0)
                    rdi += 1
            else
                void* rcx_6 = data_1439c8060
                int64_t r9_2 = sx.q(*r10_2)
                void* rax_19 = &data_1439c8058
                
                if (rcx_6 != 0)
                    rax_19 = rcx_6
                
                int32_t rax_20 = *(rax_19 + ((sx.q(data_1439c8068 - 1) & r9_2) << 2))
                
                if (rax_20 == 0xffffffff)
                    goto label_14197888a
                
                int64_t r8_3 = data_1439c8020
                int64_t rdx_9
                
                while (true)
                    rdx_9 = sx.q(rax_20)
                    int64_t rcx_7 = rdx_9 * 3
                    
                    if (*(r8_3 + (rcx_7 << 3)) == r9_2.d)
                        break
                    
                    rax_20 = *(r8_3 + (rcx_7 << 3) + 0x10)
                    
                    if (rax_20 == 0xffffffff)
                        goto label_14197888a
                
                if (rax_20 == 0xffffffff)
                    goto label_14197888a
                
                void* rax_22 = r8_3 + rdx_9 * 0x18
                
                if (rax_22 == 0)
                    goto label_14197888a
                
                void* rax_23 = *(rax_22 + 8)
                
                if (rax_23 == 0 || *(rax_23 + 0x18) s<= 0)
                    goto label_14197888a
                
                rdi += 1
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        if (rdi == 0)
            goto label_1419788b9
    ReleaseSRWLockShared(&data_143f01fc8)

return zx.q(rdi)
