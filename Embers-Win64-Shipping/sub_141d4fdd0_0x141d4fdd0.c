// 函数: sub_141d4fdd0
// 地址: 0x141d4fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
uint128_t var_78 = zx.o(0)
void* rbx = arg1
uint128_t zmm0 = arg3[1]
int32_t r12 = 0
uint128_t var_58 = *arg3
uint128_t var_48 = zmm0
int32_t arg_18 = 0
int32_t result = (*(*arg2 + 0x10))(rdi, &var_58, &var_78)

while (result.b != 0)
    uint128_t var_68
    
    if (var_78.q != 0)
        zmm0 = var_78
        r12 |= 1
        var_68 = zmm0
        void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        int32_t rsi_1 = *(rbx + 0x98)
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t r14_2 = sx.q(rsi_2) << 4
            int32_t temp2_1
            
            do
                int64_t* rdi_1 = *(rbx + 0x90)
                int64_t* rbx_1 = *(rdi_1 + r14_2 + 8)
                
                if (rbx_1 == 0)
                    sub_141c8bf50(rbx + 0x90, rsi_2, 1, 1)
                else
                    int32_t rax_2 = 0
                    bool z_1
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_1 = true
                    else
                        rax_2 = rbx_1[1].d
                        z_1 = false
                    
                    if (z_1)
                    label_141d4fed7:
                        rbx_1 = nullptr
                        sub_141c8bf50(rbx + 0x90, rsi_2, 1, 1)
                    else
                        while (true)
                            bool z_2
                            
                            if (rax_2 == rbx_1[1].d)
                                rbx_1[1].d = rax_2 + 1
                                z_2 = true
                            else
                                rbx_1[1].d
                                z_2 = false
                            
                            if (z_2)
                                break
                            
                            rax_2 = 0
                            bool z_3
                            
                            if (0 == rbx_1[1].d)
                                rbx_1[1].d = 0
                                z_3 = true
                            else
                                rax_2 = rbx_1[1].d
                                z_3 = false
                            
                            if (z_3)
                                goto label_141d4fed7
                        
                        if (rbx_1 == 0)
                            sub_141c8bf50(rbx + 0x90, rsi_2, 1, 1)
                        else
                            int64_t* rdi_2 = *(rdi_1 + r14_2)
                            
                            if (rdi_2 == 0)
                                sub_141c8bf50(rbx + 0x90, rsi_2, 1, 1)
                            else if ((*(*rdi_2 + 8))(rdi_2) s< 0x100)
                                (**rdi_2)(rdi_2, &var_68)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_6 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_6 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                r14_2 -= 0x10
                temp2_1 = rsi_2
                rsi_2 -= 1
            while (temp2_1 - 1 s>= 0)
            rdi = arg2
    
    if ((r12.b & 1) != 0)
        int64_t* rbx_2 = var_68:8.q
        r12 &= 0xfffffffe
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_10 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t rax_12 = *rdi
    uint128_t zmm1 = arg3[1]
    var_58 = *arg3
    uint128_t var_48_1 = zmm1
    result = (*(rax_12 + 0x10))(rdi, &var_58, &var_78)
    rbx = arg1

int64_t* rbx_3 = var_78:8.q

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rbp_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rbp_1))

return result
