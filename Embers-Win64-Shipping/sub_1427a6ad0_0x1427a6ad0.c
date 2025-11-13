// 函数: sub_1427a6ad0
// 地址: 0x1427a6ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = nullptr
void* r11 = nullptr
int32_t rbp = arg1[1].d
uint32_t r14 = 0

if (rbp s>= 4)
    int32_t r8 = 1
    uint64_t rax_3 = zx.q(((rbp - 4) u>> 2) + 1)
    int64_t* r10_1 = nullptr
    uint64_t i_2 = zx.q(rax_3.d)
    r14 = (rax_3 << 2).d
    uint64_t i
    
    do
        if ((arg3 & r8) != 0)
            void* rcx = *(r10_1 + *arg1)
            
            if (rcx != 0)
                void* rax_5 = rcx
                
                if (rdx != 0)
                    rax_5 = rdx
                
                rdx = rax_5
                
                if (not(1f f<= *(rcx + 0x2bc)))
                    r11 = rcx
        
        int32_t r8_1 = rol.d(r8, 1)
        
        if ((arg3 & r8_1) != 0)
            void* rcx_1 = *(r10_1 + *arg1 + 8)
            
            if (rcx_1 != 0)
                void* rax_7 = rcx_1
                
                if (rdx != 0)
                    rax_7 = rdx
                
                rdx = rax_7
                
                if (not(1f f<= *(rcx_1 + 0x2bc)))
                    r11 = rcx_1
        
        int32_t r8_2 = rol.d(r8_1, 1)
        
        if ((arg3 & r8_2) != 0)
            void* rcx_2 = *(r10_1 + *arg1 + 0x10)
            
            if (rcx_2 != 0)
                void* rax_9 = rcx_2
                
                if (rdx != 0)
                    rax_9 = rdx
                
                rdx = rax_9
                
                if (not(1f f<= *(rcx_2 + 0x2bc)))
                    r11 = rcx_2
        
        int32_t r8_3 = rol.d(r8_2, 1)
        
        if ((arg3 & r8_3) != 0)
            void* rcx_3 = *(r10_1 + *arg1 + 0x18)
            
            if (rcx_3 != 0)
                void* rax_11 = rcx_3
                
                if (rdx != 0)
                    rax_11 = rdx
                
                rdx = rax_11
                
                if (not(1f f<= *(rcx_3 + 0x2bc)))
                    r11 = rcx_3
        
        r8 = rol.d(r8_3, 1)
        r10_1 = &r10_1[4]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r14 s< rbp)
    int32_t r9_1 = rol.d(1, r14.b)
    uint64_t i_3 = zx.q(rbp - r14)
    int64_t r8_4 = sx.q(r14) << 3
    uint64_t i_1
    
    do
        if ((arg3 & r9_1) != 0)
            void* rcx_5 = *(r8_4 + *arg1)
            
            if (rcx_5 != 0)
                void* rax_14 = rcx_5
                
                if (rdx != 0)
                    rax_14 = rdx
                
                rdx = rax_14
                
                if (not(1f f<= *(rcx_5 + 0x2bc)))
                    r11 = rcx_5
        
        r9_1 = rol.d(r9_1, 1)
        r8_4 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rdx == 0)
    return 0

if (r11 != 0)
    return r11

return rdx
