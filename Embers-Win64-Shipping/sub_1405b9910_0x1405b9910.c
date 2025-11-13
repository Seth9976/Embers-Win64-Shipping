// 函数: sub_1405b9910
// 地址: 0x1405b9910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x10)
void*** rax_16

if (rdi[1].d == *(rdi + 0x34))
labelid_3b:
    rax_16 = sub_1405a6af0(arg4, &data_143cd60a0)
else
    int32_t rbx_1 = data_143cd60a0
    void* r8 = &rdi[7]
    int32_t r10_3 = (sub_1405be5b0(&data_143cd60a4) - rbx_1) ^ rbx_1 u>> 0xd
    int32_t rdx_4 = (0x9e3779b9 - r10_3 - rbx_1) ^ r10_3 << 8
    void* rcx_2 = *(r8 + 8)
    int32_t rbx_4 = (rbx_1 - rdx_4 - r10_3) ^ rdx_4 u>> 0xd
    int32_t r10_6 = (r10_3 - rdx_4 - rbx_4) ^ rbx_4 u>> 0xc
    int32_t rdx_7 = (rdx_4 - r10_6 - rbx_4) ^ r10_6 << 0x10
    int32_t rbx_7 = (rbx_4 - rdx_7 - r10_6) ^ rdx_7 u>> 5
    int32_t r10_9 = (r10_6 - rdx_7 - rbx_7) ^ rbx_7 u>> 3
    int32_t rdx_10 = (rdx_7 - r10_9 - rbx_7) ^ r10_9 << 0xa
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_15 =
        *(r8 + (((sx.q(rdi[9].d) - 1) & sx.q((rbx_7 - rdx_10 - r10_9) ^ rdx_10 u>> 0xf)) << 2))
    
    if (rax_15 == 0xffffffff)
    label_1405b9a83:
        rax_16 = sub_1405a6af0(arg4, &data_143cd60a0)
    else
        int64_t r10_10 = *rdi
        int64_t r9
        
        while (true)
            r9 = sx.q(rax_15)
            int64_t rcx_3 = r9 * 5
            void* r8_1 = r10_10 + (rcx_3 << 3)
            
            if (*(r10_10 + (rcx_3 << 3)) != data_143cd60a0)
                rcx_3.b = 0
            else
                int32_t rdx_19
                
                if (*(r8_1 + 0x14) == data_143cd60b4)
                    rdx_19 = (*(r8_1 + 8) ^ data_143cd60a4:4.d)
                        | (*(r8_1 + 0xc) ^ data_143cd60a4:8.d)
                        | (*(r8_1 + 0x10) ^ data_143cd60a4:0xc.d)
                        | (data_143cd60a4.d ^ *(r8_1 + 4))
                
                if (*(r8_1 + 0x14) != data_143cd60b4 || rdx_19 != 0)
                    rcx_3.b = 0
                else
                    rcx_3.b = 1
                
                if (rcx_3.b == 0)
                    rcx_3.b = 0
                else
                    rcx_3.b = 1
            
            if (rcx_3.b != 0)
                break
            
            rax_15 = *(r8_1 + 0x20)
            
            if (rax_15 == 0xffffffff)
                goto label_1405b9a83_2
        
        if (rax_15 == 0xffffffff)
        label_1405b9a83_1:
            rax_16 = sub_1405a6af0(arg4, &data_143cd60a0)
        else
            void* rax_34 = r10_10 + r9 * 0x28
            
            if (rax_34 == 0 || rax_34 == -0x18)
            label_1405b9a83_2:
                rax_16 = sub_1405a6af0(arg4, &data_143cd60a0)
            else
                rax_16 = *(rax_34 + 0x18)

int64_t* arg_28
int64_t* r15_1 = arg_28
int32_t result_1
int64_t** rdi_2
int64_t** var_58

if (r15_1[0x16].d == *(r15_1 + 0xdc))
label_1405b9b02:
    result_1 = 0
    var_58 = nullptr
    int32_t var_50 = 0
    rdi_2 = nullptr
else
    void* r8_2 = &r15_1[0x1c]
    void* rcx_11 = *(r8_2 + 8)
    int64_t r9_1 = sx.q(arg3[4])
    
    if (rcx_11 != 0)
        r8_2 = rcx_11
    
    int32_t rax_17 = *(r8_2 + (((sx.q(r15_1[0x1e].d) - 1) & r9_1) << 2))
    
    if (rax_17 == 0xffffffff)
        goto label_1405b9b02
    
    int32_t* rcx_15
    
    while (true)
        rcx_15 = sx.q(rax_17) * 0xc0 + r15_1[0x15]
        
        if (*rcx_15 == r9_1.d)
            break
        
        rax_17 = rcx_15[0x2e]
        
        if (rax_17 == 0xffffffff)
            goto label_1405b9b02
    
    if (rax_17 == 0xffffffff || rcx_15 == 0 || rcx_15 == -8)
        goto label_1405b9b02
    
    sub_141a4a6a0(&rcx_15[2], &var_58, arg3, r15_1)
    int32_t result_3
    result_1 = result_3
    rdi_2 = var_58
int64_t result = sx.q(result_1)
void* r12 = &rdi_2[result]

if (rdi_2 != r12)
    TEB* gsbase
    void* rbx_12 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* arg_20 = rbx_12
    
    do
        arg_28 = *rdi_2
        result = sub_140d3c6e0(&arg_28)
        int64_t* result_2 = result
        
        if (result != 0)
            int64_t rax_20 = sub_1405c72e0()
            void* rcx_18 = result_2[2]
            result = rax_20 + 0x30
            int64_t rdx_23 = sx.q(*(result + 8))
            
            if (rdx_23.d s<= *(rcx_18 + 0x38) && *(*(rcx_18 + 0x30) + (rdx_23 << 3)) == result)
                if (data_143cd6320 s> *(0x14 + *rbx_12))
                    _Init_thread_header(&data_143cd6320)
                    
                    if (data_143cd6320 == 0xffffffff)
                        data_143cd62f8 = 0
                        __builtin_memset(&data_143cd6300, 0, 0x20)
                        atexit(sub_142cb0360)
                        _Init_thread_footer(&data_143cd6320)
                
                void** const var_48 = &data_142d4c318
                int64_t var_40_1 = *(arg1 + 8)
                int32_t i
                
                do
                    i = data_143cd62f8
                    data_143cd62f8 = 1
                while (i != 0)
                int64_t* rdx_24 = data_143cd6310
                int64_t rbx_13 = sx.q(data_143cd6318)
                int64_t* rax_25 = rdx_24
                void* r8_4 = &rdx_24[rbx_13]
                int32_t rax_37
                
                if (rdx_24 != r8_4)
                    while (*rax_25 != *(arg1 + 8))
                        rax_25 = &rax_25[1]
                        
                        if (rax_25 == r8_4)
                            goto label_1405b9c12
                    
                    rax_37 = ((rax_25 - rdx_24) s>> 3).d
                
                int64_t rbx_14
                
                if (rdx_24 == r8_4 || rax_37 == 0xffffffff)
                label_1405b9c12:
                    int32_t rax_26 = (rbx_13 + 1).d
                    bool cond:1_1 = rax_26 s<= data_143cd631c
                    data_143cd6318 = rax_26
                    
                    if (not(cond:1_1))
                        sub_1405a4d70(&data_143cd6310)
                        rdx_24 = data_143cd6310
                    
                    rdx_24[rbx_13] = *(arg1 + 8)
                    int64_t rax_28 = sub_141a4fae0(&data_143cd62f8, data_143cd6308)
                    int64_t rsi_2 = sx.q(data_143cd6308)
                    rbx_14 = rax_28
                    int32_t rax_29 = (rsi_2 + 1).d
                    bool cond:2_1 = rax_29 s<= data_143cd630c
                    data_143cd6308 = rax_29
                    
                    if (not(cond:2_1))
                        sub_1405a4d70(&data_143cd6300)
                    
                    *(data_143cd6300 + (rsi_2 << 3)) = rbx_14
                else
                    rbx_14 = *(data_143cd6300 + (sx.q(rax_37) << 3))
                
                data_143cd62f8 = 0
                int32_t var_60_1 = r15_1[0x5b].d
                void*** arg_18 = rbx_14
                char rax_32 = *(r15_1 + 0x2dc)
                int64_t var_68 = r15_1[0x5a]
                sub_1405c5900(&r15_1[0x1f], rbx_14, &var_48, result_2, rax_32, &var_68)
                var_48 = &data_142d4ba10
                result = sub_1405b5900(rax_16, result_2, arg1 + 8)
                rbx_12 = arg_20
        
        rdi_2 = &rdi_2[1]
    while (rdi_2 != r12)

return result
