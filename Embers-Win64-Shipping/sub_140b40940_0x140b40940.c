// 函数: sub_140b40940
// 地址: 0x140b40940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = nullptr
*arg3 = 0
int64_t result = 0
void* var_70
sub_140b3a6e0(arg1, &var_70, arg2)
void* r15 = var_70
int64_t* var_68

if (r15 == 0)
    sub_140b32f90(arg1, arg2)
    void var_60
    void** rax_3 = sub_140b3a6e0(arg1, &var_60, arg2)
    
    if (&var_70 != rax_3)
        void* rax_4 = *rax_3
        *rax_3 = nullptr
        var_70 = rax_4
        sub_1405aeff0(&var_68, &rax_3[1])
        r15 = var_70
    
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rax_7 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_58 + 8))(var_58, 1)
        
        r15 = var_70
    
    goto label_140b40a66

result = *(r15 + 0x28)
int64_t* rbx_1

if (result == 0)
label_140b40a66:
    int64_t* r14_1 = var_68
    
    if (r14_1 != 0)
        r14_1[1].d += 1
        r14_1 = var_68
        r15 = var_70
    
    sub_140b43760(arg1)
    int64_t* rdx_11
    
    if (*(arg1 + 0x270) == *(arg1 + 0x29c))
    label_140b40afc:
        rdx_11 = nullptr
    else
        int32_t rax_11 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_4 = arg1 + 0x2a0
        void* rcx_9 = *(r8_4 + 8)
        
        if (rcx_9 != 0)
            r8_4 = rcx_9
        
        int32_t rax_13 = *(r8_4 + (((sx.q(*(arg1 + 0x2b0)) - 1) & sx.q(rax_11)) << 2))
        
        if (rax_13 == 0xffffffff)
        label_140b40afc_1:
            rdx_11 = nullptr
        else
            while (true)
                rdx_11 = (sx.q(rax_13) << 5) + *(arg1 + 0x268)
                
                if (*rdx_11 == arg2)
                    break
                
                rax_13 = rdx_11[3].d
                
                if (rax_13 == 0xffffffff)
                    goto label_140b40afc_2
            
            if (rax_13 == 0xffffffff)
            label_140b40afc_2:
                rdx_11 = nullptr
    
    void* rax_14 = &rdx_11[1]
    
    if (rdx_11 == 0)
        rax_14 = nullptr
    
    if (rax_14 == 0)
        *arg3 = 1
    else
        if (*(rax_14 + 8) != 0)
            r12 = *rax_14
        
        int64_t* rax_16 = (*(*r12 + 0x48))(r12)
        int64_t* var_78 = rax_16
        
        if (r15 + 0x28 != &var_78)
            int64_t* rcx_11 = *(r15 + 0x28)
            *(r15 + 0x28) = rax_16
            
            if (rcx_11 != 0)
                (**rcx_11)(rcx_11, 1)
        else if (rax_16 != 0)
            int64_t r8_6 = *rax_16
            (*r8_6)(rax_16, 1, r8_6)
        
        if (*(r15 + 0x28) == 0)
            *arg3 = 4
        else
            void var_50
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_50)
            int64_t* rcx_14 = *(r15 + 0x28)
            (*(*rcx_14 + 8))(rcx_14, "LoadModule  - ", arg2)
            *(r15 + 0x34) = data_1439a9000
            data_1439a9000 += 1
            char temp0_5 = *(r15 + 0x31)
            *(r15 + 0x31) = 1
            int64_t rax_20
            rax_20.b = temp0_5
            sub_140b34430(arg1 + 0x310, arg2, 0)
            result = *(r15 + 0x28)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_50)
            r14_1 = var_68
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d != 1)
            goto label_140b40994
        
        int64_t* rbx_6 = var_68
        (**rbx_6)(rbx_6)
        int32_t rax_25 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rax_25 != 1)
            goto label_140b40994
        
        rbx_1 = var_68
        (*(*rbx_1 + 8))(rbx_1, 1)
        goto label_140b40998
else
label_140b40994:
    rbx_1 = var_68
label_140b40998:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t* rbx_2 = var_68
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_1 = var_68
                int64_t r8_2 = *rcx_1
                (*(r8_2 + 8))(rcx_1, zx.q(rdi_1), r8_2)
return result
