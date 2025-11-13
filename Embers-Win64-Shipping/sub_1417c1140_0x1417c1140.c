// 函数: sub_1417c1140
// 地址: 0x1417c1140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[3].d

if (result != *(arg2 + 0x44))
    void* rax = arg2[0xa]
    void* r9_1 = &arg2[9]
    
    if (rax != 0)
        r9_1 = rax
    
    result = *(r9_1 + ((zx.q(arg2[0xb].d - 1) & 2) << 2))
    int32_t result_1 = result
    
    if (result != 0xffffffff)
        int64_t r8 = arg2[2]
        
        while (true)
            int64_t r9_2 = sx.q(result_1) * 3
            
            if (*(r8 + (r9_2 << 3)) == 2)
                break
            
            result_1 = *(r8 + (r9_2 << 3) + 0x10)
            
            if (result_1 == 0xffffffff)
                return result
        
        if (result_1 != 0xffffffff)
            int64_t rbx_1 = 0
            void* const rcx_4
            
            if (result == 0xffffffff)
            label_1417c11e1:
                rcx_4 = nullptr
            else
                while (true)
                    int64_t rdx_1 = sx.q(result) * 3
                    rcx_4 = r8 + (rdx_1 << 3)
                    
                    if (*(r8 + (rdx_1 << 3)) == 2)
                        break
                    
                    result = *(rcx_4 + 0x10)
                    
                    if (result == 0xffffffff)
                        goto label_1417c11e1_1
                
                if (result == 0xffffffff)
                label_1417c11e1_1:
                    rcx_4 = nullptr
            
            int64_t* rdi_1 = *arg2
            void* rsi_1 = *(rcx_4 + 8)
            int64_t r8_1 = sx.q(rdi_1[1].d)
            
            if (r8_1 s>= 4)
                void* rdx_3 = *rdi_1 + 0xc
                int64_t r11_1 = *arg3
                int64_t i_3 = ((r8_1 - 4) u>> 2) + 1
                int64_t r10_1 = **(rsi_1 + 8)
                rbx_1 = i_3 << 2
                int64_t i
                
                do
                    int64_t rcx_5 = sx.q(*(rdx_3 - 8))
                    rdx_3 += 0x20
                    *(r11_1 + (rcx_5 << 2)) = *(r10_1 + (rcx_5 << 2))
                    int64_t rcx_6 = sx.q(*(rdx_3 - 0x20))
                    *(r11_1 + (rcx_6 << 2)) = *(r10_1 + (rcx_6 << 2))
                    int64_t rcx_7 = sx.q(*(rdx_3 - 0x18))
                    *(r11_1 + (rcx_7 << 2)) = *(r10_1 + (rcx_7 << 2))
                    int64_t rcx_8 = sx.q(*(rdx_3 - 0x10))
                    result = *(r10_1 + (rcx_8 << 2))
                    *(r11_1 + (rcx_8 << 2)) = result
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            if (rbx_1 s< r8_1)
                int64_t r10_2 = *arg3
                int64_t i_2 = r8_1 - rbx_1
                int64_t r9_5 = **(rsi_1 + 8)
                int32_t* rdx_6 = *rdi_1 + 4 + (rbx_1 << 3)
                int64_t i_1
                
                do
                    int64_t rcx_9 = sx.q(*rdx_6)
                    rdx_6 = &rdx_6[2]
                    result = *(r9_5 + (rcx_9 << 2))
                    *(r10_2 + (rcx_9 << 2)) = result
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)

return result
