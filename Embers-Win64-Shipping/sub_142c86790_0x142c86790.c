// 函数: sub_142c86790
// 地址: 0x142c86790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
void* rdi = **(arg1 + 0x10)

if (arg2 == 4)
label_142c8692d:
    
    if (arg2 != 4)
        arg1[0x12].w = 1
    else
        void* rax_17 = *(arg1 + 0x168)
        uint32_t r9_2 = zx.d(arg1[0x12].w)
        uint64_t r8_8 = zx.q(zx.d(*(rax_17 + 2)) << 8) | zx.q(*(rax_17 + 3))
        
        if (r8_8.d != r9_2 && (r9_2.w != 0 || r8_8.d != 0xffff))
            int512_t zmm2_1 =
                sub_142c64850(rdi, "Received ACK for block %d, expecting %d\n", r8_8, arg3)
            arg1[8] += 1
            
            if (arg1[8] s> arg1[0xa])
                sub_142c64760(rdi, "tftp_tx: giving up waiting for block %d ack", 
                    zx.q(arg1[0x12].w), zmm2_1)
                return 0x37
            
            if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), arg1[0x56] + 4, 0, &arg1[0x34], arg1[0x54])
                    s< 0)
                enum WSA_ERROR rax_23 = WSAGetLastError()
                char* rax_24
                int512_t zmm2_2
                rax_24, zmm2_2 = sub_142c55790(*(arg1 + 0x10), rax_23, zmm2_1)
                sub_142c64760(rdi, "%s", rax_24, zmm2_2)
                rsi = 0x37
            
            return zx.q(rsi)
        
        _time64(&arg1[0x10])
        arg1[0x12].w += 1
    
    arg1[8] = 0
    **(arg1 + 0x170) = 0
    *(*(arg1 + 0x170) + 1) = 3
    uint16_t rdx_6 = arg1[0x12].w
    *(*(arg1 + 0x170) + 2) = (rdx_6 u>> 8).b
    *(*(arg1 + 0x170) + 3) = rdx_6.b
    
    if (arg1[0x12].w u<= 1 || arg1[0x56] s>= arg1[0x57])
        int64_t* rax_31 = *(arg1 + 0x10)
        int64_t rdx_7 = *(arg1 + 0x170)
        arg1[0x56] = 0
        *(*rax_31 + 0x240) = rdx_7 + 4
        int32_t i
        
        do
            int32_t result
            result, arg3 = sub_142c68080(*(arg1 + 0x10), arg1[0x57] - arg1[0x56], &i, arg3)
            
            if (result != 0)
                return result
            
            void** rax_32 = *(arg1 + 0x10)
            int64_t i_1 = sx.q(i)
            arg1[0x56] += i_1.d
            void* rcx_22 = *rax_32
            *(rcx_22 + 0x240) += i_1
            
            if (arg1[0x56] s>= arg1[0x57])
                break
        while (i != 0)
        
        if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), arg1[0x56] + 4, 0, &arg1[0x34], arg1[0x54])
                s< 0)
            goto label_142c86872
        
        *(rdi + 0x100) += sx.q(arg1[0x56])
        sub_142c6f1b0(rdi, *(rdi + 0x100))
        return 0
else
    if (arg2 != 5)
        if (arg2 == 6)
            goto label_142c8692d
        
        if (arg2 != 7)
            sub_142c64760(rdi, "tftp_tx: internal error, event: %i", zx.q(arg2), arg3)
            return 0
        
        int16_t rax_2 = arg1[0x12].w
        arg1[8] += 1
        arg1[8]
        arg3 = sub_142c64850(rdi, "Timeout waiting for block %d ACK.  Retries = %d\n", 
            zx.q(rax_2 + 1), arg3)
        
        if (arg1[8] s> arg1[0xa])
            arg1[2] = 0xffffff9d
            *arg1 = 3
            return 0
        
        if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), arg1[0x56] + 4, 0, &arg1[0x34], arg1[0x54])
                s>= 0)
            sub_142c6f1b0(rdi, *(rdi + 0x100))
            return 0
        
    label_142c86872:
        enum WSA_ERROR rax_8 = WSAGetLastError()
        char* rax_9
        int512_t zmm2
        rax_9, zmm2 = sub_142c55790(*(arg1 + 0x10), rax_8, arg3)
        sub_142c64760(rdi, "%s", rax_9, zmm2)
        return 0x37
    
    *arg1 = 3
    **(arg1 + 0x170) = 0
    *(*(arg1 + 0x170) + 1) = 5
    uint16_t rdx_2 = arg1[0x12].w
    *(*(arg1 + 0x170) + 2) = (rdx_2 u>> 8).b
    *(*(arg1 + 0x170) + 3) = rdx_2.b
    sendto(*(arg1 + 0x18), *(arg1 + 0x170), 4, 0, &arg1[0x34], arg1[0x54])

*arg1 = 3
return 0
