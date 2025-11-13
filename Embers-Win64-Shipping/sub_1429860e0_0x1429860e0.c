// 函数: sub_1429860e0
// 地址: 0x1429860e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::GenericOutputFile::Imf_2_3::OutputFile::VTable** arg_8 = arg1
int64_t var_28 = -2
struct Imf_2_3::GenericOutputFile::VTable** rbx = arg1
*arg1 = &Imf_2_3::OutputFile::`vftable'{for `Imf_2_3::GenericOutputFile'}
void* rdi = arg1[1]

if (rdi != 0)
    struct _Mtx_internal_imp_t* mtx_1 = *(rdi + 0xf8)
    struct _Mtx_internal_imp_t* mtx_2 = mtx_1
    int32_t code = _Mtx_lock(mtx_1)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    char var_18_1 = 1
    int64_t* rcx_2 = *(rbx[1][0x1f].vFunc_0 + 0x50)
    int64_t rax_4 = (*(*rcx_2 + 0x10))(rcx_2)
    void* rcx_3 = rbx[1]
    int64_t rdx_1 = *(rcx_3 + 0xc0)
    
    if (rdx_1 != 0)
        int64_t* rcx_5 = *(*(rcx_3 + 0xf8) + 0x50)
        int64_t r8_1 = *rcx_5
        (*(r8_1 + 0x18))(rcx_5, rdx_1, r8_1)
        void* rcx_6 = rbx[1]
        sub_142987270(*(*(rcx_6 + 0xf8) + 0x50), rcx_6 + 0x58)
        int64_t* rcx_10 = *(rbx[1][0x1f].vFunc_0 + 0x50)
        (*(*rcx_10 + 0x18))(rcx_10, rax_4)
    
    int32_t code_1 = _Mtx_unlock(mtx_1)
    
    if (code_1 != 0)
        std::_Throw_C_error(code_1)
        noreturn
    
    int64_t* rax_7 = rbx[1]
    int64_t* rcx_13 = rax_7
    int64_t* rdi_1 = rax_7
    
    if (rax_7[0x20].b != 0)
        void* r8_2 = rax_7[0x1f]
        
        if (r8_2 != 0)
            int64_t* r8_3 = *(r8_2 + 0x50)
            
            if (r8_3 != 0)
                (**r8_3)(r8_3, 1)
                rcx_13 = rbx[1]
                rdi_1 = rcx_13
    
    if (rcx_13[0x1e].d == 0xffffffff)
        struct _Mtx_internal_imp_t* mtx = rcx_13[0x1f]
        
        if (mtx != 0)
            _Mtx_destroy_in_situ(mtx)
            j_sub_140a74f90(mtx)
            rdi_1 = rbx[1]
    
    if (rdi_1 != 0)
        sub_142985e40(rdi_1)
        j_sub_140a74f90(rdi_1)

*rbx = &Imf_2_3::GenericOutputFile::`vftable'
return &Imf_2_3::GenericOutputFile::`vftable'
