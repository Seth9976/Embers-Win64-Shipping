// 函数: sub_14084b670
// 地址: 0x14084b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t r12 = sx.q(*(arg1 + 0xa8))
int64_t r15 = 0
int32_t var_cc = 0x20
void* var_d8 = nullptr
int32_t var_d0 = 0
void* var_48 = nullptr
int32_t var_3c = 0x400
void var_c8
memset(&var_c8, 0, 0x80)
int64_t rdi = sx.q(*(arg1 + 0x700))

if (r12.d s> rdi.d)
    *(arg1 + 0x700) = r12.d
    
    if (r12.d s> *(arg1 + 0x704))
        sub_1405a4cf0(arg1 + 0x6f8)
    
    memset(*(arg1 + 0x6f8) + (rdi << 2), 0, sx.q(r12.d - rdi.d) << 2)
else if (r12.d s< rdi.d && r12.d != rdi.d)
    *(arg1 + 0x700) = r12.d
    sub_1405dac90(arg1 + 0x6f8)

int64_t rdi_1 = sx.q(var_d0)
void var_158

if (r12.d s> rdi_1.d)
    int32_t rbx_4 = r12.d - rdi_1.d
    int32_t rax_3 = rdi_1.d + rbx_4
    int32_t var_d0_1 = rax_3
    
    if (rax_3 s> var_cc)
        sub_1407c3770(&var_158, rdi_1.d)
    
    void* rcx_5 = &var_158
    
    if (var_d8 != 0)
        rcx_5 = var_d8
    
    memset(rcx_5 + (rdi_1 << 2), 0, sx.q(rbx_4) << 2)
else if (r12.d s< rdi_1.d)
    int32_t rbx_5 = rdi_1.d
    int32_t rbx_6 = rbx_5 - r12.d
    
    if (rbx_5 != r12.d)
        int32_t rcx_8 = rdi_1.d - rbx_6
        
        if (rcx_8 != r12.d)
            void* r9_1 = &var_158
            
            if (var_d8 != 0)
                r9_1 = var_d8
            
            memmove(r9_1 + (r12 << 2), r9_1 + (sx.q(rbx_6 + r12.d) << 2), (rcx_8 - r12.d) << 2)
            rdi_1 = zx.q(var_d0)
        
        int32_t var_d0_2 = rdi_1.d - rbx_6
        sub_1407c3eb0(&var_158)

int32_t rax_8 = r12.d * r12.d
uint32_t rbx_8 = (rax_8 + 0x1f) u>> 5
void* result = zx.q((var_3c + 0x1f) u>> 5)

if (rbx_8 u<= result.d)
    void* rdi_4 = &var_c8
    
    if (var_48 != 0)
        rdi_4 = var_48
    
    if (result.d u> 8)
        memset(rdi_4, 0, zx.q(result.d) << 2)
    else if (result.d != 0)
        __builtin_memset(rdi_4, 0, zx.q(result.d) << 2)
else
    sub_1407c3460(&var_c8, 0, rbx_8, 4)
    void* rsi_1 = &var_c8
    uint32_t var_3c_1 = rbx_8 << 5
    
    if (var_48 != 0)
        rsi_1 = var_48
    
    if (rbx_8 u> 8)
        memset(rsi_1, 0, zx.q(rbx_8) << 2)
    else if (rbx_8 != 0)
        __builtin_memset(rsi_1, 0, zx.q(rbx_8) << 2)
    
    void* rdx_4 = rsi_1 + (zx.q(rbx_8 - 1) << 2)
    *rdx_4 &= 0xffffffff u>> ((neg.d(rax_8)).b & 0x1f)

int32_t rdx_5 = (r12 * 3).d
uint64_t var_190 = 0
int64_t var_188 = 0

if (rdx_5 s> 0)
    sub_1405c5570(&var_190, rdx_5)

result.b = 0
int32_t i = 0
char var_198 = 0
int64_t rsi_2 = r12
int32_t i_1 = 0

if (r12.d s> 0)
    int64_t rdx_6 = 0
    int64_t var_168_1 = 0
    void** rdi_5 = nullptr
    int32_t var_180_1 = 0
    void** var_160 = nullptr
    
    do
        void* r14_1 = *(rdi_5 + *(arg1 + 0xa0))
        *(*(arg1 + 0x6f8) + (rdx_6 << 2)) = i
        void* rcx_23 = &var_158
        
        if (var_d8 != 0)
            rcx_23 = var_d8
        
        *(rcx_23 + (rdx_6 << 2)) = 0xffffffff
        int64_t rdi_6 = sx.q(var_188.d)
        
        if (rdi_6.d s>= 0)
            if (rdi_6.d s>= 1)
                rdi_6 = 0
            
            var_188.d = rdi_6.d
        else
            int32_t rbx_10 = neg.d(rdi_6.d)
            int32_t rax_18 = rdi_6.d + rbx_10
            var_188.d = rax_18
            
            if (rax_18 s> var_188:4.d)
                sub_1405a4d70(&var_190)
            
            memset(var_190 + (rdi_6 << 3), 0, sx.q(rbx_10) << 3)
        
        void* rax_20 = *(r14_1 + 0x788)
        void* rdx_8
        
        if (rax_20 != 0 && *(rax_20 + 0xd8) == 1)
            rdx_8 = *(r14_1 + 0x728)
        
        if (rax_20 == 0 || *(rax_20 + 0xd8) != 1 || rdx_8 == 0)
            sub_140850200(arg1, r14_1 + 0xb0, &var_190)
            sub_140850200(arg1, r14_1 + 0x418, &var_190)
            result = sub_1408502f0(arg1, r14_1, &var_190)
        else
            result = sub_140850200(arg1, rdx_8 + 0x88, &var_190)
        
        int32_t r8_18 = var_188.d
        int32_t rbx_11 = 0
        
        if (r8_18 s> 0)
            int64_t r14_2 = 0
            
            do
                int32_t rdx_13 = 0
                int64_t rcx_30 = 0
                
                if (rsi_2 s> 0)
                    result = *(arg1 + 0xa0)
                    
                    do
                        if (*(r14_2 + var_190) == *result)
                            if (var_168_1 != rcx_30)
                                result = sub_14085b960(&var_c8, rdx_13 + var_180_1, 1, 1)
                                r8_18 = var_188.d
                                var_198 = 1
                            
                            break
                        
                        rdx_13 += 1
                        rcx_30 += 1
                        result += 0x10
                    while (rcx_30 s< rsi_2)
                
                rbx_11 += 1
                r14_2 += 8
            while (rbx_11 s< r8_18)
            
            r12 = zx.q(rsi_2.d)
        
        i = i_1 + 1
        rdx_6 = var_168_1 + 1
        var_180_1 += r12.d
        rdi_5 = &var_160[2]
        i_1 = i
        var_168_1 = rdx_6
        var_160 = rdi_5
    while (i s< r12.d)
    
    if (var_198 != 0)
        int32_t rbx_12 = 0
        
        if (rsi_2 s> 0)
            void* rcx_33 = var_d8
            int64_t rdi_9 = 0
            
            do
                void* rax_22 = &var_158
                
                if (rcx_33 != 0)
                    rax_22 = rcx_33
                
                if (*(rax_22 + (rdi_9 << 2)) s< 0)
                    if (sub_14084b450(arg1, rbx_12, &var_158, &var_c8) == 0)
                        void* rax_24 = *(arg1 + 0x28)
                        
                        if (rax_24 != 0)
                            r15 = *(rax_24 + 0x408)
                        
                        sub_1407fb330(sx.q(rbx_12) * 0x30 + *(r15 + 0x68), &var_160)
                        break
                    
                    rcx_33 = var_d8
                
                rbx_12 += 1
                rdi_9 += 1
            while (rdi_9 s< rsi_2)
        
        result = sub_140842380(*(arg1 + 0x6f8), *(arg1 + 0x700), var_198, &var_158)

uint64_t rcx_39 = var_190

if (rcx_39 != 0)
    result = sub_140a74f90(rcx_39)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
