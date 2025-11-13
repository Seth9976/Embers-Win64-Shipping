// 函数: sub_14238cfb0
// 地址: 0x14238cfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2 != 0 && *(arg2 + 0x34) s>= 0)
    EnterCriticalSection(arg1 + 0x580)
    int32_t r8 = 0
    int32_t r9 = 0
    int64_t rcx_1 = sx.q(*(arg2 + 0x34)) * 0xd8
    void* r10_2 = *(arg1 + 0x10) + 0xb8
    int32_t var_68 = 0
    int32_t* r10_3 = r10_2 + rcx_1
    int32_t rsi_1 = 1
    int32_t rcx_2 = 0
    int32_t var_64_1 = 1
    int32_t* var_60_1 = r10_3
    int32_t rbp_1 = -1
    int32_t var_54_1 = 0
    int32_t rdi_1 = r10_3[6]
    
    if (rdi_1 != 0)
        int32_t* rax_1 = *(r10_3 + 0x10)
        rcx_2 = rdi_1
        
        if (rax_1 != 0)
            r10_3 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_2 = *r10_3
        
        if (rdx_2 != 0)
        label_14238d0aa:
            rsi_1 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rsi_1)
            var_64_1 = rsi_1
            int32_t rax_6
            
            if (rsi_1 == 0)
                rax_6 = 0x20
            else
                rax_6 = 0x1f - temp0_2
            
            int32_t rax_7 = r9 - rax_6 + 0x1f
            
            if (rax_7 s> rcx_2)
                rax_7 = rcx_2
            
            rcx_2 = rax_7
            var_54_1 = rax_7
        else
            while (true)
                int64_t rdx_3 = sx.q(r8)
                r9 += 0x20
                r8 += 1
                var_54_1 = r9
                var_68 = r8
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_54_1 = rcx_2
                    break
                
                rdx_2 = r10_3[rdx_3 + 1]
                rbp_1 = -1
                
                if (rdx_2 != 0)
                    goto label_14238d0aa
    
    if (rcx_2 s< rdi_1)
        while (true)
            int64_t* rdi_3 = *(*(arg1 + 0x340) + (sx.q(rcx_2) << 3))
            
            if (rdi_3 != 0 && rdi_3[1].b != 0 && *(rdi_3[3] + 0x130) s> 0
                    && (*(*rdi_3 + 0x1f4) & 0x20) != 0)
                sub_14239a450(&rdi_3[4])
                rdi_3[7].d = 0
                sub_14238cea0(arg2, rdi_3[6], arg4, arg3)
            
            sub_14059bdd0(&var_68)
            rcx_2 = var_54_1
            
            if (rcx_2 s>= var_60_1[6])
                break
            
            rbp_1 &= not.d(rsi_1)
            rsi_1 = var_64_1
    
    sub_14239a380(arg1 + 0x220)
    void* rdx_6 = *(arg1 + 0x230)
    *(arg1 + 0x238) = 0
    result = sub_14238cea0(arg2, rdx_6, arg4, arg3)
    
    if (arg1 != -0x580)
        result = LeaveCriticalSection(arg1 + 0x580)

if (*arg4 == 0)
    return result

void* rax_12 = *(arg4 + 0x10)
void* rcx_9 = arg4 + 0x20

if (rax_12 != 0)
    rcx_9 = rax_12

return (*(*rcx_9 + 0x10))(rcx_9)
