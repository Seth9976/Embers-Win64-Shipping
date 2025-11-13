// 函数: sub_142bd2700
// 地址: 0x142bd2700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg6
int32_t* rdx = *(arg2 + 0x10)
int32_t i = ((*(arg2 + 0x18) - rdx) s>> 3).d
char r8 = i.b & 1

if (*(arg1 + 0xc) == 0 && r8 != 0 && *arg5 == 0)
    int32_t rdx_1
    
    if (i != 0)
        int32_t rcx = rdx[1]
        
        if (rcx == 1)
            int32_t rax_2 = *rdx
            
            if (rax_2 s>= 0)
                rdx_1 = (rax_2 + 0x2000) s>> 0xe
            else
                rdx_1 = neg.d((0x2000 - rax_2) s>> 0xe)
        else
            rdx_1 = *rdx
            
            if (rcx == 2)
                rdx_1 <<= 0x10
    else
        int32_t* rax_1 = *(arg2 + 8)
        
        if (rax_1 != 0 && *rax_1 == 0)
            *rax_1 = 0x82
        
        rdx_1 = 0
    
    *arg4 = (*(*(*(arg1 + 0xf0) + 0x328) + 0x224) << 0x10) + rdx_1

void* result = *(arg1 + 0xf0)

if (*(result + 0x340) == 0)
    uint64_t rdi_1 = zx.q(r8)
    
    if (rdi_1.d u< i)
        uint64_t r14_1 = zx.q((rdi_1 + 1).d)
        
        do
            int64_t rcx_3 = *(arg2 + 0x10)
            int32_t rax_11
            
            if (rdi_1.d u< ((*(arg2 + 0x18) - rcx_3) s>> 3).d)
                int32_t rdx_5 = *(rcx_3 + (rdi_1 << 3) + 4)
                int32_t* rcx_4 = rcx_3 + (rdi_1 << 3)
                
                if (rdx_5 == 1)
                    int32_t rdx_7 = *rcx_4
                    
                    if (rdx_7 s>= 0)
                        rax_11 = (rdx_7 + 0x2000) s>> 0xe
                    else
                        rax_11 = neg.d((0x2000 - rdx_7) s>> 0xe)
                else
                    rax_11 = *rcx_4
                    
                    if (rdx_5 == 2)
                        rax_11 <<= 0x10
            else
                int32_t* rax_10 = *(arg2 + 8)
                
                if (rax_10 != 0 && *rax_10 == 0)
                    *rax_10 = 0x82
                
                rax_11 = 0
            
            int64_t rcx_5 = *(arg2 + 0x10)
            int32_t rbp_1 = rbp + rax_11
            int32_t var_44_1 = rbp_1
            int32_t rax_19
            
            if (r14_1.d u< ((*(arg2 + 0x18) - rcx_5) s>> 3).d)
                int32_t rdx_8 = *(rcx_5 + (r14_1 << 3) + 4)
                int32_t* rcx_6 = rcx_5 + (r14_1 << 3)
                
                if (rdx_8 == 1)
                    int32_t rdx_10 = *rcx_6
                    
                    if (rdx_10 s>= 0)
                        rax_19 = (rdx_10 + 0x2000) s>> 0xe
                    else
                        rax_19 = neg.d((0x2000 - rdx_10) s>> 0xe)
                else
                    rax_19 = *rcx_6
                    
                    if (rdx_8 == 2)
                        rax_19 <<= 0x10
            else
                int32_t* rax_18 = *(arg2 + 8)
                
                if (rax_18 != 0 && *rax_18 == 0)
                    *rax_18 = 0x82
                
                rax_19 = 0
            
            int64_t rcx_7 = arg3[3]
            rbp = rbp_1 + rax_19
            int32_t var_40_1 = rbp
            char var_48 = 0
            int64_t var_3c_1 = 0
            char rax_23
            
            if (arg3[5] == rcx_7)
                rax_23 = sub_142bd1560(arg3, arg3[4] + rcx_7)
            
            if (arg3[5] != rcx_7 || rax_23 != 0)
                int64_t r8_1 = arg3[2]
                memcpy(arg3[5] * r8_1 + arg3[7], &var_48, r8_1.d)
                arg3[5] += 1
            
            rdi_1 = zx.q(rdi_1.d + 2)
            r14_1 = zx.q(r14_1.d + 2)
        while (rdi_1.d u< i)
    
    result = *(arg2 + 0x10)
    *(arg2 + 0x18) = result

*arg5 = 1
return result
