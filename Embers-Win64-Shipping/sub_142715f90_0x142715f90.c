// 函数: sub_142715f90
// 地址: 0x142715f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1 + 0xb0
void* rdi = arg2
int32_t result_1
int32_t r8_1 = sub_1405ba560(r12, &result_1, arg2)
uint64_t result = sx.q(result_1)
int64_t rsi = 0
void* const rdx_3

if (result.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (result << 5) + *r12

uint64_t r13 = zx.q(data_14401b1a0)
void* rbp = rdx_3 + 8

if (rdx_3 == 0)
    rbp = nullptr

TEB* gsbase

if (rbp != 0)
    void* const rax_3
    
    if (arg3 == 0)
        rax_3 = nullptr
    else
        void* rax = sub_14272a610()
        
        if (rax == 0)
            rax_3 = nullptr
        else
            int64_t rax_1 = sx.q(*(rax + 0x38))
            
            if (rax_1.d s> *(arg3 + 0x38))
                rax_3 = nullptr
            else
                rax_3 = arg3
                
                if (*(*(arg3 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                    rax_3 = nullptr
    
    if (rax_3 == 0)
        int64_t* rdi_3 = *(arg1 + 0x88)
        uint64_t r14_4 = sx.q(*(arg1 + 0x90)) << 3 u>> 3
        
        if (rdi_3 u> &rdi_3[sx.q(*(arg1 + 0x90))])
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                int64_t* rcx_12 = *rdi_3
                
                if (rcx_12 != 0 && test_bit(*(rbp + 8), zx.d(*(rcx_12 + 0x44))))
                    (*(*rcx_12 + 0x268))(rcx_12, arg2)
                
                rdi_3 = &rdi_3[1]
                rsi += 1
            while (rsi != r14_4)
            
            r12 = arg1 + 0xb0
        
        *(rbp + 8) = 0
        goto label_1427161f3
    
    char var_48
    r8_1 = sub_142702060(&var_48, arg3)
    result = *(arg1 + 0x88)
    uint64_t rdi_1 = zx.q(var_48)
    int64_t* rcx_3 = *(result + (rdi_1 << 3))
    
    if (rcx_3 != 0)
        result = zx.q(*(rbp + 8))
        
        if (test_bit(result.d, zx.d(*(rcx_3 + 0x44))))
            r8_1 = (*(*rcx_3 + 0x268))(rcx_3, arg2)
            result = zx.q(rdi_1.b)
            *(rbp + 8) &= not.d(1 << (result.d u% 0x20))
    
    if (*(rbp + 8) == 0)
    label_1427161f3:
        
        if (data_143f38e90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r13 << 3))))
            _Init_thread_header(&data_143f38e90)
            
            if (data_143f38e90 == 0xffffffff)
                sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
                _Init_thread_footer(&data_143f38e90)
        
        rdi = arg2
        
        if (*(rdi + 0x18f) != 0)
            *(rdi + 0x18f) = sub_140d2a650(rdi, data_143f38e88, arg1 + 0x9c)
        
        result, r8_1 = sub_1405c3040(r12, rdi)
    else
        rdi = arg2

int32_t rsi_1 = *(arg1 + 0x120)
int32_t rsi_2 = rsi_1 - 1

if (rsi_1 - 1 s>= 0)
    result_1.q = gsbase->ThreadLocalStoragePointer + (r13 << 3)
    int64_t r14_2 = sx.q(rsi_2) * 0x14
    int64_t rbp_1 = r14_2
    int64_t r13_2 = sx.q(rsi_2 + 1) * 0x14
    int32_t temp1_1
    
    do
        result, r8_1 = sub_1405a66e0(*(arg1 + 0x118) + 0xc + rbp_1, rdi, r8_1)
        
        if (result.b != 0)
            char r12_1 = *(r14_2 + *(arg1 + 0x118))
            char rcx_17
            
            if (arg3 == 0)
            label_14271626e:
                result = zx.q(*(0x14 + *result_1.q))
                
                if (data_143f724c4 s> result.d)
                    result, r8_1 = _Init_thread_header(&data_143f724c4)
                    
                    if (data_143f724c4 == 0xffffffff)
                        data_143f724b8 = 0xff
                        sub_140b58260(&data_143f724bc, u"Invalid", 1)
                        result, r8_1 = _Init_thread_footer(&data_143f724c4)
                
                rcx_17 = data_143f724b8
            else
                void* rax_10
                rax_10, r8_1 = sub_14272a610()
                
                if (rax_10 == 0)
                    goto label_14271626e
                
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s> *(arg3 + 0x38)
                        || *(*(arg3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                    goto label_14271626e
                
                void* rax_13
                rax_13, r8_1 = sub_14272a610()
                int64_t rax_14
                
                if (rax_13 != 0)
                    rax_14 = sx.q(*(rax_13 + 0x38))
                
                void* rdi_2
                
                if (rax_13 == 0 || rax_14.d s> *(arg3 + 0x38)
                        || *(*(arg3 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    rdi_2 = nullptr
                else
                    rdi_2 = arg3
                
                result = *(rdi_2 + 0x118)
                
                if (result == 0)
                    r8_1 = (*(*rdi_2 + 0x390))(rdi_2)
                    result = *(rdi_2 + 0x118)
                
                rcx_17 = *(result + 0x44)
                rdi = arg2
            
            if (r12_1 == rcx_17)
                int32_t rcx_18 = *(arg1 + 0x120)
                int32_t rax_27 = rcx_18 - rsi_2
                
                if (rax_27 != 1)
                    int64_t rcx_19 = *(arg1 + 0x118)
                    r8_1 = memmove(rcx_19 + rbp_1, rcx_19 + r13_2, (rax_27 - 1) * 0x14)
                    rcx_18 = *(arg1 + 0x120)
                
                result = zx.q(rcx_18 - 1)
                *(arg1 + 0x120) = result.d
        
        r13_2 -= 0x14
        rbp_1 -= 0x14
        r14_2 -= 0x14
        temp1_1 = rsi_2
        rsi_2 -= 1
    while (temp1_1 - 1 s>= 0)

return result
