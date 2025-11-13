// 函数: sub_14208cf70
// 地址: 0x14208cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r13 = arg2
int64_t* rdi = arg1
int64_t rax_3 = (*(*arg1 + 0x150))()
int64_t r14 = rax_3
void* rax_4 = sub_14255d000()
void* rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    void* rax_5 = sub_14255d000()
    
    if (rax_5 == 0)
        rbx = nullptr
    else
        int64_t rcx = sx.q(*(rax_5 + 0x38))
        
        if (rcx.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rcx << 3)) != rax_5 + 0x30)
            rbx = nullptr

int32_t var_a8 = 5
char var_50 = 0
void* var_a0
sub_1405ab0f0(&var_a0, r14, rbx)
char var_50_1 = 1
int32_t zmm0 = sub_1405b0c60(&var_a8)
int64_t var_98
char i
int64_t var_70

if (i == 0)
    int64_t* var_78
    int64_t* rdi_1 = var_78
    int64_t r15
    int64_t var_38_1 = r15
    
    do
        sub_14207b650(rdi_1, r13, r14, zmm0)
        int32_t var_68
        int32_t r8_2 = var_68
        int32_t var_90
        int32_t rdx_3 = var_90
        void* r13_1 = var_a0
        int32_t var_88
        int32_t r14_2 = var_88 + 1
        
        if (r14_2 s>= r8_2 + rdx_3)
        label_14208d1f9:
            r14 = rax_3
            r13 = arg2
            int64_t var_78_1 = 0
            char var_84 = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_3)
                rdi_1 = *(var_70 + (sx.q(r14_2 - rdx_3) << 3))
            else
                rdi_1 = *(r12_1 + var_98)
            
            int32_t var_80 = var_80 + 1
            
            if (rdi_1 != 0)
                void* rax_13
                rax_13, zmm0 = sub_141dc9840(rdi_1)
                
                if (rax_13 != 0)
                    void* const rax_20
                    
                    if ((var_a8.b & 1) != 0)
                        int32_t rax_14 = *(rdi_1 + 0xc)
                        
                        if (rax_14 s>= data_143e1d9b4)
                            rax_20 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_14)
                            uint32_t rdx_5 = zx.d(temp0_1)
                            int32_t rax_16 = temp1_1 + rdx_5
                            rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_16.w) - rdx_5) * 0x18
                    
                    if ((var_a8.b & 1) == 0 || ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_11 = var_a8
                        
                        if (((rcx_11 u>> 1).b & 1) == 0)
                            goto label_14208d123
                        
                        uint64_t rax_24 = sub_1405949a0()
                        
                        if (rax_24.b != 0)
                            rcx_11 = var_a8
                        label_14208d123:
                            
                            if (((rcx_11 u>> 2).b & 1) == 0)
                            label_14208d19f:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_13) == r13_1)
                                    if (rax_13 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_26
                                    rax_26, zmm0 = sub_1425bd0d0()
                                    void* rdx_7 = rdi_1[2]
                                    int64_t rax_27 = sx.q(*(rax_26 + 0x38))
                                    
                                    if (rax_27.d s> *(rdx_7 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_7 + 0x30) + (rax_27 << 3)) != rax_26 + 0x30)
                                        break
                            else
                                if ((*(rax_13 + 0x1f4) & 0x20) == 0 || (*(rax_13 + 0x1f6) & 8) != 0)
                                    rax_24 = zx.q(*(rax_13 + 0x1f5))
                                
                                if (((*(rax_13 + 0x1f4) & 0x20) != 0
                                        && (*(rax_13 + 0x1f6) & 8) == 0) || (rax_24.b & 0x40) != 0
                                        || rax_24.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_13 = *(rax_13 + 0xb8)
                                char* rsi_1 = *(rax_13 + 0x248)
                                
                                if (rcx_13 != 0)
                                    rax_24 = sub_1424359b0(rcx_13)
                                
                                if (rcx_13 == 0 || rax_24 == 0 || rsi_1 == rax_24)
                                    rcx_13.b = 1
                                else
                                    rcx_13.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_24.b = 1
                                else
                                    rax_24.b = 0
                                
                                if (rcx_13.b != 0 || rax_24.b != 0)
                                    rax_24.b = 1
                                
                                if (r15.b != 0 && rax_24.b != 0)
                                    goto label_14208d19f
                
                r8_2 = var_68
                rdx_3 = var_90
            
            r14_2 += 1
            r12_1 += 8
            
            if (r14_2 s>= r8_2 + rdx_3)
                goto label_14208d1f9
        
        r13 = arg2
        var_88 = r14_2
        r14 = rax_3
        int64_t* var_78_2 = rdi_1
    while (i == 0)
    
    rdi = arg1

if (var_50_1 != 0)
    char var_50_2 = 0
    int64_t var_58
    sub_142441560(var_a0, var_58)
    
    if (var_70 != 0)
        sub_140a74f90(var_70)
    
    if (var_98 != 0)
        sub_140a74f90(var_98)

int64_t var_d8

if ((*(*rdi + 0x680))(rdi, &data_143f475c0) != 0)
    var_d8 = 0
    int32_t var_d0_1 = 0
    int32_t var_c8_1 = 0xffffffff
    int32_t zmm0_1 = sub_140d3cc80(sub_142591550(), &var_d8, 1, 0x10, 0)
    int32_t r8_6 = var_d0_1
    int64_t rdx_10 = var_d8
    int32_t rcx_21 = var_c8_1 + 1
    int32_t var_c8_2 = rcx_21
    uint64_t rax_33
    
    if (rcx_21 s< r8_6)
        while (*(rdx_10 + (sx.q(rcx_21) << 3)) == 0)
            rax_33 = zx.q(rcx_21 + 1)
            var_c8_2 = rax_33.d
            rcx_21 = rax_33.d
            
            if (rax_33.d s>= r8_6)
                break
    
    while (true)
        if (rcx_21 s< 0 || rcx_21 s>= r8_6)
            rax_33.b = 0
        else
            rax_33.b = 1
        
        if (rax_33.b == 0)
            break
        
        int64_t rax_35 = sub_141f3b9f0(*(rdx_10 + (sx.q(rcx_21) << 3)))
        rdx_10 = var_d8
        
        if (rax_35 != 0)
            void* rcx_23 = *(rdx_10 + (sx.q(var_c8_2) << 3))
            
            if (rcx_23 != 0)
                int64_t* rcx_24 = *(rcx_23 + 0xa0)
                
                if (rcx_24 != 0)
                    zmm0_1 = sub_14207b650(rcx_24, r13, r14, zmm0_1)
                    rdx_10 = var_d8
        
        r8_6 = var_d0_1
        rcx_21 = var_c8_2 + 1
        var_c8_2 = rcx_21
        
        if (rcx_21 s< r8_6)
            while (*(rdx_10 + (sx.q(rcx_21) << 3)) == 0)
                rax_33 = zx.q(rcx_21 + 1)
                var_c8_2 = rax_33.d
                rcx_21 = rax_33.d
                
                if (rax_33.d s>= r8_6)
                    break
    
    if (rdx_10 != 0)
        sub_140a74f90(rdx_10)

uint64_t result = (*(*rdi + 0x680))(rdi, &data_143f475c8)

if (result.b != 0)
    var_d8 = 0
    int32_t var_d0_2 = 0
    int32_t var_c8_3 = 0xffffffff
    int32_t zmm0_2 = sub_140d3cc80(sub_14254ab60(), &var_d8, 1, 0x10, 0)
    int32_t rdx_13 = var_d0_2
    int64_t r8_9 = var_d8
    int32_t rcx_28 = var_c8_3 + 1
    int32_t var_c8_4 = rcx_28
    
    if (rcx_28 s< rdx_13)
        while (*(r8_9 + (sx.q(rcx_28) << 3)) == 0)
            result = zx.q(rcx_28 + 1)
            var_c8_4 = result.d
            rcx_28 = result.d
            
            if (result.d s>= rdx_13)
                break
    
    while (true)
        if (rcx_28 s< 0 || rcx_28 s>= rdx_13)
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            break
        
        void* r9_1 = *(r8_9 + (sx.q(rcx_28) << 3))
        
        if (r9_1 != 0)
            int64_t* rax_40 = *(r9_1 + 0xa0)
            
            if (rax_40 != 0)
                zmm0_2 = sub_14207b650(rax_40, r13, r14, zmm0_2)
                rcx_28 = var_c8_4
                rdx_13 = var_d0_2
                r8_9 = var_d8
        
        result = zx.q(rcx_28 + 1)
        var_c8_4 = result.d
        rcx_28 = result.d
        
        if (result.d s< rdx_13)
            while (*(r8_9 + (sx.q(rcx_28) << 3)) == 0)
                result = zx.q(rcx_28 + 1)
                var_c8_4 = result.d
                rcx_28 = result.d
                
                if (result.d s>= rdx_13)
                    break
    
    if (r8_9 != 0)
        result = sub_140a74f90(r8_9)

__security_check_cookie(rax_1 ^ &var_108)
return result
