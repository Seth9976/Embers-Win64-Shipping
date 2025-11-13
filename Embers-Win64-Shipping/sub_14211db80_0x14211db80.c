// 函数: sub_14211db80
// 地址: 0x14211db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg2)
int64_t i = CityHash64WithSeed(arg3, 0x30, r12)
uint64_t r13 = zx.q(i.w)
uint64_t rbx = zx.q(*(arg1[8] + ((zx.q(*(arg1 + 0x34)) & r13) << 2)))

if (rbx.d != 0xffffffff)
    while (*(arg1[4] + (sx.q(rbx.d) << 3)) != i)
        rbx = zx.q(*(arg1[9] + (zx.q(rbx.d) << 2)))
        
        if (rbx.d == 0xffffffff)
            break

if (rbx.d == 0xffffffff)
    rbx = zx.q(arg1[5].d)
    int32_t r14_1 = (rbx + 1).d
    arg1[5].d = r14_1
    
    if (r14_1 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    *(arg1[4] + (sx.q(rbx.d) << 3)) = i
    int64_t rbp_1 = sx.q(arg1[3].d)
    int32_t rax_3 = (rbp_1 + 1).d
    arg1[3].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x1c))
        sub_1405c4f50(&arg1[2])
    
    int64_t rax_4 = arg1[2]
    int64_t rcx_7 = rbp_1 * 6
    *(rax_4 + (rcx_7 << 3)) = *arg3
    *(rax_4 + (rcx_7 << 3) + 0x10) = *(arg3 + 0x10)
    *(rax_4 + (rcx_7 << 3) + 0x20) = *(arg3 + 0x20)
    int32_t temp0_1 = arg1[7].d
    
    if (rbx.d u>= temp0_1)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r14_1)
        int32_t rcx_8
        
        if (rbx.d == temp0_1)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx.d)
        char rdx_3
        
        if (rcx_10 == 0)
            rdx_3 = 0x20
        else
            rdx_3 = 0x1f - temp0_3
        
        int32_t rdx_4 = 1 << ((not.d(rcx_10)).b & (0x20 - rdx_3))
        
        if (rdx_4 u<= 0x20)
            rdx_4 = 0x20
        
        sub_140a30d10(&arg1[6], rdx_4)
    
    uint64_t r8_2 = zx.q(*(arg1 + 0x34)) & r13
    *(arg1[9] + (rbx << 2)) = *(arg1[8] + (r8_2 << 2))
    *(arg1[8] + (r8_2 << 2)) = rbx.d
    int64_t rsi_1 = sx.q(arg1[1].d)
    int32_t rax_11 = (rsi_1 + 1).d
    arg1[1].d = rax_11
    
    if (rax_11 s> *(arg1 + 0xc))
        sub_1405c5060(arg1)
    
    int32_t* rdx_8 = rsi_1 * 0x50 + *arg1
    __builtin_memset(&rdx_8[2], 0, 0x44)
    *rdx_8 = r12.d
    sub_142121e30(arg1, rdx_8, r12.d, arg3)

return sx.q(rbx.d) * 0x50 + *arg1
