// 函数: sub_1409b34e0
// 地址: 0x1409b34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0
void* rbp = arg1

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

TEB* gsbase
int32_t* r13_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ceeb2c s> *r13_1)
    _Init_thread_header(&data_143ceeb2c)
    
    if (data_143ceeb2c == 0xffffffff)
        atexit(sub_142cb8420)
        _Init_thread_footer(&data_143ceeb2c)

if (data_143990fe8 != data_143991014)
    int32_t rax_3 = data_143990fec
    data_143990fe8 = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(&data_143990fe0, 0)
    
    data_143991010 = 0xffffffff
    data_143991014 = 0
    sub_140774790(&data_143990ff0)
    int64_t rcx_2 = sx.q(data_143991028)
    
    if (rcx_2 s> 0)
        void* rax_4 = data_143991020
        void* rdi_1 = &data_143991018
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int32_t* i = *arg2
uint64_t result = sx.q(arg2[1].d)

for (void* r12 = &i[result]; i != r12; i = &i[1])
    int32_t rdi_2 = *i
    
    if (data_143ceeb40 s> *r13_1)
        _Init_thread_header(&data_143ceeb40)
        
        if (data_143ceeb40 == 0xffffffff)
            atexit(sub_142cb94f0)
            _Init_thread_footer(&data_143ceeb40)
    
    sub_1409c3b80(rbp, rdi_2, &data_143ceeb30)
    int32_t* rsi_1 = data_143ceeb30
    result = sx.q(data_143ceeb38)
    void* r14_1 = &rsi_1[result]
    
    if (rsi_1 != r14_1)
        do
            int32_t rdi_3 = *rsi_1
            char arg_10 = 0
            int32_t var_48
            sub_1409afd50(&data_143990fe0, &var_48)
            int32_t rax_6 = var_48
            int32_t* var_40
            *var_40 = rdi_3
            var_40[1] = 0xffffffff
            void arg_18
            result = sub_1409b8810(&data_143990fe0, &arg_18, rdi_3, var_40, rax_6, &arg_10)
            
            if (arg_10 != 0)
                int64_t rbp_1 = sx.q(arg3[1].d)
                int32_t rax_7 = (rbp_1 + 1).d
                arg3[1].d = rax_7
                
                if (rax_7 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                result = *arg3
                *(result + (rbp_1 << 2)) = rdi_3
            
            rsi_1 = &rsi_1[1]
        while (rsi_1 != r14_1)
        
        rbp = arg1

return result
