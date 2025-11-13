// 函数: sub_141fc5230
// 地址: 0x141fc5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141faae20(arg1)
int64_t rsi = 0
*(sub_141fb3410(arg1, *(*(arg1 + 0x140) + 0x30)) + 0x14) = 1
void* rax_1 = *(arg1 + 0x140)
int64_t* rdi = *(rax_1 + 0x98)
int32_t* result = &rdi[sx.q(*(rax_1 + 0xa0))]
uint64_t r12_1 = sx.q(*(rax_1 + 0xa0)) << 3 u>> 3

if (rdi u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            result = sub_1420e6440(rbx_1)
            
            if (result.b != 0)
                void* rbp_1 = *(rbx_1 + 0x128)
                int32_t arg_8
                sub_140865c40(arg1 + 0xdc0, &arg_8, rbp_1)
                int64_t rax_3 = sx.q(arg_8)
                void* const rcx_3
                
                if (rax_3.d == 0xffffffff)
                    rcx_3 = nullptr
                else
                    rcx_3 = *(arg1 + 0xdc0) + rax_3 * 0x18
                
                int32_t* rax_5 = rcx_3 + 8
                
                if (rcx_3 == 0)
                    rax_5 = nullptr
                
                void* rbx_2
                
                if (rax_5 == 0)
                    int64_t arg_18 = *(sub_140d21d80(rbp_1) + 0x18)
                    int64_t var_78
                    sub_140b63b70(&arg_18, &var_78)
                    int64_t var_68
                    sub_142441630(&var_68, &var_78)
                    int64_t rcx_9 = var_78
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    void* rax_7 = sub_141fb32e0(arg1, &var_68)
                    int64_t rcx_11 = var_68
                    rbx_2 = rax_7
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    void* arg_20 = rbp_1
                    void* var_50_1 = rbx_2 + 0x10
                    void** var_58 = &arg_20
                    void arg_10
                    result = sub_1413b83d0(arg1 + 0xdc0, &arg_10, &var_58, nullptr)
                else
                    result = *(arg1 + 0xd60)
                    rbx_2 = &result[sx.q(*rax_5) * 6]
                
                *(rbx_2 + 0x14) = 1
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r12_1)

return result
