// 函数: sub_141489280
// 地址: 0x141489280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* rax_2 = *(arg3 + 0x18)
void* r10 = arg3 + 8
char rdi = arg1
int32_t rcx = *(arg2 + 0x110)
int64_t r12
r12.b = 0
void* var_1d0 = arg4

if (rax_2 != 0)
    r10 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx)
int64_t rdx_2 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
int32_t result = 1 << (rcx.b & 0x1f)
int32_t rcx_2 = *(r10 + (rdx_2 << 2))

if ((result & rcx_2) == 0)
    *(r10 + (rdx_2 << 2)) = result | rcx_2
    int32_t rbp_1 = 0
    result = *(arg2 + 0x50)
    bool cond:1_1 = result == 0
    
    if (result s<= 0)
        goto label_1414895d2
    
    void* rdx_3 = arg4 + 0x1668
    int64_t r13_1 = 0
    TEB* gsbase
    void* r8 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* var_1c8_1 = r8
    
    do
        void* rax_9 = *(rdx_3 + 0x10)
        void* rbx_2 = *(arg2 + 0x48) + r13_1
        
        if (rax_9 != 0)
            rdx_3 = rax_9
        
        int32_t rcx_4 = *(rbx_2 + 0xa8)
        int32_t rax_10 = rcx_4
        
        if (rcx_4 s< 0)
            rax_10 = rcx_4 + 0x1f
        
        int32_t rax_13
        
        if (not(test_bit(*(rdx_3 + (sx.q(rax_10 s>> 5) << 2)), rcx_4 & 0x1f))
                || *(rbx_2 + 0x88) == 0)
            rax_13.b = 0
        else
            rax_13.b = 1
        
        if (rax_13.b != 0)
            *(arg4 + 0x1548)
            void var_1b8
            sub_1422e5a50(*(rbx_2 + 0x88), &var_1b8)
            arg4 = var_1d0
            r8 = var_1c8_1
        
        if (rdi != 0)
        label_14148946c:
            int64_t* rcx_12 = *(rbx_2 + 0x80)
            int64_t var_1c0 = 0
            int64_t* rax_18 = (*(*rcx_12 + 0x40))(rcx_12, zx.q(*(var_1d0 + 0x1548)), &var_1c0)
            int64_t r8_5 = *rax_18
            void var_1d6
            
            if ((not.b(*(*(r8_5 + 0x1e8))(rax_18, &var_1d6, r8_5)) & 1) != 0)
                int32_t r8_6 = *(rbx_2 + 0xa8)
                void* r9 = arg3 + 0x58
                void* r11_1 = *(r9 + 0x10)
                void* r10_1 = arg3 + 0x28
                void* rdi_1 = *(r10_1 + 0x10)
                int32_t rdx_10 = 1 << (r8_6.b & 0x1f)
                
                if (r8_6 s< 0)
                    r8_6 += 0x1f
                
                int64_t rcx_17 = sx.q(r8_6 s>> 5) << 2
                void* rax_21 = r9
                
                if (rdi_1 != 0)
                    r10_1 = rdi_1
                
                if (r11_1 != 0)
                    rax_21 = r11_1
                
                int32_t r8_8 = *(r10_1 + rcx_17)
                int32_t rdx_11
                
                if ((*(rax_21 + rcx_17) & rdx_10) == 0)
                    rdx_11 = not.d(rdx_10) & r8_8
                else
                    rdx_11 = rdx_10 | r8_8
                
                *(r10_1 + rcx_17) = rdx_11
                void* rax_22 = *(r9 + 0x10)
                int32_t rcx_18 = *(rbx_2 + 0xa8)
                
                if (rax_22 != 0)
                    r9 = rax_22
                
                int32_t rax_23 = rcx_18
                
                if (rcx_18 s< 0)
                    rax_23 = rcx_18 + 0x1f
                
                void* rdx_13 = r9 + (sx.q(rax_23 s>> 5) << 2)
                *rdx_13 &= not.d(1 << (rcx_18.b & 0x1f))
                
                if ((*(rbx_2 + 0x9c) & 0x100000) != 0)
                    int64_t rdx_14 = sx.q(*(rbx_2 + 0xac)) << 3
                    *(rdx_14 + *(arg3 + 0x48)) = *(rdx_14 + *(arg3 + 0x78))
                    *(*(arg3 + 0x78) + (sx.q(*(rbx_2 + 0xac)) << 3)) = 0
                
                r12.b = 1
        else
            *(arg4 + 0x1548)
            
            if (data_143ee1d10 s> *(0x14 + *r8))
                _Init_thread_header(&data_143ee1d10)
                
                if (data_143ee1d10 == 0xffffffff)
                    int64_t* rcx_24 = data_143db18d0
                    
                    if (rcx_24 == 0)
                        sub_140a53c40()
                        rcx_24 = data_143db18d0
                    
                    int64_t r8_9
                    r8_9.b = 1
                    int64_t* rax_33 =
                        (*(*rcx_24 + 0xb0))(rcx_24, r.Mobile.AllowDistanceFieldShadows", r8_9)
                    
                    if (rax_33 != 0)
                        int64_t rdx_15 = *rax_33
                        rax_33 = (*(rdx_15 + 0x58))(rax_33, rdx_15)
                    
                    data_143ee1d08 = rax_33
                    _Init_thread_footer(&data_143ee1d10)
            
            if (*(data_143ee1d08 + 4) != 1)
                rdi = 0
            else
                void* rcx_9 = *(rbx_2 + 0x88)
                void var_118
                
                if (rcx_9 == 0)
                    rdi = 0
                else if (sub_1422e4ff0(rcx_9, &var_118)[0x16].d != 2)
                    rdi = 0
                else
                    rdi = 1
            
            int64_t* rax_15
            
            if (rdi == 0)
                rax_15.b = 0
            else
                void* rcx_10 = *(rbx_2 + 0x88)
                void var_168
                
                if (rcx_10 == 0)
                    rax_15.b = 0
                else if (sub_1422e5a50(rcx_10, &var_168)[8].d != 2)
                    rax_15.b = 0
                else
                    rax_15.b = 1
            
            if (rdi == 0)
                if (*(*(arg2 + 8) + 0x32) - 1 u<= 1)
                    goto label_14148946c
            else if (rax_15.b != 0)
                goto label_14148946c
        
        arg4 = var_1d0
        rbp_1 += 1
        result = *(arg2 + 0x50)
        r13_1 += 0xb0
        rdi = arg1
        r8 = var_1c8_1
        rdx_3 = arg4 + 0x1668
    while (rbp_1 s< result)
    
    if (r12.b != 0)
        result.b = 1
    else
        cond:1_1 = result == 0
    label_1414895d2:
        
        if (cond:1_1)
            result.b = 1
        else
            result.b = 0
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
