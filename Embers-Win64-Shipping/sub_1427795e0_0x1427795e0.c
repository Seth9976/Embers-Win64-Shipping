// 函数: sub_1427795e0
// 地址: 0x1427795e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* result = (*(*arg1 + 0x308))()

if (result.b != 0)
    int64_t* rax_3 = sub_140963350(arg1[0x87])
    int32_t rdi_1 = 0
    int64_t var_148 = 0
    int64_t var_140_1 = 0
    
    if (arg1[0x85].d s> 0)
        int32_t* i = arg1[0x84]
        
        for (void* r12_1 = &i[sx.q(arg1[0x85].d) * 0xa]; i != r12_1; i = &i[0xa])
            uint64_t rax_5 = sub_140d3c6e0(i)
            uint64_t rsi_1 = rax_5
            
            if (rax_5 != 0)
                goto label_14277970c
            
            if (*(i + 0x10) != rax_5)
                if (rax_5.d == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_5 = zx.q(data_1439aaa30)
                
                uint64_t rax_8
                
                if (rax_5.d != i[2] || *i != 0xffffffff)
                    void* rax_6 = sub_140d2bce0(&i[4])
                    sub_140d3a3a0(i, rax_6)
                    
                    if (rax_6 != 0 || data_143e1d7b4 == rax_6.b)
                        int32_t rax_7 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_7 = data_1439aaa30
                        
                        i[2] = rax_7
                    
                    rax_8 = sub_140d3c6e0(i)
                    rsi_1 = rax_8
                
                if ((rax_5.d == i[2] && *i == 0xffffffff) || rax_8 == 0)
                    rdi_1 = var_140_1.d
                else
                    rdi_1 = var_140_1.d
                label_14277970c:
                    void* rax_9 = sub_142776620()
                    void* rdx_1 = *(rsi_1 + 0x10)
                    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                    
                    if (rax_10.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                        int64_t r14_1 = *(rsi_1 + 0x298)
                        int64_t rsi_2 = sx.q(rdi_1)
                        rdi_1 = (rsi_2 + 1).d
                        var_140_1.d = rdi_1
                        
                        if (rdi_1 s> var_140_1:4.d)
                            sub_1405a4d70(&var_148)
                            rdi_1 = var_140_1.d
                        
                        *(var_148 + (rsi_2 << 3)) = r14_1
    
    result = sub_140963270(arg1[0x87])
    uint64_t rsi_3 = 0
    uint64_t var_138 = 0
    int64_t r14_2 = sx.q(result[1].d)
    int64_t rbx_1 = *result
    int32_t var_130_1 = r14_2.d
    int32_t r12_2
    
    if (r14_2.d != 0)
        sub_1405c4a00(&var_138, r14_2.d, 0)
        rsi_3 = var_138
        result = memcpy(rsi_3, rbx_1, (r14_2 << 3).d)
        int32_t var_12c
        r12_2 = var_12c
        r14_2 = zx.q(var_130_1)
    else
        r12_2 = 0
    
    if (r14_2.d s> 0)
        int64_t rax_13 = arg1[0x86]
        int64_t rbx_2 = arg1[0x87]
        void var_d0
        sub_141d2d5a0(&var_d0, arg2)
        uint64_t var_68 = 0
        int32_t var_60_1 = rdi_1
        int32_t var_5c
        
        if (rdi_1 != 0)
            sub_1405c4a00(&var_68, rdi_1, 0)
            memcpy(var_68, var_148, rdi_1 << 3)
        else
            var_5c = 0
        
        int32_t var_50_1 = r14_2.d
        void*** rax_14 = sub_140a82f30(0x98, 8)
        *rax_14 = &data_1434a1188
        rax_14[1] = rax_13
        sub_141d2d5a0(&rax_14[2], &var_d0)
        rax_14[0xe] = rbx_2
        rax_14[0xf] = 0
        rax_14[0xf] = var_68
        int32_t rax_15 = var_60_1
        var_68 = 0
        rax_14[0x10].d = rax_15
        *(rax_14 + 0x84) = var_5c
        __builtin_memset(&var_60_1, 0, 0x18)
        rax_14[0x11] = 0
        rax_14[0x11] = rsi_3
        rax_14[0x12].d = var_50_1
        *(rax_14 + 0x94) = r12_2
        *rax_14 = &data_1434a11a8
        int64_t* (* var_118)(void** arg1)
        int64_t* (* rax_20)(void** arg1) = var_118
        
        if (rax_14 != -8)
            rax_20 = j_sub_142778290
        
        void*** var_108_1 = rax_14
        var_118 = rax_20
        (*(*rax_3 + 0x18))(rax_3, &var_118)
        int64_t var_58_2
        
        if (var_58_2 != 0)
            sub_140a74f90(var_58_2)
        
        uint64_t rcx_20 = var_68
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int32_t var_78_1 = 0
        int64_t var_80
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
        
        void var_c0
        result = sub_1409aaf90(&var_c0)
        int64_t* var_c8
        
        if (var_c8 != 0)
            result = (**var_c8)(var_c8, 1)
    else if (rsi_3 != 0)
        result = sub_140a74f90(rsi_3)
    
    int64_t rcx_25 = var_148
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_168)
return result
