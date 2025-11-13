// 函数: sub_1409d0a10
// 地址: 0x1409d0a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* r14 = *(arg2 + 0x28)
void* rbp = arg1
int32_t* rdx = *arg3
void* var_d0 = r14
int32_t* var_a8 = rdx
int64_t result = &rdx[sx.q(arg3[1].d)]
int64_t result_2 = result

if (rdx != result)
    int32_t r10_1 = 0
    TEB* gsbase
    void* rdi_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* var_e8_1 = rdi_1
    
    while (true)
        int64_t r8 = sx.q(*rdx)
        int64_t rcx_1 = *(rbp + 0x40)
        int64_t rax_4 = r8 * 3
        void* r11_1 = rcx_1 + (rax_4 << 3)
        result = sx.q(*(rcx_1 + (rax_4 << 3)))
        int32_t* r12_1 = *(rbp + 0x78) + result * 0x48
        int64_t rcx_3 = *(r14 + 0xe0)
        int32_t rbx_1 = *(rcx_3 + ((r8 * 5 + 2) << 3) + 8)
        int64_t* r15_3 = rcx_3 + ((r8 * 5 + 2) << 3)
        
        if (*(r11_1 + 0x10) != rbx_1)
        label_1409d0b59:
            int64_t r9_2 = sx.q(*r12_1)
            int32_t var_c4_1 = r9_2.d
            void* r14_1 = *(**(*(rbp + 0x28) + 0x50) + (sx.q(*(rbp + 0x38)) << 3))
            void* rax_9 = *(r14_1 + 0x28)
            void* r13_1 = r14_1 + 0x10
            void* rdx_5 = r13_1
            
            if (rax_9 != 0)
                rdx_5 = rax_9
            
            void* rbp_1 = rdx_5 + r9_2 * 0x18
            sub_1409b6490(arg1, arg2, r8.d)
            void* rsi_2 = &r12_1[4]
            int64_t rbx_2 = sx.q(r15_3[1].d)
            int32_t rdx_8 = rbx_2.d - r12_1[0x11]
            
            if (rdx_8 s<= 0)
                rdx_8 = 0
            
            int32_t r15_4 = r12_1[6] + rdx_8
            
            if (rdx_8 s> 0)
                sub_14090a510(rsi_2, r15_4)
            
            int32_t result_8 = *(rbp_1 + 0xc)
            int32_t result_1 = *(rbp_1 + 0x10)
            int32_t* rax_16 = *rdi_1 + 0x14
            
            if (data_143cef158 s> *rax_16)
                _Init_thread_header(&data_143cef158)
                
                if (data_143cef158 == 0xffffffff)
                    atexit(sub_142cb8d60)
                    _Init_thread_footer(&data_143cef158)
            
            int32_t rax_20 = data_143cef150
            char var_f8_1 = 0
            
            if (rbx_2.d s> rax_20)
                bool cond:2_1 = rbx_2.d s<= data_143cef154
                data_143cef150 = rbx_2.d
                
                if (not(cond:2_1))
                    sub_1405a4cf0(&data_143cef148)
            else if (rbx_2.d s< rax_20)
                int32_t rdi_5 = rax_20 - rbx_2.d
                
                if (rax_20 != rbx_2.d)
                    int32_t rcx_12 = rax_20 - rdi_5
                    
                    if (rcx_12 != rbx_2.d)
                        int64_t rax_19 = data_143cef148
                        memmove(rax_19 + (rbx_2 << 2), rax_19 + (sx.q(rdi_5 + rbx_2.d) << 2), 
                            (rcx_12 - rbx_2.d) << 2)
                        rax_20 = data_143cef150
                    
                    data_143cef150 = rax_20 - rdi_5
            
            int64_t rdi_6 = 0
            
            if (rbx_2.d s> 0)
                uint32_t r14_2 = var_f8_1.d
                
                do
                    int32_t var_4c_1 = data_143a1c6b0
                    int32_t rax_23 = data_143a1c6b8
                    int32_t var_54_1 = rax_23
                    int32_t var_50_1 = rax_23
                    int32_t var_68
                    sub_14090a150(rsi_2, &var_68)
                    int64_t r12_2 = sx.q(var_68)
                    char rdx_13 = r14_2.b
                    int128_t* var_60
                    *var_60 = rax_23.o
                    *(data_143cef148 + (rdi_6 << 2)) = r12_2.d
                    int32_t* rbx_5 = (r12_2 << 4) + *rsi_2
                    int32_t result_4 = *(*(var_d0 + 0xa8) + sx.q(*(*r15_3 + (rdi_6 << 2))) * 0x10)
                    *rbx_5 = result_4
                    int32_t result_6 = result_4
                    
                    if (result_4 s> 0xffff)
                        rdx_13 = 1
                    
                    if (result_8 s<= result_4)
                        result_6 = result_8
                    
                    if (result_1 s>= result_4)
                        result_4 = result_1
                    
                    char r8_4 = rdx_13
                    int32_t result_7 =
                        *(*(var_d0 + 0xa8) + sx.q(*(*r15_3 + (rdi_6 << 2))) * 0x10 + 4)
                    rbx_5[1] = result_7
                    int32_t result_9 = result_7
                    
                    if (result_7 s> 0xffff)
                        r8_4 = 1
                    
                    r14_2 = zx.d(r8_4)
                    
                    if (result_6 s<= result_7)
                        result_9 = result_6
                    
                    if (result_4 s>= result_7)
                        result_7 = result_4
                    
                    int32_t result_3 =
                        *(*(var_d0 + 0xa8) + sx.q(*(*r15_3 + (rdi_6 << 2))) * 0x10 + 8)
                    rbx_5[2] = result_3
                    int64_t rbx_6 = sx.q(*(r11_1 + 0x10))
                    
                    if (result_3 s> 0xffff)
                        r14_2 = 1
                    
                    int32_t result_5 = result_3
                    
                    if (result_9 s<= result_3)
                        result_5 = result_9
                    
                    result_8 = result_5
                    
                    if (result_7 s>= result_3)
                        result_3 = result_7
                    
                    result_1 = result_3
                    int32_t rax_33 = (rbx_6 + 1).d
                    *(r11_1 + 0x10) = rax_33
                    
                    if (rax_33 s> *(r11_1 + 0x14))
                        sub_1405a4cf0(r11_1 + 8)
                    
                    rdi_6 += 1
                    *(*(r11_1 + 8) + (rbx_6 << 2)) = r12_2.d
                while (rdi_6 s< rbx_2)
                
                var_f8_1.d = r14_2
                r13_1 = r14_1 + 0x10
            
            int64_t rdx_16 = arg2
            
            if (*(rdx_16 + 0x520) s<= 0 && var_f8_1 != 0)
                void* rbx_7 = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
                
                if (*(rbx_7 + 0x1b4) == 0)
                    if (data_143cef0b0 s> *rax_16)
                        _Init_thread_header(&data_143cef0b0)
                        
                        if (data_143cef0b0 == 0xffffffff)
                            data_143cef0a0 = 0
                            data_143cef0a8 = 0
                            atexit(sub_142cb7a20)
                            _Init_thread_footer(&data_143cef0b0)
                    
                    sub_14229f6c0(rbx_7 + 0x178, &data_143cef0a0)
                    sub_1422ac7c0(rbx_7 + 0x178, &data_143cef0a0, 2)
                
                rdx_16 = arg2
            
            uint64_t rcx_28 = zx.q(r12_1[2])
            
            if (r15_4 s> rcx_28.d)
                uint64_t r15_7 = zx.q(r15_4 - rcx_28.d + 0x20)
                r12_1[2] = (rcx_28 + r15_7).d
                
                if (*(rdx_16 + 0x520) s<= 0)
                    uint32_t rbx_8 = (r15_7 * 3).d
                    sub_1422a5ac0(r14_1 + 0x178, (rcx_28 * 3).d + *(rbp_1 + 4), nullptr, rbx_8)
                    int32_t r9_4 = *(r14_1 + 0x30)
                    int32_t r8_7 = var_c4_1 + 1
                    
                    while (r8_7 u< r9_4)
                        void* rax_39 = *(r13_1 + 0x18)
                        void* rdx_19 = r13_1
                        
                        if (rax_39 != 0)
                            rdx_19 = rax_39
                        
                        int64_t rax_40 = sx.q(r8_7)
                        r8_7 += 1
                        int64_t rcx_30 = rax_40 * 3
                        *(rdx_19 + (rcx_30 << 3) + 4) += rbx_8
            
            result = arg2
            
            if (*(result + 0x520) s<= 0)
                int64_t r11_3 = 0
                
                if (rbx_2 s> 0)
                    do
                        int64_t rax_42 = sx.q(*(data_143cef148 + (r11_3 << 2)))
                        int64_t rcx_31 = rax_42 << 2
                        int32_t r8_8 = (rax_42 * 3).d
                        int64_t r10_2 = rcx_31 << 2
                        uint64_t rcx_33 = zx.q(*(rbp_1 + 4) + r8_8)
                        int32_t r9_5 = *(r10_2 + *rsi_2)
                        void* rdx_20 = *(r14_1 + 0x198)
                        
                        if (*(r14_1 + 0x1b4) == 0)
                            if ((rdx_20.b & 1) != 0)
                                rdx_20 = (rdx_20 s>> 1) + r14_1 + 0x198
                            
                            *(rdx_20 + (rcx_33 << 1)) = r9_5.w
                        else
                            if ((rdx_20.b & 1) != 0)
                                rdx_20 = (rdx_20 s>> 1) + r14_1 + 0x198
                            
                            *(rdx_20 + (rcx_33 << 2)) = r9_5
                        
                        void* rdx_23 = *(r14_1 + 0x198)
                        int32_t r9_6 = *(*rsi_2 + r10_2 + 4)
                        uint64_t r10_5 = zx.q(*(rbp_1 + 4) + 1 + r8_8)
                        
                        if (*(r14_1 + 0x1b4) == 0)
                            if ((rdx_23.b & 1) != 0)
                                rdx_23 = (rdx_23 s>> 1) + r14_1 + 0x198
                            
                            *(rdx_23 + (r10_5 << 1)) = r9_6.w
                        else
                            if ((rdx_23.b & 1) != 0)
                                rdx_23 = (rdx_23 s>> 1) + r14_1 + 0x198
                            
                            *(rdx_23 + (r10_5 << 2)) = r9_6
                        
                        uint64_t r8_10 = zx.q(r8_8 + 2 + *(rbp_1 + 4))
                        int32_t rdx_26 = *(*rsi_2 + ((rcx_31 + 2) << 2))
                        void* rcx_36 = *(r14_1 + 0x198)
                        
                        if (*(r14_1 + 0x1b4) == 0)
                            if ((rcx_36.b & 1) != 0)
                                rcx_36 = (rcx_36 s>> 1) + r14_1 + 0x198
                            
                            *(rcx_36 + (r8_10 << 1)) = rdx_26.w
                        else
                            if ((rcx_36.b & 1) != 0)
                                rcx_36 = (rcx_36 s>> 1) + r14_1 + 0x198
                            
                            *(rcx_36 + (r8_10 << 2)) = rdx_26
                        
                        r11_3 += 1
                    while (r11_3 s< rbx_2)
                
                if (rdx_8 s> 0)
                    *(rbp_1 + 8) += rdx_8
                
                *(rbp_1 + 0xc) = result_8
                result = zx.q(result_1)
                *(rbp_1 + 0x10) = result.d
            
            r14 = var_d0
            rbp = arg1
            rdi_1 = var_e8_1
        else if (rbx_1 s> 0)
            int32_t* r9_1 = *r15_3
            int64_t rsi_1 = *(r12_1 + 0x10)
            void* rdi_3 = *(r11_1 + 8) - r9_1
            int64_t r11_2 = *(r14 + 0xa8)
            
            while (true)
                int64_t rdx_3 = sx.q(*r9_1) * 2
                int64_t rcx_5 = sx.q(*(rdi_3 + r9_1)) * 2
                
                if (*(rsi_1 + (rcx_5 << 3)) == *(r11_2 + (rdx_3 << 3))
                        && *(rsi_1 + (rcx_5 << 3) + 4) == *(r11_2 + (rdx_3 << 3) + 4))
                    result = zx.q(*(r11_2 + (rdx_3 << 3) + 8))
                    
                    if (*(rsi_1 + (rcx_5 << 3) + 8) == result.d)
                        r10_1 += 1
                        r9_1 = &r9_1[1]
                        
                        if (r10_1 s>= rbx_1)
                            break
                        
                        continue
                
                rdi_1 = var_e8_1
                goto label_1409d0b59
            
            rdi_1 = var_e8_1
        
        r10_1 = 0
        rdx = &var_a8[1]
        var_a8 = rdx
        
        if (rdx == result_2)
            break

__security_check_cookie(rax_1 ^ &var_118)
return result
