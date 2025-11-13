// 函数: sub_141c9ccc0
// 地址: 0x141c9ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rsi = arg2
void* rdi = arg1
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_1417d6d70(&var_98, arg1 + 0x2d8)

if (arg3 != 0)
    goto label_141c9cee6

void* var_e8
sub_1409aa070(&var_e8, sub_140d41340(), 0, 0, 0)
int64_t* var_d8
int64_t* rdi_1 = var_d8
int64_t var_108
int64_t var_90

if (rdi_1 == 0)
label_141c9cee1:
    rdi = arg1
label_141c9cee6:
    int64_t rax_20 = *rsi
    var_108 = rax_20
    
    if (rax_20 != 0)
        int64_t var_100_1 = rsi[1]
    
    sub_141c9ca70(rdi + 8, &var_98, &var_108)
    int32_t var_50_1 = 0
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    bool cond:0_1 = var_90:4.d == 0
    var_90.d = 0
    
    if (not(cond:0_1))
        sub_1405a5410(&var_98, 0)
    
    int32_t var_64_1 = 0
else
    void* r14_1 = var_e8
    int32_t var_e0
    int32_t rsi_1 = var_e0
    int64_t* var_b8
    int64_t var_b0
    
    while (true)
        int64_t* rcx_2
        
        if (rdi_1 == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *rdi_1
        
        if ((*(*rcx_2 + 0x188))(rcx_2) != 0)
            int64_t* rdx_2
            
            if (rdi_1 == 0)
                rdx_2 = nullptr
            else
                rdx_2 = *rdi_1
            
            sub_141c91480(&var_e8, rdx_2, 0)
            
            if ((*arg2)(arg2[1], &var_e8) == 0)
                break
            
            sub_14090a150(&var_98, &var_108)
            int64_t rax_7 = var_e0.q
            int64_t* var_100
            *var_100 = rax_7
            var_100[1].d = 0xffffffff
            void var_f8
            sub_1407ec830(&var_98, &var_f8, (rax_7 u>> 0x20).d + sub_140b5ead0(rax_7.d), var_100, 
                var_108.d, nullptr)
            
            if (var_b0 != 0)
                sub_140a74f90(var_b0)
            
            if (var_b8 != 0)
                var_b8[1].d -= 1
                
                if (var_b8[1].d == 1)
                    (**var_b8)(var_b8)
                    int32_t temp5_1 = *(var_b8 + 0xc)
                    *(var_b8 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_b8 + 8))(var_b8, 1)
        
        while (true)
            int32_t r8_1 = *(r14_1 + 0x24)
            int32_t rax_12 = rsi_1 + 1
            rsi_1 = rax_12
            
            if (rax_12 s>= r8_1)
            label_141c9cedc:
                rsi = arg2
                goto label_141c9cee1
            
            void* rbx_4
            
            while (true)
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rsi_1)
                uint32_t rdx_7 = zx.d(temp0_1)
                int32_t rax_15 = temp1_1 + rdx_7
                int64_t rdx_8 = *(*(r14_1 + 0x10) + (sx.q(rax_15 s>> 0x10) << 3))
                int64_t rcx_14 = sx.q(zx.d(rax_15.w) - rdx_7) * 3
                rbx_4 = *(rdx_8 + (rcx_14 << 3))
                rdi_1 = rdx_8 + (rcx_14 << 3)
                
                if (rbx_4 != 0)
                    break
                
                int32_t rax_19 = rsi_1 + 1
                rsi_1 = rax_19
                
                if (rax_19 s>= r8_1)
                    goto label_141c9cedc
            
            int32_t var_c8
            
            if ((*(rbx_4 + 8) & var_c8) == 0)
                void* var_d0
                
                if (var_d0 != sub_140d41340())
                    void* rax_23 = *(rbx_4 + 0x10)
                    int64_t rcx_23 = sx.q(*(var_d0 + 0x38))
                    
                    if (rcx_23.d s> *(rax_23 + 0x38))
                        continue
                    else if (*(*(rax_23 + 0x30) + (rcx_23 << 3)) != var_d0 + 0x30)
                        continue
                
                int32_t rax_25 = *(rbx_4 + 0xc)
                void* const rax_29
                
                if (rax_25 s>= data_143e1d9b4)
                    rax_29 = nullptr
                else
                    uint32_t rdx_11 = zx.d(rax_25.w)
                    
                    if (rax_25 s< 0)
                        rax_25 += 0xffff
                        rdx_11 -= 0x10000
                    
                    rax_29 = *(data_143e1d9a0 + (sx.q(rax_25 s>> 0x10) << 3)) + sx.q(rdx_11) * 0x18
                
                int32_t var_c4
                
                if ((*(rax_29 + 8) & var_c4) == 0)
                    break
    
    if (var_b0 != 0)
        sub_140a74f90(var_b0)
    
    if (var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t temp4_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
    
    int32_t var_50_2 = 0
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    var_90.d = 0
    int32_t var_64_2 = 0
int32_t var_68_1 = 0xffffffff
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_20 = var_98

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_148)
return result
