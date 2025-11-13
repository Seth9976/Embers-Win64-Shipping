// 函数: sub_140fb3990
// 地址: 0x140fb3990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdx = nullptr
int64_t* var_70
int64_t* rcx_5
int64_t rdx_2
int32_t rsi
int64_t* rdi_1

if (*(arg1 + 0x390) == 0)
label_140fb3a85:
    sub_1405d9400()
    int64_t* rcx_6 = data_143cd6fe0
    rdx_2 = data_143cd6fd8
    int64_t var_78 = rdx_2
    var_70 = rcx_6
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
    
    rcx_5 = &var_78
    rdi_1 = 0.q
    rsi = 8
    int32_t var_68_1 = data_143cd6fe8
else
    rdi_1 = *(arg1 + 0x398)
    
    if (rdi_1 == 0)
        goto label_140fb3a85
    
    int32_t rax_1 = rdi_1[1].d
    
    if (rax_1 s<= 0)
        goto label_140fb3a85
    
    if (rdi_1 == 0)
        goto label_140fb39fa
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = rax_1 + 1
    label_140fb39fa:
        
        if (rdi_1 != 0)
            rdx = *(arg1 + 0x390)
    
    float zmm6[0x4] = *rdx
    zmm6[0] = zmm6[0] + 0.5f
    int32_t rcx_1 = int.d(zmm6[0])
    
    if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm6[0]))
        zmm6 =
            _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))
    
    void var_60
    void var_48
    int64_t* rax_6 = sub_140fab650(arg1, &var_60, 
        _vfprintf_p_l(&var_48, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x10], 
        ThemeColorBlock"), zmm6)
    rcx_5 = rax_6
    rsi = 7
    rdx_2 = *rax_6

*arg2 = rdx_2
void* rax_8 = rcx_5[1]
arg2[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

arg2[2].d = rcx_5[2].d

if ((rsi.b & 8) != 0)
    rsi &= 0xfffffff7
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_12 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_70 + 8))(var_70, 1)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rax_16 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rax_16 == 1)
                (*(*var_58 + 8))(var_58, 1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rbp_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_40 + 8))(var_40, zx.q(rbp_1))

if ((rsi.b & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
