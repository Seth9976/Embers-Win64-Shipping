// 函数: sub_1407eeb70
// 地址: 0x1407eeb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t i_1 = 0
int64_t* result = *(*arg1 + 0x10) + 0x10
int64_t* result_1 = result

if (arg1[2].d s> 0)
    int32_t* rdi_1 = nullptr
    void* r12_1 = nullptr
    
    do
        int64_t r13_1 = arg1[1]
        int16_t rdx_1 = *(r12_1 + r13_1 + 0x12)
        void* rbx_1 = r12_1 + r13_1
        int64_t rbp_1 = *result
        int32_t rsi_1 = *(r12_1 + r13_1 + 0x20)
        
        if (rdx_1 == 0xffff)
            if (*(rbx_1 + 8) == 0 || *(rbx_1 + 0x10) == 1)
                *(rbx_1 + 0x12) = 0
                rdx_1 = 0
            else
                void* rax_2 = sub_140761a70(rbx_1 + 8)
                int16_t rcx_1 = *(rax_2 + 0x5c)
                rdx_1 = (*(rax_2 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
                *(rbx_1 + 0x12) = rdx_1
        
        if (rsi_1 != sx.d(rdx_1))
            if (rdx_1 == 0xffff)
                if (*(rbx_1 + 8) == 0 || *(rbx_1 + 0x10) == 1)
                    *(rbx_1 + 0x12) = 0
                    rdx_1 = 0
                else
                    void* rax_4 = sub_140761a70(rbx_1 + 8)
                    int16_t rcx_3 = *(rax_4 + 0x5c)
                    rdx_1 = (*(rax_4 + 0x58) - 1 + rcx_3) & neg.w(rcx_3)
                    *(rbx_1 + 0x12) = rdx_1
            
            int64_t rbx_2 = sx.q(*(r12_1 + r13_1 + 0x20))
            void* rsi_2 = r12_1 + r13_1
            int32_t rax_5 = sx.d(rdx_1)
            
            if (rax_5 s> rbx_2.d)
                *(rsi_2 + 0x20) = rax_5
                
                if (rax_5 s> *(rsi_2 + 0x24))
                    sub_1405daba0(rsi_2 + 0x18)
                
                memset(rbx_2 + *(rsi_2 + 0x18), 0, sx.q(rax_5 - rbx_2.d))
                i = i_1
            else if (rax_5 s< rbx_2.d && rax_5 != rbx_2.d)
                *(rsi_2 + 0x20) = rax_5
                sub_1405dac10(rsi_2 + 0x18)
        
        int32_t j = 0
        int64_t r11_1 = *(r12_1 + r13_1 + 0x18)
        
        if (*(rdi_1 + rbp_1 + 0x10) u> 0)
            do
                void* r8_2 = *arg1
                uint64_t r9_1 =
                    zx.q((*(rdi_1 + rbp_1) + j) * *(r8_2 + 0xb8)) + (zx.q(arg1[3].d) << 2)
                int64_t j_2 = sx.q(j)
                j += 1
                *(zx.q(*(*(rdi_1 + rbp_1 + 8) + (j_2 << 2))) + r11_1) = *(r9_1 + *(r8_2 + 0x18))
            while (j u< *(rdi_1 + rbp_1 + 0x10))
        
        int32_t j_1 = 0
        
        if (*(rdi_1 + rbp_1 + 0x30) u> 0)
            do
                void* r8_4 = *arg1
                uint64_t r9_2 =
                    zx.q((*(rdi_1 + rbp_1 + 4) + j_1) * *(r8_4 + 0xbc)) + (zx.q(arg1[3].d) << 2)
                int64_t j_3 = sx.q(j_1)
                j_1 += 1
                *(zx.q(*(*(rdi_1 + rbp_1 + 0x28) + (j_3 << 2))) + r11_1) = *(r9_2 + *(r8_4 + 0x28))
            while (j_1 u< *(rdi_1 + rbp_1 + 0x30))
        
        result = result_1
        i += 1
        r12_1 += 0x28
        i_1 = i
        rdi_1 = &rdi_1[0x12]
    while (i s< arg1[2].d)

return result
