// 函数: sub_140e67e20
// 地址: 0x140e67e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
uint64_t result

if (*(arg1 + 0x1a) == 0)
    result.b = 7
else
    int64_t r9_1 = sx.q(*(arg2 + 0xc))
    int32_t rax = *(arg1 + 0xb0)
    int32_t arg_8 = r9_1.d
    void* r14_1
    
    if (rax == *(arg1 + 0xdc))
    label_140e67eba:
        r14_1 = sub_140e48310(arg1 + 0xa8, r9_1.d, &arg_8)
    else
        void* rcx = *(arg1 + 0xe8)
        void* r8_1 = arg1 + 0xe0
        
        if (rcx != 0)
            r8_1 = rcx
        
        result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0xf0)) - 1) & r9_1) << 2)))
        
        if (result.d == 0xffffffff)
        label_140e67eba_1:
            r14_1 = sub_140e48310(arg1 + 0xa8, r9_1.d, &arg_8)
        else
            int32_t* rcx_4
            
            while (true)
                rcx_4 = sx.q(result.d) * 0x60 + *(arg1 + 0xa8)
                
                if (*rcx_4 == r9_1.d)
                    break
                
                result = zx.q(rcx_4[0x16])
                
                if (result.d == 0xffffffff)
                    goto label_140e67eba_2
            
            if (result.d == 0xffffffff || rcx_4 == 0)
            label_140e67eba_2:
                r14_1 = sub_140e48310(arg1 + 0xa8, r9_1.d, &arg_8)
            else
                r14_1 = &rcx_4[2]
    
    int64_t* rbx_1 = *(arg2 + 0x28)
    int64_t r12_1 = *(arg2 + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t r15_1 = *(arg1 + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int128_t var_58
    int32_t var_48
    char* var_40
    void arg_18
    char* r9_3
    int128_t zmm1
    
    if (r12_1 != r15_1)
        int64_t* rbx_2 = *(arg2 + 0x28)
        int64_t r12_2 = *(arg2 + 0x18)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t r15_2 = *(arg1 + 0x40)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (r12_2 != r15_2)
            result.b = 7
        else
            zmm1 = *(arg2 + 0x38)
            int128_t zmm0 = *(arg1 + 0x20)
            
            if (zmm1.d f<= zmm0.d)
                if (zmm1.d f>= (zmm0 ^ data_142d3f780).d)
                    var_40.d = 0
                    zmm6 = zx.o(0)
                    sub_140a696e0(r14_1, &var_58)
                    int32_t var_50
                    char* r9_4 = var_50.q
                    int32_t rax_6 = var_58.d
                    int128_t zmm0_3
                    zmm0_3.q = (zx.o(0)).q
                    *r9_4 = 2
                    *(r9_4 + 8) = zmm0_3
                    *(r9_4 + 0x18) = 0xffffffff
                    var_48.o = zmm0_3
                    sub_140e61b30(r14_1, &arg_18, zx.d(*r9_4), r9_4, rax_6, nullptr)
                    var_40.d = 0
                    sub_140a696e0(r14_1, &var_58)
                    r9_3 = var_50.q
                    *r9_3 = 3
                    goto label_140e68082
                
                result.b = 3
            else
                result.b = 2
    else
        zmm1 = *(arg1 + 0x1c)
        int32_t zmm2 = *(arg2 + 0x38)
        
        if (not(zmm2 f>= (zmm1 ^ data_142d3f780).d))
            result.b = 0
        else if (zmm2 f<= zmm1.d)
            int32_t var_50_1 = 0
            zmm6 = zx.o(0)
            sub_140a696e0(r14_1, &var_48)
            int32_t rax_3 = var_48
            int128_t zmm0_1
            zmm0_1.q = (zx.o(0)).q
            *var_40 = 0
            *(var_40 + 8) = zmm0_1
            *(var_40 + 0x18) = 0xffffffff
            uint32_t r8_4 = zx.d(*var_40)
            var_58 = zmm0_1
            sub_140e61b30(r14_1, &arg_18, r8_4, var_40, rax_3, nullptr)
            var_40.d = 0
            sub_140a696e0(r14_1, &var_58)
            r9_3 = var_50_1.q
            *r9_3 = 1
        label_140e68082:
            int32_t rax_7 = var_58.d
            int128_t zmm0_2
            zmm0_2.q = zmm6.q
            *(r9_3 + 8) = zmm0_2
            *(r9_3 + 0x18) = 0xffffffff
            sub_140e61b30(r14_1, &arg_18, zx.d(*r9_3), r9_3, rax_7, nullptr)
            result.b = 7
        else
            result.b = 1

return result
