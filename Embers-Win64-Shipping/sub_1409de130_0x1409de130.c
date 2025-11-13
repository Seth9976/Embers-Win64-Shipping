// 函数: sub_1409de130
// 地址: 0x1409de130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = arg2
int64_t var_58 = *(arg1 + 0x28) + 0x150
sub_14099cf40(&arg3[2], &var_58)
int64_t rbp = 0
int32_t var_78
char* var_70

if (*arg3 == data_143f35cc8 && *(arg1 + 0x608) != 0)
    TEB* gsbase
    
    if (data_143cede78
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cede78)
        
        if (data_143cede78 == 0xffffffff)
            atexit(sub_142cb8120)
            _Init_thread_footer(&data_143cede78)
    
    sub_1409c46d0(arg1, arg2, &data_143cede68)
    int32_t* r14_1 = data_143cede68
    void* r12_1 = &r14_1[sx.q(data_143cede70)]
    
    if (r14_1 != r12_1)
        void* rsi_1 = arg1 + 0x6b8
        
        do
            int32_t rbx_1 = *r14_1
            char arg_10 = 0
            int32_t var_68
            sub_1409afd50(rsi_1, &var_68)
            var_70 = &arg_10
            var_78 = var_68
            int32_t* var_60
            *var_60 = rbx_1
            var_60[1] = 0xffffffff
            void arg_8
            sub_1409b8a30(rsi_1, &arg_8, rbx_1, var_60, var_78, var_70)
            
            if (arg_10 == 0)
                sub_1409afd50(arg1 + 0x668, &var_58)
                var_70 = nullptr
                var_78 = var_58.d
                *arg3 = rbx_1
                *(arg3 + 4) = 0xffffffff
                void arg_18
                sub_1409b8a30(arg1 + 0x668, &arg_18, rbx_1, arg3, var_78, nullptr)
                rsi_1 = arg1 + 0x6b8
            
            r14_1 = &r14_1[1]
        while (r14_1 != r12_1)

int64_t* rbx_2 = *(arg1 + 0x3b8)
void* result = &rbx_2[sx.q(*(arg1 + 0x3c0))]
uint64_t rsi_3 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_2 u> result)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_9 = *rbx_2
        result = (*(*rcx_9 + 0x2f8))(rcx_9, arg1, zx.q(arg2), arg3, var_78, var_70)
        rbp += 1
        rbx_2 = &rbx_2[1]
    while (rbp != rsi_3)

return result
