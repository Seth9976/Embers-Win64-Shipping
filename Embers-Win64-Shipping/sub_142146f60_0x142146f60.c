// 函数: sub_142146f60
// 地址: 0x142146f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x58)

if (sub_14216de20(r9[0xde], arg2, arg1, r9) != 0)
    sub_1421470d0(arg1, arg2)
    int64_t rdi_1 = 0
    void** rbx_1 = *(arg2 + 0x190)
    uint64_t r14_2 = sx.q(*(arg2 + 0x198)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg2 + 0x198))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rdx_1 = *rbx_1
            
            if (rdx_1 != 0 && (*(rdx_1 + 0x88) & 0x10) != 0)
                sub_1421470d0(arg1, rdx_1)
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)

int64_t arg_8
sub_140d3a3a0(&arg_8, arg2)
uint64_t result = zx.q(*(arg1 + 0x1378))

if (result.d != *(arg1 + 0x13a4))
    int64_t rcx_4 = arg_8
    void* r9_1 = arg1 + 0x13a8
    void* rdx_3 = *(r9_1 + 8)
    uint32_t r10_2 = (rcx_4 u>> 0x20).d
    
    if (rdx_3 != 0)
        r9_1 = rdx_3
    
    result = zx.q(*(r9_1 + (((sx.q(rcx_4.d) ^ sx.q(r10_2)) & (sx.q(*(arg1 + 0x13b8)) - 1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r9_2 = *(arg1 + 0x1370)
        int64_t r8_5
        
        while (true)
            r8_5 = sx.q(result.d) * 0x18
            int64_t rdx_5 = *(r8_5 + r9_2)
            
            if (rdx_5.d == rcx_4.d && (rdx_5 u>> 0x20).d == r10_2)
                break
            
            result = zx.q(*(r8_5 + r9_2 + 0x10))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            result = r8_5 + r9_2
            
            if (result != 0)
                result = *(result + 8)
                
                if (result != 0)
                    *(result + 0x30) &= 0xffffff7b

return result
