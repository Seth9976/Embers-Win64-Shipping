// 函数: sub_1403cba60
// 地址: 0x1403cba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1
i_1.b = *(arg1 + 0x10)

if (i_1.b == 4)
    i_1.b = *(arg1 + 0x11)
    
    if (i_1.b == 0x10)
        i_1 = *(arg1 + 8)
        
        if (i_1 != 0)
            int64_t rcx_1 = 0
            
            do
                arg2[rcx_1] = not.b(arg2[rcx_1])
                arg2[rcx_1 + 1] = not.b(arg2[rcx_1 + 1])
                rcx_1 += 4
            while (rcx_1 u< i_1)
    else if (i_1.b == 8)
        i_1 = *(arg1 + 8)
        
        if (i_1 != 0)
            int64_t rcx = 0
            
            do
                arg2[rcx] = not.b(arg2[rcx])
                rcx += 2
            while (rcx u< i_1)
else if (i_1.b == 0)
    int64_t r10_1 = *(arg1 + 8)
    
    if (r10_1 != 0)
        int64_t r8_1
        
        if (r10_1 u>= 0x20)
            r8_1 = r10_1 & 0xffffffffffffffe0
            i_1 = ((r8_1 - 0x20) u>> 5) + 1
            uint64_t r9_2 = zx.q(i_1.d) & 1
            int64_t rcx_4
            
            if (r8_1 == 0x20)
                rcx_4 = 0
                
                if (r9_2 != 0)
                label_1403cbb7d:
                    arg4 = *(arg2 + rcx_4)
                    int128_t zmm1 = *(arg2 + rcx_4 + 0x10)
                    int32_t temp0_2[0x4] = _mm_cmpeq_epi32(arg3, arg3)
                    *(arg2 + rcx_4) = arg4 ^ temp0_2
                    *(arg2 + rcx_4 + 0x10) = zmm1 ^ temp0_2
            else
                i_1 = r9_2 + 1 - i_1 - 1
                rcx_4 = 0
                int32_t temp0_1[0x4] = _mm_cmpeq_epi32(arg4, arg4)
                int64_t i
                
                do
                    int128_t zmm3 = *(arg2 + rcx_4 + 0x20)
                    int128_t zmm4 = *(arg2 + rcx_4 + 0x30)
                    arg3 = *(arg2 + rcx_4 + 0x10) ^ temp0_1
                    *(arg2 + rcx_4) ^= temp0_1
                    *(arg2 + rcx_4 + 0x10) = arg3
                    *(arg2 + rcx_4 + 0x20) = zmm3 ^ temp0_1
                    *(arg2 + rcx_4 + 0x30) = zmm4 ^ temp0_1
                    rcx_4 += 0x40
                    i = i_1
                    i_1 += 2
                while (i != -2)
                
                if (r9_2 != 0)
                    goto label_1403cbb7d
            
            if (r10_1 != r8_1)
                arg2 = &arg2[r8_1]
                goto label_1403cbbaa
        else
            r8_1 = 0
        label_1403cbbaa:
            i_1 = 0
            
            do
                arg2[i_1] = not.b(arg2[i_1])
                i_1 += 1
            while (r10_1 - r8_1 != i_1)

return i_1
