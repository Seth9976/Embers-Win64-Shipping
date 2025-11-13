// 函数: sub_142252610
// 地址: 0x142252610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142251b90(arg1 + 0x188)
int64_t* rdi = *arg2
void* rbx_3 = &rdi[sx.q(arg2[1].d) * 2]

if (rdi != rbx_3)
    int64_t* r14_1 = &rdi[1]
    
    do
        uint32_t rcx_2 = (*rdi u>> 4).d
        int32_t r8_2 = (0x9e3779b9 - rcx_2) ^ rcx_2 << 8
        int32_t rdx_2 = neg.d(r8_2 + rcx_2) ^ r8_2 u>> 0xd
        int32_t rcx_5 = (rcx_2 - r8_2 - rdx_2) ^ rdx_2 u>> 0xc
        int32_t r8_5 = (r8_2 - rcx_5 - rdx_2) ^ rcx_5 << 0x10
        int32_t rdx_5 = (rdx_2 - r8_5 - rcx_5) ^ r8_5 u>> 5
        int32_t rcx_8 = (rcx_5 - r8_5 - rdx_5) ^ rdx_5 u>> 3
        int32_t r8_8 = (r8_5 - rcx_8 - rdx_5) ^ rcx_8 << 0xa
        void arg_8
        sub_140812a70(sub_142237720(arg1 + 0x188, (rdx_5 - r8_8 - rcx_8) ^ r8_8 u>> 0xf, rdi), 
            &arg_8, r14_1, nullptr)
        uint32_t rcx_12 = (*r14_1 u>> 4).d
        int32_t r8_13 = (0x9e3779b9 - rcx_12) ^ rcx_12 << 8
        int32_t rdx_12 = neg.d(r8_13 + rcx_12) ^ r8_13 u>> 0xd
        int32_t rcx_15 = (rcx_12 - r8_13 - rdx_12) ^ rdx_12 u>> 0xc
        int32_t r8_16 = (r8_13 - rcx_15 - rdx_12) ^ rcx_15 << 0x10
        int32_t rdx_15 = (rdx_12 - r8_16 - rcx_15) ^ r8_16 u>> 5
        int32_t rcx_18 = (rcx_15 - r8_16 - rdx_15) ^ rdx_15 u>> 3
        int32_t r8_19 = (r8_16 - rcx_18 - rdx_15) ^ rcx_18 << 0xa
        void arg_10
        result = sub_140812a70(
            sub_142237720(arg1 + 0x188, (rdx_15 - r8_19 - rcx_18) ^ r8_19 u>> 0xf, r14_1), &arg_10, 
            rdi, nullptr)
        rdi = &rdi[2]
        r14_1 = &r14_1[2]
    while (rdi != rbx_3)

*(arg1 + 0x228) = 1
return result
