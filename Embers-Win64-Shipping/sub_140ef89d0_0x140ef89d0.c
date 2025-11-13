// 函数: sub_140ef89d0
// 地址: 0x140ef89d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[3].d)
int64_t var_70_2
void* var_68
int64_t* rcx_2
int64_t r10
uint128_t zmm0
int32_t arg_8
int32_t arg_18

if (rbp.d != 0)
    int32_t i = *arg3
    int64_t r8_1 = 0
    int32_t rbx_1 = 0
    int32_t rdi_3
    
    if (rbp.d s<= 0x10)
        int32_t rdx_5 = (rbp - 1).d
        
        if (i != 0 && rdx_5 s> 0)
            int32_t* rax_17 = arg1[2]
            
            while (*rax_17 s< i)
                rbx_1 += 1
                r8_1 += 1
                rax_17 = &rax_17[2]
                
                if (r8_1 s>= sx.q(rdx_5))
                    break
        
        rdi_3 = rbx_1
        
        if (rbx_1 != rdx_5 && rbx_1 s< rbp.d)
            int64_t rcx_8 = sx.q(rbx_1)
            int32_t* rdx_8 = arg1[2] + 4 + (rcx_8 << 3)
            
            while (*rdx_8 s< arg3[1])
                rdi_3 += 1
                rcx_8 += 1
                rdx_8 = &rdx_8[2]
                
                if (rcx_8 s>= rbp)
                    break
    else
        if (i != 0)
            int32_t r9_2 = arg1[3].d
            int32_t r11_1 = 0
            int32_t r9_3 = r9_2 - 1
            
            if (r9_2 - 1 s>= 0)
                int32_t rax_9
                
                do
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r9_3 - r11_1)
                    rbx_1 = r11_1 + ((temp2_1 - temp1_1) s>> 1)
                    int32_t temp3_1 = *(arg1[2] + (sx.q(rbx_1) << 3))
                    
                    if (temp3_1 == i)
                        break
                    
                    rax_9 = rbx_1 + 1
                    
                    if (temp3_1 s>= i)
                        r9_3 = rbx_1 - 1
                    
                    if (temp3_1 s>= i)
                        rax_9 = r11_1
                    
                    r11_1 = rax_9
                while (r9_3 s>= rax_9)
        
        rdi_3 = rbx_1
        
        if (rbx_1 != (rbp - 1).d)
            int32_t r11_2 = arg3[1]
            rdi_3 = 0
            int32_t r9_4 = rbx_1
            int32_t r8_3 = arg1[3].d - 1
            
            if (r8_3 s>= rbx_1)
                int32_t rax_16
                
                do
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r8_3 - r9_4)
                    rdi_3 = r9_4 + ((temp5_1 - temp4_1) s>> 1)
                    int32_t temp6_1 = *(arg1[2] + (sx.q(rdi_3) << 3) + 4)
                    
                    if (temp6_1 == r11_2)
                        break
                    
                    rax_16 = rdi_3 + 1
                    
                    if (temp6_1 s>= r11_2)
                        r8_3 = rdi_3 - 1
                    
                    if (temp6_1 s>= r11_2)
                        rax_16 = r9_4
                    
                    r9_4 = rax_16
                while (r8_3 s>= rax_16)
    
    int64_t r8_5 = arg1[2]
    int64_t rdx_9 = sx.q(rbx_1)
    int32_t rax_18 = *(r8_5 + (rdx_9 << 3))
    int32_t arg_c
    
    if (rbx_1 != rdi_3)
        uint128_t zmm6
        int128_t zmm7
        
        if (rax_18 != i)
            int64_t* rcx_10 = *arg1
            int128_t* rax_24 = (*(*rcx_10 + 0x28))(rcx_10, &arg_8, zx.q(i), 
                zx.q(*(r8_5 + (rdx_9 << 3) + 4)), arg4.d, arg6)
            zmm7 = *rax_24
            zmm6 = *(rax_24 + 4)
        else
            int64_t rax_22 = arg1[4]
            zmm7 = *(rax_22 + (rdx_9 << 3))
            zmm6 = *(rax_22 + (rdx_9 << 3) + 4)
        
        int64_t r8_8 = sx.q(rdi_3)
        int64_t rdx_12 = sx.q(rbx_1 + 1)
        arg_c = zmm6.d
        
        if (rdx_12 s< r8_8)
            if (r8_8 - rdx_12 s>= 4)
                int64_t i_2 = ((r8_8 - rdx_12 - 4) u>> 2) + 1
                void* rcx_13 = arg1[4] + 8 + (rdx_12 << 3)
                rdx_12 += i_2 << 2
                int64_t i_1
                
                do
                    zmm0 = *(rcx_13 - 4)
                    zmm7.d = zmm7.d f+ *(rcx_13 - 8)
                    
                    if (not(zmm0.d f< zmm6.d))
                        arg_c = zmm0.d
                        zmm6 = zmm0
                    
                    zmm0 = *(rcx_13 + 4)
                    zmm7.d = zmm7.d f+ *rcx_13
                    
                    if (not(zmm0.d f< zmm6.d))
                        arg_c = zmm0.d
                        zmm6 = zmm0
                    
                    zmm0 = *(rcx_13 + 0xc)
                    zmm7.d = zmm7.d f+ *(rcx_13 + 8)
                    
                    if (not(zmm0.d f< zmm6.d))
                        arg_c = zmm0.d
                        zmm6 = zmm0
                    
                    zmm0 = *(rcx_13 + 0x14)
                    zmm7.d = zmm7.d f+ *(rcx_13 + 0x10)
                    
                    if (not(zmm0.d f< zmm6.d))
                        arg_c = zmm0.d
                        zmm6 = zmm0
                    
                    rcx_13 += 0x20
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            if (rdx_12 s< r8_8)
                int64_t rax_32 = arg1[4]
                
                do
                    zmm0 = *(rax_32 + (rdx_12 << 3) + 4)
                    zmm7.d = zmm7.d f+ *(rax_32 + (rdx_12 << 3))
                    
                    if (not(zmm0.d f< zmm6.d))
                        zmm6 = zmm0
                    
                    rdx_12 += 1
                while (rdx_12 s< r8_8)
                
                arg_c = zmm6.d
        
        int64_t rdx_13 = arg1[2]
        int32_t r9_7 = arg3[1]
        
        if (*(rdx_13 + (r8_8 << 3) + 4) != r9_7)
            int64_t* rcx_14 = *arg1
            (*(*rcx_14 + 0x28))(rcx_14, &arg_18, zx.q(*(rdx_13 + (r8_8 << 3))), r9_7, arg4.d, arg6)
            zmm0 = arg5
            zmm7.d = zmm7.d f+ arg_18
        else
            int64_t rax_33 = arg1[4]
            zmm7.d = zmm7.d f+ *(rax_33 + (r8_8 << 3))
            zmm0 = *(rax_33 + (r8_8 << 3) + 4)
        
        arg_8 = zmm7.d
        
        if (not(zmm0.d f< zmm6.d))
            arg_c = zmm0.d
    else
        int32_t r9_5 = arg3[1]
        int32_t zmm1
        
        if (rax_18 != i || *(r8_5 + (rdx_9 << 3) + 4) != r9_5)
            int64_t* rcx_9 = *arg1
            uint128_t* rax_21 = (*(*rcx_9 + 0x28))(rcx_9, &arg_18, zx.q(i), r9_5, arg4.d, arg6)
            zmm1 = *(rax_21 + 4)
            arg_8 = (*rax_21).d
            arg_c = zmm1
        else
            int64_t rax_19 = arg1[4]
            zmm1 = *(rax_19 + (rdx_9 << 3) + 4)
            arg_8 = (*(rax_19 + (rdx_9 << 3))).d
            arg_c = zmm1
    rcx_2 = *arg1
    zmm0 = zx.o(arg_8.q)
    var_68 = &arg3[2]
    var_70_2 = arg6
    r10 = *rcx_2
else
    int64_t* rcx = *arg1
    (*(*rcx + 8))(rcx, &arg_8)
    int64_t* rdi_1 = *arg1
    int64_t* rax_3 = (*(*rdi_1 + 0x28))(rdi_1, &arg_18, zx.q(*arg3), zx.q(arg3[1]), arg4.d, arg6)
    r10 = *rdi_1
    var_68 = &arg3[2]
    rcx_2 = rdi_1
    var_70_2 = arg6
    zmm0 = zx.o(*rax_3)
int32_t var_78
var_78.q = zmm0.q
(*(r10 + 0x38))(rcx_2, zmm0, arg2, zx.q(*arg3), zx.q(arg3[1]), var_70_2, var_68)
return arg2
