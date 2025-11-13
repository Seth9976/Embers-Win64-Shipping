// 函数: sub_1409e2460
// 地址: 0x1409e2460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbp = arg1
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int32_t* arg_18 = r14_1

if (data_143cedf38 s> *r14_1)
    _Init_thread_header(&data_143cedf38)
    
    if (data_143cedf38 == 0xffffffff)
        atexit(sub_142cba4c0)
        _Init_thread_footer(&data_143cedf38)

int32_t rax_2 = data_143cedf34
int32_t i_3 = data_143cedf30

if (rax_2 s< 0)
    if (i_3 != 0)
        int64_t* rbx_4 = data_143cedf28 + 8
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_4
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_4 = &rbx_4[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_2 = data_143cedf34
    
    data_143cedf30 = 0
    
    if (rax_2 != 0)
        sub_1405a51b0(&data_143cedf28, 0)
else
    if (i_3 != 0)
        int64_t* rbx_2 = data_143cedf28 + 8
        int32_t i_1
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2 = &rbx_2[4]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    data_143cedf30 = 0

int32_t* rcx_2 = *arg2
int32_t* var_70 = rcx_2
int32_t* result = &rcx_2[sx.q(arg2[1].d)]
int32_t* result_2 = result

if (rcx_2 != result)
    do
        int64_t rbx_5 = sx.q(*rcx_2)
        
        if (data_143cedf50 s> *r14_1)
            _Init_thread_header(&data_143cedf50)
            
            if (data_143cedf50 == 0xffffffff)
                atexit(sub_142cb8160)
                _Init_thread_footer(&data_143cedf50)
        
        sub_1409c29c0(rbp, rbx_5.d, &data_143cedf40)
        
        if (data_143cedf68 s> *r14_1)
            _Init_thread_header(&data_143cedf68)
            
            if (data_143cedf68 == 0xffffffff)
                atexit(sub_142cba2d0)
                _Init_thread_footer(&data_143cedf68)
        
        int64_t* rcx_6 = (rbx_5 << 5) + *rbp[5]
        
        if (&data_143cedf58 != rcx_6)
            int64_t rbx_6 = sx.q(rcx_6[1].d)
            int64_t rdi = *rcx_6
            int32_t r8_1 = data_143cedf64
            data_143cedf60 = rbx_6.d
            
            if (rbx_6.d != 0 || r8_1 != 0)
                sub_1405c4a90(&data_143cedf58, rbx_6.d, r8_1)
                memcpy(data_143cedf58, rdi, (rbx_6 << 2).d)
            else
                data_143cedf64 = 0
        
        int32_t* rcx_8 = data_143cedf58
        int32_t* var_78_1 = rcx_8
        result = &rcx_8[sx.q(data_143cedf60)]
        int32_t* result_1 = result
        
        if (rcx_8 != result)
            int32_t* r10_1 = data_143cedf70
            
            do
                void* r13_1 = rbp[5]
                int32_t* result_4 = nullptr
                int64_t rdi_1 = sx.q(*rcx_8)
                int32_t* result_3 = nullptr
                int32_t var_4c_1 = 0
                int64_t rdx_3 = *(r13_1 + 0x38)
                int64_t rsi_1 = rdi_1 * 0x18
                int32_t rax_8 = *(rdx_3 + rsi_1 + 0x10)
                int32_t rbx_7
                
                if (rax_8 s> 0)
                    int32_t var_50_1 = 0
                    sub_1405dadb0(&result_3, rax_8)
                    rdx_3 = *(r13_1 + 0x38)
                    r10_1 = data_143cedf70
                    result_4 = result_3
                    rbx_7 = var_50_1
                else
                    rbx_7 = 0
                
                int64_t rbp_1 = 0
                int32_t* r14_2 = *(rsi_1 + rdx_3 + 8)
                uint64_t r12_2 = sx.q(*(rsi_1 + rdx_3 + 0x10)) << 2 u>> 2
                
                if (r14_2 u> &r14_2[sx.q(*(rsi_1 + rdx_3 + 0x10))])
                    r12_2 = 0
                
                int32_t* r15
                
                if (r12_2 != 0)
                    do
                        int32_t* result_5 = result_4
                        r15 = *(r13_1 + 0xa8) + (sx.q(*r14_2) << 4) + 0xc
                        void* rdx_5 = &result_4[sx.q(rbx_7)]
                        
                        if (result_4 != rdx_5)
                            while (*result_5 != *r15)
                                result_5 = &result_5[1]
                                
                                if (result_5 == rdx_5)
                                    goto label_1409e270b
                        
                        if (result_4 == rdx_5 || ((result_5 - result_4) s>> 2).d == 0xffffffff)
                        label_1409e270b:
                            int64_t rsi_2 = sx.q(rbx_7)
                            rbx_7 = (rsi_2 + 1).d
                            
                            if (rbx_7 s> var_4c_1)
                                sub_1405a4cf0(&result_3)
                                result_4 = result_3
                            
                            result_4[rsi_2] = *r15
                        
                        r14_2 = &r14_2[1]
                        rbp_1 += 1
                    while (rbp_1 != r12_2)
                    
                    r10_1 = data_143cedf70
                
                if (rbx_7 s> 1)
                    int32_t* rsi_3 = arg_18
                    
                    if (data_143cedf80 s> *rsi_3)
                        _Init_thread_header(&data_143cedf80)
                        
                        if (data_143cedf80 == 0xffffffff)
                            atexit(sub_142cb9410)
                            _Init_thread_footer(&data_143cedf80)
                        
                        r10_1 = data_143cedf70
                    
                    data_143cedf78 = rbx_7
                    
                    if (rbx_7 != 0 || data_143cedf7c != rbx_7)
                        sub_1405c4a90(&data_143cedf70, rbx_7, data_143cedf7c)
                        memcpy(data_143cedf70, result_3, rbx_7 << 2)
                        r10_1 = data_143cedf70
                        rbx_7 = data_143cedf78
                    else
                        data_143cedf7c = 0
                    
                    char arg_10 = 1
                    
                    if (rbx_7 s> 0)
                        int32_t i_2
                        
                        do
                            if (data_143cedf98 s> *rsi_3)
                                _Init_thread_header(&data_143cedf98)
                                
                                if (data_143cedf98 == 0xffffffff)
                                    atexit(sub_142cb9640)
                                    _Init_thread_footer(&data_143cedf98)
                                
                                r10_1 = data_143cedf70
                            
                            void*** rbx_8 = arg1
                            sub_1409c3ea0(rbx_8, *r10_1, &data_143cedf70, &data_143cedf40, 
                                &data_143cedf88)
                            int32_t* rdx_10 = data_143cedf88
                            int64_t r8_7 = 0
                            r10_1 = data_143cedf70
                            int32_t* var_88_1 = rdx_10
                            int64_t var_80_1 = 0
                            void* rcx_16 = &rdx_10[sx.q(data_143cedf90)]
                            uint64_t rax_23 = (rcx_16 - rdx_10 + 3) u>> 2
                            
                            if (rdx_10 u> rcx_16)
                                rax_23 = 0
                            
                            i_2 = data_143cedf78
                            
                            if (rax_23 != 0)
                                uint64_t rcx_17 = rax_23
                                
                                do
                                    int32_t rbx_9 = *rdx_10
                                    
                                    if (i_2 != 0)
                                        int32_t i_4 = 0
                                        int32_t r14_3 = 0
                                        int64_t i_5 = sx.q(i_2)
                                        r15.b = *r10_1 != rbx_9
                                        int64_t j = 0
                                        
                                        do
                                            int64_t rcx_18 = sx.q(r14_3)
                                            j += 1
                                            r14_3 += 1
                                            
                                            for (; j s< i_5; j += 1)
                                                int32_t rax_24
                                                rax_24.b = r10_1[j] != rbx_9
                                                
                                                if (zx.d(r15.b) != rax_24)
                                                    break
                                                
                                                r14_3 += 1
                                            
                                            int32_t rbp_3 = r14_3 - rcx_18.d
                                            
                                            if (r15.b != 0)
                                                if (i_4 != rcx_18.d)
                                                    memmove(&r10_1[sx.q(i_4)], &r10_1[rcx_18], 
                                                        rbp_3 << 2)
                                                    r10_1 = data_143cedf70
                                                
                                                i_4 += rbp_3
                                            
                                            r15.b ^= 1
                                        while (j s< i_5)
                                        
                                        rdx_10 = var_88_1
                                        i_2 = i_4
                                        r8_7 = var_80_1
                                        rcx_17 = rax_23
                                        data_143cedf78 = i_2
                                    
                                    rdx_10 = &rdx_10[1]
                                    r8_7 += 1
                                    var_88_1 = rdx_10
                                    var_80_1 = r8_7
                                while (r8_7 != rcx_17)
                                
                                rbx_8 = arg1
                                rsi_3 = arg_18
                            
                            if (arg_10 == 0)
                                sub_1409e2170(rbx_8, rdi_1.d, &data_143cedf88)
                                i_2 = data_143cedf78
                                r10_1 = data_143cedf70
                            
                            arg_10 = 0
                        while (i_2 s> 0)
                
                result = result_3
                
                if (result != 0)
                    result = sub_140a74f90(result)
                    r10_1 = data_143cedf70
                
                rbp = arg1
                rcx_8 = &var_78_1[1]
                var_78_1 = rcx_8
            while (rcx_8 != result_1)
            
            r14_1 = arg_18
        
        rcx_2 = &var_70[1]
        var_70 = rcx_2
    while (rcx_2 != result_2)

return result
