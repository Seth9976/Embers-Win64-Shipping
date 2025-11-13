// 函数: sub_142366ad0
// 地址: 0x142366ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) += 0x68
int32_t i = 0
int64_t result = *(arg2 + 0x28)
int64_t r9 = result + ((sx.q(arg1[1].d) * 0x5c + sx.q(*(arg1 + 0xc))) << 3)
*(arg2 + 0x28) = r9

if (arg1[1].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        void* rdi_1 = *(r15_1 + *arg1)
        int32_t rbx_1 = *(rdi_1 + 0x1b0)
        int32_t rbp_6 = (*(rdi_1 + 0xe8) * *(rdi_1 + 0xe4) + *(rdi_1 + 0xe0)) * *(rdi_1 + 0xec)
            + *(rdi_1 + 0x16c) * *(rdi_1 + 0x168) + *(rdi_1 + 0x12c) * *(rdi_1 + 0x128)
        
        if (rbx_1 s< 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(*(rdi_1 + 0x1a0))
            
            if (*(rdi_1 + 0x1b4) == 0)
                rbx_1 = (temp1_1 - temp0_1) s>> 1
            else
                rbx_1 = ((temp0_1 & 3) + temp1_1) s>> 2
        
        void* rcx = *(rdi_1 + 0x1f8)
        
        if (rcx != 0)
            int32_t rax_11 = *(rcx + 0x78)
            
            if (rax_11 s< 0)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(rcx + 0x68))
                
                if (*(rcx + 0x7c) == 0)
                    rax_11 = (temp3_1 - temp2_1) s>> 1
                else
                    rax_11 = (temp3_1 + (temp2_1 & 3)) s>> 2
            
            int32_t rax_16 = *(rcx + 0x38)
            
            if (rax_16 s< 0)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(*(rcx + 0x28))
                
                if (*(rcx + 0x3c) == 0)
                    rax_16 = (temp5_1 - temp4_1) s>> 1
                else
                    rax_16 = (temp5_1 + (temp4_1 & 3)) s>> 2
            
            int32_t rax_21 = *(rcx + 0xb8)
            
            if (rax_21 s< 0)
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(*(rcx + 0xa8))
                
                if (*(rcx + 0xbc) == 0)
                    rax_21 = (temp7_1 - temp6_1) s>> 1
                else
                    rax_21 = (temp7_1 + (temp6_1 & 3)) s>> 2
            
            int32_t rax_28
            
            if (sub_1419803d0((*U"1111")[sx.q(data_1439c7a08)]) == 0)
                rax_28 = 0
            else
                void* rcx_2 = *(rdi_1 + 0x1f8)
                rax_28 = *(rcx_2 + 0xf8)
                
                if (rax_28 s< 0)
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(*(rcx_2 + 0xe8))
                    
                    if (*(rcx_2 + 0xfc) == 0)
                        rax_28 = (temp9_1 - temp8_1) s>> 1
                    else
                        rax_28 = (temp9_1 + (temp8_1 & 3)) s>> 2
            
            r9 = *(arg2 + 0x28)
            rbx_1 = rbx_1 + rax_11 + rax_16 + rax_21 + rax_28
        
        int32_t rax_33 = 2
        
        if (*(rdi_1 + 0x1b4) != 0)
            rax_33 = 4
        
        int64_t rdx_11 = sx.q(rax_33 * rbx_1 + rbp_6) + r9
        *(arg2 + 0x28) = rdx_11
        int64_t rax_36 = sx.q(*(rdi_1 + 0x34))
        int64_t rcx_4
        
        if (rax_36.d u<= 1)
            rcx_4 = 0
        else
            rcx_4 = rax_36 * 0x18
        
        r9 = rdx_11 + rcx_4
        *(arg2 + 0x28) = r9
        result = *(rdi_1 + 0x38)
        
        if (result != 0)
            *(arg2 + 8) -= -0x80
            result = sx.q(*(result + 0x14))
            *(arg2 + 8) += result
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< arg1[1].d)

return result
