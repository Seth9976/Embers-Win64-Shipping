// 函数: sub_1421968b0
// 地址: 0x1421968b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
void* result = __security_cookie ^ &var_108
void* result_1 = result

if ((arg1[0x4d].b & 1) != 0)
    uint64_t var_78 = 0
    int32_t var_70_1 = 0
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x1c)
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    sub_141dca570(arg1, &var_78, sub_14255d000())
    int64_t* var_e0_1 = &var_68
    int32_t rcx_1 = 0
    int32_t var_e8_1 = 0
    int32_t var_d8_1 = 0xffffffff
    int32_t r8_2 = 0
    int32_t var_e4_1 = 1
    int64_t var_d4_1 = 0
    int64_t* var_58
    int32_t var_50
    
    if (var_50 != 0)
        int64_t* r9_1 = &var_68
        
        if (var_58 != 0)
            r9_1 = var_58
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_50 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_1421969b7:
            int32_t rax_9 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_e4_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            int32_t rax_11 = r8_2 - rax_10 + 0x1f
            
            if (rax_11 s> var_50)
                rax_11 = var_50
            
            var_d4_1.d = rax_11
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_1)
                r8_2 += 0x20
                rcx_1 += 1
                var_d4_1:4.d = r8_2
                var_e8_1 = rcx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_d4_1.d = var_50
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_d8_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1421969b7
    
    var_d4_1.d = var_50
    int128_t var_98_1 = var_e8_1.o
    int128_t var_88_1 = 0xffffffff
    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_c8 = (&var_78).o
    int128_t var_b8_1 = var_98_1
    int64_t var_a8_1 = temp0_3
    
    while (true)
        int64_t rdx_6 = sx.q(var_b8_1:0xc.d)
        char rax_13
        
        if (rdx_6.d != ((0xffffffff << (var_50.b & 0x1f)).q u>> 0x20).d || var_b8_1.q != &var_68)
            rax_13 = 0
        else
            rax_13 = 1
        
        int64_t* rcx_4 = var_c8.q
        
        if (rax_13 == 0 || rcx_4 != &var_78)
            rax_13 = 1
        else
            rax_13 = 0
        
        if (rax_13 == 0)
            break
        
        int64_t* rbx_1 = *(*rcx_4 + rdx_6 * 0x10)
        
        if (rbx_1 != 0 && *(rbx_1 + 0x59) s< 0)
            int32_t rax_16 = *(rbx_1 + 0xc)
            void* const rax_22
            
            if (rax_16 s>= data_143e1d9b4)
                rax_22 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_16)
                uint32_t rdx_8 = zx.d(temp2_1)
                int32_t rax_18 = temp3_1 + rdx_8
                rax_22 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_18.w) - rdx_8) * 0x18
            
            if (((*(rax_22 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_25 = sub_14255d000()
                void* rdx_10 = rbx_1[2]
                int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                
                if (rax_26.d s<= *(rdx_10 + 0x38)
                        && *(*(rdx_10 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30
                        && (*(*rbx_1 + 0x660))(rbx_1, rdx_10) == arg1)
                    (*(*arg1 + 0x678))(arg1, rbx_1)
        
        var_b8_1:8.d &= not.d(var_c8:0xc.d)
        sub_14059bdd0(&var_c8:8)
    
    if (var_70_1 == var_44_1)
        void* rax_34 = sub_141dcc7f0(arg1)
        
        if (sub_1423dce10(rax_34, &arg1[0x51]) != 0)
            sub_1423e60e0(rax_34, arg1[0x51])
        
        arg1[0x51] = 0
    
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    var_70_1 = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    result = sub_14059a8e0(&var_68, 0)
    
    if (var_58 != 0)
        result = sub_140a74f90(var_58)
    
    uint64_t rcx_21 = var_78
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)

__security_check_cookie(result_1 ^ &var_108)
return result
