// 函数: sub_141cb3ac0
// 地址: 0x141cb3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg1[0x19].d - *(arg1 + 0xf4)
int32_t* rdx = *rcx
uint64_t result

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg1, rdx_1, arg2)
    else
        result = (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    result = zx.q(*rdx)
    arg_8 = result.d
    *rcx += 4

if (arg_8 s> 0)
    int32_t rcx_2 = 0
    int32_t r8_1 = 0
    int32_t rdi_1 = arg1[0x1d].d
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = &arg1[0x1a]
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (rdi_1 != 0)
        void* rax_4 = arg1[0x1c]
        void* r9_1 = &arg1[0x1a]
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_141cb3bd8:
            int32_t rax_11 = neg.d(rdx_4) & rdx_4
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
            
            if (r8_1 - rax_12 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_84_1:4.d = r8_1
                var_98_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141cb3bd8
            
            var_84_1.d = rdi_1
    
    int32_t rdx_6 = arg1[0x1d].d
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_6
    arg2.o = var_48_1
    int128_t var_78 = (&arg1[0x18]).o
    int96_t var_68_1 = arg2.12
    
    if (rdx_6 != rdi_1)
        void* rax_14 = arg1[0x1c]
        void* r10_1 = &arg1[0x1a]
        
        if (rax_14 != 0)
            r10_1 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_10 != 0)
        label_141cb3ca2:
            int32_t rax_21 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t r11_1
            
            if (rax_21 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rdi_1)
                var_84_1.d = rdi_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141cb3ca2
            
            var_84_1.d = rdi_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t* rcx_9 = var_78.q
        
        if (result.d == (var_88_3.q u>> 0x20).d && var_68_1.q == &arg1[0x1a]
                && rcx_9 == &arg1[0x18])
            break
        
        char* rax_24
        int512_t zmm1
        rax_24, zmm1 = sub_140b5e600(*(*rcx_9 + result * 0x10))
        sub_140b640c0(rax_24, arg1, zmm1)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)

return result
