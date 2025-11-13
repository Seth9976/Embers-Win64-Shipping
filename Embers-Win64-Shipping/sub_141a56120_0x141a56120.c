// 函数: sub_141a56120
// 地址: 0x141a56120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t* result

if ((*(arg1 + 0xe0) & 1) != 0)
    int64_t* rcx = arg1 + 0xb0
    
    if ((*(arg1 + 0xe0) & 2) == 0)
        rcx = *rcx
    
    result = (*(*rcx + 0x38))(rcx)

if ((*(arg1 + 0xe0) & 1) == 0 || result.b == 0)
    int32_t rdi_1 = *(arg2 + 0x24)
    
    if (rdi_1 == 0x80000000)
        void* const rdi_2 = 0x10
        
        if (arg2[4].d != 0)
            rdi_2 = 4
        
        rdi_1 = (*(rdi_2 + arg2)).d
    
    char var_108 = 1
    int32_t var_104_1 = rdi_1
    var_108.q = var_108.q
    char var_128 = 1
    int32_t var_124_1 = rdi_1
    int64_t var_100_1 = var_128.q
    var_128.o = var_108.o
    sub_141a4ade0(arg1, &var_108, &var_128)
    int32_t rbx_1 = var_108.d
    double var_118[0x2]
    int128_t var_f8
    
    if (rbx_1 != 0xffffffff)
    label_141a5624a:
        
        if (*(arg1 + 0x12) != 0)
            var_128.q = *(arg1 + 0x28)
            int32_t var_120_1 = *(arg1 + 0x30)
            var_108.o = var_128.o
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x2c)
            int32_t var_6c_1 = 0x80
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            sub_141a6a710(&var_128, arg2)
            var_128.o = var_128.o
            int32_t rdx_5
            
            if (rbx_1 s< 0 || rbx_1 s>= *(arg1 + 0x20))
                rdx_5 = -1
            else
                rdx_5 = *(*(arg1 + 0x18) + (sx.q(rbx_1) << 2))
            
            sub_141a4f560(&var_128, rdx_5, &var_108, &var_98)
            int64_t var_88
            var_120_1.q = &var_88
            int32_t rcx_14 = 0
            var_128.d = 0
            var_118[0].d = 0xffffffff
            int32_t r8_5 = 0
            int32_t var_124_3 = 1
            var_118[0] = 0
            int64_t* var_78
            int32_t var_70
            
            if (var_70 != 0)
                int64_t* r9_2 = &var_88
                
                if (var_78 != 0)
                    r9_2 = var_78
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_70 - 1)
                int32_t rdx_8 = *r9_2
                
                if (rdx_8 != 0)
                label_141a563d8:
                    int32_t rax_18 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                    int32_t var_124_4 = rax_18
                    int32_t rax_19
                    
                    if (rax_18 == 0)
                        rax_19 = 0x20
                    else
                        rax_19 = 0x1f - temp0_2
                    
                    int32_t rax_20 = r8_5 - rax_19 + 0x1f
                    
                    if (rax_20 s> var_70)
                        rax_20 = var_70
                    
                    var_118[0]:4.d = rax_20
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_14)
                        r8_5 += 0x20
                        rcx_14 += 1
                        var_118[1].d = r8_5
                        var_128.d = rcx_14
                        
                        if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            var_118[0]:4.d = var_70
                            break
                        
                        rdx_8 = *(r9_2 + (rdx_9 << 2) + 4)
                        var_118[0].d = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_141a563d8
            
            var_f8.q = &var_98
            var_f8 = var_128.o
            int128_t zmm0_3 = var_f8
            var_118[0].d = 0xffffffff << (var_70.b & 0x1f)
            var_118[0]:4.d = var_70
            double rbx_2 = var_118[0]
            double temp0_3[0x2] = _mm_unpackhi_pd(var_118, var_118[0])
            int128_t var_c8 = zmm0_3
            int64_t var_a8_1 = temp0_3.q
            
            while (true)
                int64_t rax_21 = sx.q(var_118[1]:4.d)
                int64_t rcx_18 = var_c8.q
                
                if (rax_21.d == (rbx_2 u>> 0x20).d && var_118[0] == &var_88 && rcx_18 == &var_98)
                    break
                
                int32_t* rdx_11 = rax_21 * 0x1c + *rcx_18
                void** rcx_20 = sx.q(*rdx_11) * 0x88 + *(arg1 + 0xa0)
                
                if ((rcx_20[0x10].b & 2) == 0)
                    rcx_20 = *rcx_20
                
                var_128.o = *(rdx_11 + 4)
                (*(*rcx_20 + 0x40))(rcx_20, arg2, &var_128, arg3, arg4)
                var_118[1].d &= not.d(var_c8:0xc.d)
                sub_14059bdd0(&var_c8:8)
            
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            int64_t var_90
            var_90.d = 0
            int32_t var_68_2 = 0xffffffff
            int32_t var_64_2 = 0
            result = sub_14059a8e0(&var_88, 0)
            
            if (var_78 != 0)
                result = sub_140a74f90(var_78)
            
            int64_t rcx_26 = var_98
            
            if (rcx_26 != 0)
                result = sub_140a74f90(rcx_26)
        else
            void* rcx_7 = sx.q(*(*(arg1 + 0x18) + (sx.q(rbx_1) << 2))) * 0x58 + *(arg1 + 0x28)
            void* i_1 = *(rcx_7 + 0x48)
            void* i = rcx_7 + 0x18
            
            if (i_1 != 0)
                i = i_1
            
            result = sx.q(*(rcx_7 + 0x50))
            
            for (void* rdi_3 = i + result * 0xc; i != rdi_3; i += 0xc)
                void** rcx_10 = sx.q(*i) * 0x88 + *(arg1 + 0xa0)
                
                if ((rcx_10[0x10].b & 2) == 0)
                    rcx_10 = *rcx_10
                
                result = (*(*rcx_10 + 0x48))(rcx_10, arg2, arg3, arg4)
        
        void* rcx_27 = *(arg3 + 0x10)
        
        if (rcx_27 != 0)
            result = sub_141a55a30(rcx_27, arg2, arg3, arg4)
    else
        var_128 = 1
        int32_t var_124_2 = rdi_1
        sub_141a2ff30(&var_128, arg1 + 0x40, var_128.q)
        var_f8 = var_128.o
        double var_e8[0x2] = var_118
        result = sub_141a3f350(arg1, &var_108, &var_f8, arg5)
        rbx_1 = var_108.d
        
        if (rbx_1 != 0xffffffff)
            goto label_141a5624a

__security_check_cookie(rax_1 ^ &var_158)
return result
