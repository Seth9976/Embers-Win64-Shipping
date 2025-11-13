// 函数: sub_14198b9c0
// 地址: 0x14198b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xc8)
int32_t r11 = *(arg2 + 0x28)
void* r9 = arg2 + 0x10
int32_t var_a4 = 1
void* var_a0 = r9
int32_t rcx_1 = 0
int32_t var_a8 = 0
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14198ba68:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_94:4.d = r8
            var_a8 = rcx_1
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14198ba68
        
        var_94.d = r11

void* var_20 = arg2
int128_t zmm0 = var_a8.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* result = zmm0.q
int128_t var_78 = zmm0
int128_t var_88 = arg2.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_68 = zmm0

if (0 s< *(result + 0x18))
    int32_t i = var_78:0xc.d
    
    do
        void* rdi_1 = *(sx.q(i) * 0xb8 + *var_88.q + 0xa8)
        
        if (rdi_1 != 0)
            void* rcx_4 = *(rdi_1 + 8)
            
            if (rcx_4 != 0)
                int64_t rax_13 = 0
                
                if (0 == *(rcx_4 + 8))
                    *(rcx_4 + 8) = 0
                else
                    rax_13 = *(rcx_4 + 8)
                
                if (((rax_13 u>> 0x1a).b & 1) == 0)
                    sub_1405a6220(sub_140a242a0(), rdi_1 + 8)
                    int64_t* rcx_6 = *(rdi_1 + 8)
                    *(rdi_1 + 8) = 0
                    
                    if (rcx_6 != 0)
                        rcx_6[9].d -= 1
                        
                        if (rcx_6[9].d == 1)
                            sub_140a2f6e0(rcx_6)
        
        var_78:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        result = var_78.q
        i = var_78:0xc.d
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        result = sub_141968110(arg2, *(arg2 + 8) - *(arg2 + 0x34), 1)

if (arg1 == -0xc8)
    return result

return LeaveCriticalSection(arg1 + 0xc8)
