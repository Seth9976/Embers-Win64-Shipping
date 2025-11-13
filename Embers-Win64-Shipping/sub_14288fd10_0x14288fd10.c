// 函数: sub_14288fd10
// 地址: 0x14288fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg4)
int32_t rcx = arg2[1].d
int32_t rax_2 = (rcx ^ arg3[1].d) & (((arg1 - 1) u>> 0x3f) - 1).d
int32_t r9 = (r14 - 1).d
arg2[1].d = rcx ^ rax_2
arg3[1].d ^= rax_2
uint128_t zmm4 = zx.o(((arg1 - 1) u>> 0x3f) - 1)
int32_t rcx_2 = arg2[2].d
int32_t rax_5 = (rcx_2 ^ arg3[2].d) & (((arg1 - 1) u>> 0x3f) - 1).d
zmm4 = _mm_unpacklo_epi64(zmm4, zmm4.q)
arg2[2].d = rcx_2 ^ rax_5
arg3[2].d ^= rax_5
int32_t rcx_4 = *(arg2 + 0x14)
int32_t rdx_3 = (rcx_4 ^ *(arg3 + 0x14)) & 4 & (((arg1 - 1) u>> 0x3f) - 1).d
*(arg2 + 0x14) = rdx_3 ^ rcx_4
*(arg3 + 0x14) ^= rdx_3

if (r9 u<= 9)
    switch (r9)
        case 1
            goto label_14288ffc5
        case 2
            goto label_14288ffa3
        case 3
            goto label_14288ff81
        case 4
            goto label_14288ff5f
        case 5
            goto label_14288ff3d
        case 6
            goto label_14288ff1b
        case 7
            goto label_14288fef9
        case 8
            goto label_14288fed7
        case 9
        label_14288feb5:
            void* r9_7 = *arg2
            int64_t rcx_13 = *(r9_7 + 0x48)
            int64_t rdx_7 = (*(*arg3 + 0x48) ^ rcx_13) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_7 + 0x48) = rcx_13 ^ rdx_7
            void* rax_17 = *arg3
            *(rax_17 + 0x48) ^= rdx_7
        label_14288fed7:
            void* r9_8 = *arg2
            int64_t rcx_15 = *(r9_8 + 0x40)
            int64_t rdx_10 = (*(*arg3 + 0x40) ^ rcx_15) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_8 + 0x40) = rcx_15 ^ rdx_10
            void* rax_19 = *arg3
            *(rax_19 + 0x40) ^= rdx_10
        label_14288fef9:
            void* r9_9 = *arg2
            int64_t rcx_17 = *(r9_9 + 0x38)
            int64_t rdx_13 = (*(*arg3 + 0x38) ^ rcx_17) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_9 + 0x38) = rcx_17 ^ rdx_13
            void* rax_21 = *arg3
            *(rax_21 + 0x38) ^= rdx_13
        label_14288ff1b:
            void* r9_10 = *arg2
            int64_t rcx_19 = *(r9_10 + 0x30)
            int64_t rdx_16 = (*(*arg3 + 0x30) ^ rcx_19) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_10 + 0x30) = rcx_19 ^ rdx_16
            void* rax_23 = *arg3
            *(rax_23 + 0x30) ^= rdx_16
        label_14288ff3d:
            void* r9_11 = *arg2
            int64_t rcx_21 = *(r9_11 + 0x28)
            int64_t rdx_19 = (*(*arg3 + 0x28) ^ rcx_21) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_11 + 0x28) = rcx_21 ^ rdx_19
            void* rax_25 = *arg3
            *(rax_25 + 0x28) ^= rdx_19
        label_14288ff5f:
            void* r9_12 = *arg2
            int64_t rcx_23 = *(r9_12 + 0x20)
            int64_t rdx_22 = (*(*arg3 + 0x20) ^ rcx_23) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_12 + 0x20) = rcx_23 ^ rdx_22
            void* rax_27 = *arg3
            *(rax_27 + 0x20) ^= rdx_22
        label_14288ff81:
            void* r9_13 = *arg2
            int64_t rcx_25 = *(r9_13 + 0x18)
            int64_t rdx_25 = (*(*arg3 + 0x18) ^ rcx_25) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_13 + 0x18) = rcx_25 ^ rdx_25
            void* rax_29 = *arg3
            *(rax_29 + 0x18) ^= rdx_25
        label_14288ffa3:
            void* r9_14 = *arg2
            int64_t rcx_27 = *(r9_14 + 0x10)
            int64_t rdx_28 = (*(*arg3 + 0x10) ^ rcx_27) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_14 + 0x10) = rcx_27 ^ rdx_28
            void* rax_31 = *arg3
            *(rax_31 + 0x10) ^= rdx_28
        label_14288ffc5:
            void* r9_15 = *arg2
            int64_t rcx_29 = *(r9_15 + 8)
            int64_t rdx_31 = (*(*arg3 + 8) ^ rcx_29) & (((arg1 - 1) u>> 0x3f) - 1)
            *(r9_15 + 8) = rcx_29 ^ rdx_31
            void* rax_33 = *arg3
            *(rax_33 + 8) ^= rdx_31
    
    int64_t* r9_16 = *arg2
    int64_t rdx_32 = *r9_16
    int64_t rcx_33 = (**arg3 ^ rdx_32) & (((arg1 - 1) u>> 0x3f) - 1)
    *r9_16 = rdx_32 ^ rcx_33
    int64_t* result = *arg3
    *result ^= rcx_33
    return result

int32_t i = 0xa
int32_t rcx_7 = (r14 - 0xa).d

if (r14.d s> 0xa && rcx_7 u>= 2)
    int64_t r11_1 = *arg3
    int64_t rdi_1 = *arg2
    int64_t rax_10 = sx.q(r9)
    int64_t r9_1 = r11_1 + (rax_10 << 3)
    int64_t rax_11 = rdi_1 + (rax_10 << 3)
    
    if ((r11_1 + 0x50 u> rax_11 || r9_1 u< rdi_1 + 0x50) && (r11_1 + 0x50 u> arg3 || r9_1 u< arg3)
            && (r11_1 + 0x50 u> arg2 || r9_1 u< arg2) && (rdi_1 + 0x50 u> arg3 || rax_11 u< arg3)
            && (rdi_1 + 0x50 u> arg2 || rax_11 u< arg2))
        int32_t rcx_8 = rcx_7 & 0x80000001
        
        if (rcx_8 s< 0)
            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
        
        int128_t* rax_12 = 0x50
        
        do
            int128_t zmm2 = *(rax_12 + r11_1)
            i += 2
            int128_t zmm1 = *(rax_12 + rdi_1)
            rax_12 = &rax_12[1]
            int128_t zmm3 = (zmm2 ^ zmm1) & zmm4
            *(rax_12 + rdi_1 - 0x10) = zmm3 ^ zmm1
            *(rax_12 + r11_1 - 0x10) = zmm3 ^ zmm2
        while (i s< r14.d - rcx_8)

for (int64_t i_1 = sx.q(i); i_1 s< r14; i_1 += 1)
    int64_t rax_13 = *arg2
    int64_t rcx_11 = *(rax_13 + (i_1 << 3))
    int64_t r9_6 = (*(*arg3 + (i_1 << 3)) ^ rcx_11) & (((arg1 - 1) u>> 0x3f) - 1)
    *(rax_13 + (i_1 << 3)) = rcx_11 ^ r9_6
    int64_t rax_15 = *arg3
    *(rax_15 + (i_1 << 3)) ^= r9_6

goto label_14288feb5
