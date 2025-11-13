// 函数: sub_141803cc0
// 地址: 0x141803cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int16_t* rbx = nullptr
int16_t** result = arg2
void* var_260 = nullptr
int32_t i_4 = 0
int64_t var_230 = 0
int64_t var_228 = 0
int64_t var_248 = 0
int64_t var_240 = 0
int16_t* var_298 = nullptr
int32_t var_290 = 0
sub_1405947f0(&var_298, 2)
int32_t rax_2 = var_290 + 2
var_290 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_298)

int16_t* rdi = var_298
UnDecorator::getReferenceType(rdi, &data_142e5f8f8, 4)
char rax_3 = sub_14060a620(arg1 + 0x68, &var_298, &var_230, &var_248, 1, 0)

if (rdi != 0)
    sub_140a74f90(rdi)

if (rax_3 == 0)
    goto label_141804096

int64_t rdi_1 = sx.q(sub_140a2ccb0(&var_248, &var_260, U"&", 1))
int16_t* var_288 = nullptr
int32_t var_280_1 = 0
sub_1405947f0(&var_288, 2)
int32_t rsi_2 = var_280_1 + 2
var_280_1 = rsi_2

if (rsi_2 s> 0)
    sub_140594770(&var_288)
    rsi_2 = var_280_1

int16_t* r12_1 = var_288
UnDecorator::getReferenceType(r12_1, &data_142e1462c, 4)
void* rbx_1

if (rdi_1.d s<= 0)
label_141804089:
    
    if (r12_1 == 0)
        goto label_141804096
    
    sub_140a74f90(r12_1)
label_141804096:
    int64_t rcx_21 = var_248
    *result = nullptr
    result[1] = 0
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_230
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int32_t i_2 = i_4
    rbx_1 = var_260
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_23 = *rbx_1
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            rbx_1 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = var_260
else
    int64_t var_250 = 0
    int64_t rdx_4 = 0
    int64_t var_268_1 = 0
    int16_t* rsi_4
    int16_t* const rdi_5
    int16_t* r12_2
    int32_t r14_2
    
    while (true)
        int64_t* r14_1 = var_260 + rdx_4
        int16_t* const rdx_5 = &data_142d40450
        
        if (rsi_2 != 0)
            rdx_5 = r12_1
        
        int32_t rax_5 = sub_140a23cf0(r14_1, rdx_5, 1, 0, 0xffffffff)
        
        if (rax_5 s>= 0)
            int32_t rax_6 = r14_1[1].d
            int16_t* rsi_3
            
            if (rax_6 == 0)
                rsi_3 = &data_142d40450
            else
                rsi_3 = *r14_1
            
            int16_t* var_278 = nullptr
            int32_t rdi_2 = rax_6 - 1
            int64_t var_270_1 = 0
            
            if (rax_6 == 0)
                rdi_2 = 0
            
            r12_2 = nullptr
            int32_t r13_1 = 0
            int32_t rax_7 = 0
            
            if (rax_5 s< rdi_2)
                rdi_2 = rax_5
            
            if (rsi_3 != 0 && *rsi_3 != 0 && rdi_2 s> 0)
                if (rdi_2 + 1 s> 0)
                    sub_1405947f0(&var_278, rdi_2 + 1)
                    rax_7 = var_270_1:4.d
                    r13_1 = var_270_1.d
                    r12_2 = var_278
                
                r13_1 += rdi_2 + 1
                var_270_1.d = r13_1
                
                if (r13_1 s> rax_7)
                    sub_140594770(&var_278)
                    r13_1 = var_270_1.d
                    r12_2 = var_278
                
                UnDecorator::getReferenceType(r12_2, rsi_3, rdi_2 * 2)
                r12_2[sx.q(r13_1) - 1] = 0
            
            var_278 = nullptr
            int64_t var_270_2 = 0
            int32_t rax_10
            
            if (var_280_1 == 0)
                rax_10 = 0
            else
                rax_10 = var_280_1 - 1
            
            int32_t r8_3 = r14_1[1].d
            int32_t rdi_3 = r8_3 - 1
            
            if (r8_3 == 0)
                rdi_3 = 0
            
            int32_t rax_11 = rax_10 + rax_5
            int32_t rcx_13
            
            if (rax_10 + rax_5 s>= 0)
                rcx_13 = rdi_3
                
                if (rax_11 s< rdi_3)
                    rcx_13 = rax_11
            else
                rcx_13 = 0
            
            int64_t r9_2 = sx.q(rcx_13)
            
            if (sx.q(rax_11) + 0x7fffffff s< r9_2)
                rdi_3 = rcx_13
            else if (sx.q(rax_11) + 0x7fffffff s< sx.q(rdi_3))
                rdi_3 = rax_11 + 0x7fffffff
            
            int16_t* const rax_13
            
            if (r8_3 == 0)
                rax_13 = &data_142d40450
            else
                rax_13 = *r14_1
            
            int16_t* r15_2 = &rax_13[r9_2]
            var_298 = nullptr
            int32_t rdi_4 = rdi_3 - rcx_13
            int64_t var_290_1 = 0
            rsi_4 = nullptr
            r14_2 = 0
            int32_t rax_14 = 0
            
            if (r15_2 != 0 && *r15_2 != 0 && rdi_4 s> 0)
                if (rdi_4 + 1 s> 0)
                    sub_1405947f0(&var_298, rdi_4 + 1)
                    rax_14 = var_290_1:4.d
                    r14_2 = var_290_1.d
                    rsi_4 = var_298
                
                r14_2 += rdi_4 + 1
                var_290_1.d = r14_2
                
                if (r14_2 s> rax_14)
                    sub_140594770(&var_298)
                    r14_2 = var_290_1.d
                    rsi_4 = var_298
                
                UnDecorator::getReferenceType(rsi_4, r15_2, rdi_4 * 2)
                rsi_4[sx.q(r14_2) - 1] = 0
            
            rdi_5 = &data_142d40450
            var_298 = nullptr
            int64_t var_290_2 = 0
            int16_t* rdx_14
            
            if (arg3[1].d == 0)
                rdx_14 = &data_142d40450
            else
                rdx_14 = *arg3
            
            int16_t* const rcx_17 = &data_142d40450
            
            if (r13_1 != 0)
                rcx_17 = r12_2
            
            if (sub_140a54510(rcx_17, rdx_14) == 0)
                break
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            r12_1 = var_288
            rsi_2 = var_280_1
        
        int64_t rax_19 = var_250 + 1
        rdx_4 = var_268_1 + 0x10
        var_250 = rax_19
        var_268_1 = rdx_4
        
        if (rax_19 s>= rdi_1)
            result = arg2
            goto label_141804089
    
    if (r14_2 != 0)
        rdi_5 = rsi_4
    
    void var_208
    sub_1408f2b40(&var_208, rdi_5)
    var_250.d = 0
    char* var_180
    int32_t var_178
    char* rax_21 = sub_142c51f70(*(arg1 + 0x58), var_180, var_178, &var_250)
    void var_168
    sub_1405eb940(&var_168, rax_21)
    int32_t rdi_6 = 0
    var_298 = nullptr
    int32_t r15_3 = 0
    int64_t var_290_3 = 0
    int16_t* var_60
    
    if (var_60 != 0 && *var_60 != 0)
        int64_t rax_22 = -1
        
        do
            rax_22 += 1
        while (var_60[rax_22] != 0)
        
        uint64_t rax_23 = zx.q(rax_22.d + 1)
        uint64_t var_268_2 = rax_23
        
        if (rax_23.d s> 0)
            sub_1405947f0(&var_298, rax_23.d)
            rax_23 = var_268_2
            r15_3 = var_290_3:4.d
            rdi_6 = var_290_3.d
            rbx = var_298
        
        rdi_6 += rax_23.d
        var_290_3.d = rdi_6
        
        if (rdi_6 s> r15_3)
            sub_140594770(&var_298)
            rax_23 = var_268_2
            r15_3 = var_290_3:4.d
            rdi_6 = var_290_3.d
            rbx = var_298
        
        UnDecorator::getReferenceType(rbx, var_60, rax_23.d * 2)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    sub_142c520b0(rax_21)
    result = arg2
    *result = rbx
    result[1].d = rdi_6
    *(result + 0xc) = r15_3
    int64_t var_188
    
    if (var_188 != 0)
        sub_140a74f90(var_188)
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    int16_t* rcx_39 = var_288
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t rcx_40 = var_248
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    int64_t rcx_41 = var_230
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)
    
    int32_t i_3 = i_4
    rbx_1 = var_260
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_42 = *rbx_1
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rbx_1 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_1 = var_260

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_2c8)
return result
