// 函数: sub_140a69950
// 地址: 0x140a69950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int64_t* r15 = arg2
TEB* gsbase

if (data_143db9610 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9610)
    
    if (data_143db9610 == 0xffffffff)
        atexit(sub_142cbd290)
        _Init_thread_footer(&data_143db9610)

if (data_143db9614 == 0)
    void* rcx = data_143ddb400
    
    if (rcx != 0 && *(rcx + 0x59) != 0)
        data_143db9614 = 1
        int64_t* var_98 = nullptr
        int64_t var_90_1 = 0
        sub_140af2c50(rcx, Internationalization", CultureDisplayNameSubstitutes", &var_98, 
            &data_143de5780)
        void* rcx_1 = data_143ddb400
        int64_t* var_88 = nullptr
        int32_t var_80_1 = 0
        sub_140af2c50(rcx_1, Internationalization", CultureDisplayNameSubstitutes", &var_88, 
            &data_143de5830)
        int64_t rbx_1 = sx.q(var_80_1)
        
        if (rbx_1.d != 0)
            int32_t rax_2 = var_90_1.d
            int32_t rdx = rbx_1.d + rax_2
            
            if (rdx s> var_90_1:4.d)
                sub_14061cd70(&var_98, rdx)
                rax_2 = var_90_1.d
            
            memmove(&var_98[sx.q(rax_2) * 2], var_88, (rbx_1 << 4).d)
            var_90_1.d += rbx_1.d
            var_80_1 = 0
        
        sub_140597000(&var_88)
        int32_t rax_3 = var_90_1.d
        
        if (rax_3 s> data_143db960c)
            sub_140a89a70(&data_143db9600, rax_3)
            rax_3 = var_90_1.d
        
        int64_t* rbx_2 = var_98
        void* rsi_3 = &rbx_2[sx.q(rax_3) * 2]
        char arg_18
        
        if (rbx_2 != rsi_3)
            do
                var_88 = nullptr
                int32_t var_80_2 = 0
                sub_140a2ccb0(rbx_2, &var_88, U";", 1)
                int32_t rax_9
                int64_t* rcx_12
                
                if (var_80_2 == 2)
                    int64_t* rax_5 = var_88
                    int64_t r14_1 = *rax_5
                    *rax_5 = 0
                    int32_t r15_1 = rax_5[1].d
                    int32_t r12_1 = *(rax_5 + 0xc)
                    rax_5[1] = 0
                    int64_t* rax_6 = var_88
                    int64_t r13_1 = rax_6[2]
                    rax_6[2] = 0
                    arg_18.d = rax_6[3].d
                    int32_t rcx_9 = *(rax_6 + 0x1c)
                    rax_6[3] = 0
                    int64_t rdi_1 = sx.q(data_143db9608)
                    int32_t rax_7 = (rdi_1 + 1).d
                    bool cond:1_1 = rax_7 s<= data_143db960c
                    data_143db9608 = rax_7
                    
                    if (not(cond:1_1))
                        sub_140a88da0(&data_143db9600)
                    
                    int32_t rax_8 = arg_18.d
                    rcx_12 = rdi_1 * 0x30 + data_143db9600
                    *rcx_12 = 0
                    rcx_12[1] = 0
                    rcx_12[2] = r14_1
                    rcx_12[3].d = r15_1
                    *(rcx_12 + 0x1c) = r12_1
                    rcx_12[4] = r13_1
                    rcx_12[5].d = rax_8
                    rax_9 = rcx_9
                label_140a69c4e:
                    *(rcx_12 + 0x2c) = rax_9
                    int64_t var_78
                    __builtin_memset(&var_78, 0, 0x30)
                    sub_140a63030(&var_78)
                else if (var_80_2 == 3)
                    int64_t* rax_10 = var_88
                    int64_t r14_2 = *rax_10
                    *rax_10 = 0
                    int32_t r15_2 = rax_10[1].d
                    int32_t r12_2 = *(rax_10 + 0xc)
                    rax_10[1] = 0
                    int64_t* rax_11 = var_88
                    int64_t r13_2 = rax_11[2]
                    rax_11[2] = 0
                    arg_18.d = rax_11[3].d
                    int32_t rcx_14 = *(rax_11 + 0x1c)
                    rax_11[3] = 0
                    int64_t* rax_12 = var_88
                    int64_t rcx_15 = rax_12[4]
                    rax_12[4] = 0
                    int32_t rcx_16 = rax_12[5].d
                    int32_t rcx_17 = *(rax_12 + 0x2c)
                    rax_12[5] = 0
                    int64_t rdi_2 = sx.q(data_143db9608)
                    int32_t rax_13 = (rdi_2 + 1).d
                    bool cond:2_1 = rax_13 s<= data_143db960c
                    data_143db9608 = rax_13
                    
                    if (not(cond:2_1))
                        sub_140a88da0(&data_143db9600)
                    
                    int32_t rax_14 = arg_18.d
                    rcx_12 = rdi_2 * 0x30 + data_143db9600
                    *rcx_12 = r14_2
                    rcx_12[1].d = r15_2
                    *(rcx_12 + 0xc) = r12_2
                    rcx_12[2] = r13_2
                    rcx_12[3].d = rax_14
                    *(rcx_12 + 0x1c) = rcx_14
                    rcx_12[4] = rcx_15
                    rcx_12[5].d = rcx_16
                    rax_9 = rcx_17
                    goto label_140a69c4e
                sub_140597000(&var_88)
                rbx_2 = &rbx_2[2]
            while (rbx_2 != rsi_3)
            
            r15 = arg2
        
        int32_t rdx_6 = data_143db9608
        void* rcx_22 = data_143db9600
        int32_t arg_20 = &arg_18
        arg_18 = 0
        sub_140a5fca0(rcx_22, rdx_6)
        sub_140597000(&var_98)
        rsi = arg1

void* rdi_3 = data_143db9600
int64_t result = sx.q(data_143db9608)
void* r14_5 = result * 0x30 + rdi_3

if (rdi_3 != r14_5)
    int32_t* rdi_4 = rdi_3 + 8
    
    do
        if (*rdi_4 s<= 1)
        label_140a69d4c:
            int16_t* const r8_4
            
            if (rdi_4[8] == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *(rdi_4 + 0x18)
            
            int16_t* rdx_8
            
            if (rdi_4[4] == 0)
                rdx_8 = &data_142d40450
            else
                rdx_8 = *(rdi_4 + 8)
            
            sub_140a306e0(r15, rdx_8, r8_4, 0)
        else
            int64_t* rbx_3 = *rsi
            void* rsi_6 = &rbx_3[sx.q(rsi[1].d) * 2]
            
            if (rbx_3 != rsi_6)
                while (true)
                    int16_t* rdx_7
                    
                    if (*rdi_4 == 0)
                        rdx_7 = &data_142d40450
                    else
                        rdx_7 = *(rdi_4 - 8)
                    
                    int16_t* const rcx_24
                    
                    if (rbx_3[1].d == 0)
                        rcx_24 = &data_142d40450
                    else
                        rcx_24 = *rbx_3
                    
                    if (sub_140a54510(rcx_24, rdx_7) == 0)
                        break
                    
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rsi_6)
                        goto label_140a69d79
                
                goto label_140a69d4c
        
    label_140a69d79:
        rsi = arg1
        rdi_4 = &rdi_4[0xc]
        result = &rdi_4[-2]
    while (result != r14_5)

return result
