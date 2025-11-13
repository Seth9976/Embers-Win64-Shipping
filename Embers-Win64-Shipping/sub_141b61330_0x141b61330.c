// 函数: sub_141b61330
// 地址: 0x141b61330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98 = 0xffffffff
int64_t var_94 = 0
int32_t r11 = *(arg1 + 0xe0)
void* r9 = arg1 + 0xc8
void* var_a0 = r9
int32_t rcx = 0
int32_t var_a8 = 0
int32_t var_a4 = 1
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141b613c8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b613c8
        
        var_94.d = r11

int64_t* var_20 = arg1 + 0xb8
int128_t zmm0 = var_a8.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* result = zmm0.q
int128_t var_78 = zmm0
int128_t var_88 = (arg1 + 0xb8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s< *(result + 0x18))
    int32_t i = var_78:0xc.d
    
    do
        void* rax_13 = *(*var_88.q + sx.q(i) * 0x18 + 8)
        int64_t* rbx_1 = *(rax_13 + 0x50)
        *(rax_13 + 0x50) = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_15
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_15 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_17 = sub_140a20af0()
                        uint64_t rdx_6 = zx.q(rax_17)
                        void* const rax_18
                        
                        if (rax_17 != 0)
                            rax_18 = *(&data_143cf0bf8 + (rdx_6 u>> 0xe << 3))
                                + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                        else
                            rax_18 = nullptr
                        
                        *(rax_18 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_6.d)
        
        var_78:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        result = var_78.q
        i = var_78:0xc.d
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_1405b6470(arg1 + 0xb8, *(arg1 + 0xc0) - *(arg1 + 0xec), 1)

return result
