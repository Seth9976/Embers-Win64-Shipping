// 函数: sub_142c1bdd0
// 地址: 0x142c1bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x90)
int128_t* const r15 = &data_14369a5d0
uint16_t rdx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_2

if (0 != rdx * 0x100 + r8_1.w)
    rcx_2 = (zx.q(rdx.b) << 8) + arg1 + r8_1
else
    rcx_2 = &data_14369a5d0

int32_t rdx_1 = *(*(rbp + 0x70) + zx.q(*(rbp + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_2) << 8) + zx.d(*(rcx_2 + 1))
uint32_t rax_2

if (r8_4 == 1)
    rax_2 = sub_142c1e900(rcx_2, rdx_1)
label_142c1be59:
    
    if (rax_2 != 0xffffffff)
        int32_t r8_6 = *(rbp + 0x5c)
        void* rdx_2 = *(arg2 + 8)
        *arg2 = r8_6
        arg2[0xe] = 1
        arg2[0xf] = *(*(rdx_2 + 0x90) + 0x60)
        void* r9_1 = *(rdx_2 + 0x90)
        char rdx_3
        
        if (r8_6 != *(r9_1 + 0x5c))
            rdx_3 = 0
        else
            rdx_3 = *(*(r9_1 + 0x70) + zx.q(*(r9_1 + 0x5c)) * 0x14 + 0xf)
        
        arg2[7].b = rdx_3
        
        if (sub_142c22680(arg2).b != 0)
            uint32_t rdx_6 = (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))
            int32_t rcx_11 = rdx_6 u>> 1 & 0x5b6db6db
            int32_t rdx_8 = rdx_6 - (rcx_11 u>> 1 & 0x5b6db6db) - rcx_11
            uint64_t r13_4 = zx.q((((rdx_8 u>> 3) + rdx_8) & 0xc71c71c7) u% 0x3f)
            uint32_t r8_8 = zx.d(*(arg1 + 7)) + (zx.d(*(arg1 + 6)) << 8)
            int32_t rdx_12 = r8_8 u>> 1 & 0x5b6db6db
            int32_t r8_10 = r8_8 - (rdx_12 u>> 1 & 0x5b6db6db) - rdx_12
            uint64_t r8_11 = zx.q(*(arg1 + 9))
            uint16_t rdx_14 = zx.w(*(arg1 + 8))
            int32_t r12_4 = (((r8_10 u>> 3) + r8_10) & 0xc71c71c7) u% 0x3f
            void* rcx_18
            
            if (0 != rdx_14 * 0x100 + r8_11.w)
                rcx_18 = (zx.q(rdx_14.b) << 8) + arg1 + r8_11
            else
                rcx_18 = &data_14369a5d0
            
            int32_t rax_26 = sub_142c1e750(rcx_18, *(*(rbp + 0x70) + zx.q(*(rbp + 0x5c)) * 0x14))
            uint16_t r8_12 = zx.w(*(arg1 + 0xa))
            uint64_t r9_3 = zx.q(*(arg1 + 0xb))
            int128_t* const rcx_22
            
            if (0 != r8_12 * 0x100 + r9_3.w)
                rcx_22 = (zx.q(r8_12.b) << 8) + arg1 + r9_3
            else
                rcx_22 = &data_14369a5d0
            
            int32_t rax_29 = sub_142c1e750(rcx_22, *(*(rbp + 0x70) + zx.q(*arg2) * 0x14))
            
            if (rax_26 u>= (zx.d(*(arg1 + 0xc)) << 8) + zx.d(*(arg1 + 0xd))
                    || rax_29 u>= (zx.d(*(arg1 + 0xe)) << 8) + zx.d(*(arg1 + 0xf)))
                rax_29.b = 0
            else
                void* rdx_26 = arg1 + 0x10 + (zx.q((
                    ((zx.d(*(arg1 + 0xe)) << 8) + zx.d(*(arg1 + 0xf))) * rax_26 + rax_29)
                    * (r12_4 + r13_4.d)) << 1)
                int64_t r8_14 = *(rbp + 0x80)
                
                if (rdx_26 u>= arg1 + 0x10)
                    r15 = rdx_26
                
                char rbx_1 = sub_142c1d4c0(arg1 + 6, arg2, arg1, r15 + (r13_4 << 1), 
                    r8_14 + zx.q(*arg2) * 0x14)
                    | sub_142c1d4c0(arg1 + 4, arg2, arg1, r15, r8_14 + zx.q(*(rbp + 0x5c)) * 0x14)
                
                if (rbx_1 != 0)
                    int32_t rdx_31 = *(rbp + 0x5c)
                    int32_t r8_19 = *arg2 + 1
                    
                    if (r8_19 - rdx_31 u>= 2)
                        sub_142bf5c70(rbp, rdx_31, r8_19)
                
                rax_29 = *arg2
                *(rbp + 0x5c) = rax_29
                
                if (r12_4 != 0)
                    *(rbp + 0x5c) = rax_29 + 1
                
                rax_29.b = 1
            
            return rax_29
else if (r8_4 == 2)
    rax_2 = sub_142c1e990(rcx_2, rdx_1)
    goto label_142c1be59

rax_2.b = 0
return rax_2
