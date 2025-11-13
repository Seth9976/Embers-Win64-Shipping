// 函数: sub_141d20140
// 地址: 0x141d20140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rdi = arg1
int32_t result = (*(*arg1 + 0x48))()
int64_t r13 = sx.q(result)
int32_t r15 = 0

if (result s> 0)
    void* r12_1 = nullptr
    int64_t i
    
    do
        int64_t rcx = rdi[1]
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int64_t* rbx_1 = r12_1 + rcx
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        sub_140780cc0(&var_88, sx.q(r15) * 0x50 + rcx)
        
        if (rbx_1[1].d != *(rbx_1 + 0x34))
            int32_t rax_5 = *(rbx_1 + 0xc)
            rbx_1[1].d = 0
            
            if (rax_5 s< 0 && rax_5 != 0)
                sub_140638cc0(rbx_1, 0)
            
            rbx_1[6].d = 0xffffffff
            *(rbx_1 + 0x34) = 0
            sub_140774790(&rbx_1[2])
            int64_t rcx_4 = sx.q(rbx_1[9].d)
            void* rdi_1 = &rbx_1[7]
            void* rax_6 = *(rdi_1 + 8)
            
            if (rcx_4 s> 0)
                if (rax_6 != 0)
                    rdi_1 = rax_6
                
                __builtin_memset(rdi_1, 0xffffffff, rcx_4 << 2)
        
        int64_t var_78
        int64_t* var_110_1 = &var_78
        int32_t rcx_5 = 0
        int32_t var_118_1 = 0
        int32_t rdi_2 = 0
        int32_t var_114_1 = 1
        int32_t var_108_1 = 0xffffffff
        int64_t var_104_1 = 0
        int64_t* var_68
        int32_t var_60
        
        if (var_60 != 0)
            int64_t* r8_1 = &var_78
            
            if (var_68 != 0)
                r8_1 = var_68
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_60 - 1)
            int32_t rdx_5 = *r8_1
            
            if (rdx_5 != 0)
            label_141d202d7:
                int32_t rax_14 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                int32_t var_114_2 = rax_14
                int32_t rax_15
                
                if (rax_14 == 0)
                    rax_15 = 0x20
                else
                    rax_15 = 0x1f - temp0_2
                
                int32_t rax_16 = rdi_2 - rax_15 + 0x1f
                
                if (rax_16 s> var_60)
                    rax_16 = var_60
                
                var_104_1.d = rax_16
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_5)
                    rdi_2 += 0x20
                    rcx_5 += 1
                    var_104_1:4.d = rdi_2
                    var_118_1 = rcx_5
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_104_1.d = var_60
                        break
                    
                    rdx_5 = *(r8_1 + (rdx_6 << 2) + 4)
                    int32_t var_108_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_141d202d7
        
        var_104_1.d = var_60
        int128_t var_a8_1 = var_118_1.o
        int128_t var_98_1 = 0xffffffff
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_e8 = (&var_88).o
        int128_t var_d8_1 = var_a8_1
        int64_t var_c8_1 = temp0_3
        
        while (true)
            int64_t rcx_8 = sx.q(var_d8_1:0xc.d)
            char rax_18
            
            if (rcx_8.d != ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    || var_d8_1.q != &var_78)
                rax_18 = 0
            else
                rax_18 = 1
            
            int64_t* rdx_8 = var_e8.q
            
            if (rax_18 == 0 || rdx_8 != &var_88)
                rax_18 = 1
            else
                rax_18 = 0
            
            if (rax_18 == 0)
                break
            
            int64_t rdi_4 = sx.q(*(*rdx_8 + rcx_8 * 0xc))
            
            if (rdi_4.d s>= 0)
                rdi_4 = zx.q(*(*arg2 + (rdi_4 << 2)))
            
            int32_t var_c0
            sub_1409afd50(rbx_1, &var_c0)
            int32_t rax_19 = var_c0
            char* var_120_1 = nullptr
            int32_t* var_b8
            *var_b8 = rdi_4.d
            var_b8[1] = 0xffffffff
            void var_f8
            sub_1406da850(rbx_1, &var_f8, rdi_4.d, var_b8, rax_19, var_120_1)
            var_d8_1:8.d &= not.d(var_e8:0xc.d)
            sub_14059bdd0(&var_e8:8)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        int64_t var_80_1
        var_80_1.d = 0
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        result = sub_14059a8e0(&var_78, 0)
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_19 = var_88
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rdi = arg1
        r15 += 1
        r12_1 += 0x50
        i = r13
        r13 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_148)
return result
