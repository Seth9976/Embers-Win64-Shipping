// 函数: sub_141b46090
// 地址: 0x141b46090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
void* rsi = nullptr
int64_t r14 = sx.q(arg3)
int32_t r15 = 0
int64_t r10 = r14 * 5
int64_t* r13 = rax + (r10 << 3)
int32_t rax_1 = *(rax + (r10 << 3) + 8)

if (rax_1 != 0xffffffff)
    r15 = rax_1

if (arg3 == 0)
    arg4[4].b = 1

void* var_80
sub_141b465b0(r13, &var_80, arg1)
int128_t* result

if (var_80 != 0)
    int32_t r12_2 = arg4[1].d - 1
    sub_140cea340()
    char rax_2 = sub_140cc1670(&var_80, &data_143e1b820)
    void* r10_1
    
    if (rax_2 != 0)
        r10_1 = var_80
    
    char rax_29
    uint64_t rcx_17
    uint64_t rcx_28
    
    if (rax_2 == 0 || r10_1 == 0)
        if (r14.d == r12_2)
            return (*(*arg5 + 0x10))(arg5, arg2, arg4)
        
        int64_t* var_90 = nullptr
        uint64_t var_70 = 0
        int64_t var_68_1 = 1
        int128_t var_60
        __builtin_memset(&var_60, 0, 0x11)
        sub_1405c4ec0(&var_70)
        uint64_t rax_40 = var_70
        *rax_40 = *r13
        *(rax_40 + 0x10) = *(r13 + 0x10)
        *(rax_40 + 0x20) = r13[4]
        int64_t var_48[0x2]
        result = sub_141b459e0(arg2, &var_70, &var_48, &var_90)
        int64_t* rcx_26
        
        if (result.b != 0)
            rcx_26 = var_90
        
        if (result.b != 0 && rcx_26 != 0)
            arg4[4].b = 0
            rax_29 = sub_141b45c70(rcx_26[2], rcx_26, (r14 + 1).d, arg4, arg5)
            rcx_17 = var_70
        label_141b462f4:
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            return zx.q(rax_29)
        
        rcx_28 = var_70
    label_141b46484:
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    else
        if (r14.d == r12_2)
            return (*(*arg5 + 0x10))(arg5, arg2, arg4)
        
        if (((zx.q(*(*(r10_1 + 8) + 0x10)) u>> 0x10).b & 1) != 0)
            arg4[4].b = 0
            int64_t* rcx_5 = *(sx.q(*(r10_1 + 0x4c)) + sx.q(*(r10_1 + 0x3c) * r15) + arg2)
            
            if (rcx_5 != 0)
                return sub_141b45c70(rcx_5[2], rcx_5, (r14 + 1).d, arg4, arg5)
        
        int64_t rcx_7 = *(*(r10_1 + 8) + 0x10)
        
        if (((rcx_7 u>> 0x1b).b & 1) == 0)
            if (((rcx_7 u>> 0x1d).b & 1) != 0)
                arg4[4].b = 0
                int64_t rdx_7 = sx.q(*(r10_1 + 0x4c))
                int32_t rax_20 = *(r10_1 + 0x3c) * r15
                int64_t var_b4_1 = 0
                int32_t var_b8 = 0xffffffff
                uint64_t var_a0 = 0
                int64_t var_98_1 = 0
                int64_t arg_20 = 0
                int64_t* rdx_8 = rdx_7 + sx.q(rax_20) + arg2
                int64_t var_a8 = 0
                var_b8.q = *rdx_8
                var_b4_1:4.d = rdx_8[1].d
                var_a8 = rdx_8[2]
                sub_140597df0(&var_a0, &rdx_8[3])
                result = sub_140d3c6e0(&var_b8)
                int128_t* result_1 = result
                
                if (result == 0)
                    if (var_a8 == 0)
                    label_141b462c5:
                        rcx_28 = var_a0
                        goto label_141b46484
                    
                    if (result.d == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        result = zx.q(data_1439aaa30)
                    
                    if (result.d == var_b4_1:4.d && var_b8 == 0xffffffff)
                        goto label_141b462c5
                    
                    void* rax_26 = sub_140d2bce0(&var_a8)
                    sub_140d3a3a0(&var_b8, rax_26)
                    
                    if (rax_26 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_27 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_27 = data_1439aaa30
                        
                        var_b4_1:4.d = rax_27
                    
                    result = sub_140d3c6e0(&var_b8)
                    result_1 = result
                    
                    if (result == 0)
                        goto label_141b462c5
                
                rax_29 = sub_141b45c70(result_1[1].q, result_1, (r14 + 1).d, arg4, arg5)
                rcx_17 = var_a0
                goto label_141b462f4
            
            if (((rcx_7 u>> 0x14).b & 1) != 0)
                return sub_141b46090(*(r10_1 + 0x78), 
                    sx.q(*(r10_1 + 0x4c)) + sx.q(*(r10_1 + 0x3c) * r15) + arg2, zx.q((r14 + 1).d), 
                    arg4, arg5)
            
            if (((rcx_7 u>> 0x15).b & 1) != 0)
                arg4[4].b = 0
                void* r11_1 = *(r10_1 + 0x78)
                
                if (r11_1 != 0 && ((zx.q((*(r11_1 + 8))[1].d) u>> 0x14).b & 1) != 0)
                    char rdx_14 = (*(r10_1 + 0x80)).b
                    void** rcx_22 = sx.q(*(r10_1 + 0x4c)) + arg2
                    result.b = not.b(rdx_14)
                    result.b &= 1
                    
                    if (r15 s>= 0)
                        result = zx.q(rcx_22[1].d)
                        
                        if (r15 s< result.d)
                            if (result.d != 0)
                                void* rax_37 = *rcx_22
                                
                                if ((not.b(rdx_14) & 1) == 0 && (rax_37.b & 1) != 0)
                                    rax_37 = (rax_37 s>> 1) + rcx_22
                                
                                rsi = sx.q(*(r11_1 + 0x3c) * r15) + rax_37
                            
                            return sub_141b46090(*(r11_1 + 0x78), rsi, zx.q((r14 + 1).d), arg4, 
                                arg5)
        else
            arg4[4].b = 0
            int64_t var_88 = *(sx.q(*(r10_1 + 0x4c)) + sx.q(*(r10_1 + 0x3c) * r15) + arg2)
            result = sub_140d3c6e0(&var_88)
            
            if (result != 0)
                return sub_141b45c70(result[1].q, result, (r14 + 1).d, arg4, arg5)

result.b = 0
return result
