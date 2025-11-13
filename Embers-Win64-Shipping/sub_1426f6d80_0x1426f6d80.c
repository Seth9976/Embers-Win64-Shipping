// 函数: sub_1426f6d80
// 地址: 0x1426f6d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg1[5]

if (rsi == 0)
    jump(*(*arg1 + 0x288))

void* rax_1 = sub_1426a09e0()
void* rdx = *(rsi + 0x10)
int32_t rdi = 0
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr

void* result = sub_142688910(rsi)
void* result_1 = result

if (result != 0)
    result = sub_142607480()
    arg1[0x1b] = result

int32_t* rcx_2 = arg1[0x1b]

if (rcx_2 != 0)
    sub_1426111b0(rcx_2, arg1[0xa].d, *(arg1 + 0x54), result_1)
    sub_1426163e0(arg1[0x1b], arg1[0xc].d.d)
    sub_142616540(arg1[0x1b], arg1[0xd].d.d)
    sub_142616550(arg1[0x1b], (arg1[0xe].d u>> 1).b & 1)
    sub_142616530(arg1[0x1b], arg1[0xe].b & 1)
    sub_1426164c0(arg1[0x1b], (arg1[0xe].d u>> 2).b & 1)
    sub_142616520(arg1[0x1b], (*(arg1 + 0x6c)).d)
    int32_t r9_2 = 1
    
    if (arg1[9].d s>= 1)
        r9_2 = arg1[9].d
    
    sub_142611cc0(arg1[0x1b], arg1[0xb].d, *(arg1 + 0x5c), r9_2)
    int32_t i = 0
    
    if (arg1[9].d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t r8_2 = arg1[8]
            int32_t rax_4 = *(rsi_1 + r8_2 + 8)
            
            if (rax_4 s> 0 && rax_4 == *(rsi_1 + r8_2 + 0x18))
                int32_t var_98_1 = rax_4
                sub_142616510(arg1[0x1b], zx.q(i), *(rsi_1 + r8_2), *(rsi_1 + r8_2 + 0x10))
            
            i += 1
            rsi_1 = &rsi_1[4]
        while (i s< arg1[9].d)
    
    (*(*arg1 + 0x290))(arg1)
    int32_t r14_1 = 0
    int32_t rax_6 = *(arg1 + 0xd4)
    arg1[0x1a].d = 0
    
    if (rax_6 s< 0 && rax_6 != 0)
        sub_1405c5510(&arg1[0x19], 0)
        r14_1 = arg1[0x1a].d
    
    int64_t count = sx.q(arg1[0xa].d)
    int32_t rax_7 = r14_1 + count.d
    arg1[0x1a].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xd4))
        sub_1405daba0(&arg1[0x19])
    
    memset(sx.q(r14_1) + arg1[0x19], 0, count)
    int32_t r10_1 = arg1[0x14].d
    void* r8_5 = &arg1[0x11]
    int32_t rcx_16 = 0
    int32_t var_88_1 = 0
    int32_t var_84_1 = 1
    void* var_80 = r8_5
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0
    
    if (r10_1 != 0)
        void* rax_8 = *(r8_5 + 0x10)
        
        if (rax_8 != 0)
            r8_5 = rax_8
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_1 - 1)
        int32_t rdx_12 = *r8_5
        int32_t var_74_3
        
        if (rdx_12 != 0)
        label_1426f6ff6:
            int32_t rax_15 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_84_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_2
            
            int32_t var_74_2 = rcx_16 - rax_16 + 0x1f
            
            if (rcx_16 - rax_16 + 0x1f s> r10_1)
                var_74_3 = r10_1
        else
            while (true)
                int64_t rdx_13 = sx.q(rdi)
                rcx_16 += 0x20
                rdi += 1
                var_70_1 = rcx_16
                var_88_1 = rdi
                
                if (rdx_13.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r8_5 + (rdx_13 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_1426f6ff6
            
            var_74_3 = r10_1
    
    void* var_20_1 = &arg1[0xf]
    int128_t zmm0_1 = var_88_1.o
    int128_t var_30_1 = 0xffffffff
    int16_t var_50_1 = 0
    var_78_1.o = zmm0_1
    result = zmm0_1.q
    zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    var_88_1.o = (&arg1[0xf]).o
    int128_t var_68_1 = zmm0_1
    
    if (_mm_bsrli_si128(0xffffffff, 4) s< *(result + 0x18))
        int32_t i_2
        int32_t i_1 = i_2
        
        do
            int64_t** rcx_19 = sx.q(i_1) * 0x38
            void* rdx_15 = *var_88_1.q
            sub_1426f51e0(arg1, *(rcx_19 + rdx_15), rdx_15 + 8 + rcx_19)
            var_70_1 &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            result = var_78_1.q
            i_1 = i_2
        while (i_1 s< *(result + 0x18))
        
        if (var_50_1.b != 0 && var_50_1:1.b != 0)
            return sub_140aa4bc0(&arg1[0xf], arg1[0x10].d - *(arg1 + 0xac), 1)

return result
