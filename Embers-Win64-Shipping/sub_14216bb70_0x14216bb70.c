// 函数: sub_14216bb70
// 地址: 0x14216bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = 0
int32_t i_2 = 0
int32_t var_f8 = 0xffffffff
void* result = sub_140d3cc80(sub_14254d5d0(), &var_108, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_f8 + 1
int64_t rdx_1 = var_108
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

char arg_8
char rbx = arg_8

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    int64_t* rdi_2 = *(rdx_1 + (sx.q(i_1) << 3)) + 0xe0
    char* arg_10 = &arg_8
    char** arg_18 = &arg_10
    
    if (rdi_2[1].d - *(rdi_2 + 0x34) s> 0)
        sub_140d3a900(rdi_2)
        char*** arg_20 = &arg_18
        sub_14215bbb0(*rdi_2, rdi_2[1].d - *(rdi_2 + 0x34), rbx)
    
    sub_140908c40(rdi_2)
    int32_t r11_1 = rdi_2[5].d
    void* r10_1 = &rdi_2[2]
    int32_t var_f0_1 = 0
    int32_t r8_2 = 0
    int32_t var_ec_1 = 1
    int32_t r9_1 = 0
    void* var_e8_1 = r10_1
    int32_t var_e0_1 = 0xffffffff
    int64_t var_dc_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rcx_5 = *r10_1
        
        if (rcx_5 != 0)
        label_14216bcdd:
            int32_t rax_11 = neg.d(rcx_5) & rcx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_ec_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_dc_1.d = r9_1 - rax_12 + 0x1f
            
            if (r9_1 - rax_12 + 0x1f s> r11_1)
                var_dc_1.d = r11_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_2)
                r9_1 += 0x20
                r8_2 += 1
                var_dc_1:4.d = r9_1
                var_f0_1 = r8_2
                
                if (rcx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rcx_5 = *(r10_1 + (rcx_6 << 2) + 4)
                int32_t var_e0_2 = 0xffffffff
                
                if (rcx_5 != 0)
                    goto label_14216bcdd
            
            var_dc_1.d = r11_1
    
    int64_t* var_38_1 = rdi_2
    int16_t var_90_1 = 0
    int128_t var_70_1 = 0xffffffff
    int128_t zmm0_1
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    result = nullptr
    int128_t var_a8_1 = zmm0_1
    int128_t var_c8 = rdi_2.o
    int128_t var_b8_1 = var_f0_1.o
    int128_t var_40 = zmm0_1
    
    if (0 s< r11_1)
        do
            var_b8_1:8.d &= not.d(var_c8:0xc.d)
            sub_14059bdd0(&var_c8:8)
            result = var_b8_1.q
        while (var_b8_1:0xc.d s< *(result + 0x18))
        
        if (var_90_1.b != 0 && var_90_1:1.b != 0)
            result = sub_1409b3740(rdi_2, rdi_2[1].d - *(rdi_2 + 0x34), 1)
    
    i = i_2
    i_1 = i_3 + 1
    rdx_1 = var_108
    i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_1 == 0)
    return result

return sub_140a74f90(rdx_1)
