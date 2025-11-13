// 函数: sub_140e7f930
// 地址: 0x140e7f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143e29f28
void** result = arg2
int32_t arg_8 = 0
int128_t var_d8
char var_c8
sub_140e8b090(*sub_140db22a0(arg3, &var_c8), (*(*rdi + 0x88))(rdi, &var_d8))
int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t temp1_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_c0 + 8))(var_c0, 1)

var_d8 = zx.o(0)
int128_t zmm8 = *arg5
int128_t zmm9 = *(arg5 + 4)
int128_t zmm6
zmm6.d = zmm8.d f+ *arg8
int128_t zmm7
zmm7.d = zmm9.d f+ arg8[1]
int64_t* rsi_1

if (*(arg1 + 0x58) s<= 0)
    rsi_1 = var_d8:8.q
label_140e7faa5:
    int64_t* var_b8
    int128_t var_a0
    char* rbx_3
    int32_t rdi_2
    char var_a8
    
    if (arg9[1] == 0)
        int32_t rax_11 = *(arg3 + 0x130)
        int64_t rdi_3 = sx.q(rax_11 - 1)
        
        if (rax_11 - 1 s< 0)
        label_140e7fb57:
            var_c8 = 1
            var_c0.o = zx.o(0)
            int16_t var_b0_1 = 0x100
        else
            int64_t r14_2 = rdi_3 * 0x48
            
            while (true)
                void* rax_13 = *(arg3 + 0x128)
                void* rcx_9 = arg3 + 8
                
                if (rax_13 != 0)
                    rcx_9 = rax_13
                
                int64_t* rcx_10 = *(rcx_9 + r14_2 + 0x38)
                (*(*rcx_10 + 0x120))(rcx_10, &var_a8)
                char rax_15 = var_a8
                
                if (rax_15 != 0)
                    var_c8 = rax_15
                    var_c0 = var_a0.q
                    var_b8 = var_a0:8.q
                    char var_90
                    int64_t rax_36 = var_90.q
                    int16_t var_b0
                    var_b0.b = rax_36.b
                    var_b0:1.b = (rax_36 u>> 8).b
                    break
                
                int64_t* rbx_4 = var_a0:8.q
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp13_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
                
                r14_2 -= 0x48
                int64_t temp9_1 = rdi_3
                rdi_3 -= 1
                
                if (temp9_1 - 1 s< 0)
                    goto label_140e7fb57
        
        rdi_2 = 2
        rbx_3 = &var_c8
    else
        rbx_3 = &var_a8
        char var_90_1 = *arg9
        var_a0 = zx.o(0)
        var_a8 = 1
        rdi_2 = 1
        char var_8f_1 = 1
    sub_140e552a0(arg1, rbx_3)
    arg1[0x18] = rbx_3[0x18]
    arg1[0x19] = rbx_3[0x19]
    
    if ((rdi_2.b & 2) != 0)
        rdi_2 &= 0xfffffffd
        
        if (var_b8 != 0)
            var_b8[1].d -= 1
            
            if (var_b8[1].d == 1)
                (**var_b8)(var_b8)
                int32_t temp7_1 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_b8 + 8))(var_b8, 1)
    
    if ((rdi_2.b & 1) != 0)
        int64_t* rbx_6 = var_a0:8.q
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp11_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    zmm6 = sub_140e88d80(arg1, arg3)
    result = arg2
else
    int64_t* rax_6 = sub_140e63a40(arg1, &var_c8, arg3)
    int64_t rdi_1 = 0
    
    if (&var_d8 == rax_6)
        rsi_1 = var_d8:8.q
    else
        rdi_1 = *rax_6
        *rax_6 = 0
        rsi_1 = rax_6[1]
        var_d8.q = rdi_1
        
        if (rsi_1 == 0)
            rsi_1 = var_d8:8.q
        else
            rax_6[1] = 0
            var_d8:8.q = rsi_1
    
    int64_t rax_7 = rdi_1
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t temp4_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            rax_7 = rdi_1
            
            if (temp4_1 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
                rax_7 = rdi_1
    
    if (rax_7 == 0)
        goto label_140e7faa5

if (data_143e29ea0 != 0)
    int64_t* rcx_19 = data_143e29e98
    
    if (rcx_19 != 0)
        (*(*rcx_19 + 0x38))(rcx_19, 0)
        int64_t rcx_20 = data_143e29e98
        
        if (rcx_20 != 0)
            data_143e29e98 = sub_140a84c80(rcx_20, 0, 0)
        
        data_143e29ea0 = 0

char rbx_7 = arg1[0xd8]
arg1[0xd8] = 1
var_c8.d = zmm8.d
int32_t var_c4 = zmm9.d
var_c0.d = zmm6.d
var_c0:4.d = zmm7.d
sub_140e80530(arg1, result, &var_d8, arg4, &var_c8, arg6, arg7, arg1[0x19], arg10, arg11)
arg1[0xd8] = rbx_7

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp12_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

if (arg9[1] != 0)
    arg9[1] = 0

return result
