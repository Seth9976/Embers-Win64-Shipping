// 函数: sub_142373dd0
// 地址: 0x142373dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r15 = 0
int32_t i = 0
int32_t rbp = 0
void* rdi = arg3
int32_t r13 = 0
int64_t var_58 = 0
int32_t var_4c = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        result = *(arg1 + 0x28)
        int64_t rdi_1 = *(rsi_1 + result)
        
        if (rdi_1 != 0)
            int64_t rdi_2 = sx.q(rbp)
            uint64_t var_60_1 = sub_142365fb0(arg2, rdi_1, i)
            rbp = (rdi_2 + 1).d
            
            if (rbp s> r13)
                sub_14119a860(&var_58)
                r13 = var_4c
                r15 = var_58
            
            result = rdi_2 * 2
            *(r15 + (result << 3)) = rdi_1.o
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x30))
    
    rdi = arg3

int32_t rcx_2 = 0
int32_t arg_8 = 0

if (rbp s> 0)
    result = nullptr
    void* const* result_1 = nullptr
    
    do
        int64_t r12_1 = *(result + r15 + 8)
        void* r14_1 = *(result + r15)
        
        if (*(rdi + 0x668) != *(rdi + 0x694))
            void* r9_1 = rdi + 0x698
            void* r8_1 = *(r9_1 + 8)
            
            if (r8_1 != 0)
                r9_1 = r8_1
            
            int32_t i_1 = *(r9_1
                + ((sx.q((r12_1 u>> 0x20).d * 0x17 + r12_1.d) & (sx.q(*(rdi + 0x6a8)) - 1)) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t r8_2 = *(rdi + 0x660)
                
                do
                    int64_t i_3 = sx.q(i_1)
                    int64_t rcx_5 = i_3 * 3
                    
                    if (*(r8_2 + (rcx_5 << 3)) == r12_1)
                        if (i_1 != 0xffffffff)
                            void* rax_8 = r8_2 + i_3 * 0x18
                            
                            if (rax_8 != 0 && rax_8 != -8)
                                *(sx.q(*(rax_8 + 8)) + *(rdi + 0x6b0)) = 1
                        
                        break
                    
                    i_1 = *(r8_2 + (rcx_5 << 3) + 0x10)
                while (i_1 != 0xffffffff)
            
            rcx_2 = arg_8
        
        int32_t rax_12 = *(r14_1 + 0x30)
        
        if (rax_12 == 0)
            void* rax_17 = sub_1425a2090()
            void* r8_4 = *(r14_1 + 0x10)
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s<= *(r8_4 + 0x38) && *(*(r8_4 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                void* rax_20 = sub_141dc37c0(rdi, r12_1)
                
                if (rax_20 != 0)
                    *(rax_20 + 0x100) = (*(rax_20 + 0x100) & 0xfffffff3) | 0x10
            
            rcx_2 = arg_8
        else
            int32_t i_2 = 0
            
            if (rax_12 s> 0)
                int64_t* rdi_3 = nullptr
                
                do
                    int64_t rdx_4 = *(rdi_3 + *(r14_1 + 0x28))
                    
                    if (rdx_4 != 0)
                        int64_t rsi_2 = sx.q(rbp)
                        uint64_t var_40_1 = sub_142365fb0(r12_1, rdx_4, i_2)
                        rbp = (rsi_2 + 1).d
                        
                        if (rbp s> r13)
                            sub_14119a860(&var_58)
                            r13 = var_4c
                            r15 = var_58
                        
                        *(r15 + rsi_2 * 0x10) = rdx_4.o
                    
                    i_2 += 1
                    rdi_3 = &rdi_3[1]
                while (i_2 s< *(r14_1 + 0x30))
                
                rdi = arg3
                rcx_2 = arg_8
        
        rcx_2 += 1
        result = &result_1[2]
        arg_8 = rcx_2
        result_1 = result
    while (rcx_2 s< rbp)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
