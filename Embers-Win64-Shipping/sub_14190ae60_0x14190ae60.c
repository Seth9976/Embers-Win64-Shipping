// 函数: sub_14190ae60
// 地址: 0x14190ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2
uint32_t i_1 = zx.d(*(arg1 + 0x82c)) & *(arg2 + 0x58)
uint32_t i_2 = i_1
int32_t j = 0
void* r15 = nullptr
void* rax = arg1 + 0x7b0
void* arg_20 = rax
uint32_t i

do
    i = i_1
    
    if ((i_1.b & 1) != 0)
        void* r13_1 = *rax
        int64_t rcx = *(r12 + 0xa0)
        uint64_t rax_1 = zx.q(*(r15 + rcx))
        
        if (rax_1.d != 0)
            int64_t r14_1 = *(r13_1 + 0x40)
            int32_t rcx_1 = *(rcx + (rax_1 << 2))
            int32_t* rbx_2 = rcx + (rax_1 << 2) + 4
            
            do
                sub_141905080(arg1, zx.d(rcx_1.b), *(r14_1 + (zx.q((rcx_1 u>> 8).w) << 3)))
                rcx_1 = *rbx_2
                rbx_2 = &rbx_2[1]
            while (rcx_1 u>> 0x18 == j)
        
        int64_t rcx_3 = *(r12 + 0x60)
        uint64_t rax_6 = zx.q(*(r15 + rcx_3))
        
        if (rax_6.d != 0)
            int32_t rbp_1 = *(rcx_3 + (rax_6 << 2))
            int64_t r12_1 = *(r13_1 + 0x40)
            int32_t* r14_3 = rcx_3 + (rax_6 << 2) + 4
            
            do
                void* rbx_3 = *(r12_1 + (zx.q((rbp_1 u>> 8).w) << 3))
                void* const r11_1
                
                if (rbx_3 == 0)
                    r11_1 = nullptr
                else
                    if (data_143f01c92 != 0)
                        sub_140a80f40()
                    
                    r11_1 = *(rbx_3 + 0x20)
                
                int64_t rax_10 = *(arg1 + 0x150)
                int32_t r9_1 = *(r11_1 + 0x20)
                int32_t r8_3 = *(r11_1 + 0x10)
                int32_t rdx_1 = *(r11_1 + 0x14)
                uint64_t r10_1 = zx.q(rbp_1.b)
                uint64_t rcx_4 = r10_1 * 5
                *(rax_10 + (rcx_4 << 3)) = 0
                *(rax_10 + (rcx_4 << 3) + 8) = r11_1
                *(rax_10 + (rcx_4 << 3) + 0x10) = rdx_1
                *(rax_10 + (rcx_4 << 3) + 0x14) = r8_3
                *(rax_10 + (rcx_4 << 3) + 0x18) = r9_1
                *(rax_10 + (rcx_4 << 3) + 0x1c) = 1
                *(rax_10 + (rcx_4 << 3) + 0x20) = 0
                *(*(arg1 + 0x158) + (r10_1 << 3)) = *(arg1 + 0x8a0)
                rbp_1 = *r14_3
                r14_3 = &r14_3[1]
            while (rbp_1 u>> 0x18 == j)
            
            i_1 = i_2
            r12 = arg2
        
        int64_t rcx_6 = *(r12 + 0x70)
        uint64_t rax_14 = zx.q(*(r15 + rcx_6))
        
        if (rax_14.d != 0)
            int64_t r9_2 = *(r13_1 + 0x40)
            int32_t rcx_7 = *(rcx_6 + (rax_14 << 2))
            void* r8_5 = rcx_6 + (rax_14 << 2) + 4
            
            do
                r8_5 += 4
                *(*(arg1 + 0x158) + (zx.q(rcx_7.b) << 3)) = *(r9_2 + (zx.q((rcx_7 u>> 8).w) << 3))
                rcx_7 = *(r8_5 - 4)
            while (rcx_7 u>> 0x18 == j)
        
        int64_t rcx_9 = *(r12 + 0x80)
        uint64_t rax_21 = zx.q(*(r15 + rcx_9))
        
        if (rax_21.d != 0)
            int64_t r11_2 = *(r13_1 + 0x40)
            int32_t rcx_10 = *(rcx_9 + (rax_21 << 2))
            void* r10_3 = rcx_9 + (rax_21 << 2) + 4
            
            do
                r10_3 += 4
                void* rdx_3 = *(r11_2 + (zx.q((rcx_10 u>> 8).w) << 3))
                int32_t r8_6 = *(rdx_3 + 0x18)
                uint64_t r9_3 = zx.q(rcx_10.b) * 0x14
                *(r9_3 + *(arg1 + 0x160)) = *(rdx_3 + 0x20)
                *(*(arg1 + 0x160) + r9_3 + 4) = r8_6
                *(*(arg1 + 0x160) + r9_3 + 0xc) = 0
                *(*(arg1 + 0x160) + r9_3 + 0x10) = 0
                *(*(arg1 + 0x160) + r9_3 + 8) = 0x88ba
                rcx_10 = *(r10_3 - 4)
            while (rcx_10 u>> 0x18 == j)
            
            i_1 = i_2
        
        rax = arg_20
    
    rax += 8
    i_1 u>>= 1
    j += 1
    arg_20 = rax
    r15 += 4
    i_2 = i_1
while (i u>= 2)
*(arg1 + 0x82c) = 0
return 0
