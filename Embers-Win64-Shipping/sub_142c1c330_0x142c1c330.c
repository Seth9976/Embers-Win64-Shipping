// 函数: sub_142c1c330
// 地址: 0x142c1c330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0xc4) != 6)
    int64_t rax
    rax.b = 0
    return rax

void* rdx = *(arg2 + 0x90)
uint64_t r8 = zx.q(*(arg1 + 3))
int32_t rdi = 0
int128_t* const r13 = &data_14369a5d0
uint16_t rdx_1 = zx.w(*(arg1 + 2))
void* rcx_3

if (0 != rdx_1 * 0x100 + r8.w)
    rcx_3 = (zx.q(rdx_1.b) << 8) + arg1 + r8
else
    rcx_3 = &data_14369a5d0

int32_t rdx_2 = *(*(rdx + 0x70) + zx.q(*(rdx + 0x5c)) * 0x14)
uint32_t r8_3 = (zx.d(*rcx_3) << 8) + zx.d(*(rcx_3 + 1))
uint32_t rax_3

if (r8_3 == 1)
    rax_3 = sub_142c1e900(rcx_3, rdx_2)
label_142c1c3d9:
    uint32_t r12_1 = rax_3
    
    if (rax_3 != 0xffffffff)
        int64_t rcx_9 = (zx.q(*(arg1 + 4)) << 8) + zx.q(*(arg1 + 5)) + 3
        void* r10_1 = arg1 + (rcx_9 << 1)
        void* rax_9 = r10_1 + ((zx.q(*(arg1 + (rcx_9 << 1) + 1)) + 1 + (zx.q(*r10_1) << 8)) << 1)
        uint32_t rbp_3 = (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))
        void* rax_11 = *(arg2 + 0x90)
        int32_t r8_5
        
        if (*(rax_11 + 0x59) == 0)
            r8_5 = *(rax_11 + 0x5c)
        else
            r8_5 = *(rax_11 + 0x64)
        
        void* rdx_3 = *(arg2 + 0x48)
        *(arg2 + 0x40) = r8_5
        *(arg2 + 0x78) = rbp_3
        *(arg2 + 0x7c) = *(*(rdx_3 + 0x90) + 0x60)
        void* r9_1 = *(rdx_3 + 0x90)
        char rdx_4
        
        if (r8_5 != *(r9_1 + 0x5c))
            rdx_4 = 0
        else
            rdx_4 = *(*(r9_1 + 0x70) + zx.q(*(r9_1 + 0x5c)) * 0x14 + 0xf)
        
        *(arg2 + 0x5c) = rdx_4
        *(arg2 + 0x60) = sub_142c22190
        *(arg2 + 0x68) = arg1
        int32_t rsi_1 = 0
        *(arg2 + 0x70) = arg1 + 6
        
        if (rbp_3 == 0)
        label_142c1c4e1:
            int32_t rbp_4 = *(arg2 + 0x40)
            void* rdx_5 = *(arg2 + 0x48)
            uint32_t rsi_4 = (zx.d(*r10_1) << 8) + zx.d(*(r10_1 + 1))
            int32_t r8_6 = *(*(arg2 + 0x90) + 0x5c)
            *(arg2 + 0x40) = r8_6
            *(arg2 + 0x78) = rsi_4
            *(arg2 + 0x7c) = *(*(rdx_5 + 0x90) + 0x60)
            void* r9_2 = *(rdx_5 + 0x90)
            char rdx_6
            
            if (r8_6 != *(r9_2 + 0x5c))
                rdx_6 = 0
            else
                rdx_6 = *(*(r9_2 + 0x70) + zx.q(*(r9_2 + 0x5c)) * 0x14 + 0xf)
            
            *(arg2 + 0x5c) = rdx_6
            *(arg2 + 0x60) = sub_142c22190
            *(arg2 + 0x68) = arg1
            *(arg2 + 0x70) = r10_1 + 2
            
            if (rsi_4 != 0)
                do
                    if (sub_142c22680(arg2 + 0x40).b == 0)
                        goto label_142c1c5d8
                    
                    rdi += 1
                while (rdi u< rsi_4)
            
            sub_142bf5b60(*(arg2 + 0x90), rbp_4, *(arg2 + 0x40) + 1)
            
            if (r12_1 u< (zx.d(*rax_9) << 8) + zx.d(*(rax_9 + 1)))
                r13 = rax_9 + ((zx.q(r12_1) + 1) << 1)
            
            sub_142c22e30(arg2, (zx.d(*r13) << 8) + zx.d(*(r13 + 1)))
            rax_3.b = 1
        else
            while (true)
                if (sub_142c22b10(arg2 + 0x40).b == 0)
                label_142c1c5d8:
                    rax_3.b = 0
                    break
                
                rsi_1 += 1
                
                if (rsi_1 u>= rbp_3)
                    goto label_142c1c4e1
    else
        rax_3.b = 0
else
    if (r8_3 == 2)
        rax_3 = sub_142c1e990(rcx_3, rdx_2)
        goto label_142c1c3d9
    
    rax_3.b = 0

return rax_3
