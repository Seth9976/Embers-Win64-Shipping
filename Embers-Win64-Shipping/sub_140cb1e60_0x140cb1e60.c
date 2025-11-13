// 函数: sub_140cb1e60
// 地址: 0x140cb1e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1b3a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b3a8)
    
    if (data_143e1b3a8 == 0xffffffff)
        atexit(&data_142cc2140)
        _Init_thread_footer(&data_143e1b3a8)

int64_t* r8 = data_143e1b398
int64_t rbx = sx.q(data_143e1b3a0)
int64_t* rcx = r8
void* rdx_2 = &r8[rbx]

if (r8 != rdx_2)
    do
        if (*rcx == arg1)
            goto label_140cb206b
        
        rcx = &rcx[1]
    while (rcx != rdx_2)

int32_t rax_2

if (*(arg1 + 0x78) != 0)
    int32_t rax_3 = (rbx + 1).d
    bool cond:0_1 = rax_3 s<= data_143e1b3a4
    data_143e1b3a0 = rax_3
    
    if (not(cond:0_1))
        sub_1405a4d70(&data_143e1b398)
        r8 = data_143e1b398
    
    r8[rbx] = arg1
    
    for (int64_t* i = *(*(arg1 + 0x78) + 0x70); i != 0; i = i[0xb])
        if ((*(*i + 0x118))(i) != 0)
            int64_t* r9_2 = data_143e1b398
            int64_t rdx_5 = sx.q(data_143e1b3a0)
            int64_t* rcx_3 = r9_2
            void* r8_2 = &r9_2[rdx_5]
            int32_t rax_7
            
            if (r9_2 != r8_2)
                while (*rcx_3 != arg1)
                    rcx_3 = &rcx_3[1]
                    
                    if (rcx_3 == r8_2)
                        rax_7.b = 1
                        return rax_7
                
                int32_t rcx_5 = ((rcx_3 - r9_2) s>> 3).d
                
                if (rcx_5 != 0xffffffff)
                    int32_t rax_9 = rdx_5.d - rcx_5 - 1
                    
                    if (rax_9 s>= 1)
                        rax_9 = 1
                    
                    if (rax_9 != 0)
                        memcpy(&r9_2[sx.q(rcx_5)], &r9_2[sx.q(rdx_5.d - rax_9)], rax_9 << 3)
                        rdx_5 = zx.q(data_143e1b3a0)
                    
                    data_143e1b3a0 = rdx_5.d - 1
                    sub_1405c53d0(&data_143e1b398)
            
            rax_7.b = 1
            return rax_7
    
    int64_t* r9_1 = data_143e1b398
    int64_t rdx_4 = sx.q(data_143e1b3a0)
    int64_t* rcx_2 = r9_1
    void* r8_1 = &r9_1[rdx_4]
    
    if (r9_1 != r8_1)
        while (*rcx_2 != arg1)
            rcx_2 = &rcx_2[1]
            
            if (rcx_2 == r8_1)
                rax_2.b = 0
                return rax_2
        
        int32_t rcx_8 = ((rcx_2 - r9_1) s>> 3).d
        
        if (rcx_8 != 0xffffffff)
            int32_t rax_13 = rdx_4.d - rcx_8 - 1
            
            if (rax_13 s>= 1)
                rax_13 = 1
            
            if (rax_13 != 0)
                memcpy(&r9_1[sx.q(rcx_8)], &r9_1[sx.q(rdx_4.d - rax_13)], rax_13 << 3)
                rdx_4 = zx.q(data_143e1b3a0)
            
            data_143e1b3a0 = rdx_4.d - 1
            sub_1405c53d0(&data_143e1b398)

label_140cb206b:
rax_2.b = 0
return rax_2
