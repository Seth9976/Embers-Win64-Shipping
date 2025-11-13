// 函数: sub_1409c3ea0
// 地址: 0x1409c3ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rsi = arg5
int64_t* r15 = arg4
int64_t* r14 = arg3
void* rbp = arg1
rsi[1].d = 0

if (*(rsi + 0xc) s<= 0xffffffff)
    sub_1405dadb0(rsi, 0)

TEB* gsbase

if (data_143cedea8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cedea8)
    
    if (data_143cedea8 == 0xffffffff)
        atexit(sub_142cb96f0)
        _Init_thread_footer(&data_143cedea8)

int32_t rdx = r14[1].d
int32_t rdi = 0
int32_t rcx_3 = data_143cedea4

if (rdx s> rcx_3)
    data_143cedea0 = 0
    
    if (rcx_3 != rdx)
        sub_1405dadb0(&data_143cede98, rdx)
        rcx_3 = data_143cedea4
        rdi = data_143cedea0

data_143cedea0 = rdi + 1

if (rdi + 1 s> rcx_3)
    sub_1405a4cf0(&data_143cede98)

int64_t result = data_143cede98
*(result + (sx.q(rdi) << 2)) = arg2
int32_t i = 0

if (data_143cedea0 s> 0)
    int32_t* rdx_2 = nullptr
    
    do
        int32_t* j = *r14
        int32_t rdi_1 = *(rdx_2 + data_143cede98)
        result = sx.q(r14[1].d)
        
        for (; j != &j[result]; j = &j[1])
            if (*j == rdi_1)
                int64_t rbx_1 = sx.q(rsi[1].d)
                int32_t rax_4 = (rbx_1 + 1).d
                rsi[1].d = rax_4
                
                if (rax_4 s> *(rsi + 0xc))
                    sub_1405a4cf0(rsi)
                
                *(*rsi + (rbx_1 << 2)) = rdi_1
                int32_t* rcx_7 = *r15
                int32_t* var_78_1 = rcx_7
                result = &rcx_7[sx.q(r15[1].d)]
                int64_t result_1 = result
                
                if (rcx_7 != result)
                    do
                        int64_t rax_7 = sx.q(*rcx_7)
                        int32_t* r12_1 = nullptr
                        void* r13_1 = *(rbp + 0x28)
                        int32_t* var_60 = nullptr
                        int32_t var_54_1 = 0
                        int64_t rax_8 = *(r13_1 + 0x70)
                        int64_t rbx_2 = rax_7 * 0x18
                        int32_t rdx_6 = *(rax_8 + rbx_2 + 0x10)
                        int32_t result_2
                        
                        if (rdx_6 s> 0)
                            int32_t result_3 = 0
                            sub_1405dadb0(&var_60, rdx_6)
                            rax_8 = *(r13_1 + 0x70)
                            result_2 = result_3
                            r12_1 = var_60
                        else
                            result_2 = 0
                        
                        int32_t* rbp_1 = *(rbx_2 + rax_8 + 8)
                        int64_t rsi_1 = 0
                        uint64_t r15_2 = sx.q(*(rbx_2 + rax_8 + 0x10)) << 2 u>> 2
                        
                        if (rbp_1 u> &rbp_1[sx.q(*(rbx_2 + rax_8 + 0x10))])
                            r15_2 = 0
                        
                        if (r15_2 != 0)
                            do
                                int32_t* rcx_10 = r12_1
                                void* r14_3 = (sx.q(*rbp_1) << 4) + *(r13_1 + 0xa8)
                                void* rdx_7 = &r12_1[sx.q(result_2)]
                                
                                if (r12_1 != rdx_7)
                                    while (*rcx_10 != *(r14_3 + 0xc))
                                        rcx_10 = &rcx_10[1]
                                        
                                        if (rcx_10 == rdx_7)
                                            goto label_1409c40dd
                                
                                if (r12_1 == rdx_7 || ((rcx_10 - r12_1) s>> 2).d == 0xffffffff)
                                label_1409c40dd:
                                    int64_t result_4 = sx.q(result_2)
                                    result_2 = (result_4 + 1).d
                                    
                                    if (result_2 s> var_54_1)
                                        sub_1405a4cf0(&var_60)
                                        r12_1 = var_60
                                    
                                    r12_1[result_4] = *(r14_3 + 0xc)
                                
                                rbp_1 = &rbp_1[1]
                                rsi_1 += 1
                            while (rsi_1 != r15_2)
                        
                        result = sx.q(result_2)
                        int32_t* rcx_14 = r12_1
                        void* rdx_9 = &r12_1[result]
                        
                        if (r12_1 != rdx_9)
                            do
                                if (*rcx_14 == rdi_1)
                                    int64_t rbp_2 = 0
                                    int32_t* r14_4 = r12_1
                                    uint64_t r15_6 = (rdx_9 - r12_1 + 3) u>> 2
                                    
                                    if (r12_1 u> rdx_9)
                                        r15_6 = 0
                                    
                                    if (r15_6 != 0)
                                        do
                                            int32_t* rax_14 = data_143cede98
                                            int32_t k = *r14_4
                                            void* rdx_10 = &rax_14[sx.q(data_143cedea0)]
                                            
                                            if (rax_14 == rdx_10)
                                            label_1409c419f:
                                                int64_t rsi_2 = sx.q(data_143cedea0)
                                                int32_t rax_16 = (rsi_2 + 1).d
                                                bool cond:1_1 = rax_16 s<= data_143cedea4
                                                data_143cedea0 = rax_16
                                                
                                                if (not(cond:1_1))
                                                    sub_1405a4cf0(&data_143cede98)
                                                
                                                result = data_143cede98
                                                *(result + (rsi_2 << 2)) = k
                                            else
                                                while (*rax_14 != k)
                                                    rax_14 = &rax_14[1]
                                                    
                                                    if (rax_14 == rdx_10)
                                                        goto label_1409c419f
                                                
                                                result = (rax_14 - data_143cede98) s>> 2
                                                
                                                if (result.d == 0xffffffff)
                                                    goto label_1409c419f
                                            
                                            r14_4 = &r14_4[1]
                                            rbp_2 += 1
                                        while (rbp_2 != r15_6)
                                    
                                    break
                                
                                rcx_14 = &rcx_14[1]
                            while (rcx_14 != rdx_9)
                        
                        if (r12_1 != 0)
                            result = sub_140a74f90(r12_1)
                        
                        rbp = arg1
                        rcx_7 = &var_78_1[1]
                        var_78_1 = rcx_7
                    while (rcx_7 != result_1)
                    
                    rsi = arg5
                    r14 = arg3
                    r15 = arg4
                
                break
        
        i += 1
        rdx_2 = &rdx_2[1]
    while (i s< data_143cedea0)

return result
