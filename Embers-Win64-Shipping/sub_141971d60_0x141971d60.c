// 函数: sub_141971d60
// 地址: 0x141971d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char rax = sub_141975e10(arg1)
void*** result = nullptr
AcquireSRWLockShared(&data_143f02050)
int32_t arg_18 = 1

if (sub_141975c30(&data_143f02050, &arg_10, &result, 5, &arg_18) == 0)
    void* rdx_1 = arg_10
    uint32_t r8_2 = (rdx_1 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r8_2) ^ r8_2 << 8
    int32_t rcx_2 = neg.d(r9_2 + r8_2) ^ r9_2 u>> 0xd
    int32_t r8_5 = (r8_2 - r9_2 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_5 = (r9_2 - r8_5 - rcx_2) ^ r8_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_5 - r8_5) ^ r9_5 u>> 5
    int32_t r8_8 = (r8_5 - r9_5 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_8 = (r9_5 - r8_8 - rcx_5) ^ r8_8 << 0xa
    sub_141966c10((rcx_5 - r9_8 - r8_8) ^ r9_8 u>> 0xf, rdx_1)
    void*** result_1 = j_sub_140a82f30(0x28)
    
    if (result_1 == 0)
        result_1 = nullptr
    else
        void* rcx_9 = arg_10
        result_1[1] = 0
        result_1[3] = rcx_9
        result_1[2] = 0
        *result_1 = &data_143001f00
        result_1[4] = 0
        void* rcx_10 = result_1[3]
        *(rcx_10 + 8) += 1
    
    void* rdx_2 = arg_10
    result = result_1
    uint32_t rdx_3 = (rdx_2 u>> 4).d
    int32_t rbx_2 = (0x9e3779b9 - rdx_3) ^ rdx_3 << 8
    int32_t rcx_13 = neg.d(rbx_2 + rdx_3) ^ rbx_2 u>> 0xd
    int32_t rdx_6 = (rdx_3 - rbx_2 - rcx_13) ^ rcx_13 u>> 0xc
    int32_t rbx_5 = (rbx_2 - rdx_6 - rcx_13) ^ rdx_6 << 0x10
    int32_t rcx_16 = (rcx_13 - rbx_5 - rdx_6) ^ rbx_5 u>> 5
    int32_t rdx_9 = (rdx_6 - rbx_5 - rcx_16) ^ rcx_16 u>> 3
    int32_t rbx_8 = (rbx_5 - rdx_9 - rcx_16) ^ rdx_9 << 0xa
    result[2] = sub_1419815e0((rcx_16 - rbx_8 - rdx_9) ^ rbx_8 u>> 0xf)
    
    if (rax == 0)
        int64_t* rcx_27 = data_143f0f180
        void arg_20
        (*(*rcx_27 + 0xf0))(rcx_27, &arg_20, result[3])
        sub_141962b90(&result[4], &arg_20)
        sub_1405d1550(&arg_20)
    else
        int64_t var_a4
        __builtin_memset(&var_a4, 0, 0x43)
        int128_t var_100
        __builtin_memset(&var_100, 0, 0x30)
        int128_t var_b8_1 = zx.o(0)
        int16_t var_60_1 = 0
        void var_48
        int64_t* rax_31 = sub_1419691f0(&var_48, nullptr, 0xff)
        sub_141960e70(*rax_31 + 0x10, result, &var_100)
        void* rcx_24 = *rax_31
        int32_t r8_10 = rax_31[2].d
        int64_t* rdx_11 = rax_31[1]
        int64_t* rbx_11 = *(rcx_24 + 0xc8)
        int64_t* var_110 = rbx_11
        
        if (rbx_11 != 0)
            rbx_11[9].d += 1
        
        sub_141987180(rcx_24, rdx_11, r8_10, 1)
        
        if (&result[1] != &var_110)
            int64_t* rcx_25 = result[1]
            result[1] = rbx_11
            
            if (rcx_25 != 0)
                rcx_25[9].d -= 1
                
                if (rcx_25[9].d == 1)
                    sub_140a2f6e0(rcx_25)
        else if (rbx_11 != 0)
            rbx_11[9].d -= 1
            
            if (rbx_11[9].d == 1)
                sub_140a2f6e0(var_110)
        
        if (result[1] != 0)
            sub_14195b8b0(arg1 + 0x58, &result[1])
    
    int64_t* rbx_12 = data_143f02058
    void var_108
    
    if (*sub_140865c40(rbx_12, &var_108, arg_10) == 0xffffffff)
        void** var_58 = &arg_10
        void** var_50_1 = &result
        int32_t var_104
        sub_140bbe6a0(rbx_12, &var_104, &var_58, nullptr)
else if (rax != 0)
    void* rdx_19 = &result[1]
    void* rcx_33 = *rdx_19
    
    if (rcx_33 != 0)
        int64_t rax_38 = 0
        
        if (0 == *(rcx_33 + 8))
            *(rcx_33 + 8) = 0
        else
            rax_38 = *(rcx_33 + 8)
        
        if (((rax_38 u>> 0x1a).b & 1) == 0 && *rdx_19 != 0)
            sub_14195b8b0(arg1 + 0x58, rdx_19)

int32_t rdx_20 = arg_18

if (((rdx_20 u>> 1).b & 1) != 0)
    ReleaseSRWLockExclusive(&data_143f02050)
    return result

if ((rdx_20.b & 1) != 0)
    ReleaseSRWLockShared(&data_143f02050)

return result
