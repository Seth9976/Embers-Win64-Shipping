// 函数: sub_140e75b20
// 地址: 0x140e75b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
uint64_t result = __security_cookie ^ &var_1e8
uint64_t result_1 = result
int64_t* r9 = *(arg1 + 0x50)
int64_t* rcx = r9
int64_t* r14 = arg2
void* r8_2 = &r9[sx.q(*(arg1 + 0x58)) * 2]

if (r9 != r8_2)
    do
        result = *rcx
        
        if (result != 0 && result == *arg2)
            int32_t rcx_2 = ((rcx - r9) s>> 4).d
            
            if (rcx_2 != 0xffffffff)
                int32_t rdx = *(arg1 + 0x58)
                result = zx.q(rdx - 1)
                int64_t rbp_1 = sx.q(rcx_2)
                int64_t rdi_1 = sx.q(result.d)
                
                if (rdi_1 s> rbp_1)
                    int64_t rbx_2 = rdi_1 << 4
                    int64_t i_2 = rdi_1 - rbp_1
                    int64_t i
                    
                    do
                        int64_t* rcx_3 = *(rbx_2 + *(arg1 + 0x50))
                        result = (*(*rcx_3 + 0x38))(rcx_3)
                        rbx_2 -= 0x10
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rdx = *(arg1 + 0x58)
                
                int32_t rsi_1 = rdx - 1
                int64_t rdi_2 = sx.q(rsi_1)
                
                if (rdi_2 s>= rbp_1)
                    int64_t r14_2 = rdi_2 << 4
                    int64_t i_3 = rdi_2 - rbp_1 + 1
                    int64_t i_1
                    
                    do
                        int64_t* rcx_4 = *(r14_2 + *(arg1 + 0x50))
                        void var_1b0
                        int64_t* rax_5 = (*(*rcx_4 + 0x20))(rcx_4, &var_1b0)
                        int64_t* rbx_3 = rax_5[1]
                        int64_t var_1c0 = *rax_5
                        int64_t* var_1b8_1 = rbx_3
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        sub_140e85c90(arg1 + 0x60, &var_1c0)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp8_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        int64_t* var_1a8
                        
                        if (var_1a8 != 0)
                            var_1a8[1].d -= 1
                            
                            if (var_1a8[1].d == 1)
                                (**var_1a8)(var_1a8)
                                int32_t temp9_1 = *(var_1a8 + 0xc)
                                *(var_1a8 + 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    (*(*var_1a8 + 8))(var_1a8, 1)
                        
                        result = sub_140dbae50(arg1 + 0x50, rsi_1, 1, 1)
                        rsi_1 -= 1
                        r14_2 -= 0x10
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rdx = *(arg1 + 0x58)
                    r14 = arg2
                
                if (rdx == 0)
                    if (*(arg1 + 0xb0) != 0xffffffff)
                        sub_140db35c0(sub_140da2c00(), arg1 + 0xb0)
                    
                    void var_1a0
                    sub_140e88d80(arg1, sub_140d947e0(&var_1a0))
                    void var_50
                    sub_140596d80(&var_50)
                    int64_t* var_58
                    
                    if (var_58 != 0)
                        var_58[1].d -= 1
                        
                        if (var_58[1].d == 1)
                            (**var_58)(var_58)
                            int32_t temp5_1 = *(var_58 + 0xc)
                            *(var_58 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_58 + 8))(var_58, 1)
                    
                    void var_198
                    result = sub_140d94d20(&var_198)
            
            break
        
        rcx = &rcx[2]
    while (rcx != r8_2)

int64_t* rbx_6 = r14[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp1_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

__security_check_cookie(result_1 ^ &var_1e8)
return result
