// 函数: sub_140b3b750
// 地址: 0x140b3b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t var_178 = arg3
void* const r8 = 0x48

if (arg6 == 0)
    r8 = 0x18

int64_t var_c0
sub_140b1e060(&var_c0, arg3, r8 + arg1, arg5)
char var_a8
char rax_3 = var_a8
char var_90
int64_t* var_b8

if (var_90 == 0 || rax_3 != 0)
    int64_t* rsi_3 = var_b8
    int64_t r15_4 = var_c0
    int64_t* rdi_11 = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
        rax_3 = var_a8
        rsi_3 = var_b8
    
    if (rax_3 != 0)
        char var_a8_2 = 0
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t rax_67 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (rax_67 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
    
    *arg2 = r15_4
    arg2[1] = rdi_11
    
    if (rdi_11 != 0)
        rdi_11[1].d += 1
    
    int32_t var_b0
    arg2[2].d = var_b0
    arg2[3].b = 1
    arg2[6].b = 0
    
    if (rdi_11 != 0)
        rdi_11[1].d -= 1
        
        if (rdi_11[1].d == 1)
            (**rdi_11)(rdi_11)
            int32_t rbx_6 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (rbx_6 == 1)
                (*(*rdi_11 + 8))(rdi_11, zx.q(rbx_6))
    
    sub_140a98ff0(&var_c0)
else
    int32_t i_2
    int64_t i_3 = sx.q(i_2)
    
    if (i_3.d != 0)
        void* var_a0
        void* rbx_1 = var_a0
        int64_t var_188 = 0
        int64_t var_180_1 = 0
        int32_t rax_7 = ((*(i_3 * 0x58 + rbx_1 - 0x10) - var_178) s>> 1).d + 1
        
        if (rax_7 s> 0)
            sub_1405947f0(&var_188, rax_7)
            i_3 = zx.q(i_2)
            rbx_1 = var_a0
        
        void* r15_2 = sx.q(i_3.d) * 0x58 + rbx_1
        
        if (rbx_1 == r15_2)
        label_140b3b98e:
            arg2[3].b = 0
            sub_140596d10(&arg2[4], &var_188)
            int64_t rcx_24 = var_188
            arg2[6].b = 1
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            if (var_90 != 0)
                int32_t i_1 = i_2
                void* rbx_3 = var_a0
                char var_90_1 = 0
                
                if (i_1 != 0)
                    int32_t i
                    
                    do
                        sub_140b0bbf0(rbx_3)
                        rbx_3 += 0x58
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    rbx_3 = var_a0
                
                if (rbx_3 != 0)
                    sub_140a74f90(rbx_3)
            
            if (var_a8 != 0)
                char var_a8_1 = 0
                
                if (var_b8 != 0)
                    var_b8[1].d -= 1
                    
                    if (var_b8[1].d == 1)
                        (**var_b8)(var_b8)
                        int32_t rbx_4 = *(var_b8 + 0xc)
                        *(var_b8 + 0xc) -= 1
                        
                        if (rbx_4 == 1)
                            (*(*var_b8 + 8))(var_b8, zx.q(rbx_4))
        else
            void* rbx_2 = rbx_1 + 8
            
            while (true)
                sub_140b3e780()
                int64_t* rdi_1 = rbx_2 + 0x10
                int64_t* rdx_8 = rdi_1
                
                if (((data_143de7b0c ^ *(rbx_2 + 4)) | (data_143de7b08 ^ *rbx_2)
                        | (data_143de7b04 ^ *(rbx_2 - 4)) | (data_143de7b00 ^ *(rbx_2 - 8))) != 0)
                    rdx_8 = nullptr
                
                if (rdx_8 == 0)
                    sub_140b3e280()
                    int64_t* rax_13 = rdi_1
                    
                    if (((data_143de7b54 ^ *(rbx_2 + 4)) | (data_143de7b50 ^ *rbx_2)
                            | (data_143de7b4c ^ *(rbx_2 - 4)) | (data_143de7b48 ^ *(rbx_2 - 8))) != 0)
                        rax_13 = nullptr
                    
                    if (rax_13 == 0)
                        sub_140b3e480()
                        
                        if (((data_143de7b3c ^ *(rbx_2 + 4)) | (data_143de7b38 ^ *rbx_2)
                                | (data_143de7b34 ^ *(rbx_2 - 4))
                                | (data_143de7b30 ^ *(rbx_2 - 8))) != 0)
                            rdi_1 = nullptr
                        
                        if (rdi_1 != 0)
                            int64_t rdx_21 = sx.q(*rdi_1)
                            
                            if (rdx_21.d s< 0 || rdx_21.d s>= *(arg4 + 8))
                                if (arg6 != 0)
                                    int128_t var_128 = zx.o(0)
                                    void var_d8
                                    int64_t* rax_25 =
                                        sub_140aa10e0(&var_d8, rdx_21.d, nullptr, &var_128)
                                    void var_100
                                    char* var_e8
                                    char** rax_27 = sub_140a96390(&var_e8, 
                                        _vfprintf_p_l(&var_100, Invalid argument index: {0}", 
                                        StringFormatter"))
                                    int64_t rcx_32 = *rax_25
                                    int64_t* rcx_33 = rax_25[1]
                                    int32_t var_88_1 = 4
                                    
                                    if (rcx_33 != 0)
                                        rcx_33[1].d += 1
                                    
                                    int32_t rcx_34 = rax_25[2].d
                                    char var_60_1 = 1
                                    int32_t* var_170 = nullptr
                                    int32_t var_168_1 = 1
                                    sub_1405a4b40(&var_170, 1, 0)
                                    int32_t* rcx_36 = var_170
                                    *rcx_36 = var_88_1
                                    int64_t var_80
                                    *(rcx_36 + 8) = var_80
                                    *(rcx_36 + 8) = var_80
                                    rcx_36[2] = var_80.d
                                    *(rcx_36 + 8) = var_80
                                    rcx_36[0xa].b = 0
                                    
                                    if (var_60_1 != 0)
                                        *(rcx_36 + 0x10) = rcx_32
                                        *(rcx_36 + 0x18) = rcx_33
                                        
                                        if (rcx_33 != 0)
                                            rcx_33[1].d += 1
                                        
                                        rcx_36[8] = rcx_34
                                        rcx_36[0xa].b = 1
                                    
                                    char* var_138 = *rax_27
                                    void* rax_35 = rax_27[1]
                                    void* var_130_1 = rax_35
                                    
                                    if (rax_35 != 0)
                                        *(rax_35 + 8) += 1
                                    
                                    void var_118
                                    int64_t* rax_36 = sub_140aac870(&var_118, &var_138, &var_170)
                                    int64_t var_150 = *rax_36
                                    int64_t* rcx_39 = rax_36[1]
                                    
                                    if (rcx_39 != 0)
                                        rcx_39[1].d += 1
                                    
                                    int32_t var_140_1 = rax_36[2].d
                                    int64_t* var_110
                                    
                                    if (var_110 != 0)
                                        var_110[1].d -= 1
                                        
                                        if (var_110[1].d == 1)
                                            (**var_110)(var_110)
                                            int32_t rax_40 = *(var_110 + 0xc)
                                            *(var_110 + 0xc) -= 1
                                            
                                            if (rax_40 == 1)
                                                (*(*var_110 + 8))(var_110, 1)
                                    
                                    sub_140596f50(&var_170)
                                    
                                    if (var_60_1 != 0)
                                        char var_60_2 = 0
                                        
                                        if (rcx_33 != 0)
                                            rcx_33[1].d -= 1
                                            
                                            if (rcx_33[1].d == 1)
                                                (**rcx_33)(rcx_33)
                                                int32_t rax_44 = *(rcx_33 + 0xc)
                                                *(rcx_33 + 0xc) -= 1
                                                
                                                if (rax_44 == 1)
                                                    (*(*rcx_33 + 8))(rcx_33, 1)
                                    
                                    int64_t* rdi_6 = rax_27[1]
                                    
                                    if (rdi_6 != 0)
                                        rdi_6[1].d -= 1
                                        
                                        if (rdi_6[1].d == 1)
                                            (**rdi_6)(rdi_6)
                                            int32_t rax_48 = *(rdi_6 + 0xc)
                                            *(rdi_6 + 0xc) -= 1
                                            
                                            if (rax_48 == 1)
                                                (*(*rdi_6 + 8))(rdi_6, 1)
                                    
                                    int64_t* rdi_7 = rax_25[1]
                                    
                                    if (rdi_7 != 0)
                                        rdi_7[1].d -= 1
                                        
                                        if (rdi_7[1].d == 1)
                                            (**rdi_7)(rdi_7)
                                            int32_t rax_52 = *(rdi_7 + 0xc)
                                            *(rdi_7 + 0xc) -= 1
                                            
                                            if (rax_52 == 1)
                                                (*(*rdi_7 + 8))(rdi_7, 1)
                                    
                                    int64_t* var_158 = &var_150
                                    sub_140b2b3b0(arg2, &var_158)
                                    
                                    if (rcx_39 != 0)
                                        rcx_39[1].d -= 1
                                        
                                        if (rcx_39[1].d == 1)
                                            (**rcx_39)(rcx_39)
                                            int32_t rax_56 = *(rcx_39 + 0xc)
                                            *(rcx_39 + 0xc) -= 1
                                            
                                            if (rax_56 == 1)
                                                (*(*rcx_39 + 8))(rcx_39, 1)
                                    
                                    int64_t* var_f8
                                    
                                    if (var_f8 != 0)
                                        var_f8[1].d -= 1
                                        
                                        if (var_f8[1].d == 1)
                                            (**var_f8)(var_f8)
                                            int32_t rax_60 = *(var_f8 + 0xc)
                                            *(var_f8 + 0xc) -= 1
                                            
                                            if (rax_60 == 1)
                                                (*(*var_f8 + 8))(var_f8, 1)
                                    
                                    int64_t* rdi_10 = var_128:8.q
                                    
                                    if (rdi_10 != 0)
                                        rdi_10[1].d -= 1
                                        
                                        if (rdi_10[1].d == 1)
                                            (**rdi_10)(rdi_10)
                                            int32_t rbx_5 = *(rdi_10 + 0xc)
                                            *(rdi_10 + 0xc) -= 1
                                            
                                            if (rbx_5 == 1)
                                                (*(*rdi_10 + 8))(rdi_10, zx.q(rbx_5))
                                    
                                    int64_t rcx_56 = var_188
                                    
                                    if (rcx_56 != 0)
                                        sub_140a74f90(rcx_56)
                                    
                                    break
                                
                                int64_t rdx_23 = rdi_1[1]
                                sub_140a20ba0(&var_188, rdx_23, ((rdi_1[2] - rdx_23) s>> 1).d)
                            else
                                sub_140b33360((rdx_21 << 5) + *arg4, &var_188)
                    else
                        int16_t rsi_1 = *rax_13
                        
                        if (rsi_1 != 0)
                            int32_t rdx_15 = var_180_1.d
                            int32_t rdi_2 = rdx_15 - 1
                            
                            if (rdx_15 s<= 0)
                                rdi_2 = 0
                            
                            int32_t rax_14
                            rax_14.b = rdx_15 s<= 0
                            int32_t rax_16 = rax_14 + 1 + rdx_15
                            var_180_1.d = rax_16
                            
                            if (rax_16 s> var_180_1:4.d)
                                sub_140594770(&var_188)
                            
                            int64_t rcx_14 = sx.q(rdi_2)
                            *(var_188 + (rcx_14 << 1)) = rsi_1
                            *(var_188 + (rcx_14 << 1) + 2) = 0
                else
                    sub_140a20ba0(&var_188, *rdx_8, rdx_8[3].d)
                
                rbx_2 += 0x58
                
                if (rbx_2 - 8 == r15_2)
                    goto label_140b3b98e
            
            sub_140a98ff0(&var_c0)
    else
        int64_t* var_160 = &var_178
        sub_140b2b2d0(arg2, &var_160)
        sub_140a98ff0(&var_c0)
__security_check_cookie(rax_1 ^ &var_1a8)
return arg2
