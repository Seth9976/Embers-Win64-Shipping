// 函数: sub_140be2f90
// 地址: 0x140be2f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_18 = 0
int64_t result
bool cond:1_1

if (arg3 == 0)
    int64_t rax_6 = *arg1
    
    if (rax_6 != *arg2)
        int32_t rcx_18
        rcx_18.b = sub_140b5b8a0(rax_6.d, 0).b == 0
        result.b = arg1[1] != 0
        result.b |= rcx_18.b
    
    if (rax_6 != *arg2 && result.b != 0)
        result.b = 0
    else
        int64_t rax_7 = *(arg1 + 8)
        
        if (rax_7 != *(arg2 + 8))
            int32_t rcx_19
            rcx_19.b = sub_140b5b8a0(rax_7.d, 0).b == 0
            result.b = arg1[3] != 0
            result.b |= rcx_19.b
        
        if (rax_7 != *(arg2 + 8) && result.b != 0)
            result.b = 0
        else
            result = *(arg1 + 0x10)
            
            if (result == *(arg2 + 0x10))
                result.b = 1
            else
                int32_t rcx_20
                rcx_20.b = sub_140b5b8a0(result.d, 0).b == 0
                result.b = arg1[5] != 0
                result.b |= rcx_20.b
                cond:1_1 = result.b == 0
            label_140be3217:
                
                if (cond:1_1)
                    result.b = 1
                else
                    result.b = 0
else
    bool cond:0_1 = sub_140b5b8a0(*arg1, 0).b == 0
    int16_t* const r15_1 = &data_142d40450
    result.b = arg1[1] != 0
    result.b |= cond:0_1
    int64_t var_38
    int64_t var_28
    int64_t rbp
    
    if (result.b == 0)
        rbp.b = 0
    else
        int64_t* rax = sub_140b63b70(arg1, &var_28)
        int64_t* rax_1 = sub_140b63b70(arg2, &var_38)
        int16_t* rdx_2
        
        if (rax[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *rax
        
        rbx = 3
        
        if (sub_140a23cf0(rax_1, rdx_2, 1, 0, 0xffffffff).d != 0xffffffff)
            rbp.b = 0
        else
            rbp.b = 1
    
    if ((rbx.b & 2) != 0)
        int64_t rcx_4 = var_38
        rbx &= 0xfffffffd
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if ((rbx.b & 1) != 0)
        int64_t rcx_5 = var_28
        rbx &= 0xfffffffe
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if (rbp.b != 0)
        result.b = 0
    else
        bool rdx_3 = sub_140b5b8a0(arg1[2], 0).b == 0
        result.b = arg1[3] != 0
        result.b |= rdx_3
        
        if (result.b == 0)
            rbp.b = 0
        else
            rbx |= 0xc
            int16_t** rax_2 = sub_140b63b70(&arg1[2], &var_38)
            int64_t* rax_3 = sub_140b63b70(&arg2[2], &var_28)
            int16_t* rdx_6
            
            if (rax_2[1].d == 0)
                rdx_6 = &data_142d40450
            else
                rdx_6 = *rax_2
            
            if (sub_140a23cf0(rax_3, rdx_6, 1, 0, 0xffffffff).d != 0xffffffff)
                rbp.b = 0
            else
                rbp.b = 1
        
        if ((rbx.b & 8) != 0)
            int64_t rcx_10 = var_28
            rbx &= 0xfffffff7
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        
        if ((rbx.b & 4) != 0)
            int64_t rcx_11 = var_38
            rbx &= 0xfffffffb
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        if (rbp.b == 0)
            bool rdx_7 = sub_140b5b8a0(arg1[4], 0).b == 0
            result.b = arg1[5] != 0
            result.b |= rdx_7
            void* rdi_1
            
            if (result.b == 0)
                rdi_1.b = 0
            else
                rbx |= 0x30
                rdi_1 = sub_140b63b70(&arg1[4], &var_38)
                int64_t* rax_5 = sub_140b63b70(&arg2[4], &var_28)
                
                if (*(rdi_1 + 8) != 0)
                    r15_1 = *rdi_1
                
                if (sub_140a23cf0(rax_5, r15_1, 1, 0, 0xffffffff).d != 0xffffffff)
                    rdi_1.b = 0
                else
                    rdi_1.b = 1
            
            if ((rbx.b & 0x20) != 0)
                int64_t rcx_16 = var_28
                rbx &= 0xffffffdf
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
            
            if ((rbx.b & 0x10) != 0)
                int64_t rcx_17 = var_38
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
            
            cond:1_1 = rdi_1.b == 0
            goto label_140be3217
        
        result.b = 0
return result
