// 函数: sub_141988930
// 地址: 0x141988930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141976740()

if (result == 0)
    return result

AcquireSRWLockExclusive(&data_143f01fc8)
int32_t r9_1 = (data_1439c8048).d
int32_t rcx_1 = 0
int32_t var_74_1 = 1
int32_t r8_1 = 0
int32_t var_78_1 = 0
void* var_70_1 = &data_1439c8030
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r9_1 != 0)
    void* rax = data_1439c8040
    void* r10_1 = &data_1439c8030
    
    if (rax != 0)
        r10_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9_1 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_1419889f8:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_74_2 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_64_1.d = r8_1 - rax_8 + 0x1f
        
        if (r8_1 - rax_8 + 0x1f s> r9_1)
            var_64_1.d = r9_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_64_1:4.d = r8_1
            var_78_1 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            int32_t var_68_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1419889f8
        
        var_64_1.d = r9_1

int128_t var_18_1 = 0xffffffff
var_64_1.d = r9_1
int128_t var_28_1 = var_78_1.o
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = (&data_1439c8020).o
int128_t var_48_1 = var_28_1
int64_t var_38_1 = temp0_3

while (true)
    int64_t rax_10 = sx.q(var_48_1:0xc.d)
    int64_t* rdx_6 = var_58.q
    
    if (rax_10.d == ((0xffffffff << (r9_1.b & 0x1f)).q u>> 0x20).d && var_48_1.q == &data_1439c8030
            && rdx_6 == &data_1439c8020)
        sub_140ba2630(&data_1439c8020, 0)
        sub_14196cbc0(&data_1439c8070, 0)
        int32_t rax_14 = data_1439c80b8
        
        if (rax_14 s> 0)
            int64_t r8_3 = 0
            uint64_t r9_2 = zx.q(rax_14)
            
            while (true)
                void* rcx_8 = data_1439c80b0
                void* rax_16 = &data_1439c80a8
                int64_t rdx_9 = sx.q(rax_14 - 1) & r8_3
                
                if (rcx_8 != 0)
                    rax_16 = rcx_8
                
                r8_3 += 1
                *(rax_16 + (rdx_9 << 2)) = 0xffffffff
                uint64_t temp2_1 = r9_2
                r9_2 -= 1
                
                if (temp2_1 == 1)
                    break
                
                rax_14 = data_1439c80b8
        
        sub_14084eee0(&data_1439c80c0, 0)
        data_143f01cc8 = 0
        data_143f0f150 = 0
        return ReleaseSRWLockExclusive(&data_143f01fc8)
    
    int64_t rcx_6 = *(*rdx_6 + rax_10 * 0x18 + 8)
    
    if (rcx_6 != 0)
        j_sub_140a74f90(rcx_6)
    
    var_48_1:8.d &= not.d(var_58:0xc.d)
    sub_14059bdd0(&var_58:8)
