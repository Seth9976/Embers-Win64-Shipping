// 函数: sub_14203aa60
// 地址: 0x14203aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r14 = arg1
int64_t* var_a0
sub_1424365b0((*(*arg1 + 0x150))(), &var_a0)
int32_t var_98
int32_t rax_4 = var_98

while (true)
    int64_t* rdx_1 = var_a0
    int64_t rcx
    
    if (rax_4 s< 0 || rax_4 s>= rdx_1[1].d)
        rcx.b = 0
    else
        rcx.b = 1
    
    if (rcx.b == 0)
        break
    
    int64_t* rax_6 = sub_140d3c6e0(*rdx_1 + (sx.q(rax_4) << 3))
    
    if (rax_6 != 0)
        void* rax_7 = sub_14256a090()
        void* rcx_3 = rax_6[2]
        int64_t rdx_2 = sx.q(*(rax_7 + 0x38))
        
        if (rdx_2.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_2 << 3)) == rax_7 + 0x30)
            sub_142569650(rax_6, rdx_2)
    
    (*(*rax_6 + 0x5d0))(rax_6)
    rax_4 = var_98 + 1
    var_98 = rax_4

int64_t rax_12 = (*(*r14 + 0x150))(r14)
void* rax_13 = sub_142452380()
int32_t var_90 = 5
char var_38 = 0
void* var_88
sub_1405ab0f0(&var_88, rax_12, rax_13)
char var_38_1 = 1
sub_1405b0c60(&var_90)
int64_t var_80
char i
int64_t var_58

if (i == 0)
    int64_t* var_60
    int64_t* rdi_1 = var_60
    int64_t r15
    int64_t var_28_1 = r15
    
    do
        if (rdi_1 != 0)
            int32_t rax_14 = *(rdi_1 + 0xc)
            void* const rax_20
            
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
            
            if (((*(rax_20 + 8) u>> 0x1d).b & 1) == 0 && rdi_1 != r14)
                void* rax_23 = sub_142497110()
                void* rcx_14 = rdi_1[2]
                int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                
                if ((rax_24.d s> *(rcx_14 + 0x38)
                        || *(*(rcx_14 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                        && sub_1424b2c50(r14, rdi_1) != 0)
                    (*(*rdi_1 + 0x5d0))(rdi_1)
        
        int32_t var_50
        int32_t r8_3 = var_50
        int32_t var_78
        int32_t rdx_9 = var_78
        void* r13_1 = var_88
        int32_t var_70
        int32_t r14_2 = var_70 + 1
        
        if (r14_2 s>= r8_3 + rdx_9)
        label_14203adb8:
            r14 = arg1
            int64_t var_60_1 = 0
            char var_6c = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_9)
                rdi_1 = *(var_58 + (sx.q(r14_2 - rdx_9) << 3))
            else
                rdi_1 = *(r12_1 + var_80)
            
            int32_t var_68 = var_68 + 1
            
            if (rdi_1 != 0)
                void* rax_34 = sub_141dc9840(rdi_1)
                
                if (rax_34 != 0)
                    void* const rax_41
                    
                    if ((var_90.b & 1) != 0)
                        int32_t rax_35 = *(rdi_1 + 0xc)
                        
                        if (rax_35 s>= data_143e1d9b4)
                            rax_41 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_35)
                            uint32_t rdx_11 = zx.d(temp2_1)
                            int32_t rax_37 = temp3_1 + rdx_11
                            rax_41 = *(data_143e1d9a0 + (sx.q(rax_37 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_37.w) - rdx_11) * 0x18
                    
                    if ((var_90.b & 1) == 0 || ((*(rax_41 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_24 = var_90
                        
                        if (((rcx_24 u>> 1).b & 1) == 0)
                            goto label_14203ace2
                        
                        uint64_t rax_45 = sub_1405949a0()
                        
                        if (rax_45.b != 0)
                            rcx_24 = var_90
                        label_14203ace2:
                            
                            if (((rcx_24 u>> 2).b & 1) == 0)
                            label_14203ad5e:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_34) == r13_1)
                                    if (rax_34 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_47 = sub_1425bd0d0()
                                    void* rdx_13 = rdi_1[2]
                                    int64_t rax_48 = sx.q(*(rax_47 + 0x38))
                                    
                                    if (rax_48.d s> *(rdx_13 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_13 + 0x30) + (rax_48 << 3)) != rax_47 + 0x30)
                                        break
                            else
                                if ((*(rax_34 + 0x1f4) & 0x20) == 0 || (*(rax_34 + 0x1f6) & 8) != 0)
                                    rax_45 = zx.q(*(rax_34 + 0x1f5))
                                
                                if (((*(rax_34 + 0x1f4) & 0x20) != 0
                                        && (*(rax_34 + 0x1f6) & 8) == 0) || (rax_45.b & 0x40) != 0
                                        || rax_45.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_26 = *(rax_34 + 0xb8)
                                char* rsi_1 = *(rax_34 + 0x248)
                                
                                if (rcx_26 != 0)
                                    rax_45 = sub_1424359b0(rcx_26)
                                
                                if (rcx_26 == 0 || rax_45 == 0 || rsi_1 == rax_45)
                                    rcx_26.b = 1
                                else
                                    rcx_26.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_45.b = 1
                                else
                                    rax_45.b = 0
                                
                                if (rcx_26.b != 0 || rax_45.b != 0)
                                    rax_45.b = 1
                                
                                if (r15.b != 0 && rax_45.b != 0)
                                    goto label_14203ad5e
                
                r8_3 = var_50
                rdx_9 = var_78
            
            r14_2 += 1
            r12_1 += 8
            
            if (r14_2 s>= r8_3 + rdx_9)
                goto label_14203adb8
        
        var_70 = r14_2
        r14 = arg1
        int64_t* var_60_2 = rdi_1
    while (i == 0)

if (var_38_1 != 0)
    char var_38_2 = 0
    int64_t var_40
    sub_142441560(var_88, var_40)
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    if (var_80 != 0)
        sub_140a74f90(var_80)

(*(*r14 + 0x5d0))(r14)
int64_t* result = sub_142436b40((*(*r14 + 0x150))(r14), nullptr)

if (result != 0)
    result = sub_14252e7a0(result)

__security_check_cookie(rax_1 ^ &var_c8)
return result
