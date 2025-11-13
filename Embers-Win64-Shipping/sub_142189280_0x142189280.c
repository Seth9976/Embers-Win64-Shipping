// 函数: sub_142189280
// 地址: 0x142189280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x138)
void*** rdi

if (rax == 0)
    rdi = nullptr
else
    void*** rax_1 = sub_1420485e0(rax, arg1)
    rdi = rax_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1

void*** result

if (data_143a2ed38 == data_143a2ed64)
    void*** rax_24 = j_sub_140a82f30(0xc0)
    
    if (rax_24 == 0)
        result = nullptr
    else
        result = sub_142180c20(rax_24, arg1, arg2, rdi)
else
    void*** result_1 = j_sub_140a82f30(0x28)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        result_1[1].b = 0
        *result = &data_1432e6c30
        result[2] = 0
        result[3] = 0
        result[4] = rdi
        
        if (rdi != 0)
            rdi[1].d += 1
    
    void*** rax_3 = j_sub_140a82f30(0xc0)
    void*** r15_1
    
    if (rax_3 == 0)
        r15_1 = nullptr
    else
        r15_1 = sub_142180c20(rax_3, arg1, arg2, rdi)
    
    int64_t rsi_1 = sx.q(result[3].d)
    int32_t rax_5 = (rsi_1 + 1).d
    result[3].d = rax_5
    
    if (rax_5 s> *(result + 0x1c))
        sub_1405a4d70(&result[2])
    
    int64_t rax_6 = result[2]
    void* r9_2 = &data_143a2ed40
    int32_t rcx_3 = 0
    int32_t var_74_1 = 1
    int32_t r8_2 = 0
    int32_t var_78_1 = 0
    void* var_70 = &data_143a2ed40
    *(rax_6 + (rsi_1 << 3)) = r15_1
    int32_t r11_1 = (data_143a2ed58).d
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r11_1 != 0)
        void* rax_7 = data_143a2ed50
        
        if (rax_7 != 0)
            r9_2 = rax_7
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9_2
        
        if (rdx_5 != 0)
        label_1421893f8:
            int32_t rax_14 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_74_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_1
            
            var_64_1.d = r8_2 - rax_15 + 0x1f
            
            if (r8_2 - rax_15 + 0x1f s> r11_1)
                var_64_1.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_64_1:4.d = r8_2
                var_78_1 = rcx_3
                
                if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
                var_68_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_1421893f8
            
            var_64_1.d = r11_1
    
    int128_t var_48_1 = var_78_1.o
    int128_t var_38_1 = 0xffffffff
    var_78_1.o = (&data_143a2ed30).o
    int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_68_1.o = var_48_1
    
    if (0 s< r11_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rdx_8 = sx.q(i) << 5
            int64_t rcx_5 = *var_78_1.q
            int64_t* rcx_6
            
            if (*(rdx_8 + rcx_5 + 0x10) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(rdx_8 + rcx_5 + 8)
            
            int64_t rax_19 = (*(*rcx_6 + 0x48))(rcx_6, zx.q(arg1), zx.q(arg2), rdi, var_78_1)
            
            if (rax_19 != 0)
                int64_t rsi_2 = sx.q(result[3].d)
                int32_t rcx_7 = (rsi_2 + 1).d
                result[3].d = rcx_7
                
                if (rcx_7 s> *(result + 0x1c))
                    sub_1405a4d70(&result[2])
                
                result[2][rsi_2] = rax_19
            
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            i = i_1
        while (i s< *(var_68_1.q + 0x18))

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi, 1)

return result
