// 函数: sub_141998da0
// 地址: 0x141998da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_44 = 0xa
int32_t var_7c = 0xa
void* result_1 = nullptr
int32_t var_48 = 0
int64_t r14 = sx.q(arg1[1].d)
int32_t rax_2 = 0
void* result_5 = nullptr
int32_t rdi = 0
int32_t var_80 = 0
int32_t rbx = 0
void* result_4 = nullptr
int32_t var_b8 = 0
int32_t var_b4 = 0xa
int32_t temp0 = r14.d
void var_78

if (temp0 s> 0)
    int32_t var_48_1 = r14.d
    
    if (r14.d s> 0xa)
        sub_140b26700(&var_78, 0)
    
    void* result_2 = &var_78
    
    if (result_1 != 0)
        result_2 = result_1
    
    memset(result_2, 0, r14 << 2)
    rbx = var_b8
    rdi = var_80
else if (temp0 s< 0)
    int32_t rsi_2 = neg.d(r14.d)
    
    if (rsi_2 != 0)
        int32_t rcx_2 = neg.d(rsi_2 + r14.d)
        
        if (rcx_2 != 0)
            memmove(&var_78 + (r14 << 2), &var_78, rcx_2 << 2)
            rax_2 = var_48
        
        int32_t var_48_2 = rax_2 - rsi_2
        sub_1419ab110(&var_78)
        rbx = var_b8
        rdi = var_80

void var_b0

if (r14.d s> rdi)
    int32_t rbx_2 = r14.d - rdi
    int32_t rax_5 = rdi + rbx_2
    int32_t var_80_1 = rax_5
    
    if (rax_5 s> var_7c)
        sub_140b26700(&var_b0, rdi)
    
    void* result_6 = &var_b0
    
    if (result_5 != 0)
        result_6 = result_5
    
    memset(result_6 + (sx.q(rdi) << 2), 0, sx.q(rbx_2) << 2)
    rbx = var_b8
else if (r14.d s< rdi)
    int32_t rsi_4 = rdi - r14.d
    
    if (rdi != r14.d)
        int32_t rcx_8 = rdi - rsi_4
        
        if (rcx_8 != r14.d)
            void* result_8 = &var_b0
            
            if (result_5 != 0)
                result_8 = result_5
            
            memmove(result_8 + (r14 << 2), result_8 + (sx.q(rsi_4 + r14.d) << 2), 
                (rcx_8 - r14.d) << 2)
            rdi = var_80
        
        int32_t var_80_2 = rdi - rsi_4
        sub_1419ab110(&var_b0)
        rbx = var_b8

void var_e8

if (r14.d s> rbx)
    int32_t rdi_3 = r14.d - rbx
    int32_t rax_10 = rbx + rdi_3
    int32_t var_b8_1 = rax_10
    
    if (rax_10 s> var_b4)
        sub_140b26700(&var_e8, rbx)
    
    void* result_7 = &var_e8
    
    if (result_4 != 0)
        result_7 = result_4
    
    memset(result_7 + (sx.q(rbx) << 2), 0, sx.q(rdi_3) << 2)
else if (r14.d s< rbx)
    int32_t rdi_5 = rbx - r14.d
    
    if (rbx != r14.d)
        int32_t rcx_16 = rbx - rdi_5
        
        if (rcx_16 != r14.d)
            void* result_9 = &var_e8
            
            if (result_4 != 0)
                result_9 = result_4
            
            memmove(result_9 + (r14 << 2), result_9 + (sx.q(rdi_5 + r14.d) << 2), 
                (rcx_16 - r14.d) << 2)
            rbx = var_b8
        
        int32_t var_b8_2 = rbx - rdi_5
        sub_1419ab110(&var_e8)

int64_t rsi_5 = sx.q(*(arg2 + 0x40))

if (rsi_5 s> 0)
    int64_t rdi_6 = 0
    
    do
        void* rdx_6 = *(arg2 + 0x38)
        int64_t rax_16 = rdx_6 s>> 1
        char r8_12 = *(arg2 + 0x38) & 1
        void* rcx_22
        
        if (r8_12 == 0)
            rcx_22 = rdx_6
        else
            rcx_22 = arg2 + 0x38 + rax_16
        
        char rcx_25 = *(rcx_22 + (rdi_6 << 2) + 2)
        
        if (r8_12 != 0)
            rdx_6 = arg2 + 0x38 + rax_16
        
        int16_t rbx_4 = *(rdx_6 + (rdi_6 << 2))
        void* result_3
        int64_t r9_1
        
        if (rcx_25 == 9)
            int64_t r8_13 = 0
            
            if (r14.d s<= 0)
            label_141999131:
                *(zx.q(rbx_4) + arg3) = 0
            else
                result_3 = &var_78
                int64_t* r10_1 = *arg1
                
                if (result_1 != 0)
                    result_3 = result_1
                
                while (true)
                    void* rax_18 = *r10_1
                    r9_1 = sx.q(*result_3)
                    
                    if (r9_1.d s< *(rax_18 + 0x58))
                        void* rcx_23 = *(rax_18 + 0x50)
                        
                        if ((rcx_23.b & 1) != 0)
                            rcx_23 = (rcx_23 s>> 1) + rax_18 + 0x50
                        
                        if (rbx_4 == *(rcx_23 + (r9_1 << 2) + 2))
                            break
                    
                    r8_13 += 1
                    r10_1 = &r10_1[1]
                    result_3 += 4
                    
                    if (r8_13 s>= r14)
                        goto label_141999131_2
                
                *result_3 = (r9_1 + 1).d
        else if (((rcx_25 - 0xa) & 0xfb) == 0)
            int64_t r8_15 = 0
            
            if (r14.d s<= 0)
            label_141999131_1:
                *(zx.q(rbx_4) + arg3) = 0
            else
                result_3 = &var_b0
                void** r10_3 = *arg1
                
                if (result_5 != 0)
                    result_3 = result_5
                
                while (true)
                    void* rax_26 = *r10_3
                    r9_1 = sx.q(*result_3)
                    
                    if (r9_1.d s< *(rax_26 + 0x68))
                        void* rcx_28 = *(rax_26 + 0x60)
                        
                        if ((rcx_28.b & 1) != 0)
                            rcx_28 = (rcx_28 s>> 1) + rax_26 + 0x60
                        
                        if (rbx_4 == *(rcx_28 + (r9_1 << 2) + 2))
                            break
                    
                    r8_15 += 1
                    r10_3 = &r10_3[1]
                    result_3 += 4
                    
                    if (r8_15 s>= r14)
                        goto label_141999131_2
                
                *result_3 = (r9_1 + 1).d
        else if (((rcx_25 - 0xb) & 0xfb) == 0)
            int64_t r8_14 = 0
            
            if (r14.d s<= 0)
            label_141999131_2:
                *(zx.q(rbx_4) + arg3) = 0
            else
                result_3 = &var_e8
                void** r10_2 = *arg1
                
                if (result_4 != 0)
                    result_3 = result_4
                
                while (true)
                    void* rax_23 = *r10_2
                    r9_1 = sx.q(*result_3)
                    
                    if (r9_1.d s< *(rax_23 + 0x78))
                        void* rcx_26 = *(rax_23 + 0x70)
                        
                        if ((rcx_26.b & 1) != 0)
                            rcx_26 = (rcx_26 s>> 1) + rax_23 + 0x70
                        
                        if (rbx_4 == *(rcx_26 + (r9_1 << 2) + 2))
                            break
                    
                    r8_14 += 1
                    r10_2 = &r10_2[1]
                    result_3 += 4
                    
                    if (r8_14 s>= r14)
                        goto label_141999131_2
                
                *result_3 = (r9_1 + 1).d
        rdi_6 += 1
    while (rdi_6 s< rsi_5)

if (result_4 != 0)
    sub_140a74f90(result_4)

if (result_5 != 0)
    sub_140a74f90(result_5)

void* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_108)
return result
