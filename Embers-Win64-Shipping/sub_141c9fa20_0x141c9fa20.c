// 函数: sub_141c9fa20
// 地址: 0x141c9fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f35558 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f35558)
    
    if (data_143f35558 == 0xffffffff)
        sub_140b58260(&data_143f35550, &data_142d6bbe8, 1)
        _Init_thread_footer(&data_143f35558)

int32_t arg_8
sub_140a73990(arg4 + 0x10, &arg_8, data_143f35550)
int64_t rax_2 = sx.q(arg_8)
void* const rax_5

if (rax_2.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_2 * 0x60 + *(arg4 + 0x10)

int64_t* rdi = rax_5 + 8

if (rax_5 == 0)
    rdi = nullptr

int64_t* r14 = *sub_14098ef70(arg1)
int64_t* rax_7 = sub_14098ef70(arg1)
uint64_t result = *rax_7 + sx.q(rax_7[1].d) * 0x18
uint64_t result_1 = result

if (r14 != result)
    int64_t* r15_1 = &r14[1]
    
    do
        int64_t* rbp
        
        if (rdi == 0)
        labelid_32:
            rbp.b = 0
        else
            int64_t rbx_1 = *r14
            arg_8.q = rbx_1
            
            if (rdi[1].d == *(rdi + 0x34))
            label_141c9fb53:
                int64_t rbx_2 = data_143f35550
                *(rdi + 0x34)
                
                if (rdi[1].d == *(rdi + 0x34))
                label_141c9fbb5:
                    rbp.b = 0
                else
                    arg_8.q = rbx_2
                    int32_t rax_15 = sub_140b5ead0(rbx_2.d) + arg5
                    void* r8_2 = &rdi[7]
                    void* rcx_9 = *(r8_2 + 8)
                    
                    if (rcx_9 != 0)
                        r8_2 = rcx_9
                    
                    result = zx.q(*(r8_2 + (((sx.q(rdi[9].d) - 1) & sx.q(rax_15)) << 2)))
                    
                    if (result.d == 0xffffffff)
                    label_141c9fbb5_1:
                        rbp.b = 0
                    else
                        int64_t rdx_9 = *rdi
                        
                        while (true)
                            int64_t rcx_11 = sx.q(result.d) * 2
                            
                            if (*(rdx_9 + (rcx_11 << 3)) == rbx_2)
                                break
                            
                            result = zx.q(*(rdx_9 + (rcx_11 << 3) + 8))
                            
                            if (result.d == 0xffffffff)
                                goto label_141c9fbb5_2
                        
                        if (result.d == 0xffffffff)
                        label_141c9fbb5_2:
                            rbp.b = 0
                        else
                            rbp.b = 1
            else
                int32_t rax_11 = sub_140b5ead0(rbx_1.d) + arg5
                void* r8_1 = &rdi[7]
                void* rcx_5 = *(r8_1 + 8)
                
                if (rcx_5 != 0)
                    r8_1 = rcx_5
                
                result = zx.q(*(r8_1 + (((sx.q(rdi[9].d) - 1) & sx.q(rax_11)) << 2)))
                
                if (result.d == 0xffffffff)
                    goto label_141c9fb53
                
                int64_t rdx_5 = *rdi
                
                while (true)
                    int64_t rcx_7 = sx.q(result.d) * 2
                    
                    if (*(rdx_5 + (rcx_7 << 3)) == rbx_1)
                        break
                    
                    result = zx.q(*(rdx_5 + (rcx_7 << 3) + 8))
                    
                    if (result.d == 0xffffffff)
                        goto label_141c9fb53
                
                if (result.d == 0xffffffff)
                    goto label_141c9fb53
                
                rbp.b = 1
        
        if (arg3 == 0)
        labelid_10:
            result.b = 0
        else
            int64_t rbx_3 = *r14
            arg_8.q = rbx_3
            
            if (arg3[1].d == *(arg3 + 0x34))
            label_141c9fc2c:
                int64_t rbx_4 = data_143f35550
                *(arg3 + 0x34)
                
                if (arg3[1].d == *(arg3 + 0x34))
                label_141c9fc85:
                    result.b = 0
                else
                    arg_8.q = rbx_4
                    int32_t rax_23 = sub_140b5ead0(rbx_4.d) + arg5
                    void* r8_4 = &arg3[7]
                    void* rcx_17 = *(r8_4 + 8)
                    
                    if (rcx_17 != 0)
                        r8_4 = rcx_17
                    
                    result = zx.q(*(r8_4 + (((sx.q(arg3[9].d) - 1) & sx.q(rax_23)) << 2)))
                    
                    if (result.d == 0xffffffff)
                    label_141c9fc85_1:
                        result.b = 0
                    else
                        int64_t rdx_17 = *arg3
                        
                        while (true)
                            int64_t rcx_19 = sx.q(result.d) * 2
                            
                            if (*(rdx_17 + (rcx_19 << 3)) == rbx_4)
                                break
                            
                            result = zx.q(*(rdx_17 + (rcx_19 << 3) + 8))
                            
                            if (result.d == 0xffffffff)
                                goto label_141c9fc85_2
                        
                        if (result.d == 0xffffffff)
                        label_141c9fc85_2:
                            result.b = 0
                        else
                            result.b = 1
            else
                int32_t rax_19 = sub_140b5ead0(rbx_3.d) + arg5
                void* r8_3 = &arg3[7]
                void* rcx_13 = *(r8_3 + 8)
                
                if (rcx_13 != 0)
                    r8_3 = rcx_13
                
                result = zx.q(*(r8_3 + (((sx.q(arg3[9].d) - 1) & sx.q(rax_19)) << 2)))
                
                if (result.d == 0xffffffff)
                    goto label_141c9fc2c
                
                int64_t rdx_13 = *arg3
                
                while (true)
                    int64_t rcx_15 = sx.q(result.d) * 2
                    
                    if (*(rdx_13 + (rcx_15 << 3)) == rbx_3)
                        break
                    
                    result = zx.q(*(rdx_13 + (rcx_15 << 3) + 8))
                    
                    if (result.d == 0xffffffff)
                        goto label_141c9fc2c
                
                if (result.d == 0xffffffff)
                    goto label_141c9fc2c
                
                result.b = 1
        
        if (*(arg4 + 5) == 0)
            if (rbp.b == 0 && result.b == 0)
                result = sub_141c8f680(arg2, r14, r15_1)
        else if (rbp.b != 0 || result.b != 0)
            result = sub_141c8f680(arg2, r14, r15_1)
        
        r14 = &r14[3]
        r15_1 = &r15_1[3]
    while (r14 != result_1)

return result
