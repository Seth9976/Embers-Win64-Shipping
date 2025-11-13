// 函数: sub_1419399d0
// 地址: 0x1419399d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_1439c78b8).d
void* r9 = &data_1439c78a0
int32_t rcx = 0
void* var_a0 = &data_1439c78a0
int32_t r8 = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int32_t var_a4 = 1
int64_t var_94 = 0

if (r10 != 0)
    void* rax_1 = data_1439c78b0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141939a68:
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
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> r10)
            rax_10 = r10
        
        var_94.d = rax_10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_94.d = r10
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141939a68

int16_t var_50 = 0
int128_t zmm0 = var_a8.o
int64_t* var_20 = &data_1439c7890
int128_t var_30 = 0xffffffff
int64_t* var_58 = &data_1439c7890
void* rax_11 = zmm0.q
int128_t var_78 = zmm0
int128_t var_88 = (&data_1439c7890).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s< *(rax_11 + 0x18))
    int32_t i = var_78:0xc.d
    
    do
        int64_t* rbx_2 = *(*var_88.q + sx.q(i) * 0x30 + 0x20)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_15
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_15 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_1
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_2 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_17 = sub_140a20af0()
                    uint64_t rdx_5 = zx.q(rax_17)
                    void* const rax_18
                    
                    if (rax_17 != 0)
                        rax_18 = *(&data_143cf0bf8 + (rdx_5 u>> 0xe << 3))
                            + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                    else
                        rax_18 = nullptr
                    
                    *(rax_18 + 8) = rbx_2
                    sub_1405a42f0(&data_143f02390, rdx_5.d)
        
        var_78:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        i = var_78:0xc.d
    while (i s< *(var_78.q + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        sub_141934870(var_58, var_58[1].d - *(var_58 + 0x34), 1)

return sub_141938ff0(&data_1439c7890, 0) __tailcall
