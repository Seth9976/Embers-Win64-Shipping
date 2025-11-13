// 函数: sub_140e32980
// 地址: 0x140e32980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9_1 = zx.q(*(arg1 + 0x278) - *(arg1 + 0x2b8))
char* rdx = *(arg1 + 0x3570)
void* r8 = *(arg1 + 0x3578)
void* r10 = *(arg1 + 0x2568)
void* r14_1

if (r9_1.d s>= 8)
    r14_1 = r10 + 0x80 + zx.q((r9_1.d & 7) << 3)
else
    r14_1 = sx.q((r9_1 << 3).d) + r10

int32_t i = *(arg1 + 0x2508)
int64_t result = sx.q(r9_1.d s>> 1 << 3)
char* rdi_1 = r10 + 0x100 + result

if (i s> 0)
    int32_t r12_1 = data_143e29b34
    
    do
        int64_t j_1 = 2
        int64_t j
        
        do
            void* rbx_1 = r14_1 + 1
            int64_t k_1 = 4
            int64_t k
            
            do
                uint64_t rcx = zx.q(*rdi_1)
                uint64_t rax_4 = zx.q(rdi_1[0x40])
                int32_t r11_1 = *(arg1 + (rcx << 2) + 0x2970)
                int32_t r10_1 = *(arg1 + (rax_4 << 2) + 0x2570)
                uint32_t rcx_1 = zx.d(*(rbx_1 - 1))
                int32_t r9_6 =
                    (*(arg1 + (rcx << 2) + 0x3170) + *(arg1 + (rax_4 << 2) + 0x2d70)) s>> 0x10
                
                if (r12_1 != 1)
                    uint32_t rax_38 = rcx_1 + r10_1
                    
                    if (rax_38 u> 0xff)
                        rax_38 = zx.d((not.d(rax_38) s>> 0x1f).b)
                    
                    *rdx = rax_38.b
                    int32_t rax_41 = rcx_1 + r9_6
                    
                    if (rax_41 u> 0xff)
                        rax_41 = zx.d((not.d(rax_41) s>> 0x1f).b)
                    
                    rdx[1] = rax_41.b
                    uint32_t rax_44 = rcx_1 + r11_1
                    
                    if (rax_44 u> 0xff)
                        rax_44 = zx.d((not.d(rax_44) s>> 0x1f).b)
                    
                    rdx[2] = rax_44.b
                    rdx[3] = 0xff
                    uint32_t rcx_5 = zx.d(*rbx_1)
                    uint32_t rax_47 = rcx_5 + r10_1
                    
                    if (rax_47 u> 0xff)
                        rax_47 = zx.d((not.d(rax_47) s>> 0x1f).b)
                    
                    rdx[4] = rax_47.b
                    int32_t rax_50 = rcx_5 + r9_6
                    
                    if (rax_50 u> 0xff)
                        rax_50 = zx.d((not.d(rax_50) s>> 0x1f).b)
                    
                    rdx[5] = rax_50.b
                    uint32_t rax_53 = rcx_5 + r11_1
                    
                    if (rax_53 u> 0xff)
                        rax_53 = zx.d((not.d(rax_53) s>> 0x1f).b)
                    
                    rdx[6] = rax_53.b
                    rdx[7] = 0xff
                    uint32_t rcx_6 = zx.d(*(rbx_1 + 7))
                    uint32_t rax_56 = rcx_6 + r10_1
                    
                    if (rax_56 u> 0xff)
                        rax_56 = zx.d((not.d(rax_56) s>> 0x1f).b)
                    
                    *r8 = rax_56.b
                    int32_t rax_59 = rcx_6 + r9_6
                    
                    if (rax_59 u> 0xff)
                        rax_59 = zx.d((not.d(rax_59) s>> 0x1f).b)
                    
                    *(r8 + 1) = rax_59.b
                    uint32_t rax_62 = rcx_6 + r11_1
                    
                    if (rax_62 u> 0xff)
                        rax_62 = zx.d((not.d(rax_62) s>> 0x1f).b)
                    
                    *(r8 + 2) = rax_62.b
                    *(r8 + 3) = 0xff
                    uint32_t rcx_7 = zx.d(*(rbx_1 + 8))
                    uint32_t rax_65 = rcx_7 + r10_1
                    
                    if (rax_65 u> 0xff)
                        rax_65 = zx.d((not.d(rax_65) s>> 0x1f).b)
                    
                    *(r8 + 4) = rax_65.b
                    int32_t rax_68 = rcx_7 + r9_6
                    
                    if (rax_68 u> 0xff)
                        rax_68 = zx.d((not.d(rax_68) s>> 0x1f).b)
                    
                    *(r8 + 5) = rax_68.b
                    result = zx.q(rcx_7 + r11_1)
                else
                    uint32_t rax_5 = rcx_1 + r11_1
                    
                    if (rax_5 u> 0xff)
                        rax_5 = zx.d((not.d(rax_5) s>> 0x1f).b)
                    
                    *rdx = rax_5.b
                    int32_t rax_8 = rcx_1 + r9_6
                    
                    if (rax_8 u> 0xff)
                        rax_8 = zx.d((not.d(rax_8) s>> 0x1f).b)
                    
                    rdx[1] = rax_8.b
                    uint32_t rax_11 = rcx_1 + r10_1
                    
                    if (rax_11 u> 0xff)
                        rax_11 = zx.d((not.d(rax_11) s>> 0x1f).b)
                    
                    rdx[2] = rax_11.b
                    rdx[3] = 0xff
                    uint32_t rcx_2 = zx.d(*rbx_1)
                    uint32_t rax_14 = rcx_2 + r11_1
                    
                    if (rax_14 u> 0xff)
                        rax_14 = zx.d((not.d(rax_14) s>> 0x1f).b)
                    
                    rdx[4] = rax_14.b
                    int32_t rax_17 = rcx_2 + r9_6
                    
                    if (rax_17 u> 0xff)
                        rax_17 = zx.d((not.d(rax_17) s>> 0x1f).b)
                    
                    rdx[5] = rax_17.b
                    uint32_t rax_20 = rcx_2 + r10_1
                    
                    if (rax_20 u> 0xff)
                        rax_20 = zx.d((not.d(rax_20) s>> 0x1f).b)
                    
                    rdx[6] = rax_20.b
                    rdx[7] = 0xff
                    uint32_t rcx_3 = zx.d(*(rbx_1 + 7))
                    uint32_t rax_23 = rcx_3 + r11_1
                    
                    if (rax_23 u> 0xff)
                        rax_23 = zx.d((not.d(rax_23) s>> 0x1f).b)
                    
                    *r8 = rax_23.b
                    int32_t rax_26 = rcx_3 + r9_6
                    
                    if (rax_26 u> 0xff)
                        rax_26 = zx.d((not.d(rax_26) s>> 0x1f).b)
                    
                    *(r8 + 1) = rax_26.b
                    uint32_t rax_29 = rcx_3 + r10_1
                    
                    if (rax_29 u> 0xff)
                        rax_29 = zx.d((not.d(rax_29) s>> 0x1f).b)
                    
                    *(r8 + 2) = rax_29.b
                    *(r8 + 3) = 0xff
                    uint32_t rcx_4 = zx.d(*(rbx_1 + 8))
                    uint32_t rax_32 = rcx_4 + r11_1
                    
                    if (rax_32 u> 0xff)
                        rax_32 = zx.d((not.d(rax_32) s>> 0x1f).b)
                    
                    *(r8 + 4) = rax_32.b
                    int32_t rax_35 = rcx_4 + r9_6
                    
                    if (rax_35 u> 0xff)
                        rax_35 = zx.d((not.d(rax_35) s>> 0x1f).b)
                    
                    *(r8 + 5) = rax_35.b
                    result = zx.q(rcx_4 + r10_1)
                
                if (result.d u> 0xff)
                    result = zx.q((not.d(result.d) s>> 0x1f).b)
                
                *(r8 + 6) = result.b
                rdx = &rdx[8]
                *(r8 + 7) = 0xff
                rdi_1 = &rdi_1[1]
                r8 += 8
                rbx_1 += 2
                k = k_1
                k_1 -= 1
            while (k != 1)
            r14_1 += 0x40
            j = j_1
            j_1 -= 1
        while (j != 1)
        r14_1 += 0x100
        rdi_1 = &rdi_1[0x178]
        i -= 1
    while (i s> 0)

return result
