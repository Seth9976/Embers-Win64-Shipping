// 函数: sub_141badc80
// 地址: 0x141badc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(arg3)
int32_t* rax = j_sub_140a82f30(0x10)
int32_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = data_143dbb1f0.d
    rax[1] = data_143dbb1f0:4.d
    rax[2] = data_143dbb1f0.d
    rax[3] = data_143dbb1f0:4.d

void*** rax_1
char r9
rax_1, r9 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142ec7b18
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*rbx = zmm6.q
*(rbx + 8) = *(arg1 + 0x538)
*(arg1 + 0x538) = zmm6.q
*arg2 = 0
arg2[1] = 0
void* rcx = *(arg1 + 0x528)

if (rcx != 0)
    int512_t zmm3
    zmm3.o = arg5
    int32_t var_50_1 = 0xffffffff
    int128_t var_38
    int64_t* rax_5 = sub_140da3370(sub_140e14f20(rcx), &var_38, zmm6.q, r9, arg4)
    
    if (arg2 != rax_5)
        int32_t i_1 = arg2[1].d
        void* rcx_2 = *arg2
        
        if (i_1 != 0)
            void* rdi_1 = rcx_2 + 0x40
            int32_t i
            
            do
                int64_t* rbx_1 = *(rdi_1 + 0x10)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp5_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                int64_t* rbx_2 = *rdi_1
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp7_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_1 += 0x58
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_2 = *arg2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *arg2 = *rax_5
        *rax_5 = 0
        arg2[1].d = rax_5[1].d
        *(arg2 + 0xc) = *(rax_5 + 0xc)
        rax_5[1] = 0
    
    sub_140d94ad0(&var_38)
    void* rbp_1 = *arg2
    void* r15_3 = sx.q(arg2[1].d) * 0x58 + rbp_1
    
    if (rbp_1 != r15_3)
        int64_t* rsi_1 = rbp_1 + 0x48
        
        do
            var_38 = rbx.o
            
            if (rax_1 != 0)
                rax_1[1].d += 1
            
            int64_t* rbx_4 = var_38:8.q
            
            if (rsi_1 == &var_38)
            label_141badedd:
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp8_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            else
                *rsi_1 = var_38.q
                int64_t* rdi_2 = rsi_1[1]
                
                if (rbx_4 == rdi_2)
                    goto label_141badedd
                
                rsi_1[1] = rbx_4
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp10_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbp_1 += 0x58
            rsi_1 = &rsi_1[0xb]
        while (rbp_1 != r15_3)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t temp1_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_1)[1](rax_1, 1)

return arg2
