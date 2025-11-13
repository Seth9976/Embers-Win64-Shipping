// 函数: sub_141e97540
// 地址: 0x141e97540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* i = *(arg1 + 0x10)
int64_t rsi = 0
int64_t var_118 = 0
int32_t r14 = 0
int32_t var_10c = 0
int32_t result_8 = 0

for (; i != 0; i = *(i + 0x40))
    void* rax = sub_14247bf70()
    void* rdx_1 = *(i + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        break
    
    void* const* result_3 = result
    result = *(rdx_1 + 0x30)
    
    if (result[result_3] != rax + 0x30)
        break
    
    int64_t result_6 = sx.q(result_8)
    result_8 = (result_6 + 1).d
    
    if (result_8 s> r14)
        sub_1405a4d70(&var_118)
        r14 = var_10c
    
    result = result_6
    rsi = var_118
    *(rsi + (result << 3)) = i

if (result_8 s> 0)
    int64_t rax_2 = sx.q(result_8 - 1)
    int64_t arg_18 = rax_2
    result = *(rsi + (rax_2 << 3))
    int64_t* rbx = result[8]
    
    if (rbx != 0)
        void* rax_3 = sub_140bdf670()
        void* rcx_1 = rbx[2]
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rcx_1 + 0x38))
            void* const* result_5 = result
            result = *(rcx_1 + 0x30)
            
            if (result[result_5] == rax_3 + 0x30)
                uint64_t var_f8 = 0
                int32_t result_1 = 0
                sub_140bdd870(rbx, &var_f8)
                uint64_t rbx_1 = var_f8
                int64_t* rdi = nullptr
                result = sx.q(result_1)
                int32_t result_9 = 0
                int64_t* var_108 = nullptr
                int32_t r14_1 = 0
                int32_t result_10 = 0
                int32_t var_fc_1 = 0
                int64_t r15_1 = rbx_1 + (result << 3)
                
                if (rbx_1 != r15_1)
                    do
                        void* rsi_1 = *rbx_1
                        
                        if (rsi_1 != 0)
                            void* rax_4 = sub_142459c10()
                            void* rdx_4 = *(rsi_1 + 0x10)
                            result = sx.q(*(rax_4 + 0x38))
                            
                            if (result.d s<= *(rdx_4 + 0x38))
                                void* const* result_4 = result
                                result = *(rdx_4 + 0x30)
                                
                                if (result[result_4] == rax_4 + 0x30)
                                    int64_t result_7 = sx.q(result_9)
                                    result_9 = (result_7 + 1).d
                                    
                                    if (result_9 s> r14_1)
                                        sub_1405a4d70(&var_108)
                                        r14_1 = var_fc_1
                                    
                                    result = result_7
                                    rdi = var_108
                                    rdi[result] = rsi_1
                        
                        rbx_1 += 8
                    while (rbx_1 != r15_1)
                    
                    rsi = var_118
                    result_10 = result_9
                
                int64_t rdx_6 = arg_18
                
                if (rdx_6 s>= 0)
                    TEB* gsbase
                    result =
                        *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
                    void* const* result_2 = result
                    int64_t temp0_1
                    
                    do
                        void* rbx_2 = *(rsi + (rdx_6 << 3))
                        
                        if (data_143f3a390 s> *result)
                            _Init_thread_header(&data_143f3a390)
                            
                            if (data_143f3a390 == 0xffffffff)
                                sub_140b0a030(&data_143f3a38c, Kismet", 
                                    bEnableInheritableComponents", &data_143de5780)
                                _Init_thread_footer(&data_143f3a390)
                            
                            rdx_6 = arg_18
                        
                        if (data_143f3a38c != 0)
                            uint64_t rcx_5 = *(rbx_2 + 0x280)
                            uint64_t r12_1 = rcx_5
                            
                            if (rcx_5 != 0 && data_143de5452 == 0)
                                sub_14209c250(rcx_5)
                                r12_1 = *(rbx_2 + 0x280)
                            
                            if (r12_1 != 0 && result_9 s> 0)
                                int64_t* r15_2 = rdi
                                void* rcx_6 = &rdi[sx.q(result_9)]
                                int64_t r14_2 = 0
                                uint64_t r13_4 = (rcx_6 - rdi + 7) u>> 3
                                
                                if (rdi u> rcx_6)
                                    r13_4 = 0
                                
                                if (r13_4 != 0)
                                    do
                                        uint64_t rbx_4 = *(*r15_2 + 0x18)
                                        int64_t var_138
                                        sub_14208b100(r12_1, &var_138, rbx_4)
                                        int32_t var_130
                                        int32_t var_12c
                                        int32_t var_128
                                        int32_t var_124
                                        int32_t var_120
                                        int32_t var_11c
                                        int32_t rax_9
                                        
                                        if (var_138 == 0
                                                || (var_128 | var_124 | var_120 | var_11c) == 0)
                                            rax_9.b = 0
                                        else
                                            int32_t rcx_8
                                            rcx_8.b = sub_140b5b8a0(var_130, 0).b == 0
                                            rax_9.b = var_12c != 0
                                            rax_9.b |= rcx_8.b
                                            
                                            if (rax_9.b == 0
                                                    || (var_128 | var_124 | var_120 | var_11c)
                                                    == 0)
                                                rax_9.b = 0
                                            else
                                                rax_9.b = 1
                                            
                                            if (rax_9.b == 0)
                                                rax_9.b = 1
                                            else
                                                int32_t rcx_9
                                                rcx_9.b = sub_140b5b8a0(var_130, 0).b == 0
                                                rax_9.b = var_12c != 0
                                                rax_9.b |= rcx_9.b
                                                
                                                if (rax_9.b == 0)
                                                    rax_9.b = 0
                                                else
                                                    rax_9.b = 1
                                        
                                        if (rax_9.b != 0)
                                            int32_t rcx_10
                                            rcx_10.b = sub_140b5b8a0(var_130, 0).b == 0
                                            int32_t rax_16
                                            rax_16.b = var_12c != 0
                                            rax_16.b |= rcx_10.b
                                            
                                            if (rax_16.b == 0
                                                    || (var_128 | var_124 | var_120 | var_11c)
                                                    == 0)
                                                rax_16.b = 0
                                            else
                                                rax_16.b = 1
                                            
                                            if (rax_16.b != 0)
                                                void* rax_20 = sub_142094cc0(r12_1, &var_138)
                                                
                                                if (rax_20 != 0 && *(rax_20 + 0x21) != 0)
                                                    int64_t* rax_21 = sub_140cdcfe0(arg1, rbx_4)
                                                    
                                                    if (rax_21 != 0)
                                                        int64_t rax_22 = sub_141ea1810(rax_20)
                                                        void** var_e8
                                                        memset(&var_e8, 0, 0x90)
                                                        sub_140b4c2a0(&var_e8)
                                                        int64_t var_58_1 = 0
                                                        void* var_50_1 = rax_20 + 0x38
                                                        var_e8 = &data_14305cdc0
                                                        sub_140b55290(&var_e8, 1)
                                                        var_e8[0x1b](&var_e8, 0)
                                                        char var_be = var_be & 0xf7
                                                        char var_bf = var_bf & 0xbf
                                                        char var_bd = var_bd | 0x10
                                                        var_e8 = &data_14323c5b8
                                                        int64_t var_80_1 = rax_22
                                                        sub_140b55650(&var_e8, 1)
                                                        int32_t var_b8 = var_b8 | 0x1000
                                                        (*(*rax_21 + 0xa0))(rax_21, &var_e8)
                                                        sub_140b4cb40(&var_e8)
                                        
                                        r15_2 = &r15_2[1]
                                        r14_2 += 1
                                    while (r14_2 != r13_4)
                                    
                                    rsi = var_118
                            
                            rdx_6 = arg_18
                        
                        result_9 = result_10
                        temp0_1 = rdx_6
                        rdx_6 -= 1
                        rdi = var_108
                        result = result_2
                        arg_18 = rdx_6
                    while (temp0_1 - 1 s>= 0)
                
                int64_t* rcx_22 = var_108
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
                
                uint64_t rcx_23 = var_f8
                
                if (rcx_23 != 0)
                    result = sub_140a74f90(rcx_23)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
