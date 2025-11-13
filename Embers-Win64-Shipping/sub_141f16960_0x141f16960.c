// 函数: sub_141f16960
// 地址: 0x141f16960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d != *(arg2 + 0x34))
    int32_t rax_1 = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5410(arg2, 0)
    
    arg2[6].d = 0xffffffff
    *(arg2 + 0x34) = 0
    sub_140774790(&arg2[2])
    int64_t rcx_2 = sx.q(arg2[9].d)
    void* rdi_1 = &arg2[7]
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

int32_t rdi_2 = *(arg1 + 0x2a0)

if (rdi_2 s> arg2[1].d - *(arg2 + 0x34))
    sub_1409d96c0(arg2, rdi_2)
    int32_t rax_8
    
    if (rdi_2 u< 4)
        rax_8 = 1
    else
        uint32_t rdi_3 = rdi_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi_3 + 8)
        int32_t rcx_4
        
        if (rdi_3 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_3 + 7)
        
        if (rcx_6 == 0)
            rax_8 = 1
        else
            rax_8 = 1 << ((not.d(rcx_6)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_9 = arg2[9].d
    
    if (rcx_9 == 0 || rcx_9 s< rax_8)
        arg2[9].d = rax_8
        sub_1408370c0(arg2)

void* i = *(arg1 + 0x298)
int32_t* result = sx.q(*(arg1 + 0x2a0))

for (void* r14_1 = result * 0x8c + i; i != r14_1; i += 0x8c)
    result = sub_140d3c6e0(i + 0x74)
    
    if (result != 0)
        void* rbp_1 = *(result + 0xa0)
        void* arg_10 = rbp_1
        
        if (rbp_1 != 0)
            void arg_8
            
            if (arg3 == 0)
                result = sub_140812a70(arg2, &arg_8, &arg_10, nullptr)
            else
                void* rax_9 = sub_142452380()
                
                if (rax_9 == 0)
                    result = sub_140812a70(arg2, &arg_8, &arg_10, nullptr)
                else
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                        result = sub_140812a70(arg2, &arg_8, &arg_10, nullptr)
                    else
                        void* rax_12 = sub_142452380()
                        int64_t rax_13
                        
                        if (rax_12 != 0)
                            rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        void* const rax_15
                        
                        if (rax_12 == 0 || rax_13.d s> *(arg3 + 0x38)
                                || *(*(arg3 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            rax_15 = nullptr
                        else
                            rax_15 = arg3
                        
                        void* rdx_4 = *(rbp_1 + 0x10)
                        result = sx.q(*(rax_15 + 0x38))
                        
                        if (result.d s<= *(rdx_4 + 0x38))
                            int32_t* result_1 = result
                            result = *(rdx_4 + 0x30)
                            
                            if (*(result + (result_1 << 3)) == rax_15 + 0x30)
                                result = sub_140812a70(arg2, &arg_8, &arg_10, nullptr)

return result
