// 函数: sub_14202e8f0
// 地址: 0x14202e8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rdi = arg4
int64_t* r13 = arg3
int64_t var_e8 = arg2
int16_t* var_b8
sub_140b294d0(&var_b8, &var_e8, 0)
int16_t* _String_1
sub_140b294d0(&_String_1, &var_e8, 0)
int16_t* const _String_2 = &data_142d40450
int32_t rbx = -1
int32_t var_c0

if (var_c0 != 0)
    _String_2 = _String_1

if (sub_140a54510(_String_2, &data_142d40450) != 0)
    int16_t* const _String = &data_142d40450
    
    if (var_c0 != 0)
        _String = _String_1
    
    rbx = _wtoi(_String)

int64_t* r15
int64_t* var_38 = r15
int32_t var_b0
int32_t* var_100
int64_t var_d8
int32_t var_a8
int64_t var_a0
void** var_98
int32_t var_90
int32_t var_88
char var_84
int32_t var_80
void* const var_78
int64_t var_70
int32_t var_68
int64_t var_58

if (var_b0 s> 1)
    int32_t r14_1 = 0
    int16_t* rdx_2 = &data_142d40450
    int32_t var_108_1 = 0
    
    if (var_b0 != 0)
        rdx_2 = var_b8
    
    sub_140b58260(&var_100, rdx_2, 1)
    void* rax_4 = sub_142452380()
    var_a8 = 5
    char var_50_1 = 0
    sub_1405ab0f0(&var_a0, rdi, rax_4)
    char var_50_2 = 1
    sub_1405b0c60(&var_a8)
    
    if (var_84 == 0)
        void* const rdi_1 = var_78
        int64_t r8_1 = sx.q(rbx)
        var_d8 = r8_1
        
        while (true)
            for (int64_t* i = *(rdi_1 + 0x150); i != &i[sx.q(*(rdi_1 + 0x158))]; i = &i[1])
                if (*i == var_100)
                    char rdx_5 = *(rdi_1 + 0x58)
                    
                    if (r8_1 == -1)
                    label_14202ea96:
                        var_108_1 = r14_1 + 1
                        sub_141dd84c0(rdi_1, not.b(rdx_5 u>> 5) & 1)
                        sub_141dcf810(rdi_1)
                    else
                        char rax_7 = rdx_5 & 0x20
                        
                        if (r8_1 != 0)
                            if (rax_7 != 0)
                                goto label_14202ea96
                        else if (rax_7 == 0)
                            goto label_14202ea96
                    
                    break
            
            int32_t r8_2 = var_68
            int32_t rdx_6 = var_90
            int64_t r13_1 = var_a0
            int32_t r14_4 = var_88 + 1
            
            if (r14_4 s>= r8_2 + rdx_6)
            label_14202ec59:
                r14_1 = var_108_1
                var_78 = nullptr
                var_84 = 1
                break
            
            int64_t r12_1 = sx.q(r14_4) << 3
            
            while (true)
                if (r14_4 s>= rdx_6)
                    rdi_1 = *(var_70 + (sx.q(r14_4 - rdx_6) << 3))
                else
                    rdi_1 = *(var_98 + r12_1)
                
                var_80 += 1
                
                if (rdi_1 != 0)
                    void* rax_14 = sub_141dc9840(rdi_1)
                    
                    if (rax_14 != 0)
                        void* const rax_21
                        
                        if ((var_a8.b & 1) != 0)
                            int32_t rax_15 = *(rdi_1 + 0xc)
                            
                            if (rax_15 s>= data_143e1d9b4)
                                rax_21 = nullptr
                            else
                                int16_t temp1_1
                                int32_t temp2_1
                                temp1_1:temp2_1 = sx.q(rax_15)
                                uint32_t rdx_8 = zx.d(temp1_1)
                                int32_t rax_17 = temp2_1 + rdx_8
                                rax_21 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_17.w) - rdx_8) * 0x18
                        
                        if ((var_a8.b & 1) == 0 || ((*(rax_21 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_a8
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_14202eb83
                            
                            uint64_t rax_25 = sub_1405949a0()
                            
                            if (rax_25.b != 0)
                                rcx_16 = var_a8
                            label_14202eb83:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                label_14202ebff:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_14) == r13_1)
                                        if (rax_14 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_27 = sub_1425bd0d0()
                                        void* rdx_10 = *(rdi_1 + 0x10)
                                        int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                                        
                                        if (rax_28.d s> *(rdx_10 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_10 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
                                            break
                                else
                                    if ((*(rax_14 + 0x1f4) & 0x20) == 0
                                            || (*(rax_14 + 0x1f6) & 8) != 0)
                                        rax_25 = zx.q(*(rax_14 + 0x1f5))
                                    
                                    if (((*(rax_14 + 0x1f4) & 0x20) != 0
                                            && (*(rax_14 + 0x1f6) & 8) == 0) || (rax_25.b & 0x40) != 0
                                            || rax_25.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_18 = *(rax_14 + 0xb8)
                                    char* rsi_1 = *(rax_14 + 0x248)
                                    
                                    if (rcx_18 != 0)
                                        rax_25 = sub_1424359b0(rcx_18)
                                    
                                    if (rcx_18 == 0 || rax_25 == 0 || rsi_1 == rax_25)
                                        rcx_18.b = 1
                                    else
                                        rcx_18.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_25.b = 1
                                    else
                                        rax_25.b = 0
                                    
                                    if (rcx_18.b != 0 || rax_25.b != 0)
                                        rax_25.b = 1
                                    
                                    if (r15.b != 0 && rax_25.b != 0)
                                        goto label_14202ebff
                    
                    r8_2 = var_68
                    rdx_6 = var_90
                
                r14_4 += 1
                r12_1 += 8
                
                if (r14_4 s>= r8_2 + rdx_6)
                    goto label_14202ec59
            
            var_88 = r14_4
            r14_1 = var_108_1
            var_78 = rdi_1
            
            if (var_84 != 0)
                break
            
            r8_1 = var_d8
        
        r13 = arg3
        rdi = arg4
    
    if (var_50_2 != 0)
        char var_50_3 = 0
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
    
    sub_140b1f700(r13, u"Toggled visibility of %u actors", zx.q(r14_1))
    
    if (r14_1 == 0)
        goto label_14202ecc2
else
    sub_140b1f640(r13, u"Missing layer name.")
label_14202ecc2:
    int32_t* rbx_2 = nullptr
    int32_t r13_2 = 0
    var_100 = nullptr
    int32_t i_4 = 0
    int32_t var_f4_1 = 0
    void* rax_31 = sub_142452380()
    var_a8 = 5
    char var_50_4 = 0
    sub_1405ab0f0(&var_a0, rdi, rax_31)
    char var_50_5 = 1
    sub_1405b0c60(&var_a8)
    
    if (var_84 == 0)
        void* const rdi_2 = var_78
        
        while (true)
            int32_t i_1 = 0
            
            if (*(rdi_2 + 0x158) s> 0)
                int64_t r14_5 = 0
                
                do
                    int32_t* rax_32 = rbx_2
                    r15 = *(rdi_2 + 0x150) + r14_5
                    void* rdx_13 = &rbx_2[sx.q(i_4) * 2]
                    
                    if (rbx_2 != rdx_13)
                        while (*rax_32 != *r15)
                            rax_32 = &rax_32[2]
                            
                            if (rax_32 == rdx_13)
                                goto label_14202ed8d
                    
                    if (rbx_2 == rdx_13 || ((rax_32 - rbx_2) s>> 3).d == 0xffffffff)
                    label_14202ed8d:
                        int64_t i_5 = sx.q(i_4)
                        i_4 = (i_5 + 1).d
                        
                        if (i_4 s> r13_2)
                            sub_1405a4d70(&var_100)
                            r13_2 = var_f4_1
                        
                        rbx_2 = var_100
                        *(rbx_2 + (i_5 << 3)) = *r15
                    
                    i_1 += 1
                    r14_5 += 8
                while (i_1 s< *(rdi_2 + 0x158))
            
            int32_t r8_7 = var_68
            int32_t rdx_15 = var_90
            var_d8 = var_a0
            int32_t r14_7 = var_88 + 1
            
            if (r14_7 s>= r8_7 + rdx_15)
            label_14202ef8a:
                rbx_2 = var_100
                int64_t var_78_1 = 0
                char var_84_1 = 1
                break
            
            int64_t r13_3 = sx.q(r14_7) << 3
            
            while (true)
                if (r14_7 s>= rdx_15)
                    rdi_2 = *(var_70 + (sx.q(r14_7 - rdx_15) << 3))
                else
                    rdi_2 = *(var_98 + r13_3)
                
                var_80 += 1
                
                if (rdi_2 != 0)
                    void* rax_43 = sub_141dc9840(rdi_2)
                    
                    if (rax_43 != 0)
                        void* const rax_50
                        
                        if ((var_a8.b & 1) != 0)
                            int32_t rax_44 = *(rdi_2 + 0xc)
                            
                            if (rax_44 s>= data_143e1d9b4)
                                rax_50 = nullptr
                            else
                                int16_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(rax_44)
                                uint32_t rdx_17 = zx.d(temp3_1)
                                int32_t rax_46 = temp4_1 + rdx_17
                                rax_50 = *(data_143e1d9a0 + (sx.q(rax_46 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_46.w) - rdx_17) * 0x18
                        
                        if ((var_a8.b & 1) == 0 || ((*(rax_50 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_38 = var_a8
                            
                            if (((rcx_38 u>> 1).b & 1) == 0)
                                goto label_14202eeaf
                            
                            uint64_t rax_54 = sub_1405949a0()
                            
                            if (rax_54.b != 0)
                                rcx_38 = var_a8
                            label_14202eeaf:
                                
                                if (((rcx_38 u>> 2).b & 1) == 0)
                                label_14202ef2b:
                                    int64_t rax_55 = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_43)
                                    int64_t r9 = var_d8
                                    
                                    if (rax_55 == r9)
                                        if (rax_43 == *(r9 + 0x30))
                                            break
                                        
                                        void* rax_56 = sub_1425bd0d0()
                                        void* rdx_19 = *(rdi_2 + 0x10)
                                        int64_t rax_57 = sx.q(*(rax_56 + 0x38))
                                        
                                        if (rax_57.d s> *(rdx_19 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_19 + 0x30) + (rax_57 << 3)) != rax_56 + 0x30)
                                            break
                                else
                                    if ((*(rax_43 + 0x1f4) & 0x20) == 0
                                            || (*(rax_43 + 0x1f6) & 8) != 0)
                                        rax_54 = zx.q(*(rax_43 + 0x1f5))
                                    
                                    if (((*(rax_43 + 0x1f4) & 0x20) != 0
                                            && (*(rax_43 + 0x1f6) & 8) == 0) || (rax_54.b & 0x40) != 0
                                            || rax_54.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_40 = *(rax_43 + 0xb8)
                                    char* rsi_2 = *(rax_43 + 0x248)
                                    
                                    if (rcx_40 != 0)
                                        rax_54 = sub_1424359b0(rcx_40)
                                    
                                    if (rcx_40 == 0 || rax_54 == 0 || rsi_2 == rax_54)
                                        rcx_40.b = 1
                                    else
                                        rcx_40.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_54.b = 1
                                    else
                                        rax_54.b = 0
                                    
                                    if (rcx_40.b != 0 || rax_54.b != 0)
                                        rax_54.b = 1
                                    
                                    if (r15.b != 0 && rax_54.b != 0)
                                        goto label_14202ef2b
                    
                    r8_7 = var_68
                    rdx_15 = var_90
                
                r14_7 += 1
                r13_3 += 8
                
                if (r14_7 s>= r8_7 + rdx_15)
                    goto label_14202ef8a
            
            rbx_2 = var_100
            void* const var_78_2 = rdi_2
            var_88 = r14_7
            
            if (var_84 != 0)
                break
            
            r13_2 = var_f4_1
    
    if (var_50_5 != 0)
        char var_50_6 = 0
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
    
    sub_140b1f640(arg3, u"Valid layer names:")
    
    if (i_4 s> 0)
        uint64_t i_3 = zx.q(i_4)
        uint64_t i_2
        
        do
            int64_t* rax_60 = sub_140b63b70(rbx_2, &var_d8)
            int16_t* const r8_10
            
            if (rax_60[1].d == 0)
                r8_10 = &data_142d40450
            else
                r8_10 = *rax_60
            
            sub_140b1f700(arg3, u"   %s", r8_10)
            int64_t rcx_49 = var_d8
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            rbx_2 = &rbx_2[2]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    int32_t* rcx_50 = var_100
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
int16_t* _String_3 = _String_1

if (_String_3 != 0)
    sub_140a74f90(_String_3)

int16_t* rcx_51 = var_b8

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

wchar16 (* result)[0x200]
result.b = 1
__security_check_cookie(rax_1 ^ &var_128)
return result
