// 函数: sub_1413f2380
// 地址: 0x1413f2380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x1c68, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
int32_t r9 = 0
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *(arg1 + 0x1c68) + rax * 0x18

int64_t* result = rdx_1 + 8

if (rdx_1 == 0)
    result = nullptr

if (result != 0)
    void* rdi_1 = *result
    *(rdi_1 + 0x898) -= 1
    
    if (*(rdi_1 + 0x898) s< 1)
        int32_t var_88_1 = 0
        int32_t r11_1 = *(arg1 + 0x1ce0)
        void* r8 = arg1 + 0x1cc8
        int32_t var_84_1 = 1
        int32_t rcx_2 = 0
        void* var_80 = r8
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = 0
        int32_t var_70_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r8 + 0x10)
            
            if (rax_2 != 0)
                r8 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r8
            int32_t var_74_3
            
            if (rdx_4 != 0)
            label_1413f2478:
                int32_t rax_9 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_84_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                int32_t var_74_2 = rcx_2 - rax_10 + 0x1f
                
                if (rcx_2 - rax_10 + 0x1f s> r11_1)
                    var_74_3 = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(r9)
                    rcx_2 += 0x20
                    r9 += 1
                    var_70_1 = rcx_2
                    var_88_1 = r9
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r8 + (rdx_5 << 2) + 4)
                    var_78_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_1413f2478
                
                var_74_3 = r11_1
        
        void* var_20_1 = arg1 + 0x1cb8
        int128_t zmm0 = var_88_1.o
        int128_t var_30_1 = 0xffffffff
        int16_t var_50_1 = 0
        void* rax_12 = zmm0.q
        var_78_1.o = zmm0
        var_88_1.o = (arg1 + 0x1cb8).o
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        
        if (0 s< *(rax_12 + 0x18))
            int32_t i_1
            int32_t i = i_1
            
            do
                if (*(*var_88_1.q + sx.q(i) * 0x18 + 8) == arg3)
                    sub_1405c2fb0(zmm0:8.q, i)
                    var_50_1.b = 1
                
                var_70_1 &= not.d(var_80:4.d)
                sub_14059bdd0(&var_80)
                i = i_1
            while (i s< *(var_78_1.q + 0x18))
            
            if (var_50_1.b != 0 && var_50_1:1.b != 0)
                sub_1405b6470(arg1 + 0x1cb8, *(arg1 + 0x1cc0) - *(arg1 + 0x1cec), 1)
        
        sub_140868c90(arg1 + 0x1c68, arg3)
        sub_1405d1550(rdi_1 + 0x890)
        return j_sub_140a74f90(rdi_1)

return result
