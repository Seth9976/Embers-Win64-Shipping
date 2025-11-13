// 函数: sub_142176e80
// 地址: 0x142176e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result

if ((arg2[5].b & 2) == 0)
    result = sub_142171a20(arg1, arg2, arg3, arg4)
else
    int64_t* rbx_2 = *(arg1 + 0x310) + 0x1a8
    int32_t var_6c_1 = 0x80
    int32_t* r9_1 = &rbx_2[2]
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t rcx = 0
    int32_t r8_1 = 0
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t r11_1 = r9_1[6]
    int32_t var_118_1 = 0
    int32_t var_114_1 = 1
    int32_t* var_110 = r9_1
    int32_t var_108_1 = 0xffffffff
    int64_t var_104_1 = 0
    
    if (r11_1 != 0)
        int32_t* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_142176f7b:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_114_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_104_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> r11_1)
                var_104_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_104_1:4.d = r8_1
                var_118_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = r9_1[rdx_3 + 1]
                var_108_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_142176f7b
            
            var_104_1.d = r11_1
    
    int64_t* var_a0_1 = rbx_2
    arg3.o = var_118_1.o
    int128_t var_c0_1 = arg3.o
    int16_t var_e0_1 = 0
    arg3.o = 0xffffffff
    var_108_1.o = var_c0_1
    arg4.o = 0xffffffff
    var_118_1.o = rbx_2.o
    arg4.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    arg3.q = (arg4.o).q
    int128_t var_f8_1 = arg3.o
    
    if (0 s< *(var_c0_1.q + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rdx_4 = sx.q(i) * 5
            int64_t rcx_2 = *var_118_1.q
            int64_t* r14_1 = *(rcx_2 + (rdx_4 << 3) + 0x18)
            void* rbx_3 = *(rcx_2 + (rdx_4 << 3) + 0x10)
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            if (rbx_3 != 0)
                int32_t j = 0
                
                if (*(rbx_3 + 0x20) s> 0)
                    int64_t rsi_1 = 0
                    
                    do
                        int64_t rax_15 = *(rbx_3 + 0x18)
                        
                        if (*(rax_15 + rsi_1 + 0x10) != 0 && *(rax_15 + rsi_1 + 0x11) != 0)
                            int64_t var_d0 = zx.q(*(rbx_3 + 0x10)) << 0x20 | sx.q(j)
                            void var_d8
                            sub_1407d1070(&var_98, &var_d8, &var_d0, nullptr)
                            *(*(rbx_3 + 0x18) + rsi_1 + 0x11) = 0
                        
                        j += 1
                        rsi_1 += 0x14
                    while (j s< *(rbx_3 + 0x20))
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp3_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
            
            var_104_1:4.d &= not.d(var_110:4.d)
            sub_14059bdd0(&var_110)
            i = i_1
        while (i s< *(var_108_1.q + 0x18))
        
        if (var_e0_1.b != 0 && var_e0_1:1.b != 0)
            sub_1405e1160(rbx_2, rbx_2[1].d - *(rbx_2 + 0x34), 1)
    
    sub_142160790(arg1, arg2, &var_98, 1)
    sub_142165f20(arg1 + 0x330, 0)
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t var_90
    var_90.d = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_88
    result = sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_17 = var_98
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_138)
return result
