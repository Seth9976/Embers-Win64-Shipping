// 函数: sub_14148a340
// 地址: 0x14148a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = nullptr
int64_t var_30 = 1
sub_1405a4d70(&result_1)
int64_t* result = result_1
int64_t rcx_1 = 0
int32_t i = 0
*result = 0
int64_t arg_8

if (*(arg1 + 0x318) s> 0)
    arg_8 = 0
    
    do
        int32_t j = 0
        void* rbp_2 = *(arg1 + 0x310) + rcx_1
        
        if (*(rbp_2 + 0x40) s> 0)
            void** rsi_1 = nullptr
            
            do
                void* rcx_2 = *(rsi_1 + *(rbp_2 + 0x38))
                result = sub_141489bc0(rcx_2, arg1, 
                    sx.q(*(*(rcx_2 + 0x5c0) + 0x28)) * 0x70 + *(arg1 + 0x2f0), &result_1, arg2, 
                    arg3, arg4)
                j += 1
                rsi_1 = &rsi_1[1]
            while (j s< *(rbp_2 + 0x40))
            
            rcx_1 = arg_8
        
        rcx_1 += 0x48
        i += 1
        arg_8 = rcx_1
    while (i s< *(arg1 + 0x318))

int32_t i_1 = 0

if (*(arg1 + 0x328) s> 0)
    int64_t rcx_3 = 0
    arg_8 = 0
    
    do
        int32_t j_1 = 0
        void* rbp_4 = *(arg1 + 0x320) + rcx_3
        
        if (*(rbp_4 + 0x40) s> 0)
            void** rsi_2 = nullptr
            
            do
                void* rcx_4 = *(rsi_2 + *(rbp_4 + 0x38))
                result = sub_141489bc0(rcx_4, arg1, 
                    sx.q(*(*(rcx_4 + 0x5c0) + 0x28)) * 0x70 + *(arg1 + 0x2f0), &result_1, arg2, 
                    arg3, arg4)
                j_1 += 1
                rsi_2 = &rsi_2[1]
            while (j_1 s< *(rbp_4 + 0x40))
            
            rcx_3 = arg_8
        
        rcx_3 += 0x48
        i_1 += 1
        arg_8 = rcx_3
    while (i_1 s< *(arg1 + 0x328))

int32_t i_2 = 0

if (*(arg1 + 0x338) s> 0)
    int64_t rcx_5 = 0
    arg_8 = 0
    
    do
        int32_t j_2 = 0
        void* rbp_6 = *(arg1 + 0x330) + rcx_5
        
        if (*(rbp_6 + 0x40) s> 0)
            void** rsi_3 = nullptr
            
            do
                void* rcx_6 = *(rsi_3 + *(rbp_6 + 0x38))
                result = sub_141489bc0(rcx_6, arg1, 
                    sx.q(*(*(rcx_6 + 0x5c0) + 0x28)) * 0x70 + *(arg1 + 0x2f0), &result_1, arg2, 
                    arg3, arg4)
                j_2 += 1
                rsi_3 = &rsi_3[1]
            while (j_2 s< *(rbp_6 + 0x40))
            
            rcx_5 = arg_8
        
        rcx_5 += 0x48
        i_2 += 1
        arg_8 = rcx_5
    while (i_2 s< *(arg1 + 0x338))

int32_t i_3 = 0

if (*(arg1 + 0x380) s> 0)
    void** rsi_4 = nullptr
    
    do
        void* rcx_7 = *(rsi_4 + *(arg1 + 0x378))
        result = sub_141489bc0(rcx_7, arg1, 
            sx.q(*(*(rcx_7 + 0x5c0) + 0x28)) * 0x70 + *(arg1 + 0x2f0), &result_1, arg2, arg3, arg4)
        i_3 += 1
        rsi_4 = &rsi_4[1]
    while (i_3 s< *(arg1 + 0x380))

int32_t i_4 = 0

if (*(arg1 + 0x390) s> 0)
    int64_t rcx_8 = 0
    arg_8 = 0
    
    do
        int32_t j_3 = 0
        void* rbp_8 = *(arg1 + 0x388) + rcx_8
        
        if (*(rbp_8 + 0x40) s> 0)
            void** rsi_5 = nullptr
            
            do
                void* rcx_9 = *(rsi_5 + *(rbp_8 + 0x38))
                result = sub_141489bc0(rcx_9, arg1, 
                    sx.q(*(*(rcx_9 + 0x5c0) + 0x28)) * 0x70 + *(arg1 + 0x2f0), &result_1, arg2, 
                    arg3, arg4)
                j_3 += 1
                rsi_5 = &rsi_5[1]
            while (j_3 s< *(rbp_8 + 0x40))
            
            rcx_8 = arg_8
        
        rcx_8 += 0x48
        i_4 += 1
        arg_8 = rcx_8
    while (i_4 s< *(arg1 + 0x390))

int64_t* result_2 = result_1

if (result_2 == 0)
    return result

return sub_140a74f90(result_2)
