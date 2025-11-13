// 函数: sub_1405f5850
// 地址: 0x1405f5850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
int64_t** var_70 = nullptr
int32_t var_68 = 0
int128_t var_58 = *arg2
int32_t result = sub_1405f5af0(&var_58, &var_70)
int64_t** rsi = var_70
int64_t rdi = sx.q(var_68)
void* r12 = &rsi[rdi]

if (rsi != r12)
    do
        int64_t var_b8
        sub_140a96170(&var_b8)
        int64_t var_a0 = 0
        int64_t var_98_1 = 0
        int64_t var_88 = 0
        int64_t var_80_1 = 0
        char var_c8[0x10]
        var_c8[0] = 0
        result = sub_1405f7090(*rsi, &var_b8, &var_a0, &var_c8, &var_88)
        int64_t* var_b0
        
        if (result.b != 0)
            int32_t var_90_1
            
            if (*arg2 != 0x42d84ae78ac3587a || *(arg2 + 8) != 0xff9ee13600ae099)
                var_90_1 = 1
            else
                int32_t rax_4 = 6
                
                if (var_c8[0] != 0)
                    rax_4 = 8
                
                var_90_1 = rax_4
            
            int64_t rbx_2 = sx.q(arg3[1].d)
            int32_t rax_5 = (rbx_2 + 1).d
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405c4fe0(arg3)
            
            int64_t* rdx_5 = (rbx_2 << 6) + *arg3
            *rdx_5 = var_b8
            rdx_5[1] = var_b0
            
            if (var_b0 != 0)
                var_b0[1].d += 1
            
            int32_t var_a8
            rdx_5[2].d = var_a8
            void* var_78_1 = &rdx_5[3]
            void* var_78_2 = &rdx_5[3]
            rdx_5[3] = 0
            rdx_5[3] = var_a0
            var_a0 = 0
            rdx_5[4].d = var_98_1.d
            *(rdx_5 + 0x24) = var_98_1:4.d
            int64_t var_98_2 = 0
            rdx_5[5].d = var_90_1
            void* var_78_3 = &rdx_5[6]
            void* var_78_4 = &rdx_5[6]
            rdx_5[6] = 0
            rdx_5[6] = var_88
            var_88 = 0
            rdx_5[7].d = var_80_1.d
            result = var_80_1:4.d
            *(rdx_5 + 0x3c) = result
            int64_t var_80_2 = 0
            int64_t rcx_10 = var_88
            
            if (rcx_10 != 0)
                result = sub_140a74f90(rcx_10)
            
            int64_t rcx_11 = var_a0
            
            if (rcx_11 != 0)
                result = sub_140a74f90(rcx_11)
            
            if (var_b0 != 0)
                result = var_b0[1].d
                var_b0[1].d -= 1
                
                if (result == 1)
                    (**var_b0)(var_b0)
                    result = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*var_b0 + 8))(var_b0, 1)
        else
            int64_t rcx_3 = var_88
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = var_a0
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            if (var_b0 != 0)
                result = var_b0[1].d
                var_b0[1].d -= 1
                
                if (result == 1)
                    (**var_b0)(var_b0)
                    result = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*var_b0 + 8))(var_b0, 1)
        rsi = &rsi[1]
    while (rsi != r12)
    
    rdi = zx.q(var_68)
    rsi = var_70

int64_t** rbx_4 = rsi

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t* rcx_14 = *rbx_4
        
        if (rcx_14 != 0)
            result = (*(*rcx_14 + 0x10))(rcx_14)
        
        rbx_4 = &rbx_4[1]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
