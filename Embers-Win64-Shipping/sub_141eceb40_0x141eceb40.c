// 函数: sub_141eceb40
// 地址: 0x141eceb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rax_3 = (*(*arg1 + 0x150))()
void* rax_4 = sub_142452380()
int32_t var_98 = 5
char var_40 = 0
void* var_90
sub_1405ab0f0(&var_90, rax_3, rax_4)
char var_40_1 = 1
uint64_t result = sub_1405b0c60(&var_98)
void** var_88
char i
int64_t var_60

if (i == 0)
    void* var_68
    void* rsi_1 = var_68
    int64_t* r14_1 = nullptr
    int32_t var_78
    int32_t r15_1 = var_78
    
    do
        void* var_b8
        
        if (rsi_1 != 0)
            int32_t rax_5 = *(rsi_1 + 0xc)
            void* const rax_11
            
            if (rax_5 s>= data_143e1d9b4)
                rax_11 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_5)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_7 = temp1_1 + rdx_2
                rax_11 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_7.w) - rdx_2) * 0x18
            
            if (((*(rax_11 + 8) u>> 0x1d).b & 1) == 0 && *(rsi_1 + 0x18) == arg2)
                int64_t* rcx_22 = nullptr
                
                if (((arg1[1].d u>> 4).b & 1) == 0)
                    rcx_22 = arg1[4]
                
                var_b8.d = (zx.o(0)).d
                int64_t* var_a8
                var_a8:4.b = 1
                var_b8:4.d = var_a8:4.d
                int32_t var_9c
                int32_t var_ac_1 = var_9c & 0xfffffffe
                int32_t var_b0_1 = 0x40000000
                (*(*rcx_22 + 0xd10))(rcx_22, rsi_1, &var_b8)
                TEB* gsbase
                
                if (data_143f3a850 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143f3a850)
                    
                    if (data_143f3a850 == 0xffffffff)
                        sub_140b58260(&data_143f3a848, u"ThirdPerson", 1)
                        _Init_thread_footer(&data_143f3a850)
                
                if (((arg1[1].d u>> 4).b & 1) == 0)
                    r14_1 = arg1[4]
                
                result = (*(*r14_1 + 0xd98))(r14_1, data_143f3a848)
                break
        
        r15_1 += 1
        int32_t var_58
        int32_t r8_2 = var_58
        int32_t var_80
        int32_t rdx_4 = var_80
        var_b8 = var_90
        result = zx.q(r8_2 + rdx_4)
        
        if (r15_1 s>= result.d)
        label_141eceddd:
            int64_t var_68_1 = 0
            char var_74 = 1
            break
        
        int64_t r13_1 = sx.q(r15_1) << 3
        
        while (true)
            if (r15_1 s>= rdx_4)
                rsi_1 = *(var_60 + (sx.q(r15_1 - rdx_4) << 3))
            else
                rsi_1 = *(var_88 + r13_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rsi_1 != 0)
                void* rax_20 = sub_141dc9840(rsi_1)
                
                if (rax_20 != 0)
                    void* const rax_27
                    
                    if ((var_98.b & 1) != 0)
                        int32_t rax_21 = *(rsi_1 + 0xc)
                        
                        if (rax_21 s>= data_143e1d9b4)
                            rax_27 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_21)
                            uint32_t rdx_6 = zx.d(temp2_1)
                            int32_t rax_23 = temp3_1 + rdx_6
                            rax_27 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_23.w) - rdx_6) * 0x18
                    
                    if ((var_98.b & 1) == 0 || ((*(rax_27 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_13 = var_98
                        
                        if (((rcx_13 u>> 1).b & 1) == 0)
                            goto label_141ececfc
                        
                        uint64_t rax_31 = sub_1405949a0()
                        
                        if (rax_31.b != 0)
                            rcx_13 = var_98
                        label_141ececfc:
                            
                            if (((rcx_13 u>> 2).b & 1) == 0)
                                goto label_141eced7c
                            
                            if ((*(rax_20 + 0x1f4) & 0x20) == 0 || (*(rax_20 + 0x1f6) & 8) != 0)
                                rax_31 = zx.q(*(rax_20 + 0x1f5))
                            
                            char r12
                            
                            if (((*(rax_20 + 0x1f4) & 0x20) != 0 && (*(rax_20 + 0x1f6) & 8) == 0)
                                    || (rax_31.b & 0x40) != 0 || rax_31.b s< 0)
                                r12 = 1
                            else
                                r12 = 0
                            
                            void* rcx_15 = *(rax_20 + 0xb8)
                            char* r14_2 = *(rax_20 + 0x248)
                            
                            if (rcx_15 != 0)
                                rax_31 = sub_1424359b0(rcx_15)
                            
                            if (rcx_15 == 0 || rax_31 == 0 || r14_2 == rax_31)
                                rcx_15.b = 1
                            else
                                rcx_15.b = 0
                            
                            if (r14_2 == 0 || *r14_2 == 2)
                                rax_31.b = 1
                            else
                                rax_31.b = 0
                            
                            if (rcx_15.b != 0 || rax_31.b != 0)
                                rax_31.b = 1
                            
                            if (r12 != 0 && rax_31.b != 0)
                                r14_1 = nullptr
                            label_141eced7c:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_20)
                                void* r9_1 = var_b8
                                
                                if (result == r9_1)
                                    if (rax_20 == *(r9_1 + 0x30))
                                        break
                                    
                                    void* rax_32 = sub_1425bd0d0()
                                    void* rdx_8 = *(rsi_1 + 0x10)
                                    result = sx.q(*(rax_32 + 0x38))
                                    
                                    if (result.d s> *(rdx_8 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_8 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_32 + 0x30)
                                        break
                
                r8_2 = var_58
                r14_1 = nullptr
                rdx_4 = var_80
            
            r15_1 += 1
            result = zx.q(r8_2 + rdx_4)
            r13_1 += 8
            
            if (r15_1 s>= result.d)
                goto label_141eceddd
        
        void* var_68_2 = rsi_1
        int32_t var_78_1 = r15_1
    while (i == 0)

if (var_40_1 != 0)
    char var_40_2 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_d8)
return result
