// 函数: sub_14063d8c0
// 地址: 0x14063d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14062c810(arg1, 0)
int64_t* rax = sub_1424c7800()
int64_t rcx = rax[0x23]
void* result

if (rcx != 0)
label_14063d913:
    int64_t* rax_1 = MRFIBuf::SetofNiBoringClass(rcx)
    void* rdi_1 = *rax_1
    result = rdi_1 + sx.q(rax_1[1].d) * 0x28
    void* result_2 = result
    
    if (rdi_1 != result)
        do
            int64_t rax_3 = *(rdi_1 + 0x10)
            int64_t rax_4 = *(rdi_1 + 0x18)
            void* rax_5 = *(rdi_1 + 0x20)
            int64_t var_70 = 0
            int64_t var_68_1 = 0
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            void var_88
            int64_t var_48
            sub_140596d10(&var_48, sub_140ac6680(sub_140d44c30(rdi_1 + 0x10, &var_88, 1)))
            int64_t* var_80
            
            if (var_80 != 0)
                var_80[1].d -= 1
                
                if (var_80[1].d == 1)
                    (**var_80)(var_80)
                    int32_t rax_10 = *(var_80 + 0xc)
                    *(var_80 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*var_80 + 8))(var_80, 1)
            
            int32_t var_38
            int32_t rsi_2 = var_38 ^ ((zx.d(*(rdi_1 + 8)) ^ var_38) & 0xf)
            int64_t var_98
            int64_t* rax_15 = sub_140b63b70(rdi_1, &var_98)
            int32_t r12_1
            int32_t r13_1
            int64_t r15_1
            
            if (&var_70 == rax_15)
                r13_1 = var_68_1:4.d
                r12_1 = var_68_1.d
                r15_1 = var_70
            else
                int64_t rcx_9 = var_70
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                r15_1 = *rax_15
                *rax_15 = 0
                r12_1 = rax_15[1].d
                r13_1 = *(rax_15 + 0xc)
                rax_15[1] = 0
            
            int64_t rcx_10 = var_98
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int64_t rbx_3 = sx.q(arg1[1].d)
            int32_t rax_16 = (rbx_3 + 1).d
            arg1[1].d = rax_16
            
            if (rax_16 s> *(arg1 + 0xc))
                sub_140638a90(arg1)
            
            rdi_1 += 0x28
            int64_t* rcx_14 = (rbx_3 << 6) + *arg1
            *rcx_14 = r15_1
            rcx_14[1].d = r12_1
            *(rcx_14 + 0xc) = r13_1
            rcx_14[2] = rax_3
            rcx_14[3] = rax_4
            rcx_14[4] = rax_5
            rcx_14[5] = var_48
            int32_t var_40
            rcx_14[6].d = var_40
            int32_t result_1
            result = zx.q(result_1)
            *(rcx_14 + 0x34) = result.d
            rcx_14[7].d &= 0xfffffff0
            rcx_14[7].d |= rsi_2 & 0xf
        while (rdi_1 != result_2)
else
    int64_t rdx_1 = *rax
    result = (*(rdx_1 + 0x390))(rax, rdx_1)
    rcx = rax[0x23]
    
    if (rcx != 0)
        goto label_14063d913

return result
