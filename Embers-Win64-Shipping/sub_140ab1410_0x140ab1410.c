// 函数: sub_140ab1410
// 地址: 0x140ab1410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
void* r13_2 = &rbx[sx.q(arg2[1].d) * 2]

if (rbx == r13_2)
label_140ab15da:
    *arg1 = 0
    arg1[1] = 0
else
    while (true)
        sub_140a464c0()
        rbx[1].d
        
        if ((*(data_14399ea08 + 0x50))() != 0)
            int64_t var_58
            int64_t* rax_3
            int512_t zmm1_1
            rax_3, zmm1_1 = sub_140b18720(&var_58, rbx, 1)
            int16_t* rcx_1 = *rax_3
            int32_t rdx_1 = rax_3[1].d
            int32_t rdx_2 = neg.d(rdx_1)
            *rax_3 = 0
            int32_t r8_2 = rax_3[1].d
            int16_t* var_78 = rcx_1
            int32_t rcx_2 = *(rax_3 + 0xc)
            int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 9 + r8_2
            int32_t var_6c_1 = rcx_2
            rax_3[1] = 0
            
            if (rdx_5 s> rcx_2)
                sub_1405947f0(&var_78, rdx_5)
            
            sub_140a20ba0(&var_78, u".locmeta", 8)
            int64_t rcx_5 = var_58
            int16_t* r14_1 = var_78
            var_78 = nullptr
            int32_t var_70_1
            var_70_1.q = 0
            
            if (rcx_5 != 0)
                zmm1_1 = sub_140a74f90(rcx_5)
            
            uint64_t var_48 = 0
            int32_t rdi_1 = r8_2 - 1
            int32_t var_40_1 = 0
            int32_t rsi_2 = rbx[1].d
            
            if (r8_2 == 0)
                rdi_1 = 0
            
            int64_t var_38_1 = 0
            int64_t var_30_1 = 0
            int32_t rax_5
            
            if (rsi_2 == 0)
                rax_5 = rsi_2 + 2
            
            if (rsi_2 != 0 || rdi_1 == 0xffffffff)
                rax_5 = 1
            
            int64_t var_68 = 0
            int32_t rcx_6 = rax_5 + rdi_1
            int64_t r15_1 = *rbx
            int32_t var_60_1 = rsi_2
            
            if (rsi_2 != 0 || rcx_6 != 0)
                sub_1405a4c70(&var_68, rsi_2 + rcx_6, 0)
                memcpy(var_68, r15_1, rsi_2 * 2)
            else
                int32_t var_5c_1 = 0
            
            sub_140a2cf70(&var_68, r14_1, rdi_1)
            char rax_6 = sub_140ab4d40(&var_48, &var_68, zmm1_1)
            int64_t rcx_11 = var_68
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            if (rax_6 != 0)
                uint64_t rbx_1 = var_48
                *arg1 = 0
                arg1[1].d = var_40_1
                
                if (var_40_1 != 0)
                    sub_1405a4c70(arg1, var_40_1, 0)
                    memcpy(*arg1, rbx_1, var_40_1 * 2)
                    rbx_1 = var_48
                else
                    *(arg1 + 0xc) = 0
                
                if (var_38_1 != 0)
                    sub_140a74f90(var_38_1)
                    rbx_1 = var_48
                
                if (rbx_1 != 0)
                    sub_140a74f90(rbx_1)
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                break
            
            if (var_38_1 != 0)
                sub_140a74f90(var_38_1)
            
            uint64_t rcx_13 = var_48
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
        
        rbx = &rbx[2]
        
        if (rbx == r13_2)
            goto label_140ab15da

return arg1
