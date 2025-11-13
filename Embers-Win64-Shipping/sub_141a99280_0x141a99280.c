// 函数: sub_141a99280
// 地址: 0x141a99280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
void* r14 = arg2
arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_1405947f0(arg1, 0)

uint64_t result = sub_141f64940(r14)

if (result.d s> 0)
    int64_t var_68 = 0
    int64_t rsi_1 = 0
    int32_t var_5c_1 = 0
    int16_t* var_88 = nullptr
    int32_t var_80_1 = 0
    uint64_t var_48 = 0
    int64_t var_40_1 = 0
    sub_141f36e90(r14, &var_88, &var_48, 0, 1)
    int64_t count = sx.q(var_80_1)
    int32_t var_60_1 = count.d
    
    if (count.d s> 0)
        sub_140679a80(&var_68)
        rsi_1 = var_68
    
    memset(rsi_1, 0, count)
    int32_t i = result.d - 1
    int32_t i_1 = i
    
    while (i s> 0)
        int16_t* var_78 = nullptr
        int32_t var_70_1 = 0
        uint64_t var_58 = 0
        int64_t var_50_1 = 0
        sub_141f36e90(r14, &var_78, &var_58, i, 1)
        int16_t* rdi_1 = var_78
        int64_t r14_1 = 0
        void* rcx_5 = &rdi_1[sx.q(var_70_1)]
        uint64_t rdx_6 = (rcx_5 - rdi_1 + 1) u>> 1
        
        if (rdi_1 u> rcx_5)
            rdx_6 = 0
        
        uint64_t arg_18 = rdx_6
        
        if (rdx_6 != 0)
            do
                uint64_t r12_1 = zx.q(*rdi_1)
                char* r15_1 = rsi_1 + r12_1
                
                if (*(rsi_1 + r12_1) == 0)
                    int64_t rsi_2 = sx.q(arg1[1].d)
                    int32_t rax_1 = (rsi_2 + 1).d
                    arg1[1].d = rax_1
                    
                    if (rax_1 s> *(arg1 + 0xc))
                        sub_140594770(arg1)
                        rdx_6 = arg_18
                    
                    *(*arg1 + (rsi_2 << 1)) = r12_1.w
                    rsi_1 = var_68
                
                rdi_1 = &rdi_1[1]
                *r15_1 = 1
                r14_1 += 1
            while (r14_1 != rdx_6)
            
            rdi_1 = var_78
            i = i_1
        
        uint64_t rcx_7 = var_58
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
            rdi_1 = var_78
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        r14 = arg2
        i -= 1
        i_1 = i
    
    int16_t* rdi_2 = var_88
    result = sx.q(var_80_1)
    void* rcx_9 = &rdi_2[result]
    uint64_t r12_5 = (rcx_9 - rdi_2 + 1) u>> 1
    
    if (rdi_2 u> rcx_9)
        r12_5 = 0
    
    if (r12_5 != 0)
        do
            uint64_t r15_2 = zx.q(*rdi_2)
            char* r14_2 = rsi_1 + r15_2
            
            if (*(rsi_1 + r15_2) == 0)
                int64_t rsi_3 = sx.q(arg1[1].d)
                int32_t rax_3 = (rsi_3 + 1).d
                arg1[1].d = rax_3
                
                if (rax_3 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                result = *arg1
                *(result + (rsi_3 << 1)) = r15_2.w
                rsi_1 = var_68
            
            rdi_2 = &rdi_2[1]
            *r14_2 = 1
            r13 += 1
        while (r13 != r12_5)
        
        rdi_2 = var_88
    
    uint64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
        rdi_2 = var_88
    
    if (rdi_2 != 0)
        result = sub_140a74f90(rdi_2)
    
    if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)

return result
