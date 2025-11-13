// 函数: sub_140d18080
// 地址: 0x140d18080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x14)
int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 1 + rbp)
int32_t rdx_1 = rbp
int32_t rax_3 = *(arg1 + 0x1c)
int32_t rsi_2 = (zx.d(temp0) + temp1) s>> 0x10

if (rsi_2 s>= rax_3)
    do
        void** rdi_1 = *arg1 + (sx.q(rax_3) << 3)
        int64_t* rax_5 = j_sub_140a82f30(0x180008)
        void* rdx_2
        
        if (rax_5 == 0)
            rdx_2 = nullptr
        else
            rdx_2 = &rax_5[1]
            *rax_5 = 0x10000
            void* rax_6 = rdx_2
            int64_t i_1 = 0x10000
            int64_t i
            
            do
                __builtin_memset(rax_6, 0, 0x14)
                rax_6 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        bool z_1
        
        if (0 == *rdi_1)
            *rdi_1 = rdx_2
            z_1 = true
        else
            *rdi_1
            z_1 = false
        
        rax_3 = *(arg1 + 0x1c)
        
        if (z_1)
            rax_3 += 1
            *(arg1 + 0x1c) = rax_3
    while (rsi_2 s>= rax_3)
    
    rdx_1 = *(arg1 + 0x14)

*(arg1 + 0x14) = rdx_1 + arg2
return zx.q(rbp)
