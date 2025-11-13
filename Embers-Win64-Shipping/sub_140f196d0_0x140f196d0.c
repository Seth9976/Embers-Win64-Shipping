// 函数: sub_140f196d0
// 地址: 0x140f196d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[2]
void* r14 = &arg1[2]
void* rsi_2 = (sx.q(*(r14 + 8)) << 5) + rdi
void* arg_8 = r14

if (rdi != rsi_2)
    float* rbx_1 = rdi + 0x10
    
    do
        int32_t var_48[0x4]
        int32_t* rax_1
        rax_1, arg2 = sub_140e69d90(data_143e29f28, &var_48, rbx_1)
        rdi += 0x20
        *rbx_1 = *rax_1
        rbx_1 = &rbx_1[8]
    while (rdi != rsi_2)

int64_t result

while (true)
    result = 0
    
    if (0 == arg1[5])
        arg1[5] = 0
    else
        result = arg1[5]
    
    int64_t result_1 = result
    int32_t i
    
    for (i = result.d & 0x3ffffff; i != 0; i = result.d & 0x3ffffff)
        if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                u< (result_1 & 0xfffffffffc000000))
            sub_140a2c900()
        
        if (i != 0)
            arg2 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18
        else
            arg2 = nullptr
        
        result = result_1
        bool z_1
        
        if (result == arg1[5])
            arg1[5] = zx.q(*(arg2 + 0x10)) | ((result_1 & 0xfffffffffc000000) + 0x4000000)
            z_1 = true
        else
            result = arg1[5]
            z_1 = false
        
        if (z_1)
            *(arg2 + 0x10) = 0
            break
        
        result = 0
        
        if (0 == arg1[5])
            arg1[5] = 0
        else
            result = arg1[5]
        
        result_1 = result
    
    if (i == 0)
        break
    
    void* rdi_4 = *(*((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18 + 8)
    result, arg2 = sub_140a24050(i)
    
    if (rdi_4 == 0)
        break
    
    void var_58
    sub_140ee80a0(arg1, &var_58, rdi_4)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp3_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    sub_1408daf60(rdi_4)
    arg2 = j_sub_140a74f90(rdi_4)

int32_t rbp_1 = arg1[3].d
int32_t rbp_2 = rbp_1 - 1

if (rbp_1 - 1 s>= 0)
    void* r15_2 = sx.q(rbp_2) << 5
    void* r12_1 = r15_2
    int64_t r13_2 = sx.q(rbp_2 + 1) << 5
    int32_t temp6_1
    
    do
        void* rax_18 = *r14
        int32_t rdi_5 = *(rax_18 + r15_2 + 8)
        void* r14_1 = rax_18 + r15_2
        int32_t rdi_6 = rdi_5 - 1
        
        if (rdi_5 - 1 s< 0)
            r14 = arg_8
        else
            int64_t rsi_6 = sx.q(rdi_6) << 4
            int32_t temp5_1
            
            do
                void* rcx_14 = *(rsi_6 + *r14_1)
                
                if (*(rcx_14 + 0x418) != 0)
                    int64_t* rbx_3 = *(rcx_14 + 0x3a8)
                    
                    if (rbx_3 != 0)
                        int32_t rax_14 = rbx_3[1].d
                        
                        if (rax_14 == 0)
                            rbx_3 = nullptr
                        else
                            rbx_3[1].d = rax_14 + 1
                            
                            if (rbx_3 != 0)
                                void* rcx_15 = *(rcx_14 + 0x3a0)
                                
                                if (rcx_15 != 0)
                                    sub_140e21770(rcx_15)
                    
                    arg2 = sub_140dbae50(r14_1, rdi_6, 1, 1)
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            arg2 = (**rbx_3)(rbx_3)
                            int32_t temp8_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                arg2 = (*(*rbx_3 + 8))(rbx_3, 1)
                
                rsi_6 -= 0x10
                temp5_1 = rdi_6
                rdi_6 -= 1
            while (temp5_1 - 1 s>= 0)
            r14 = arg_8
            rax_18 = *r14
        
        void*** rcx_19 = r12_1 + rax_18
        
        if (*(r15_2 + rax_18 + 8) != 0)
            result, arg2 = sub_140ee9e30(rcx_19, arg2.d)
        else
            sub_140596d80(rcx_19)
            int32_t rax_19 = *(r14 + 8)
            int32_t rcx_21 = rax_19 - rbp_2
            
            if (rcx_21 != 1)
                void* rax_20 = *r14
                memmove(rax_20 + r12_1, rax_20 + r13_2, (rcx_21 - 1) << 5)
                rax_19 = *(r14 + 8)
            
            *(r14 + 8) = rax_19 - 1
            result, arg2 = sub_1405dad20(r14)
        
        r13_2 -= 0x20
        r12_1 -= 0x20
        r15_2 -= 0x20
        temp6_1 = rbp_2
        rbp_2 -= 1
    while (temp6_1 - 1 s>= 0)

return result
