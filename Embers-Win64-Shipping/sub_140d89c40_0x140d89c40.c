// 函数: sub_140d89c40
// 地址: 0x140d89c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result = *(arg1 + 0x50)

if (result != 0)
    int64_t* rbx_1 = *(arg1 + 0x58)
    int64_t result_1 = result
    int64_t* var_98_1 = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    int32_t var_b0
    sub_140d7a930(arg1 + 0x60, &var_b0, &result_1)
    int64_t rax_2 = sx.q(var_b0)
    void* const rdi_2
    
    if (rax_2.d == 0xffffffff)
        rdi_2 = nullptr
    else
        rdi_2 = rax_2 * 0x38 + *(arg1 + 0x60)
    
    if (rbx_1 != 0)
        int32_t temp0_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_2 = *(arg1 + 0x50)
    float var_b8
    void var_a8
    (*(*rcx_2 + 0x48))(rcx_2, zx.q(*(rdi_2 + 0x24)), zx.q(*(rdi_2 + 0x28)), &var_b8, &var_a8)
    int64_t* rcx_3 = *(arg1 + 0x50)
    int64_t* var_90
    (*(*rcx_3 + 0x58))(rcx_3, &var_90)
    int64_t* rcx_4 = var_90
    RECT rect
    GetWindowRect((*(*rcx_4 + 0xc0))(rcx_4), &rect)
    float zmm2 = var_b8
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rect.left))
    CANDIDATEFORM candidate
    candidate.dwIndex = 0
    candidate.dwStyle = 0x80
    zmm2 = zmm2 f- zmm0.d
    int32_t rax_8 = int.d(zmm2)
    float var_b4
    float zmm1 = var_b4 f- _mm_cvtepi32_ps(zx.o(rect.top)).d
    var_b8 = zmm2
    candidate.ptCurrentPos.x = rax_8
    candidate.rcArea.left = rax_8
    candidate.rcArea.right = rax_8
    int32_t rcx_6 = int.d(zmm1)
    candidate.ptCurrentPos.y = rcx_6
    candidate.rcArea.top = rcx_6
    float var_a4
    zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_6)).d f+ var_a4
    candidate.rcArea.bottom = int.d(zmm0.d)
    ImmSetCandidateWindow(arg2, &candidate)
    COMPOSITIONFORM compForm
    compForm.dwStyle = 2
    compForm.ptCurrentPos.x = int.d(fconvert.t(var_b8))
    compForm.ptCurrentPos.y = int.d(var_a4 + zmm1)
    result = ImmSetCompositionWindow(arg2, &compForm)
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            result = (**var_88)(var_88)
            int32_t temp2_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*var_88 + 8))(var_88, 1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
