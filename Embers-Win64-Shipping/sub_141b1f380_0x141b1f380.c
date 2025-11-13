// 函数: sub_141b1f380
// 地址: 0x141b1f380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_88
sub_141b1fa60(&arg4[0x65], &var_88, arg3)
int64_t rax_2 = sx.q(var_88)
int64_t rdi = 0
void* const rdx_3

if (rax_2.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = rax_2 * 0x30 + arg4[0x65]

void* result = rdx_3 + 0x14

if (rdx_3 == 0)
    result = nullptr

if (result == 0)
    int64_t rax_6 = sub_140d3c6e0(sub_141a4c290((*(*arg4 + 0x58))(arg4), &var_88, arg3, &arg3[2]))
    int64_t rdx_5 = *arg4
    uint64_t r14
    r14.b = rax_6 != 0
    result = (*(rdx_5 + 0x50))(arg4, rdx_5)
    void* var_48
    int64_t var_40
    
    if (rax_6 == 0 && result != 0)
        var_40 = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = 1
        result = (*(*result + 0x10))(result, arg3, zx.q(arg3[2].d), &var_48)
        r14 = zx.q(r14.b)
        
        if (result.b == 0)
            r14 = 1
        
        if (var_40 != 0)
            result = sub_140a74f90(var_40)
    
    if (*(arg1 + 8) != 0)
        if (r14.b == 0)
            int64_t* rax_7 = sub_141a4c170(&arg4[1], &arg3[2])
            
            if (rax_7 != 0)
                int64_t rdx_8 = *rax_7
                void* rax_8 = (*(rdx_8 + 0x280))(rax_7, rdx_8)
                int64_t rdx_9 = *arg4
                void* rax_10 =
                    sub_141a69d90((*(rdx_9 + 0x58))(arg4, rdx_9), arg3, rax_8, &arg3[2], arg4)
                
                if (rax_10 != 0)
                    int64_t r9_4 = *arg4
                    (*(r9_4 + 0x60))(arg4, rax_10, arg3, r9_4)
        
        sub_141a4a790(arg4, &var_48, arg3, &arg3[2])
        void* rbx_3 = var_48
        result = sx.q(var_40.d)
        void* rcx_13 = rbx_3 + (result << 3)
        uint64_t r15_4 = (rcx_13 - rbx_3 + 7) u>> 3
        
        if (rbx_3 u> rcx_13)
            r15_4 = 0
        
        if (r15_4 != 0)
            do
                var_88.q = *rbx_3
                result = sub_140d3c6e0(&var_88)
                
                if (result != 0)
                    uint128_t zmm0_1 = *arg3
                    int64_t rax_12 = data_143f2c838
                    int32_t rcx_15 = arg3[2].d
                    void** const var_68 = &data_143059f50
                    int32_t var_50_1 = rcx_15
                    uint128_t var_60_1 = zmm0_1
                    
                    if (rax_12 == 0)
                        rax_12 = sub_141a54240(&data_143f2c838, 0)
                    
                    int32_t var_70_1 = arg4[0x5b].d
                    uint64_t var_78 = arg4[0x5a]
                    int64_t* var_98
                    var_98.b = *(arg4 + 0x2dc)
                    result = sub_1405c5900(&arg4[0x1f], rax_12, &var_68, result, var_98.b, &var_78)
                
                rbx_3 += 8
                rdi += 1
            while (rdi != r15_4)
    else if (r14.b != 0)
        result = sub_141a43a80((*(*arg4 + 0x58))(arg4), arg3, &arg3[2], arg4)

__security_check_cookie(rax_1 ^ &var_b8)
return result
