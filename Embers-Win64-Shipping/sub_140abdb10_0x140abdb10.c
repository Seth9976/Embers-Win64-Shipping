// 函数: sub_140abdb10
// 地址: 0x140abdb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char* r14 = *arg2
char rdi = arg3.b
int64_t result = sx.q(arg2[1].d)
char* rbx = r14
void* r15_1 = result * 0xb8 + r14

if (r14 != r15_1)
    do
        result, arg3 = sub_140a810f0(rbx, nullptr)
        
        if (result.b != 0)
            result, arg3 = sub_140a85670(*(arg1 + 0x160), rbx)
        
        rbx = &rbx[0xb8]
    while (rbx != r15_1)

if (rdi != 0)
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t rax_2 = 0
    int32_t rdx_1 = 0
    int32_t var_64_1 = 0
    int64_t rcx_2 = 0
    int64_t var_58_1 = 0
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_50_1 = 0
    
    if (r14 != r15_1)
        do
            char rax_3
            rax_3, arg3 = sub_140a810f0(r14, nullptr)
            
            if (rax_3 != 0)
                uint64_t var_188
                __builtin_memset(&var_188, 0, 0x20)
                sub_140a77ee0(r14)
                char* rax_4
                rax_4, arg3 = sub_140a752e0()
                int64_t* rbx_1 = *(rax_4 + 0x30)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int64_t* rax_5 = sub_140903440(*(rax_4 + 0x28))
                int64_t var_180_1
                
                if (&var_188 != rax_5)
                    int32_t rdi_1 = rax_5[1].d
                    int64_t rsi_1 = *rax_5
                    arg3 = var_180_1:4.d
                    var_180_1.d = rdi_1
                    
                    if (rdi_1 != 0 || arg3 != 0)
                        sub_1405a4c70(&var_188, rdi_1, arg3)
                        memcpy(var_188, rsi_1, rdi_1 * 2)
                    else
                        var_180_1:4.d = 0
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_8 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_8 == 1 && rbx_1 != 0)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (var_180_1.d s<= 1)
                    goto label_140abdd4b
                
                int64_t* var_168
                sub_140a7c300(sub_140a752e0(), &var_168, &var_188)
                int64_t* rbx_2 = var_168
                int32_t i_3
                int64_t i_4 = sx.q(i_3)
                void* rsi_4 = &rbx_2[i_4 * 2]
                uint64_t var_178
                
                if (rbx_2 != rsi_4)
                    while (true)
                        char rax_11
                        rax_11, arg3 = sub_140a7a0a0(r14, rbx_2, &var_178)
                        
                        if (rax_11 != 0)
                            int32_t i_2 = i_3
                            int64_t* rbx_3 = var_168
                            
                            if (i_2 != 0)
                                int32_t i
                                
                                do
                                    int64_t rcx_16 = *rbx_3
                                    
                                    if (rcx_16 != 0)
                                        sub_140a74f90(rcx_16)
                                    
                                    rbx_3 = &rbx_3[2]
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                rbx_3 = var_168
                            
                            if (rbx_3 != 0)
                                sub_140a74f90(rbx_3)
                            
                            break
                        
                        rbx_2 = &rbx_2[2]
                        
                        if (rbx_2 == rsi_4)
                            i_4 = zx.q(i_3)
                            rbx_2 = var_168
                            goto label_140abdd16
                    
                    goto label_140abddeb
                
            label_140abdd16:
                
                if (i_4.d != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_12 = *rbx_2
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        rbx_2 = &rbx_2[2]
                        i_1 = i_4.d
                        i_4 = zx.q(i_4.d - 1)
                    while (i_1 != 1)
                    rbx_2 = var_168
                
                if (rbx_2 == 0)
                    goto label_140abdd4b
                
                sub_140a74f90(rbx_2)
            label_140abdd4b:
                uint64_t rcx_15
                
                if (sub_140a80ff0(r14) == 0)
                    int64_t* rax_13 = sub_140a3f490(r14)
                    int64_t var_170_1
                    
                    if (&var_178 != rax_13)
                        int32_t rbx_4 = rax_13[1].d
                        int64_t rdi_2 = *rax_13
                        int32_t r8_4 = var_170_1:4.d
                        var_170_1.d = rbx_4
                        
                        if (rbx_4 != 0 || r8_4 != 0)
                            sub_1405a4c70(&var_178, rbx_4, r8_4)
                            memcpy(var_178, rdi_2, rbx_4 * 2)
                        else
                            var_170_1:4.d = 0
                    
                label_140abddeb:
                    uint64_t rcx_21 = var_188
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    int64_t* rax_14 = sub_140903440(r14)
                    int16_t* var_118
                    int32_t var_110
                    
                    if (rax_14[1].d s> 1)
                        sub_140aab440(sub_140ab2000(), rax_14, &var_118, &var_110)
                    else
                        var_110 = 0
                        var_118 = &data_142d40450
                    int64_t* rax_16 = sub_140902e90(r14)
                    int16_t* var_128
                    int32_t var_120
                    
                    if (rax_16[1].d s> 1)
                        sub_140aab440(sub_140ab2000(), rax_16, &var_128, &var_120)
                    else
                        var_128 = &data_142d40450
                        var_120 = 0
                    int16_t* const var_100_1 = &data_142d40450
                    int32_t var_f8_1 = 0
                    int64_t* rax_18 = sub_140a3f490(r14)
                    int16_t* rcx_27
                    
                    if (rax_18[1].d == 0)
                        rcx_27 = &data_142d40450
                    else
                        rcx_27 = *rax_18
                    
                    uint64_t var_158 = 0
                    int32_t var_14c_1 = 0
                    int128_t var_148_1 = var_100_1.o
                    int32_t var_134_1 = 0
                    int32_t rax_19 = sub_140a5ff80(rcx_27, 0)
                    int32_t rbx_7 = var_170_1.d
                    uint64_t rdi_3 = var_178
                    
                    if (rbx_7 != 0)
                        sub_1405a4c70(&var_158, rbx_7, 0)
                        memcpy(var_158, rdi_3, rbx_7 * 2)
                    
                    int32_t var_134_2 = 0
                    int128_t var_e0 = var_128.o
                    int128_t var_d0_1 = var_118.o
                    int32_t var_130
                    sub_140aab040(&var_98, &var_130, &var_e0)
                    int64_t rax_20 = sx.q(var_130)
                    void* const rax_23
                    
                    if (rax_20.d == 0xffffffff)
                        rax_23 = nullptr
                    else
                        rax_23 = rax_20 * 0x50 + var_98
                    
                    int64_t* rbx_8 = rax_23 + 0x20
                    
                    if (rax_23 == 0)
                        rbx_8 = nullptr
                    
                    if (rbx_8 == 0)
                        int128_t zmm0_1 = var_128.o
                        int128_t var_c0
                        int128_t* var_f0 = &var_c0
                        var_c0 = zmm0_1
                        uint64_t* var_e8_1 = &var_158
                        int128_t var_b0_1 = var_118.o
                        void var_108
                        sub_140a91d10(&var_98, &var_108, &var_f0, nullptr)
                    else if (*(rbx_8 + 0x24) s> 0)
                        if (rbx_8 != &var_158)
                            int64_t rcx_31 = *rbx_8
                            
                            if (rcx_31 != 0)
                                sub_140a74f90(rcx_31)
                            
                            *rbx_8 = var_158
                            var_158 = 0
                            rbx_8[1].d = rbx_7
                            *(rbx_8 + 0xc) = var_14c_1
                            int32_t var_150_1
                            var_150_1.q = 0
                        
                        *(rbx_8 + 0x10) = var_148_1
                        rbx_8[4].d = rax_19
                        *(rbx_8 + 0x24) = var_134_2
                    
                    rcx_15 = var_158
                else
                    rcx_15 = var_188
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                uint64_t rcx_33 = var_178
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
            
            r14 = &r14[0xb8]
        while (r14 != r15_1)
        
        rcx_2 = var_58_1
        rdx_1 = var_64_1
        int32_t var_90
        rax_2 = var_90
    
    if (rax_2 != rdx_1)
        arg3.b = 1
        sub_140ac71b0(arg1, &var_98, arg3.b)
        rcx_2 = var_58_1
    
    int32_t var_50_2 = 0
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result = sub_140aa93f0(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        result = sub_140a74f90(var_78)
    
    int64_t rcx_37 = var_98
    
    if (rcx_37 != 0)
        result = sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
