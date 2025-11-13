// 函数: sub_140f10150
// 地址: 0x140f10150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int128_t* r14 = arg2
void* rsi = arg1
int128_t* r12 = arg6
int64_t* r15 = arg4
int128_t zmm9
zmm9.d = 1f f/ *(arg5 + 8)
void* rcx = *(arg1 + 0xa0)
int64_t* var_108 = arg4
int128_t* var_100 = r12
int32_t var_130
sub_140e13cf0(rcx, &var_130)
int32_t var_12c

if (var_130.d f!= *(rsi + 0xd0) || not(var_12c.d f== *(rsi + 0xd4)))
    *(rsi + 0xd0) = var_130.q
    int64_t* rbx_1 = *(rsi + 0x20)
    int64_t* var_128_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_3 + 1
        
        if (rbx_1 != 0)
            void* rdi_1 = *(rsi + 0x18)
            
            if (rdi_1 != 0)
                int64_t* r13_1 = *(rsi + 0x10)
                int64_t var_120_1 = 0
                int64_t* var_118_1 = r13_1
                
                if (r13_1 != 0)
                    int32_t rax_5 = r13_1[1].d
                    
                    if (rax_5 != 0)
                        r13_1[1].d = rax_5 + 1
                        rax_5.b = 1
                    
                    if (rax_5.b == 0)
                        r13_1 = nullptr
                    
                    var_118_1 = r13_1
                    
                    if (r13_1 != 0)
                        var_120_1 = *(rsi + 8)
                        int32_t rax_7 = r13_1[1].d
                        r13_1[1].d = rax_7
                        
                        if (rax_7 == 0)
                            (**r13_1)(r13_1)
                            int32_t temp6_1 = *(r13_1 + 0xc)
                            *(r13_1 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*r13_1 + 8))(r13_1, 1)
                        
                        r13_1[1].d += 1
                
                int32_t i_1 = 0
                
                if (*(rdi_1 + 0x20) s> 0)
                    int64_t rsi_1 = 0
                    int32_t i = 0
                    
                    do
                        int64_t r15_1 = *(rdi_1 + 0x18)
                        
                        if ((*(rsi_1 + r15_1 + 0x68) & 1) == 0)
                            int32_t j = 0
                            int64_t r12_1 = 0
                            
                            if (*(rsi_1 + r15_1 + 0x30) s> 0)
                                int64_t* rdi_2 = nullptr
                                
                                do
                                    int64_t rax_10 = *(rsi_1 + r15_1 + 0x28)
                                    int64_t rbx_2 = *(rdi_2 + rax_10)
                                    int64_t* rbx_3 = *(rdi_2 + rax_10 + 8)
                                    
                                    if (rbx_3 != 0)
                                        rbx_3[1].d += 1
                                        
                                        if (rbx_3 != 0)
                                            rbx_3[1].d -= 1
                                            
                                            if (rbx_3[1].d == 1)
                                                (**rbx_3)(rbx_3)
                                                int32_t temp8_1 = *(rbx_3 + 0xc)
                                                *(rbx_3 + 0xc) -= 1
                                                
                                                if (temp8_1 == 1)
                                                    (*(*rbx_3 + 8))(rbx_3, 1)
                                    
                                    if (rbx_2 == var_120_1)
                                        void* rbx_6 = r12_1 * 0x30 + *(rsi_1 + r15_1 + 0x28)
                                        *(rbx_6 + 0x18) = 0
                                        
                                        if (*(rbx_6 + 0x1c) != 0)
                                            sub_1405c5570(rbx_6 + 0x10, 0)
                                        
                                        *(rbx_6 + 0x28) = 0
                                        
                                        if (*(rbx_6 + 0x2c) != 0)
                                            sub_1405c5570(rbx_6 + 0x20, 0)
                                        
                                        break
                                    
                                    j += 1
                                    r12_1 += 1
                                    rdi_2 = &rdi_2[6]
                                while (j s< *(rsi_1 + r15_1 + 0x30))
                                
                                i = i_1
                        
                        i += 1
                        rsi_1 += 0x70
                        i_1 = i
                    while (i s< *(rdi_1 + 0x20))
                    
                    r13_1 = var_118_1
                    rsi = arg1
                    r14 = arg2
                    r15 = var_108
                    r12 = var_100
                
                *(rdi_1 + 0x88) |= 1
                
                if (r13_1 != 0)
                    r13_1[1].d -= 1
                    
                    if (r13_1[1].d == 1)
                        (**r13_1)(r13_1)
                        int32_t temp4_1 = *(r13_1 + 0xc)
                        *(r13_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*r13_1 + 8))(r13_1, 1)
                    
                    r13_1[1].d -= 1
                    
                    if (r13_1[1].d == 1)
                        (**r13_1)(r13_1)
                        int32_t temp5_1 = *(r13_1 + 0xc)
                        *(r13_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*r13_1 + 8))(r13_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_7 = *r15
int32_t* rax_21 = (*(*rbx_7 + 0x38))(rbx_7, &var_100)
int128_t zmm8
zmm8.d = zmm9.d f* *rax_21
int128_t zmm7
zmm7.d = zmm9.d f* rax_21[1]
int32_t* rax_23 = (*(*rbx_7 + 0x18))(rbx_7, &var_108)
int128_t zmm1 = data_142d8c9b0
int128_t zmm6 = *(arg5 + 8)
int32_t var_c8 = zmm8.d
int64_t zmm0
zmm0.d = zmm9.q.d f* *rax_23
zmm9.d = zmm9.d f* rax_23[1]
int64_t var_b8 = 0x3f800000
int32_t var_c0 = zmm0.d
int32_t var_c4 = zmm7.d
int32_t var_bc = zmm9.d
int32_t var_b0 = 0
int128_t var_d8 = zmm1
int32_t var_a4[0x6]
float zmm7_1
int32_t zmm8_1
zmm7_1, zmm8_1 = sub_1408b8950(&var_a4, &var_d8, arg5 + 0x1c)
zmm1.d = zmm6.d f* zmm8_1
var_b8.d = zmm6.d
zmm1.d = zmm1.d f+ *(arg5 + 0xc)
char var_8c
char var_8c_1 = var_8c ^ ((*(arg5 + 0x34) ^ var_8c) & 1)
var_b8:4.d = zmm1.d
int32_t var_ac = zmm8_1
float var_a8 = zmm7_1
float var_b0_1 = zmm6.d * zmm7_1 f+ *(arg5 + 0x10)
uint64_t result = sub_140e1f680(*(rsi + 0xa0), r14, &var_c0, r12, arg7, arg8, arg9, arg10)
__security_check_cookie(rax_1 ^ &var_188)
return result
