// 函数: sub_141f0fb00
// 地址: 0x141f0fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48
int64_t* var_40
int64_t var_30

if (sub_141dcded0(*(arg1 + 0xa0)) != 0)
    int64_t* rcx_1 = *(arg1 + 0xa0)
    var_48 = *arg2
    var_40 = arg2[1]
    void* rax_3 = arg2[2]
    void* var_38_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    (*(*rcx_1 + 0x358))(rcx_1, &var_48)
    
    if (sub_141dcded0(*(arg1 + 0xa0)) != 0)
        int64_t* rbx_1 = arg2[2]
        int64_t r14_1 = *arg2
        int64_t r15_1 = arg2[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void* rdi_1 = *(arg1 + 0xa0)
        sub_141f19600(rdi_1 + 0x187, &var_48)
        int64_t* rcx_4 = var_48
        
        if (rcx_4 != 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            var_30 = r14_1
            int64_t var_28_1 = r15_1
            int64_t* var_20_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            sub_141f11b50(rcx_4, rdi_1, &var_30)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp14_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp7_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp10_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int32_t rax_12 = *(arg1 + 0xc)
void* const rax_19

if (rax_12 s>= data_143e1d9b4)
    rax_19 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_12)
    uint32_t rdx_4 = zx.d(temp0_1)
    int32_t rax_14 = temp1_1 + rdx_4
    rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(zx.d(rax_14.w) - rdx_4) * 0x18

uint8_t result = (*(rax_19 + 8) u>> 0x1d).b

if ((result & 1) == 0)
    int64_t* rbx_2 = arg2[2]
    int64_t rdi_3 = *arg2
    int64_t r14_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    result = sub_141f1a3c0(arg1 + 0x3e0, &var_48)
    int64_t* rcx_16 = var_48
    
    if (rcx_16 != 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        var_30 = rdi_3
        int64_t var_28_2 = r14_2
        int64_t* var_20_2 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        result = sub_141f11b50(rcx_16, arg1, &var_30)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp15_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            result = (**var_40)(var_40)
            int32_t temp9_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*var_40 + 8))(var_40, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp12_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg2[2]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx_3 + 8))

return result
