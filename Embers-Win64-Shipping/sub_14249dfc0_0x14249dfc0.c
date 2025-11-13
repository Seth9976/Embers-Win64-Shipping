// 函数: sub_14249dfc0
// 地址: 0x14249dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, 0, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), 0)

int64_t rax_4 = *(arg2 + 0x20)
void* const rdx_5 = *(arg2 + 0x30)
int64_t rbx = *(arg2 + 0x38)
int64_t rcx_3
rcx_3.b = rax_4 != 0
uint64_t r15
r15.b = 0
*(arg2 + 0x20) = rcx_3 + rax_4

if (rdx_5 == 0 || ((zx.q(*(*(rdx_5 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
    rdx_5 = nullptr

int64_t* rcx_14 = arg_10
int32_t result
int64_t* rdi_1

if (rcx_14 != 0)
    if (rdx_5 == 0 || rbx == 0)
        void var_48
        int64_t* rax_25 =
            _vfprintf_p_l(&var_48, Failed to resolve the output parameter for GetDataTableRow.", 
            GetDataTableRow")
        int32_t var_98 = 3
        int64_t var_90_1 = *rax_25
        int64_t* rcx_22 = rax_25[1]
        
        if (rcx_22 != 0)
            rcx_22[1].d += 1
        
        int32_t var_80_1 = rax_25[2].d
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t rax_29 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        result = sub_140d30680(arg1, arg2, &var_98)
        rdi_1 = rcx_22
        goto label_14249e2f2
    
    void* r9_1 = *(rdx_5 + 0x78)
    void* rdx_7 = rcx_14[5]
    
    if (r9_1 == rdx_7)
        result = sub_141fb3730(rcx_14, arg_18, rbx, arg4, arg5)
        r15 = zx.q(result.b)
    else
        if (rdx_7 == 0)
        label_14249e1e3:
            void var_60
            int64_t* rax_17 = _vfprintf_p_l(&var_60, 
                Incompatible output parameter; the data table's type is not the same as the return type.", 
                GetDataTableRow")
            int32_t var_b8 = 3
            int64_t var_b0_1 = *rax_17
            int64_t* rax_19 = rax_17[1]
            
            if (rax_19 != 0)
                rax_19[1].d += 1
            
            int32_t var_a0_1 = rax_17[2].d
            int64_t* var_58
            
            if (var_58 != 0)
                var_58[1].d -= 1
                
                if (var_58[1].d == 1)
                    (**var_58)(var_58)
                    int32_t rax_23 = *(var_58 + 0xc)
                    *(var_58 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        (*(*var_58 + 8))(var_58, 1)
            
            result = sub_140d30680(arg1, arg2, &var_b8)
            rdi_1 = rax_19
            goto label_14249e2f2
        
        int64_t rax_14 = sx.q(*(rdx_7 + 0x38))
        
        if (rax_14.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_14 << 3)) != rdx_7 + 0x30)
            goto label_14249e1e3
        
        if (sub_140ca8dc0(r9_1, rdx_7, 0) == 0)
            goto label_14249e1e3
        
        result = sub_141fb3730(arg_10, arg_18, rbx, arg4, arg5)
        r15 = zx.q(result.b)
else
    void var_78
    int64_t* rax_6 =
        _vfprintf_p_l(&var_78, Failed to resolve the table input. Be sure the DataTable is valid.", 
        GetDataTableRow")
    int32_t var_d8 = 3
    int64_t var_d0_1 = *rax_6
    int64_t* rax_8 = rax_6[1]
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    int32_t var_c0_1 = rax_6[2].d
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_12 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    result = sub_140d30680(arg1, arg2, &var_d8)
    rdi_1 = rax_8
label_14249e2f2:
    
    if (rdi_1 != 0)
        result = rdi_1[1].d
        rdi_1[1].d -= 1
        
        if (result == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
*arg3 = r15.b
return result
