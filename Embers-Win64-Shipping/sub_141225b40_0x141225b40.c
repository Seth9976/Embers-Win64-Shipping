// 函数: sub_141225b40
// 地址: 0x141225b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141228900(arg1, arg2, arg3)
int32_t rbx = 0
void** const var_48

if (result.b != 0)
    void* r15_1 = *(arg3 + 0xa0)
    
    if (arg4[1].d - *(arg4 + 0x34) s> 0 && arg1[1].d == 0xffffffff)
        (*(*arg1 + 0x28))(arg1)
    
    int32_t r11_1 = arg4[5].d
    void* r9 = &arg4[2]
    int32_t var_88_1 = 0
    int32_t rcx_1 = 0
    int32_t var_84_1 = 1
    int32_t r8_1 = 0
    void* var_80 = r9
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (r11_1 != 0)
        void* rax_3 = *(r9 + 0x10)
        
        if (rax_3 != 0)
            r9 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9
        
        if (rdx_2 != 0)
        label_141225c18:
            int32_t rax_10 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_84_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_11 + 0x1f
            
            if (r8_1 - rax_11 + 0x1f s> r11_1)
                var_74_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_74_1:4.d = r8_1
                var_88_1 = rcx_1
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141225c18
            
            var_74_1.d = r11_1
    
    void** var_20_1 = arg4
    var_48 = arg4
    int128_t var_30_1 = 0xffffffff
    int64_t var_40
    var_40.o = var_88_1.o
    char var_50_1 = 0
    int64_t var_38
    int128_t zmm3 = var_38.o
    var_78_1.o = zmm3
    var_88_1.o = var_48.o
    int128_t zmm0_1
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_30_1 = zmm0_1
    int128_t var_68_1 = zmm0_1
    
    if (0 s< *(zmm3.q + 0x18))
        int32_t i_2
        int32_t i = i_2
        
        do
            sub_141246cf0(arg1, arg2, r15_1, *var_88_1.q + 0x10 + sx.q(i) * 0x50)
            var_74_1:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i = i_2
        while (i s< *(var_78_1.q + 0x18))
        
        char var_4f
        
        if (var_50_1 != 0 && var_4f != 0)
            sub_141222250(arg4, arg4[1].d - *(arg4 + 0x34), 1)
    
    result = sub_141248480(arg1, arg5, *(arg3 + 0x44))
    int32_t i_1 = 0
    
    if (arg6[1].d s> 0)
        int64_t rdi_1 = 0
        
        do
            result = sub_141393890(*(*arg6 + rdi_1))
            i_1 += 1
            rdi_1 += 8
        while (i_1 s< arg6[1].d)

int32_t rcx_9 = data_143e813b4

if (data_143e813b0 != 0 || rcx_9 != 0)
    int64_t rax_19 = *(arg3 + 0xa0)
    int64_t var_40_1 = rax_19
    int64_t var_38_1 = rax_19
    result = rax_19 + 0x26f0
    var_48 = &data_142f29fd0
    int64_t* var_30_2 = zx.o(0).q
    uint64_t result_1 = result
    
    if (*(arg2 + 0x1148) s> 0)
        void** rdi_2 = nullptr
        
        while (true)
            result = sub_1422974c0(*(rdi_2 + *(arg2 + 0x1140)), &var_48, rcx_9 != 0)
            rbx += 1
            rdi_2 = &rdi_2[1]
            
            if (rbx s>= *(arg2 + 0x1148))
                break
            
            rcx_9 = data_143e813b4
        
        if (var_30_2 != 0)
            var_30_2[1].d -= 1
            
            if (var_30_2[1].d == 1)
                return (**var_30_2)(var_30_2, 1)

return result
