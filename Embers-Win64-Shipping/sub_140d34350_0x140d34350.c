// 函数: sub_140d34350
// 地址: 0x140d34350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
void* const r8 = arg1
int64_t* rcx = *rax
*(arg2 + 0x20) = &rax[1]
*(arg2 + 0x30) = rcx
*(arg2 + 0x38) = 0

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    r8 = nullptr

uint64_t result
int64_t* rdi_2

if (rcx == 0)
label_140d344ad:
    void var_60
    int64_t* rax_13 = _vfprintf_p_l(&var_60, 
        Attempted to access a missing property on a CDO. If this is a packaged/cooked build, ar", 
        ScriptCore")
    int32_t var_28 = 3
    int64_t var_20_1 = *rax_13
    int64_t* rcx_9 = rax_13[1]
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    int32_t var_10_1 = rax_13[2].d
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rax_17 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_58 + 8))(var_58, 1)
    
    result = sub_140d30680(arg1, arg2, &var_28)
    rdi_2 = rcx_9
label_140d34534:
    
    if (rdi_2 != 0)
        result = zx.q(rdi_2[1].d)
        rdi_2[1].d -= 1
        
        if (result.d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t rbx_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_1 == 1)
                return (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_1))
else
    if (r8 == 0)
        void var_78
        int64_t* rax_7 =
            _vfprintf_p_l(&var_78, Accessed None attempting to read a default property", ScriptCore"
            )
        int32_t var_48 = 3
        int64_t var_40_1 = *rax_7
        int64_t* rcx_3 = rax_7[1]
        
        if (rcx_3 != 0)
            rcx_3[1].d += 1
        
        int32_t var_30_1 = rax_7[2].d
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_11 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        result = sub_140d30680(arg1, arg2, &var_48)
        rdi_2 = rcx_3
        goto label_140d34534
    
    void* r9_1 = *(r8 + 0x10)
    void* r10_2 = rcx[2] + 0x30
    int64_t rax_4 = sx.q(*(r10_2 + 8))
    
    if (rax_4.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_4 << 3)) != r10_2)
        goto label_140d344ad
    
    result = sx.q(*(rcx + 0x4c))
    *(arg2 + 0x38) = r8 + result
    
    if (arg3 != 0)
        return (*(*rcx + 0xc8))(rcx, arg3)
return result
