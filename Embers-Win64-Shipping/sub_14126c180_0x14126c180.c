// 函数: sub_14126c180
// 地址: 0x14126c180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdx = *(arg1 + 0x72)
void* r14 = &arg1[4]
int16_t rax = arg1[0xe].w
int32_t r11 = 0
int32_t r10 = 0
int64_t var_38 = 0
int16_t var_30 = rdx
int16_t var_2e = rax

if (rdx u> 0x50)
    r14 = *r14

int32_t i = 0

if (arg1[3].d s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rax_1 = arg1[2]
        int64_t* rcx = arg1
        
        if (rax_1 != 0)
            rcx = rax_1
        
        void* rbx_1 = *(rcx + r15_1)
        int64_t j_7 = sx.q(*(rbx_1 + 0x38))
        
        if (j_7.d != 0)
            int32_t rax_2 = *(rbx_1 + 0x28)
            int32_t rax_3 = rax_2 + 7
            
            if (rax_2 + 7 s< 0)
                rax_3 += 7
            
            int32_t r10_1 = 0
            int64_t j_6 = j_7
            
            if (j_7.d s> 0)
                int64_t rcx_4 = 0
                int64_t j
                
                do
                    void* rax_6 = *(rbx_1 + 0x30)
                    
                    if ((*(rbx_1 + 0x30) & 1) != 0)
                        rax_6 = (rax_6 s>> 1) + rbx_1 + 0x30
                    
                    uint32_t r8_1 = zx.d(*(rax_6 + rcx_4 + 2))
                    rcx_4 += 0x18
                    r10_1 += r8_1
                    j = j_6
                    j_6 -= 1
                while (j != 1)
            
            int32_t rax_7 = sub_140a6b260(
                zx.q((rax_3 s>> 3) + ((*(rbx_1 + 0x18) + *(rbx_1 + 8) + rax_2) << 3)) + r14, r10_1)
            r10 = var_38:4.d
            r11 = rax_7
            var_38.d = rax_7
        
        int32_t j_1 = 0
        void* r8_4 = zx.q(*(rbx_1 + 8) << 3) + r14
        
        if (*(rbx_1 + 0x18) s> 0)
            do
                int64_t rdx_3 = *r8_4
                r8_4 += 8
                uint32_t rdx_4 = (rdx_3 u>> 4).d
                j_1 += 1
                int32_t rcx_10 = ((rdx_4 u>> 2) - 0x61c88647 + (rdx_4 << 6) + r11) ^ rdx_4
                var_38.d = rcx_10
                r11 = rcx_10
            while (j_1 s< *(rbx_1 + 0x18))
        
        int32_t j_2 = 0
        void* r8_8 = zx.q((*(rbx_1 + 0x18) + *(rbx_1 + 8)) << 3) + r14
        
        if (*(rbx_1 + 0x28) s> 0)
            do
                int64_t rdx_5 = *r8_8
                r8_8 += 8
                uint32_t rdx_6 = (rdx_5 u>> 4).d
                j_2 += 1
                int32_t rcx_15 = ((rdx_6 u>> 2) - 0x61c88647 + (rdx_6 << 6) + r11) ^ rdx_6
                var_38.d = rcx_15
                r11 = rcx_15
            while (j_2 s< *(rbx_1 + 0x28))
        
        int32_t j_3 = 0
        
        if (*(rbx_1 + 8) s> 0)
            void* r8_9 = r14
            
            do
                int64_t rdx_7 = *r8_9
                r8_9 += 8
                uint32_t rdx_8 = (rdx_7 u>> 4).d
                j_3 += 1
                r10 = (r10 - 0x61c88647 + (rdx_8 << 6) + (rdx_8 u>> 2)) ^ rdx_8
                var_38:4.d = r10
            while (j_3 s< *(rbx_1 + 8))
        
        int64_t* rax_16 = arg1[2]
        int64_t* rcx_18 = arg1
        
        if (rax_16 != 0)
            rcx_18 = rax_16
        
        void* r9_1 = *(rcx_18 + r15_1)
        int32_t rax_17 = *(r9_1 + 0x28)
        int32_t rax_18 = rax_17 + 7
        
        if (rax_17 + 7 s< 0)
            rax_18 += 7
        
        int64_t j_5 = sx.q(*(r9_1 + 0x38))
        int32_t rdx_9 = 0
        
        if (j_5 s> 0)
            int64_t rcx_22 = 0
            int64_t j_4
            
            do
                void* rax_21 = *(r9_1 + 0x30)
                
                if ((*(r9_1 + 0x30) & 1) != 0)
                    rax_21 = (rax_21 s>> 1) + r9_1 + 0x30
                
                uint32_t rax_22 = zx.d(*(rax_21 + rcx_22 + 2))
                rcx_22 += 0x18
                rdx_9 += rax_22
                j_4 = j_5
                j_5 -= 1
            while (j_4 != 1)
        
        i += 1
        r15_1 += 8
        r14 += zx.q((rax_18 s>> 3) + ((*(r9_1 + 0x18) + *(r9_1 + 8) + rax_17) << 3) + 7 + rdx_9)
            & 0xfffffff8
    while (i s< arg1[3].d)

return sub_140a6b260(&var_38, 0xc)
