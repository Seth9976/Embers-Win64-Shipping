// 函数: ?fMapRti@TM@@QEAAHGAEAK_N@Z
// 地址: 0x1419e1c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* var_c0 = arg2
int64_t r12 = arg3
int32_t var_c8 = 0
void* const rsi = arg2
int32_t r13 = 0
void* rax_2
int64_t rax_3
void* rdx

if (arg2 != 0)
    rax_2 = sub_140d41340()
    rdx = *(rsi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg2 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rsi = nullptr
    var_c0 = nullptr

int64_t rax_5 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_5 != 0)
    char var_a0
    sub_1419de390(&var_a0, rax_5, sub_1419e88d0(), 5)
    void* var_98
    int64_t var_90
    char var_7c
    int64_t var_68
    
    if (var_7c == 0)
        void* var_70
        void* rdi_1 = var_70
        
        while (true)
            int32_t rax_7 = *(rdi_1 + 0xc)
            void* const rax_13
            
            if (rax_7 s>= data_143e1d9b4)
                rax_13 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_7)
                uint32_t rdx_4 = zx.d(temp0_1)
                int32_t rax_9 = temp1_1 + rdx_4
                rax_13 = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_9.w) - rdx_4) * 0x18
            
            if (((*(rax_13 + 8) u>> 0x1d).b & 1) == 0)
                int64_t* var_b8 = nullptr
                int32_t var_b0_1 = 0
                sub_1419e24e0(rdi_1, rsi, &var_b8)
                int64_t* r15_2 = var_b8
                int64_t* rsi_1 = r15_2
                void* rcx_8 = &r15_2[sx.q(var_b0_1)]
                int64_t rbx_2 = 0
                uint64_t r14_4 = (rcx_8 - r15_2 + 7) u>> 3
                
                if (r15_2 u> rcx_8)
                    r14_4 = 0
                
                if (r14_4 != 0)
                    do
                        int32_t var_c4
                        sub_140865c40(rdi_1 + 0x220, &var_c4, *rsi_1)
                        int64_t rax_17 = sx.q(var_c4)
                        int32_t rax_22
                        
                        if (rax_17.d == 0xffffffff)
                            rax_22 = 0
                        else
                            void* rax_19 = *(rdi_1 + 0x220) + rax_17 * 0x18
                            
                            if (rax_19 == 0 || rax_19 == -8)
                                rax_22 = 0
                            else
                                void* rcx_10 = *(rax_19 + 8)
                                
                                if (rcx_10 == 0)
                                    rax_22 = 0
                                else
                                    int64_t* rcx_11 = *(rcx_10 + 8)
                                    
                                    if (rcx_11 == 0)
                                        rax_22 = 0
                                    else
                                        rax_22 = (*(*rcx_11 + 0x20))(rcx_11, r12)
                        
                        r13 += rax_22
                        rsi_1 = &rsi_1[1]
                        rbx_2 += 1
                    while (rbx_2 != r14_4)
                    
                    var_c8 = r13
                
                if (r15_2 != 0)
                    sub_140a74f90(r15_2)
            
            int32_t var_60
            int32_t r8_5 = var_60
            int32_t var_88
            int32_t rdx_10 = var_88
            int32_t var_80
            int32_t r14_6 = var_80 + 1
            
            if (r14_6 s>= r8_5 + rdx_10)
            label_1419e201e:
                r13 = var_c8
                int64_t var_70_2 = 0
                char var_7c_1 = 1
                break
            
            void** r12_1 = sx.q(r14_6) << 3
            
            while (true)
                if (r14_6 s>= rdx_10)
                    rdi_1 = *(var_68 + (sx.q(r14_6 - rdx_10) << 3))
                else
                    rdi_1 = *(r12_1 + var_90)
                
                int32_t var_78 = var_78 + 1
                
                if (rdi_1 != 0)
                    void* rax_29 = sub_141dc9840(rdi_1)
                    
                    if (rax_29 != 0)
                        void* const rax_36
                        
                        if ((var_a0 & 1) != 0)
                            int32_t rax_30 = *(rdi_1 + 0xc)
                            
                            if (rax_30 s>= data_143e1d9b4)
                                rax_36 = nullptr
                            else
                                int16_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(rax_30)
                                uint32_t rdx_12 = zx.d(temp3_1)
                                int32_t rax_32 = temp4_1 + rdx_12
                                rax_36 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_32.w) - rdx_12) * 0x18
                        
                        if ((var_a0 & 1) == 0 || ((*(rax_36 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_20 = var_a0.d
                            
                            if (((rcx_20 u>> 1).b & 1) == 0)
                                goto label_1419e1f2e
                            
                            uint64_t rax_40 = sub_1405949a0()
                            
                            if (rax_40.b != 0)
                                rcx_20 = var_a0.d
                            label_1419e1f2e:
                                
                                if (((rcx_20 u>> 2).b & 1) == 0)
                                label_1419e1faa:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_29) == var_98)
                                        if (rax_29 == *(var_98 + 0x30))
                                            break
                                        
                                        void* rax_42 = sub_1425bd0d0()
                                        void* rdx_14 = *(rdi_1 + 0x10)
                                        int64_t rax_43 = sx.q(*(rax_42 + 0x38))
                                        
                                        if (rax_43.d s> *(rdx_14 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_14 + 0x30) + (rax_43 << 3)) != rax_42 + 0x30)
                                            break
                                else
                                    if ((*(rax_29 + 0x1f4) & 0x20) == 0
                                            || (*(rax_29 + 0x1f6) & 8) != 0)
                                        rax_40 = zx.q(*(rax_29 + 0x1f5))
                                    
                                    char r15_1
                                    
                                    if (((*(rax_29 + 0x1f4) & 0x20) != 0
                                            && (*(rax_29 + 0x1f6) & 8) == 0) || (rax_40.b & 0x40) != 0
                                            || rax_40.b s< 0)
                                        r15_1 = 1
                                    else
                                        r15_1 = 0
                                    
                                    void* rcx_22 = *(rax_29 + 0xb8)
                                    char* rsi_2 = *(rax_29 + 0x248)
                                    
                                    if (rcx_22 != 0)
                                        rax_40 = sub_1424359b0(rcx_22)
                                    
                                    if (rcx_22 == 0 || rax_40 == 0 || rsi_2 == rax_40)
                                        rcx_22.b = 1
                                    else
                                        rcx_22.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_40.b = 1
                                    else
                                        rax_40.b = 0
                                    
                                    if (rcx_22.b != 0 || rax_40.b != 0)
                                        rax_40.b = 1
                                    
                                    if (r15_1 != 0 && rax_40.b != 0)
                                        goto label_1419e1faa
                    
                    r8_5 = var_60
                    rdx_10 = var_88
                
                r14_6 += 1
                r12_1 = &r12_1[1]
                
                if (r14_6 s>= r8_5 + rdx_10)
                    goto label_1419e201e
            
            r13 = var_c8
            void* var_70_1 = rdi_1
            var_80 = r14_6
            
            if (var_7c != 0)
                break
            
            r12 = arg3
            rsi = var_c0
    
    char var_48
    
    if (var_48 != 0)
        char var_48_1 = 0
        int64_t var_50
        sub_142441560(var_98, var_50)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        if (var_90 != 0)
            sub_140a74f90(var_90)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(r13)
