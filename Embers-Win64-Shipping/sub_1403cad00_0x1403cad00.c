// 函数: sub_1403cad00
// 地址: 0x1403cad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_28 = rbx
uint32_t result
result.b = *(arg1 + 0x11)

if (result.b u<= 7)
    uint64_t r9_1 = zx.q(*arg1)
    
    if (result.b == 4)
        if (r9_1.d != 0)
            int32_t rcx_5 = (r9_1 << 2).d & 4
            int32_t rsi_3 = (r9_1 - 1).d
            char* rax_9 = zx.q(rsi_3 u>> 1) + arg2
            void* r10_3 = arg2 + r9_1
            int32_t r11_3 = r9_1.d & 1
            
            if (rsi_3 == 0)
                if (r11_3 != 0)
                    *(r10_3 - 1) = (zx.d(*rax_9) u>> rcx_5.b).b & 0xf
            else
                int32_t i_5 = r11_3 - r9_1.d
                int32_t rdx_4
                void* rdi_1
                int32_t i
                
                do
                    void* rsi_4 = &rax_9[-1]
                    uint32_t rbp_1 = zx.d(*rax_9)
                    
                    if (rcx_5 == 4)
                        rax_9 = rsi_4
                    
                    rdi_1 = &rax_9[-1]
                    rbx.b = rcx_5 != 4
                    
                    if (rcx_5 == 4)
                        rdi_1 = rsi_4
                    
                    int32_t rdx_3
                    rdx_3.b = rcx_5 == 4
                    *(r10_3 - 1) = (rbp_1 u>> rcx_5.b).b & 0xf
                    rbx.b <<= 2
                    *(r10_3 - 2) = (zx.d(*rax_9) u>> rbx.b).b & 0xf
                    r10_3 -= 2
                    rdx_4 = rdx_3 << 2
                    rcx_5 = rdx_4
                    rax_9 = rdi_1
                    i = i_5
                    i_5 += 2
                while (i != 0xfffffffe)
                
                if (r11_3 != 0)
                    *(r10_3 - 1) = (zx.d(*rdi_1) u>> rdx_4.b).b & 0xf
    else if (result.b == 2)
        if (r9_1.d != 0)
            int32_t rcx_10 = not.d((r9_1 * 2).d + 6) & 6
            int32_t rsi_5 = (r9_1 - 1).d
            char* rax_14 = zx.q(rsi_5 u>> 2) + arg2
            void* r11_4 = arg2 + r9_1
            int32_t r10_5 = r9_1.d & 1
            
            if (rsi_5 != 0)
                int32_t i_4 = r10_5 - r9_1.d
                int32_t i_1
                
                do
                    *(r11_4 - 1) = (zx.d(*rax_14) u>> rcx_10.b).b & 3
                    void* rbx_2 = &rax_14[-1]
                    int32_t rdx_7 = rcx_10 + 2
                    
                    if (rcx_10 != 6)
                        rbx_2 = rax_14
                    
                    if (rcx_10 == 6)
                        rdx_7 = 0
                    
                    *(r11_4 - 2) = (zx.d(*rbx_2) u>> rdx_7.b).b & 3
                    r11_4 -= 2
                    rax_14 = rbx_2 - 1
                    
                    if (rdx_7 != 6)
                        rax_14 = rbx_2
                    
                    rcx_10 = rdx_7 + 2
                    
                    if (rdx_7 == 6)
                        rcx_10 = 0
                    
                    i_1 = i_4
                    i_4 += 2
                while (i_1 != 0xfffffffe)
            
            if (r10_5 != 0)
                *(r11_4 - 1) = (zx.d(*rax_14) u>> rcx_10.b).b & 3
    else if (result.b == 1 && r9_1.d != 0)
        int32_t rcx_2 = not.d((r9_1 - 1).d) & 7
        int32_t rsi_1 = (r9_1 - 1).d
        char* rax_2 = zx.q(rsi_1 u>> 3) + arg2
        void* r11_1 = arg2 + r9_1
        int32_t r10_2 = r9_1.d & 1
        
        if (rsi_1 != 0)
            int32_t i_3 = r10_2 - r9_1.d
            int32_t i_2
            
            do
                *(r11_1 - 1) = (zx.d(*rax_2) u>> rcx_2.b).b & 1
                void* rbx_1 = &rax_2[-1]
                int32_t rdx_2 = rcx_2 + 1
                
                if (rcx_2 != 7)
                    rbx_1 = rax_2
                
                if (rcx_2 == 7)
                    rdx_2 = 0
                
                *(r11_1 - 2) = (zx.d(*rbx_1) u>> rdx_2.b).b & 1
                r11_1 -= 2
                rax_2 = rbx_1 - 1
                
                if (rdx_2 != 7)
                    rax_2 = rbx_1
                
                rcx_2 = rdx_2 + 1
                
                if (rdx_2 == 7)
                    rcx_2 = 0
                
                i_2 = i_3
                i_3 += 2
            while (i_2 != 0xfffffffe)
        
        if (r10_2 != 0)
            *(r11_1 - 1) = (zx.d(*rax_2) u>> rcx_2.b).b & 1
    
    *(arg1 + 0x11) = 8
    result = zx.d(*(arg1 + 0x12))
    uint64_t r9_2 = zx.q(r9_1.d * result)
    result.b <<= 3
    *(arg1 + 0x13) = result.b
    *(arg1 + 8) = r9_2

return result
