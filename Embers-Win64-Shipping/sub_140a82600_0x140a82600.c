// 函数: sub_140a82600
// 地址: 0x140a82600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t** r15 = arg3
int64_t rax_4 = *arg1
int64_t* var_200 = arg4
int32_t rax_6 = neg.d((*(rax_4 + 8))())
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143db99a8 s> *rbx_1)
    _Init_thread_header(&data_143db99a8)
    
    if (data_143db99a8 == 0xffffffff)
        sub_140b1a9d0(&data_143db9998)
        atexit(sub_142cbd660)
        _Init_thread_footer(&data_143db99a8)

if (data_143db99c0 s> *rbx_1)
    _Init_thread_header(&data_143db99c0)
    
    if (data_143db99c0 == 0xffffffff)
        void* var_68_1 = nullptr
        int32_t var_58_1 = 7
        void var_168
        sub_140a88670(&var_168, 0, 8, 2)
        void* rcx_34 = &var_168
        
        if (var_68_1 != 0)
            rcx_34 = var_68_1
        
        sub_1405a7220(rcx_34, 8, "Windows", 8, 0x3f)
        int32_t rdx_30 = 0
        data_143db99b8 = 0
        int32_t rcx_35 = 0
        data_143db99bc = 0
        data_143db99b0 = 0
        
        if (rcx_34 != 0 && *rcx_34 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (*(rcx_34 + (rbx_2 << 1)) != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&data_143db99b0, rbx_2.d + 1)
                rcx_35 = data_143db99bc
                rdx_30 = data_143db99b8
            
            int32_t rax_32 = rdx_30 + rbx_2.d + 1
            data_143db99b8 = rax_32
            
            if (rax_32 s> rcx_35)
                sub_140594770(&data_143db99b0)
            
            UnDecorator::getReferenceType(data_143db99b0, rcx_34, (rbx_2.d + 1) * 2)
        
        if (var_68_1 != 0)
            int64_t* rcx_37 = data_143ddb3f0
            
            if (rcx_37 == 0)
                sub_140a750a0()
                rcx_37 = data_143ddb3f0
            
            (*(*rcx_37 + 0x30))(rcx_37, var_68_1)
        
        atexit(sub_142cbd6a0)
        _Init_thread_footer(&data_143db99c0)

int64_t rax_8 = sx.q(arg2[1].d)
int16_t var_218
void var_208
int64_t* var_1f0
int64_t var_190

if (rax_8.d s> 0)
    int64_t* r14_1 = *arg2
    void* r12_3 = &r14_1[rax_8 * 2]
    
    if (r14_1 != r12_3)
        do
            sub_140a464c0()
            r14_1[1].d
            
            if ((*(data_14399ea08 + 0x50))() != 0)
                int64_t var_180
                int64_t* rax_11
                int512_t zmm1_1
                rax_11, zmm1_1 = sub_140b18720(&var_180, r14_1, 1)
                int16_t* rcx_3 = *rax_11
                int32_t rdx_2 = rax_11[1].d
                int32_t rdx_3 = neg.d(rdx_2)
                *rax_11 = 0
                int32_t r8_1 = rax_11[1].d
                int16_t* var_1d8 = rcx_3
                int32_t rcx_4 = *(rax_11 + 0xc)
                int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 9 + r8_1
                int32_t var_1cc_1 = rcx_4
                rax_11[1] = 0
                
                if (rdx_6 s> rcx_4)
                    sub_1405947f0(&var_1d8, rdx_6)
                
                sub_140a20ba0(&var_1d8, u".locmeta", 8)
                int64_t rbx_3 = var_180
                int16_t* r15_1 = var_1d8
                var_1d8 = nullptr
                int32_t var_1d0_1
                var_1d0_1.q = 0
                
                if (rbx_3 != 0)
                    int64_t* rcx_7 = data_143ddb3f0
                    
                    if (rcx_7 == 0)
                        zmm1_1 = sub_140a750a0()
                        rcx_7 = data_143ddb3f0
                    
                    (*(*rcx_7 + 0x30))(rcx_7, rbx_3)
                
                uint64_t var_1b8 = 0
                int32_t rbx_4 = r8_1 - 1
                int32_t var_1b0_1 = 0
                int32_t rdi_2 = r14_1[1].d
                
                if (r8_1 == 0)
                    rbx_4 = 0
                
                int64_t var_1a8 = 0
                int64_t var_1a0_1 = 0
                int32_t rax_14
                
                if (rdi_2 == 0)
                    rax_14 = rdi_2 + 2
                
                if (rdi_2 != 0 || rbx_4 == 0xffffffff)
                    rax_14 = 1
                
                var_1f0 = nullptr
                int32_t rcx_8 = rax_14 + rbx_4
                int64_t rsi_1 = *r14_1
                int32_t var_1e8_1 = rdi_2
                
                if (rdi_2 != 0 || rcx_8 != 0)
                    sub_1405a4c70(&var_1f0, rdi_2 + rcx_8, 0)
                    memcpy(var_1f0, rsi_1, rdi_2 * 2)
                else
                    int32_t var_1e4_1 = rcx_8
                
                sub_140a2cf70(&var_1f0, r15_1, rbx_4)
                char rax_15 = sub_140ab4d40(&var_1b8, &var_1f0, zmm1_1)
                int64_t* rbx_5 = var_1f0
                
                if (rbx_5 != 0)
                    int64_t* rcx_13 = data_143ddb3f0
                    
                    if (rcx_13 != 0)
                        (*(*rcx_13 + 0x30))(rcx_13, rbx_5)
                    else
                        sub_140a750a0()
                        int64_t* rcx_14 = data_143ddb3f0
                        int64_t r8_5 = *rcx_14
                        (*(r8_5 + 0x30))(rcx_14, rbx_5, r8_5)
                
                if (rax_15 != 0)
                    int64_t* i = *arg4
                    
                    for (void* rdi_6 = &i[sx.q(arg4[1].d) * 2]; i != rdi_6; i = &i[2])
                        uint64_t rdx_14 = &data_142d40450
                        
                        if (var_1b0_1 != 0)
                            rdx_14 = var_1b8
                        
                        int16_t* const rcx_15
                        
                        if (i[1].d == 0)
                            rcx_15 = &data_142d40450
                        else
                            rcx_15 = *i
                        
                        if (sub_140a54510(rcx_15, rdx_14) == 0)
                            goto label_140a8292e
                    
                    var_218.q = sub_140b18970(&var_190, &var_1a8)
                    sub_140a65b50(&var_208, arg5, r14_1, &var_1b8, var_218, rax_6)
                    int64_t rbx_6 = var_190
                    
                    if (rbx_6 != 0)
                        int64_t* rcx_19 = data_143ddb3f0
                        
                        if (rcx_19 == 0)
                            sub_140a750a0()
                            rcx_19 = data_143ddb3f0
                        
                        (*(*rcx_19 + 0x30))(rcx_19, rbx_6)
                
            label_140a8292e:
                int64_t rbx_7 = var_1a8
                
                if (rbx_7 != 0)
                    int64_t* rcx_20 = data_143ddb3f0
                    
                    if (rcx_20 == 0)
                        sub_140a750a0()
                        rcx_20 = data_143ddb3f0
                    
                    (*(*rcx_20 + 0x30))(rcx_20, rbx_7)
                
                uint64_t rbx_8 = var_1b8
                
                if (rbx_8 != 0)
                    int64_t* rcx_21 = data_143ddb3f0
                    
                    if (rcx_21 == 0)
                        sub_140a750a0()
                        rcx_21 = data_143ddb3f0
                    
                    (*(*rcx_21 + 0x30))(rcx_21, rbx_8)
                
                if (r15_1 != 0)
                    int64_t* rcx_22 = data_143ddb3f0
                    
                    if (rcx_22 == 0)
                        sub_140a750a0()
                        rcx_22 = data_143ddb3f0
                    
                    (*(*rcx_22 + 0x30))(rcx_22, r15_1)
            
            r14_1 = &r14_1[2]
        while (r14_1 != r12_3)
        
        r15 = arg3

int64_t result = sx.q(r15[1].d)

if (result.d s> 0)
    int32_t r13_1 = arg4[1].d
    int64_t* var_1c8
    var_1c8.d = r13_1
    int32_t rsi_2 = 0
    
    if (r13_1 s> 0)
        int64_t* r12_4 = *r15
        int64_t* var_1c0_1 = r12_4
        void* r14_4 = &r12_4[result * 2]
        int64_t* r15_3 = *var_200
        
        do
            int64_t* rbx_9 = r12_4
            
            if (r12_4 != r14_4)
                do
                    sub_140a464c0()
                    rbx_9[1].d
                    result = (*(data_14399ea08 + 0x50))()
                    
                    if (result.b != 0)
                        int64_t** rax_24 = sub_140b18720(&var_190, rbx_9, 1)
                        int64_t* rcx_24 = *rax_24
                        int32_t rdx_22 = rax_24[1].d
                        int32_t rdx_23 = neg.d(rdx_22)
                        *rax_24 = nullptr
                        int32_t r8_8 = rax_24[1].d
                        var_200 = rcx_24
                        int32_t rcx_25 = *(rax_24 + 0xc)
                        int32_t rdx_26 = sbb.d(rdx_23, rdx_23, rdx_22 != 0) + 8 + r8_8
                        rax_24[1] = 0
                        
                        if (rdx_26 s> rcx_25)
                            sub_1405947f0(&var_200, rdx_26)
                        
                        sub_140a20ba0(&var_200, u".locres", 7)
                        var_1f0 = var_200
                        var_200 = nullptr
                        int64_t rdi_7 = var_190
                        int32_t var_1e8_2 = r8_8
                        int32_t var_1e4_2 = rcx_25
                        int32_t var_1f8_1
                        var_1f8_1.q = 0
                        
                        if (rdi_7 != 0)
                            int64_t* rcx_28 = data_143ddb3f0
                            
                            if (rcx_28 == 0)
                                sub_140a750a0()
                                rcx_28 = data_143ddb3f0
                            
                            (*(*rcx_28 + 0x30))(rcx_28, rdi_7)
                        
                        var_218.q = &var_1f0
                        result = sub_140a65b50(&var_208, arg6, rbx_9, r15_3, var_218, rsi_2 + rax_6)
                        int64_t* rdi_8 = var_1f0
                        
                        if (rdi_8 != 0)
                            int64_t* rcx_30 = data_143ddb3f0
                            
                            if (rcx_30 == 0)
                                sub_140a750a0()
                                rcx_30 = data_143ddb3f0
                            
                            result = (*(*rcx_30 + 0x30))(rcx_30, rdi_8)
                    
                    rbx_9 = &rbx_9[2]
                while (rbx_9 != r14_4)
                
                r12_4 = var_1c0_1
                r13_1 = var_1c8.d
            
            rsi_2 += 1
            r15_3 = &r15_3[2]
        while (rsi_2 s< r13_1)

__security_check_cookie(rax_1 ^ &var_238)
return result
