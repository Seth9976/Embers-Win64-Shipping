// 函数: sub_141fea190
// 地址: 0x141fea190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* i = arg1[0xa]
int64_t result = sx.q(arg1[0xb].d)

for (void* r15_1 = result * 0x38 + i; i != r15_1; i += 0x38)
    int64_t result_2
    
    if (*(i + 0x18) == 0)
        *(i + 0x30) = 0
        result_2 = 0
    label_141fea255:
        
        if (result_2 != 0)
            goto label_141fea262
    else
        result_2 = *(i + 0x30)
        
        if (result_2 == 0)
            void* rax = sub_140cde0b0()
            sub_140d19010(rax, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int64_t arg_8 = 0
            result = sub_140d2dfc0(sub_14249abd0(), rax, 0, 0, 0, 0, 0, 0, 0)
            result_2 = result
            *(i + 0x30) = result
            goto label_141fea255
        
    label_141fea262:
        *(result_2 + 0x160) = *(i + 0x18)
        sub_141fdc990(arg1, *(i + 0x18), *(i + 0x30))
        int64_t var_50
        sub_140a96170(&var_50)
        int32_t var_38_1 = 0
        void var_68
        int64_t* rax_3 = sub_141fe2790(arg1, &var_68, i)
        int64_t rdx_4 = var_50
        var_50 = *rax_3
        *rax_3 = rdx_4
        int64_t* var_48
        int64_t* rdx_5 = var_48
        var_48 = rax_3[1]
        rax_3[1] = rdx_5
        int32_t result_1 = rax_3[2].d
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_6 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        void* r14_1 = *(i + 0x30)
        int32_t var_38_2 = 0
        int32_t j_1 = *(r14_1 + 0x170)
        
        if (j_1 != 0)
            int64_t* rdi_2 = *(r14_1 + 0x168) + 8
            int32_t j
            
            do
                int64_t* rbx_3 = *rdi_2
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_10 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_10 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_2 = &rdi_2[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        *(r14_1 + 0x170) = 0
        
        if (*(r14_1 + 0x174) != 0)
            sub_1405a51b0(r14_1 + 0x168, 0)
        
        void* rbx_4 = *(i + 0x30)
        int64_t rdi_3 = sx.q(*(rbx_4 + 0x170))
        int32_t rax_12 = (rdi_3 + 1).d
        *(rbx_4 + 0x170) = rax_12
        
        if (rax_12 s> *(rbx_4 + 0x174))
            sub_1405c4e40(rbx_4 + 0x168)
        
        int64_t* rcx_15 = (rdi_3 << 5) + *(rbx_4 + 0x168)
        *rcx_15 = var_50
        rcx_15[1] = var_48
        
        if (var_48 != 0)
            var_48[1].d += 1
        
        result = zx.q(result_1)
        rcx_15[2].d = result.d
        rcx_15[3].d = var_38_2
        
        if (var_48 != 0)
            result = zx.q(var_48[1].d)
            var_48[1].d -= 1
            
            if (result.d == 1)
                (**var_48)(var_48)
                result = zx.q(*(var_48 + 0xc))
                *(var_48 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_48 + 8))(var_48, 1)

return result
