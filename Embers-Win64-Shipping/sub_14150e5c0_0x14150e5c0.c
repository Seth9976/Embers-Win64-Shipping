// 函数: sub_14150e5c0
// 地址: 0x14150e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg3
uint64_t result = zx.q(rcx) & 0x3fffff

if (result.d u< arg1[1].d)
    int128_t* rdi_3 = result * 0x60 + *arg1
    
    if (*(rdi_3 + 0x5c) == (rcx u>> 0x16).w)
        int64_t r8 = arg1[2]
        uint64_t rsi_1 = sx.q(rdi_3[5].d)
        int32_t i_1 = *((rsi_1 << 5) + r8 + 0x14)
        
        if (i_1 != rsi_1.d)
            int32_t i
            
            do
                int64_t rax_3 = arg1[2]
                int64_t r9_2 = sx.q(i_1) << 5
                *(r9_2 + rax_3 + 0x1c) |= 1
                i = *(r9_2 + rax_3 + 0x14)
                int64_t rdx = arg1[2]
                void* r8_1 = r9_2 + rdx
                *((sx.q(*(r8_1 + 0x18)) << 5) + rdx + 0x14) = *(r9_2 + rdx + 0x14)
                *((sx.q(*(r8_1 + 0x14)) << 5) + arg1[2] + 0x18) = *(r8_1 + 0x18)
                *(r8_1 + 0x18) = i_1
                *(r8_1 + 0x14) = i_1
                void* rdx_3 = arg1[2]
                *(r9_2 + rdx_3 + 0x14) = 1
                *(r9_2 + rdx_3 + 0x18) = *(rdx_3 + 0x38)
                *((sx.q(*(rdx_3 + 0x38)) << 5) + arg1[2] + 0x14) = i_1
                *(rdx_3 + 0x38) = i_1
                i_1 = i
                arg1[4].d += 1
                rsi_1 = zx.q(rdi_3[5].d)
            while (i != rsi_1.d)
            r8 = arg1[2]
        
        int64_t r9_4 = sx.q(rsi_1.d) << 5
        *((sx.q(*(r9_4 + r8 + 0x18)) << 5) + r8 + 0x14) = *(r9_4 + r8 + 0x14)
        *((sx.q(*(r9_4 + r8 + 0x14)) << 5) + arg1[2] + 0x18) = *(r9_4 + r8 + 0x18)
        *(r9_4 + r8 + 0x18) = rsi_1.d
        *(r9_4 + r8 + 0x14) = rsi_1.d
        void* r8_2 = arg1[2]
        *(r9_4 + r8_2 + 0x14) = 0
        *(r9_4 + r8_2 + 0x18) = *(r8_2 + 0x18)
        *((sx.q(*(r8_2 + 0x18)) << 5) + arg1[2] + 0x14) = rsi_1.d
        *(r8_2 + 0x18) = rsi_1.d
        rdi_3[5].d = 0
        *(rdi_3 + 0x5c) = (*(rdi_3 + 0x5c) + 1) & 0x3ff
        sub_14150e250(rdi_3, arg2, arg3)
        int64_t rdx_9 = *arg1
        uint64_t rax_14 = zx.q(*arg3) & 0x3fffff
        uint64_t r9_5 = zx.q(rax_14.d)
        void* r8_6 = rax_14 * 0x60 + rdx_9
        *(sx.q(*(r8_6 + 0x58)) * 0x60 + rdx_9 + 0x54) = *(r8_6 + 0x54)
        *(sx.q(*(r8_6 + 0x54)) * 0x60 + *arg1 + 0x58) = *(r8_6 + 0x58)
        *(r8_6 + 0x58) = r9_5.d
        *(r8_6 + 0x54) = r9_5.d
        void* rdx_12 = *arg1
        uint64_t rcx_15 = r9_5 * 0x60
        *(rcx_15 + rdx_12 + 0x54) = 0
        *(rcx_15 + rdx_12 + 0x58) = *(rdx_12 + 0x58)
        result = *arg1
        *(sx.q(*(rdx_12 + 0x58)) * 0x60 + result + 0x54) = r9_5.d
        *(rdx_12 + 0x58) = r9_5.d

return result
