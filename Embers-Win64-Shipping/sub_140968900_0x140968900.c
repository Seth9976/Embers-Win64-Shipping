// 函数: sub_140968900
// 地址: 0x140968900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_1 = result
int64_t* rcx = arg1[0x22]
int32_t rbx = arg3
int64_t r15 = arg2

if (rcx != 0)
    result = (*(*rcx + 0x90))(rcx)
    
    if (result.b != 0)
        result.b = *(arg1 + 0x1acc) - 2
        
        if ((result.b & 0xfd) != 0)
            void* rcx_1 = arg1[0x28]
            char var_140
            int64_t* var_138
            
            if (rcx_1 != 0 && *(rcx_1 + 0x290) == 0)
                int128_t var_a8
                var_138 = &var_a8
                var_140 = 0
                var_a8 = zx.o(0)
                int64_t var_100
                sub_141ccee50(rcx_1, &var_100, r15, rbx, arg4, var_140, var_138)
                int64_t* rbx_1 = var_a8:8.q
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                char var_f4
                
                if (var_f4 != 0)
                    rbx = 0
                else
                    r15 = var_100
                    int32_t var_f8
                    rbx = var_f8
            
            int64_t var_128 = 0
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rbx + 7)
            result = zx.q((temp2_1 + (temp1_1 & 7)) s>> 3)
            uint32_t count = result.d
            
            if (result.d s> 0)
                int64_t zmm0 = (zx.o(0)).q
                int64_t r12
                
                if (zmm0.d f>= arg1[0x350].d || zmm0 f== arg1[0x351])
                    r12.b = 0
                else
                    r12.b = 1
                
                int64_t rdi_1 = data_143ced0c8
                int64_t rcx_4
                
                if (data_143de5480 == 0)
                    rcx_4 = 0
                else
                    rcx_4.b = GetCurrentThreadId() != data_143de5470
                
                if (*(rdi_1 + (rcx_4 << 2)) == 0)
                    int64_t* rcx_17 = arg1[0x346]
                    result = (*(*rcx_17 + 0x50))(rcx_17, r15, zx.q(count), &var_128, arg1[0x22], 
                        var_140, var_138)
                    
                    if (result.b == 0)
                        int64_t* rcx_18 = arg1[0xb]
                        int64_t* rax_21 = (*(*rcx_18 + 0x378))(rcx_18)
                        int64_t rdx_10 = *rax_21
                        var_128:4.d = (*(rdx_10 + 0xb8))(rax_21, rdx_10)
                        result = sub_140964bc0(arg1, &var_128, rax_21)
                    else if (r12.b != 0)
                        result = sub_140964bc0(arg1, &var_128, nullptr)
                else
                    void* rax_8 = arg1[0x34f]
                    int64_t var_60_1 = 0
                    int32_t var_58_1 = 0
                    int32_t var_54_1 = 4
                    void* var_80
                    
                    if (rax_8 != 0)
                        int32_t var_58_2 = 1
                        var_80 = rax_8
                        *(rax_8 + 0x48) += 1
                    
                    int64_t* rcx_5 = arg1[0xb]
                    int64_t rax_10 = (*(*rcx_5 + 0x378))(rcx_5)
                    int64_t var_110 = 0
                    sub_1405da9e0(&var_110, count, 0)
                    int64_t rbx_2 = var_110
                    memcpy(rbx_2, r15, count)
                    void*** rax_11 = sub_140a82f30(0x30, 8)
                    rax_11[1] = arg1
                    rax_11[2] = rbx_2
                    rax_11[3].d = count
                    int32_t var_104
                    *(rax_11 + 0x1c) = var_104
                    rax_11[4] = rax_10
                    rax_11[5].b = r12.b
                    *rax_11 = &data_142e34588
                    int64_t (* var_e8)(int64_t* arg1)
                    int64_t (* rax_12)(int64_t* arg1) = var_e8
                    
                    if (rax_11 != -8)
                        rax_12 = j_sub_14094e540
                    
                    void var_98
                    int64_t* rax_13 = sub_140958c20(&var_98, &var_80, 0xff)
                    void* rdx_7 = *rax_13
                    *(rdx_7 + 0x10) = rax_12
                    *(rdx_7 + 0x20) = rax_11
                    int128_t* var_d8_2 = nullptr
                    int128_t var_c8
                    *(rdx_7 + 0x30) = var_c8
                    int128_t var_b8
                    *(rdx_7 + 0x40) = var_b8
                    int64_t (* rax_14)(int64_t* arg1) = rax_12
                    
                    if (*(rdx_7 + 0x10) != 0)
                        rax_14 = nullptr
                    
                    *(rdx_7 + 0x50) = 0xff
                    void* rcx_13 = *rax_13
                    int32_t r8_2 = rax_13[2].d
                    int64_t* rdx_8 = rax_13[1]
                    int64_t* rbx_3 = *(rcx_13 + 0x68)
                    int64_t* var_118 = rbx_3
                    
                    if (rbx_3 != 0)
                        rbx_3[9].d += 1
                    
                    int64_t* r9_1
                    r9_1.b = 1
                    sub_1409787e0(rcx_13, rdx_8, r8_2, r9_1.b)
                    
                    if (rax_14 != 0)
                        int128_t* rcx_14 = &var_c8
                        
                        if (var_d8_2 != 0)
                            rcx_14 = var_d8_2
                        
                        (*(*rcx_14 + 0x10))(rcx_14)
                    
                    if (&arg1[0x34f] != &var_118)
                        int64_t* rcx_15 = arg1[0x34f]
                        arg1[0x34f] = rbx_3
                        
                        if (rcx_15 != 0)
                            rcx_15[9].d -= 1
                            
                            if (rcx_15[9].d == 1)
                                sub_140a2f6e0(rcx_15)
                    else if (rbx_3 != 0)
                        rbx_3[9].d -= 1
                        
                        if (rbx_3[9].d == 1)
                            sub_140a2f6e0(var_118)
                    
                    result = sub_1408466d0(&var_80)

__security_check_cookie(result_1 ^ &var_168)
return result
