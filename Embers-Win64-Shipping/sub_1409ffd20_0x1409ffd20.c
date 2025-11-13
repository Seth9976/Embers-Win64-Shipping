// 函数: sub_1409ffd20
// 地址: 0x1409ffd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4

if (arg2 u< 4)
    i_4 = 1
else
    uint32_t rax_1 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_1 + 8)
    int32_t rcx
    
    if (rax_1 == 0xfffffff8)
        rcx = 0x20
    else
        rcx = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_1 + 7)
    
    if (rax_1 == 0xfffffff9)
        i_4 = 1
    else
        i_4 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

uint64_t result

if (arg2 s> 0)
    result = zx.q(*(arg1 + 0x48))
    
    if (result.d == 0 || result.d s< i_4)
    label_1409ffdb1:
        *(arg1 + 0x48) = i_4
        int64_t rcx_5 = *(arg1 + 0x40)
        
        if (rcx_5 != 0)
            *(arg1 + 0x40) = sub_140a84c80(rcx_5, 0, 0)
            i_4 = *(arg1 + 0x48)
        
        if (i_4 != 0)
            sub_1405a4aa0(arg1 + 0x38, 0, i_4, 4)
            
            if (i_4 s> 0)
                int64_t r8_1 = 0
                uint64_t i_3 = zx.q(i_4)
                uint64_t i
                
                do
                    void* rcx_7 = *(arg1 + 0x40)
                    void* rax_3 = arg1 + 0x38
                    int64_t rdx_2 = (sx.q(*(arg1 + 0x48)) - 1) & r8_1
                    
                    if (rcx_7 != 0)
                        rax_3 = rcx_7
                    
                    r8_1 += 1
                    *(rax_3 + (rdx_2 << 2)) = 0xffffffff
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            void* var_38
            sub_1407453e0(&var_38, arg1)
            uint64_t var_28
            int32_t i_2
            
            for (int32_t i_1 = i_2; i_1 s< *(var_28 + 0x18); i_1 = i_2)
                void* r9_4 = (sx.q(i_1) << 4) + *var_38
                int32_t rax_7 = (*(arg1 + 0x48) - 1) & *r9_4
                *(r9_4 + 0xc) = rax_7
                void* rdx_4 = *(arg1 + 0x40)
                int64_t r8_2 = sx.q(rax_7)
                void* rax_8 = arg1 + 0x38
                
                if (rdx_4 != 0)
                    rax_8 = rdx_4
                
                *(r9_4 + 8) = *(rax_8 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_2) << 2))
                void* rax_10 = arg1 + 0x38
                void* rcx_12 = *(arg1 + 0x40)
                
                if (rcx_12 != 0)
                    rax_10 = rcx_12
                
                *(rax_10 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_2) << 2)) = i_1
                int32_t var_2c
                int32_t var_20 = var_20 & not.d(var_2c)
                void var_30
                sub_14059bdd0(&var_30)
        
        result.b = 1
        return result
    
    if (result.d s> i_4 && arg3 != 0)
        goto label_1409ffdb1

result.b = 0
return result
