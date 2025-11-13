// 函数: sub_142c85c10
// 地址: 0x142c85c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = **(arg1 + 0x10)

if (arg2 == 3)
    void* rax_24 = *(arg1 + 0x168)
    uint32_t rcx_13 = zx.d(arg1[0x12].w)
    uint32_t rdi_3 = zx.d(*(rax_24 + 2)) << 8 | zx.d(*(rax_24 + 3))
    
    if (zx.d(rcx_13.w + 1) != rdi_3)
        uint64_t r8_3 = zx.q(rdi_3)
        
        if (rcx_13 != rdi_3)
            sub_142c64850(rsi, "Received unexpected DATA packet block %d, expecting block %d\n", 
                r8_3, arg3)
            return 0
        
        arg3 = sub_142c64850(rsi, "Received last DATA packet block %d again.\n", r8_3, arg3)
    else
        arg1[8] = 0
    
    arg1[0x12].w = rdi_3.w
    **(arg1 + 0x170) = 0
    *(*(arg1 + 0x170) + 1) = 4
    uint16_t rdx_9 = arg1[0x12].w
    *(*(arg1 + 0x170) + 2) = (rdx_9 u>> 8).b
    *(*(arg1 + 0x170) + 3) = rdx_9.b
    
    if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), 4, 0, &arg1[0x34], arg1[0x54]) s>= 0)
        int32_t rdx_11 = 1
        
        if (sx.q(arg1[0x55]) s< sx.q(arg1[0x57]) + 4)
            rdx_11 = 3
        
        *arg1 = rdx_11
        _time64(&arg1[0x10])
        return 0
else
    if (arg2 == 5)
        **(arg1 + 0x170) = 0
        *(*(arg1 + 0x170) + 1) = 5
        uint16_t rdx_7 = arg1[0x12].w
        *(*(arg1 + 0x170) + 2) = (rdx_7 u>> 8).b
        *(*(arg1 + 0x170) + 3) = rdx_7.b
        sendto(*(arg1 + 0x18), *(arg1 + 0x170), 4, 0, &arg1[0x34], arg1[0x54])
        *arg1 = 3
        return 0
    
    if (arg2 == 6)
        arg1[0x12].w = 0
        arg1[8] = 0
        **(arg1 + 0x170) = 0
        *(*(arg1 + 0x170) + 1) = 4
        uint16_t rdx_5 = arg1[0x12].w
        *(*(arg1 + 0x170) + 2) = (rdx_5 u>> 8).b
        *(*(arg1 + 0x170) + 3) = rdx_5.b
        
        if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), 4, 0, &arg1[0x34], arg1[0x54]) s>= 0)
            *arg1 = 1
            _time64(&arg1[0x10])
            return 0
    else
        if (arg2 != 7)
            sub_142c64760(rsi, "%s", "tftp_rx: internal error", arg3)
            return 0x47
        
        int16_t rax_2 = arg1[0x12].w
        arg1[8] += 1
        arg1[8]
        arg3 = sub_142c64850(rsi, "Timeout waiting for block %d ACK.  Retries = %d\n", 
            zx.q(rax_2 + 1), arg3)
        
        if (arg1[8] s> arg1[0xa])
            arg1[2] = 0xffffff9d
            *arg1 = 3
            return 0
        
        if (sendto(*(arg1 + 0x18), *(arg1 + 0x170), 4, 0, &arg1[0x34], arg1[0x54]) s>= 0)
            return 0

enum WSA_ERROR rax_8 = WSAGetLastError()
char* rax_9
int512_t zmm2
rax_9, zmm2 = sub_142c55790(*(arg1 + 0x10), rax_8, arg3)
sub_142c64760(rsi, "%s", rax_9, zmm2)
return 0x37
