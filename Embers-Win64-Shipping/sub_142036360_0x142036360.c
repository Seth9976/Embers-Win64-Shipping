// 函数: sub_142036360
// 地址: 0x142036360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* r14 = arg1
sub_141dd1570(arg1)
void* rax_3 = (*(*r14 + 0x150))(r14)
sub_142444b60(rax_3, r14)
void* rax_4 = sub_141dcc7f0(r14)
int32_t var_a8
int32_t var_a0
int64_t var_98
int32_t var_90
int32_t var_88
int32_t* var_78
int32_t var_68

if (sub_14243ade0(rax_3) != 0 && r14[0x1e].b == 3)
    int64_t rdx_1 = *r14
    (*(rdx_1 + 0x6a0))(r14, rdx_1)
    int128_t zmm6 = *(r14 + 0x254)
    
    if (not(zmm6.d f<= 0f))
        void*** rax_6 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_6 != 0)
            *rax_6 = &data_142d57800
            sub_140d3a3a0(&rax_6[1], r14)
            rax_6[2] = sub_14201b404
            rax_6[4] = sub_140a387b0()
            *rax_6 = &data_142d57858
        
        var_a8.q = 0
        var_a0 = 0
        
        if (rax_6 != 0)
            (*rax_6)[8](rax_6, &var_a8)
        
        sub_140d3a3a0(&var_98, nullptr)
        var_90.q = 0
        var_88.q = 0
        var_78 = nullptr
        sub_1423e6200(rax_4, &r14[0x4b], &var_a8, zmm6, 1, 0xbf800000)
        
        if (var_88.q != 0)
            int32_t* rcx_9 = &var_68
            
            if (var_78 != 0)
                rcx_9 = var_78
            
            (*(*rcx_9 + 0x10))(rcx_9)
        
        sub_140745b20(&var_a8)
        
        if (rax_6 != 0)
            (*rax_6)[7](rax_6, 0)
            int64_t rax_12 = sub_140a84c80(rax_6, 0, 0)
            
            if (rax_12 != 0)
                sub_140a74f90(rax_12)

void* rax_13 = sub_142574490()
void* rbx_2 = rax_13

if (rax_13 == 0)
    rbx_2 = nullptr
else
    void* rax_14 = sub_142574490()
    
    if (rax_14 == 0)
        rbx_2 = nullptr
    else
        int64_t rax_15 = sx.q(*(rax_14 + 0x38))
        
        if (rax_15.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
            rbx_2 = nullptr

var_a8 = 5
char var_50 = 0
sub_1405ab0f0(&var_a0, rax_3, rbx_2)
char var_50_1 = 1
uint64_t result = sub_1405b0c60(&var_a8)
char var_84
int64_t var_70

if (var_84 == 0)
    int32_t* rdi_1 = var_78
    int64_t r15
    int64_t var_28_1 = r15
    
    while (true)
        (*(*r14 + 0x670))(r14, rdi_1)
        int32_t r8_3 = var_68
        int32_t rdx_8 = var_90
        void* r13_1 = var_a0.q
        int32_t r14_2 = var_88 + 1
        result = zx.q(r8_3 + rdx_8)
        
        if (r14_2 s>= result.d)
        label_142036761:
            int64_t var_78_1 = 0
            char var_84_1 = 1
            break
        
        int32_t** r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_8)
                rdi_1 = *(var_70 + (sx.q(r14_2 - rdx_8) << 3))
            else
                rdi_1 = *(r12_1 + var_98)
            
            int32_t var_80 = var_80 + 1
            
            if (rdi_1 != 0)
                void* rax_23 = sub_141dc9840(rdi_1)
                
                if (rax_23 != 0)
                    void* const rax_30
                    
                    if ((var_a8.b & 1) != 0)
                        int32_t rax_24 = rdi_1[3]
                        
                        if (rax_24 s>= data_143e1d9b4)
                            rax_30 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_24)
                            uint32_t rdx_10 = zx.d(temp0_1)
                            int32_t rax_26 = temp1_1 + rdx_10
                            rax_30 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_26.w) - rdx_10) * 0x18
                    
                    if ((var_a8.b & 1) == 0 || ((*(rax_30 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_25 = var_a8
                        
                        if (((rcx_25 u>> 1).b & 1) == 0)
                            goto label_14203668b
                        
                        uint64_t rax_34 = sub_1405949a0()
                        
                        if (rax_34.b != 0)
                            rcx_25 = var_a8
                        label_14203668b:
                            
                            if (((rcx_25 u>> 2).b & 1) == 0)
                            label_142036707:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_23)
                                
                                if (result == r13_1)
                                    if (rax_23 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_35 = sub_1425bd0d0()
                                    void* rdx_12 = *(rdi_1 + 0x10)
                                    result = sx.q(*(rax_35 + 0x38))
                                    
                                    if (result.d s> *(rdx_12 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_12 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_35 + 0x30)
                                        break
                            else
                                if ((*(rax_23 + 0x1f4) & 0x20) == 0 || (*(rax_23 + 0x1f6) & 8) != 0)
                                    rax_34 = zx.q(*(rax_23 + 0x1f5))
                                
                                if (((*(rax_23 + 0x1f4) & 0x20) != 0
                                        && (*(rax_23 + 0x1f6) & 8) == 0) || (rax_34.b & 0x40) != 0
                                        || rax_34.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_27 = *(rax_23 + 0xb8)
                                char* rsi_1 = *(rax_23 + 0x248)
                                
                                if (rcx_27 != 0)
                                    rax_34 = sub_1424359b0(rcx_27)
                                
                                if (rcx_27 == 0 || rax_34 == 0 || rsi_1 == rax_34)
                                    rcx_27.b = 1
                                else
                                    rcx_27.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_34.b = 1
                                else
                                    rax_34.b = 0
                                
                                if (rcx_27.b != 0 || rax_34.b != 0)
                                    rax_34.b = 1
                                
                                if (r15.b != 0 && rax_34.b != 0)
                                    goto label_142036707
                
                r8_3 = var_68
                rdx_8 = var_90
            
            r14_2 += 1
            result = zx.q(r8_3 + rdx_8)
            r12_1 = &r12_1[1]
            
            if (r14_2 s>= result.d)
                goto label_142036761
        
        int32_t* var_78_2 = rdi_1
        var_88 = r14_2
        
        if (var_84 != 0)
            break
        
        r14 = arg1

if (var_50_1 != 0)
    char var_50_2 = 0
    int64_t var_58
    result = sub_142441560(var_a0.q, var_58)
    
    if (var_70 != 0)
        result = sub_140a74f90(var_70)
    
    int64_t rcx_31 = var_98
    
    if (rcx_31 != 0)
        result = sub_140a74f90(rcx_31)

__security_check_cookie(rax_1 ^ &var_e8)
return result
