// 函数: sub_140752b30
// 地址: 0x140752b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rax_2 = sub_142452380()
void* var_98 = rax_2
int32_t var_90 = 5
char var_38 = 0
void* var_88
sub_1405ab0f0(&var_88, arg1, rax_2)
char var_38_1 = 1
uint64_t result = sub_1406277a0(&var_90)
int64_t var_80
char i
int64_t var_58

if (i == 0)
    void* var_60
    void* rdi_1 = var_60
    
    do
        void* rsi_1 = nullptr
        int64_t* var_a8 = nullptr
        int32_t var_a0_1 = 0
        void* rax_3 = sub_14086a680()
        
        if (rax_3 != 0)
            void* rax_4 = sub_142459c10()
            
            if (rax_4 != 0)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rax_3 + 0x38)
                        && *(*(rax_3 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    rsi_1 = rax_3
        
        int64_t* r8_1 = &var_a8
        
        if (rsi_1 != sub_142459c10())
            sub_1406f54d0(rdi_1, rax_3, r8_1)
        else
            sub_1406f5170(rdi_1, rax_3, r8_1)
        
        int64_t* r14_1 = var_a8
        void* r15_1 = &r14_1[sx.q(var_a0_1)]
        
        if (r14_1 != r15_1)
            do
                void* rax_9 = *r14_1
                
                if (rax_9 != 0)
                    void* rcx_4 = *(rax_9 + 0x528)
                    
                    if (*(rax_9 + 0x408) != 0 && rcx_4 != 0)
                        int32_t rax_11
                        rax_11.b = *(rcx_4 + 0x6e8) - 3 u<= 1
                        
                        if (rax_11.b == 0)
                            void* j = *(rcx_4 + 0xa0)
                            
                            for (void* rsi_4 = (sx.q(*(rcx_4 + 0xa8)) << 4) + j; j != rsi_4; 
                                    j += 0x10)
                                int64_t* rbx_2 = *(j + 8)
                                
                                if (rbx_2 != 0)
                                    rbx_2[1].d += 1
                                    rbx_2[1].d -= 1
                                    
                                    if (rbx_2[1].d == 1)
                                        (**rbx_2)(rbx_2)
                                        int32_t rax_14 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (rax_14 == 1)
                                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                r14_1 = &r14_1[1]
            while (r14_1 != r15_1)
            
            r14_1 = var_a8
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int32_t var_50
        int32_t r8_2 = var_50
        int32_t var_78
        int32_t rdx_3 = var_78
        void* r13_1 = var_88
        int32_t var_70
        int32_t r14_3 = var_70 + 1
        result = zx.q(r8_2 + rdx_3)
        
        if (r14_3 s>= result.d)
        label_140752ea6:
            int64_t var_60_1 = 0
            char var_6c = 1
            break
        
        void** r12_1 = sx.q(r14_3) << 3
        
        while (true)
            if (r14_3 s>= rdx_3)
                rdi_1 = *(var_58 + (sx.q(r14_3 - rdx_3) << 3))
            else
                rdi_1 = *(r12_1 + var_80)
            
            int32_t var_68 = var_68 + 1
            
            if (rdi_1 != 0)
                void* rax_21 = sub_141dc9840(rdi_1)
                
                if (rax_21 != 0)
                    void* const rax_28
                    
                    if ((var_90.b & 1) != 0)
                        int32_t rax_22 = *(rdi_1 + 0xc)
                        
                        if (rax_22 s>= data_143e1d9b4)
                            rax_28 = nullptr
                        else
                            int16_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(rax_22)
                            uint32_t rdx_5 = zx.d(temp1_1)
                            int32_t rax_24 = temp2_1 + rdx_5
                            rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_24.w) - rdx_5) * 0x18
                    
                    if ((var_90.b & 1) == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_15 = var_90
                        
                        if (((rcx_15 u>> 1).b & 1) == 0)
                            goto label_140752dd0
                        
                        uint64_t rax_32 = sub_1405949a0()
                        
                        if (rax_32.b != 0)
                            rcx_15 = var_90
                        label_140752dd0:
                            
                            if (((rcx_15 u>> 2).b & 1) == 0)
                            label_140752e4c:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_21)
                                
                                if (result == r13_1)
                                    if (rax_21 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_33 = sub_1425bd0d0()
                                    void* rdx_7 = *(rdi_1 + 0x10)
                                    result = sx.q(*(rax_33 + 0x38))
                                    
                                    if (result.d s> *(rdx_7 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_7 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_33 + 0x30)
                                        break
                            else
                                if ((*(rax_21 + 0x1f4) & 0x20) == 0 || (*(rax_21 + 0x1f6) & 8) != 0)
                                    rax_32 = zx.q(*(rax_21 + 0x1f5))
                                
                                if (((*(rax_21 + 0x1f4) & 0x20) != 0
                                        && (*(rax_21 + 0x1f6) & 8) == 0) || (rax_32.b & 0x40) != 0
                                        || rax_32.b s< 0)
                                    r15_1.b = 1
                                else
                                    r15_1.b = 0
                                
                                void* rcx_17 = *(rax_21 + 0xb8)
                                char* rsi_5 = *(rax_21 + 0x248)
                                
                                if (rcx_17 != 0)
                                    rax_32 = sub_1424359b0(rcx_17)
                                
                                if (rcx_17 == 0 || rax_32 == 0 || rsi_5 == rax_32)
                                    rcx_17.b = 1
                                else
                                    rcx_17.b = 0
                                
                                if (rsi_5 == 0 || *rsi_5 == 2)
                                    rax_32.b = 1
                                else
                                    rax_32.b = 0
                                
                                if (rcx_17.b != 0 || rax_32.b != 0)
                                    rax_32.b = 1
                                
                                if (r15_1.b != 0 && rax_32.b != 0)
                                    goto label_140752e4c
                
                r8_2 = var_50
                rdx_3 = var_78
            
            r14_3 += 1
            result = zx.q(r8_2 + rdx_3)
            r12_1 = &r12_1[1]
            
            if (r14_3 s>= result.d)
                goto label_140752ea6
        
        void* var_60_2 = rdi_1
        var_70 = r14_3
    while (i == 0)

if (var_38_1 != 0)
    char var_38_2 = 0
    int64_t var_40
    result = sub_142441560(var_88, var_40)
    
    if (var_58 != 0)
        result = sub_140a74f90(var_58)
    
    if (var_80 != 0)
        result = sub_140a74f90(var_80)

__security_check_cookie(rax_1 ^ &var_c8)
return result
