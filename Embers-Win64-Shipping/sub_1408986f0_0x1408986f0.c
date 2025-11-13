// 函数: sub_1408986f0
// 地址: 0x1408986f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg2
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg2[1] - r9)
int64_t rdx_1 = rdx s>> 2
int64_t rdx_2 = rdx_1 + (rdx_1 u>> 0x3f)

if (rdx_2.d s<= 0)
    uint64_t rax_2
    rax_2.b = 0
    return rax_2

int64_t rdi_2 = (r9[1] - *r9) s>> 2
sub_140897b00(arg1, rdx_2)
void* r8_2 = *arg1
int32_t i = 0
int64_t rax_3
int64_t rdx_3
rdx_3:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r8_2)
int64_t rdx_4 = rdx_3 s>> 2

if (rdx_4.d + (rdx_4 u>> 0x3f).d s> 0)
    int64_t* r14_1 = nullptr
    int64_t rdx_12
    
    do
        int64_t rbp_1 = *(r8_2 + r14_1 + 8)
        int64_t* rsi_1 = r8_2 + r14_1
        int64_t rdx_6 = *rsi_1
        int64_t rcx_4 = (rbp_1 - rdx_6) s>> 2
        
        if (rdi_2 u< rcx_4)
            rsi_1[1] = rdx_6 + (rdi_2 << 2)
        else if (rdi_2 u> rcx_4)
            if (rdi_2 u<= (rsi_1[2] - rdx_6) s>> 2)
                int64_t count = (rdi_2 - rcx_4) << 2
                memset(rbp_1, 0, count)
                rsi_1[1] = count + rbp_1
            else
                sub_140895cf0(rsi_1, rdi_2)
        
        int64_t r10_1 = 0
        int64_t r8_4
        void* r11_1
        
        if (rdi_2 u>= 4)
            r8_4 = *(r14_1 + *arg2)
            r11_1 = *(r14_1 + *arg1)
            void* rdx_9 = r8_4 - r11_1
            int64_t j_3 = ((rdi_2 - 4) u>> 2) + 1
            int32_t* rcx_7 = r11_1 + 4
            r10_1 = j_3 << 2
            int64_t j
            
            do
                rcx_7[-1] = *(rcx_7 + rdx_9 - 4)
                *rcx_7 = *(rcx_7 + rdx_9)
                rcx_7[1] = *(rdx_9 + rcx_7 + 4)
                rcx_7[2] = *(rdx_9 + rcx_7 + 8)
                rcx_7 = &rcx_7[4]
                j = j_3
                j_3 -= 1
            while (j != 1)
            
            if (r10_1 u< rdi_2)
                goto label_140898882
        else if (rdi_2 != 0)
            r8_4 = *(r14_1 + *arg2)
            r11_1 = *(r14_1 + *arg1)
        label_140898882:
            void* rcx_8 = r11_1 + (r10_1 << 2)
            int64_t j_2 = rdi_2 - r10_1
            int64_t j_1
            
            do
                *rcx_8 = *(rcx_8 + r8_4 - r11_1)
                rcx_8 += 4
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        r8_2 = *arg1
        i += 1
        r14_1 = &r14_1[3]
        int64_t rax_21
        int64_t rdx_11
        rdx_11:rax_21 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r8_2)
        rdx_12 = rdx_11 s>> 2
    while (i s< rdx_12.d + (rdx_12 u>> 0x3f).d)

uint32_t rax_5
rax_5.b = 1
return rax_5
