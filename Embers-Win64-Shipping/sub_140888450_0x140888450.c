// 函数: sub_140888450
// 地址: 0x140888450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int64_t rdx_1 = sx.q(arg2[0xe]) & sx.q(arg1[9].d - 1)
int32_t rsi = 0
void* r15 = &arg1[7]
void* rax_4 = r15

if (r8 != 0)
    rax_4 = r8

void* rdi = rax_4 + (rdx_1 << 2)
int32_t i = *(rax_4 + (rdx_1 << 2))

while (i != 0xffffffff)
    int32_t* rbx_3 = (sx.q(i) << 7) + *arg1
    
    if (sub_140883690(rbx_3, arg2) != 0)
        int64_t rbx_4 = sx.q(*rdi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rcx_1 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_4 << 7
            int64_t rdx_4 = sx.q(*(r9_2 + r8_1 + 0x7c)) & sx.q(arg1[9].d - 1)
            
            if (rcx_1 != 0)
                r15 = rcx_1
            
            int32_t j = *(r15 + (rdx_4 << 2))
            void* rcx_2 = r15 + (rdx_4 << 2)
            
            for (; j != 0xffffffff; j = *rcx_2)
                if (j == rbx_4.d)
                    *rcx_2 = *(r9_2 + r8_1 + 0x78)
                    break
                
                rcx_2 = r8_1 + 0x78 + (sx.q(j) << 7)
        
        void* rdi_3 = (rbx_4 << 7) + *arg1
        sub_140a1d5c0(rdi_3 + 0x50)
        void* rdi_4 = *(rdi_3 + 0x28)
        
        if ((rdi_4.b & 1) != 0)
            rdi_4 = (rdi_4 s>> 1) + rdi_3 + 0x28
        
        int32_t j_2 = *(rdi_3 + 0x30)
        
        if (j_2 != 0)
            int32_t j_1
            
            do
                sub_140a1d5c0(rdi_4)
                rdi_4 += 0x10
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        sub_140a1d5c0(rdi_3 + 0x28)
        rsi = 1
        sub_1408887c0(arg1, rbx_4.d, 1)
        break
    
    i = rbx_3[0x1e]
    rdi = &rbx_3[0x1e]

return zx.q(rsi)
