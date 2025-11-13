// 函数: sub_14063df70
// 地址: 0x14063df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14062c8d0(arg1, 0)
int64_t* rax = sub_1424c7800()
int64_t rcx = rax[0x23]
void* result

if (rcx != 0)
label_14063dfbc:
    int64_t* rax_1 = sub_1417b0b00(rcx)
    void* rdi_1 = *rax_1
    result = rdi_1 + sx.q(rax_1[1].d) * 0x28
    void* result_1 = result
    
    if (rdi_1 != result)
        do
            int64_t var_90 = 0
            int64_t var_88_1 = 0
            void var_a8
            int64_t* rax_3
            int512_t zmm6_1
            rax_3, zmm6_1 = sub_140d44c30(rdi_1 + 0x10, &var_a8, 1)
            int64_t var_80
            sub_140596d10(&var_80, sub_140ac6680(rax_3))
            int64_t* var_a0
            
            if (var_a0 != 0)
                var_a0[1].d -= 1
                
                if (var_a0[1].d == 1)
                    (**var_a0)(var_a0)
                    int32_t rax_7 = *(var_a0 + 0xc)
                    *(var_a0 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*var_a0 + 8))(var_a0, 1)
            
            void* rsi_1 = *(rdi_1 + 0x20)
            void* result_2 = *(rdi_1 + 0x18)
            int64_t r13_1 = *(rdi_1 + 0x10)
            
            if (rsi_1 != 0)
                *(rsi_1 + 8) += 1
            
            zmm6_1.o = *(rdi_1 + 8)
            int64_t var_b8
            int64_t* rax_9
            int32_t zmm6_2
            rax_9, zmm6_2 = sub_140b63b70(rdi_1, &var_b8)
            int32_t r12_1
            int64_t r14_1
            int32_t r15_1
            
            if (&var_90 == rax_9)
                r12_1 = var_88_1:4.d
                r15_1 = var_88_1.d
                r14_1 = var_90
            else
                int64_t rcx_9 = var_90
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                r14_1 = *rax_9
                *rax_9 = 0
                r15_1 = rax_9[1].d
                r12_1 = *(rax_9 + 0xc)
                rax_9[1] = 0
            
            int64_t rcx_10 = var_b8
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int64_t rbx_3 = sx.q(arg1[1].d)
            int32_t rax_10 = (rbx_3 + 1).d
            arg1[1].d = rax_10
            
            if (rax_10 s> *(arg1 + 0xc))
                sub_140638a90(arg1)
            
            int64_t rax_11 = var_80
            rdi_1 += 0x28
            int64_t* rcx_14 = (rbx_3 << 6) + *arg1
            *rcx_14 = r14_1
            rcx_14[1].d = r15_1
            *(rcx_14 + 0xc) = r12_1
            rcx_14[2] = rax_11
            int32_t var_78
            rcx_14[3].d = var_78
            int32_t var_74
            *(rcx_14 + 0x1c) = var_74
            result = result_2
            rcx_14[4] = r13_1
            rcx_14[5] = result
            rcx_14[7].d = zmm6_2
            rcx_14[6] = rsi_1
        while (rdi_1 != result_1)
else
    int64_t rdx_1 = *rax
    result = (*(rdx_1 + 0x390))(rax, rdx_1)
    rcx = rax[0x23]
    
    if (rcx != 0)
        goto label_14063dfbc

return result
