// 函数: sub_141f318a0
// 地址: 0x141f318a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
int64_t r15

if (arg2 == 0 || *(arg2 + 8) - *(arg2 + 0x34) s<= 0)
    r15.b = 0
else
    int32_t r10_1 = *(arg2 + 0x28)
    void* r9_1 = arg2 + 0x10
    int32_t r8 = 0
    int32_t var_64_1 = 1
    int32_t var_68_1 = 0
    int32_t rcx = 0
    int32_t var_50_1 = 0
    r15.b = 1
    void* var_60 = r9_1
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141f31959:
            int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_64_2 = rax_8
            
            if (rax_8 == 0)
                rax = 0x20
            else
                rax = zx.q(0x1f - temp0_2)
            
            r8 = rcx - rax.d + 0x1f
            
            if (r8 s> r10_1)
                r8 = r10_1
            
            int32_t var_54_3 = r8
        else
            while (true)
                int64_t rdx_3 = sx.q(r8)
                rcx += 0x20
                r8 += 1
                var_50_1 = rcx
                var_68_1 = r8
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    r8 = r10_1
                    int32_t var_54_2 = r10_1
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141f31959
    
    int512_t zmm0
    zmm0.o = var_68_1.o
    int128_t var_38_1 = zmm0.o
    zmm0.o = arg2.o
    int128_t var_28_1 = 0xffffffff
    int64_t var_48_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_68_1.o = zmm0.o
    var_58_1.o = var_38_1
    
    if (r8 s< r10_1)
        int32_t i_2
        int32_t i = i_2
        
        do
            int64_t rcx_2 = *var_68_1.q
            int64_t rdx_5 = sx.q(i) * 5
            *(rcx_2 + (rdx_5 << 2) + 8)
            zmm0 = sub_141f26670(arg1, *(rcx_2 + (rdx_5 << 2)), zmm0)
            var_50_1 &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_2
        while (i s< *(var_58_1.q + 0x18))

int64_t rbx

if (arg3 == 0 || *(arg3 + 8) - *(arg3 + 0x34) s<= 0)
    rbx.b = 0
else
    rbx.b = 1

void* rcx_5 = arg1[0x86]

if (rcx_5 != 0 && rbx.b != 0)
    sub_141de1ba0(rcx_5, arg3, &arg1[0xa5], &arg1[0xa7])

if ((*(arg1 + 0x71e) & 1) == 0 || rbx.b == 0 || r15.b == 0 || arg1[0x95].d s<= 0)
    return 

int64_t* i_1 = arg1[0x94]

for (void* r15_1 = &i_1[sx.q(arg1[0x95].d)]; i_1 != r15_1; i_1 = &i_1[1])
    int64_t arg_8 = *i_1
    rax = sub_140d3c6e0(&arg_8)
    
    if (rax != 0)
        int64_t rax_15 = sub_142591550()
        void* rcx_7 = *(rax + 0x10)
        int64_t rdx_8 = sx.q(*(rax_15 + 0x38))
        
        if (rdx_8.d s<= *(rcx_7 + 0x38) && *(*(rcx_7 + 0x30) + (rdx_8 << 3)) == rax_15 + 0x30)
            sub_141f318a0(rax, arg2, arg3)
