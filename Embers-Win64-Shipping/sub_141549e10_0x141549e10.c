// 函数: sub_141549e10
// 地址: 0x141549e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int32_t rdi = arg2[1].d

if (rdi s> rbx[1].d - *(rbx + 0x34))
    sub_14174efd0(rbx, rdi)
    int32_t rax_4
    
    if (rdi u< 4)
        rax_4 = 1
    else
        uint32_t rdi_1 = rdi u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi_1 + 8)
        int32_t rcx_1
        
        if (rdi_1 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_1 + 7)
        
        if (rcx_3 == 0)
            rax_4 = 1
        else
            rax_4 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_6 = rbx[9].d
    
    if (rcx_6 == 0 || rcx_6 s< rax_4)
        rbx[9].d = rax_4
        sub_14174c590(rbx)

int32_t* r14 = *arg2
int64_t rdi_3 = 0
void* result = &r14[arg2[1]]
uint64_t rsi_2 = sx.q(arg2[1].d) << 2 u>> 2

if (r14 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t rax_6 = *(arg1 + 0x28)
        int64_t r9_2 = sx.q(*r14)
        arg3.d = r9_2.d
        int64_t rcx_8 = r9_2 * 3
        int64_t zmm0 = *(rax_6 + (rcx_8 << 2))
        int32_t rbp_1 = *(rax_6 + (rcx_8 << 2) + 8)
        int64_t zmm1 = zmm0
        
        if (rbx[1].d == *(rbx + 0x34))
        label_141549f77:
            result = sub_1415c5ce0(rbx, r9_2.d, &arg3)
            zmm1 = zmm0
        else
            void* rax_8 = rbx[8]
            void* rdx_2 = &rbx[7]
            
            if (rax_8 != 0)
                rdx_2 = rax_8
            
            int32_t rax_9 = *(rdx_2 + (((sx.q(rbx[9].d) - 1) & r9_2) << 2))
            
            if (rax_9 == 0xffffffff)
                goto label_141549f77
            
            int64_t r8_3 = *rbx
            void* rcx_13
            
            while (true)
                int64_t rdx_3 = sx.q(rax_9) * 9
                rcx_13 = r8_3 + (rdx_3 << 2)
                
                if (*(r8_3 + (rdx_3 << 2)) == r9_2.d)
                    break
                
                rax_9 = *(rcx_13 + 0x1c)
                
                if (rax_9 == 0xffffffff)
                    goto label_141549f77
            
            if (rax_9 == 0xffffffff || rcx_13 == 0)
                goto label_141549f77
            
            result = rcx_13 + 4
        
        r14 = &r14[1]
        *result = zmm0
        rdi_3 += 1
        *(result + 0xc) = zmm1
        *(result + 8) = rbp_1
        *(result + 0x14) = rbp_1
    while (rdi_3 != rsi_2)

return result
