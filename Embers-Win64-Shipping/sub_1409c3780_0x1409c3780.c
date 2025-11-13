// 函数: sub_1409c3780
// 地址: 0x1409c3780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0
void* rbp = arg1

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int32_t* arg_20 = r14_1

if (data_143cee028 s> *r14_1)
    _Init_thread_header(&data_143cee028)
    
    if (data_143cee028 == 0xffffffff)
        atexit(sub_142cb9510)
        _Init_thread_footer(&data_143cee028)

sub_1409c3b80(rbp, arg2, &data_143cee018)
int32_t* r13 = data_143cee018
uint64_t result = &r13[sx.q(data_143cee020)]
uint64_t result_1 = result

if (r13 != result)
    do
        int32_t rbx_1 = *r13
        
        if (data_143cee040 s> *r14_1)
            _Init_thread_header(&data_143cee040)
            
            if (data_143cee040 == 0xffffffff)
                atexit(sub_142cb8200)
                _Init_thread_footer(&data_143cee040)
        
        int64_t var_48
        int64_t* rax_5 = sub_1409c2bd0(*(rbp + 0x28), &var_48, rbx_1)
        
        if (&data_143cee030 != rax_5)
            int64_t rcx_4 = data_143cee030
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            data_143cee030 = *rax_5
            *rax_5 = 0
            data_143cee038 = rax_5[1].d
            data_143cee03c = *(rax_5 + 0xc)
            rax_5[1] = 0
        
        int64_t rcx_6 = var_48
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int32_t* r14_2 = data_143cee030
        int64_t rbp_1 = 0
        result = sx.q(data_143cee038)
        void* rcx_7 = &r14_2[result]
        uint64_t r12_4 = (rcx_7 - r14_2 + 3) u>> 2
        
        if (r14_2 u> rcx_7)
            r12_4 = 0
        
        if (r12_4 != 0)
            do
                int32_t i = *r14_2
                
                if (i != arg2)
                    uint64_t rdx_2 = *arg3
                    int64_t r8_1 = sx.q(arg3[1].d)
                    uint64_t rax_8 = rdx_2
                    int64_t r15_1 = r8_1 << 2
                    int64_t rcx_8 = r15_1 + rdx_2
                    
                    if (rdx_2 != rcx_8)
                        while (*rax_8 != i)
                            rax_8 += 4
                            
                            if (rax_8 == rcx_8)
                                goto label_1409c390f
                        
                        result = (rax_8 - rdx_2) s>> 2
                    
                    if (rdx_2 == rcx_8 || result.d == 0xffffffff)
                    label_1409c390f:
                        int32_t rax_10 = (r8_1 + 1).d
                        arg3[1].d = rax_10
                        
                        if (rax_10 s> *(arg3 + 0xc))
                            sub_1405a4cf0(arg3)
                        
                        result = *arg3
                        *(r15_1 + result) = i
                
                r14_2 = &r14_2[1]
                rbp_1 += 1
            while (rbp_1 != r12_4)
        
        r14_1 = arg_20
        rbp = arg1
        r13 = &r13[1]
    while (r13 != result_1)

return result
