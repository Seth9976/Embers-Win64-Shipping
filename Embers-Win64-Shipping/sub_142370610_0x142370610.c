// 函数: sub_142370610
// 地址: 0x142370610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
uint64_t result = __security_cookie ^ &var_278
uint64_t result_1 = result
bool cond:0 = (*(arg1 + 0x78) & 1) == 0
int64_t rsi = arg3
int64_t r11 = arg2
int64_t var_240 = arg3

if (cond:0)
    void* rcx = *(arg1 + 0x70)
    
    if (rcx != 0)
        char rax_1 = *(rcx + 0x16b)
        *(rcx + 0x16b) = rax_1 & 0xfe
        
        if ((*(arg1 + 0x78) & 2) != 0)
            void var_228
            sub_14234f710(&var_228, arg5)
            int64_t* rcx_2 = *(arg1 + 0x70)
            char var_64
            char var_64_1 = var_64 | 4
            (*(*rcx_2 + 0x2c0))(rcx_2, arg2, rsi, arg4, &var_228, arg6, rax_1)
            sub_142351ee0(&var_228)
        else if ((*(arg5 + 0x1c4) & 0x40) != 0)
            int64_t* rcx_4 = *(arg1 + 0x70)
            void* var_250_2 = arg6
            int64_t* var_258_2 = arg5
            (*(*rcx_4 + 0x2c0))(rcx_4)
        else if (*(arg4 + 0x180) s>= 0)
            void* const rcx_8
            
            if (*(arg4 + 0x668) == *(arg4 + 0x694))
            labelid_1d:
                rcx_8 = nullptr
            else
                void* r8_1 = *(arg4 + 0x6a0)
                void* r9_1 = arg4 + 0x698
                
                if (r8_1 != 0)
                    r9_1 = r8_1
                
                int32_t rax_9 = *(r9_1
                    + ((sx.q((rsi u>> 0x20).d * 0x17 + rsi.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
                
                if (rax_9 == 0xffffffff)
                label_1423707a0:
                    rcx_8 = nullptr
                else
                    int64_t r8_2 = *(arg4 + 0x660)
                    
                    while (true)
                        int64_t rdx_4 = sx.q(rax_9) * 3
                        rcx_8 = r8_2 + (rdx_4 << 3)
                        
                        if (*(r8_2 + (rdx_4 << 3)) == rsi)
                            break
                        
                        rax_9 = *(rcx_8 + 0x10)
                        
                        if (rax_9 == 0xffffffff)
                            goto label_1423707a0_1
                    
                    if (rax_9 == 0xffffffff)
                    label_1423707a0_1:
                        rcx_8 = nullptr
            
            void* rax_10 = rcx_8 + 8
            
            if (rcx_8 == 0)
                rax_10 = nullptr
            
            int32_t rax_15
            int32_t rcx_11
            int32_t* rdx_7
            void* r14_3
            
            if (rax_10 != 0)
                int64_t rcx_12 = sx.q(*rax_10)
                rdx_7 = *(arg4 + 0x6b0)
                rax_15 = (rcx_12 + 4).d
                r14_3 = rdx_7 + rcx_12
                rcx_11 = *(rdx_7 + rcx_12)
            else
                int64_t rsi_1 = sx.q(*(arg4 + 0x6b8))
                int32_t rax_11 = (rsi_1 + 8).d
                *(arg4 + 0x6b8) = rax_11
                
                if (rax_11 s> *(arg4 + 0x6bc))
                    sub_1405daba0(arg4 + 0x6b0)
                
                int32_t var_244 = rsi_1.d
                *(rsi_1 + *(arg4 + 0x6b0)) = 0
                sub_141cf16a0(arg4 + 0x660, &var_240, &var_244)
                int64_t rax_14 = sx.q(var_244)
                rcx_11 = 1
                rsi = var_240
                r14_3 = rax_14 + *(arg4 + 0x6b0)
                rax_15 = rax_14.d + 4
                r11 = arg2
                *r14_3 = 1
                rdx_7 = *(arg4 + 0x6b0)
            
            void* rdi_3 = sx.q(rax_15) + rdx_7
            int32_t rax_16
            
            if (rcx_11 == 0)
                rax_16 = *rdi_3
            else
                *rdi_3 = 0
                rax_16 = 0
            
            int32_t r15_2 = *(arg4 + 0x138) - *(arg4 + 0x164)
            int32_t r12_1 = *(arg6 + 8)
            
            if (rax_16 == 0)
                int64_t* rcx_13 = *(arg1 + 0x70)
                (*(*rcx_13 + 0x2c0))(rcx_13, r11, rsi, arg4, arg5, arg6, rax_1)
            
            if (*r14_3 != 0)
                if (*(arg4 + 0x138) - *(arg4 + 0x164) == r15_2 && *(arg6 + 8) == r12_1)
                    *rdi_3 = 1
                
                *r14_3 = 0
        
        void* rcx_14 = *(arg1 + 0x70)
        result.b = *(rcx_14 + 0x16b) ^ rax_1
        result.b &= 1
        *(rcx_14 + 0x16b) ^= result.b
else
    *(arg4 + 0x180) &= 0xef

__security_check_cookie(result_1 ^ &var_278)
return result
