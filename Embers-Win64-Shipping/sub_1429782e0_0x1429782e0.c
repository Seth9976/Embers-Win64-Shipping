// 函数: sub_1429782e0
// 地址: 0x1429782e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &Imf_2_3::RgbaInputFile::`vftable'
int64_t* rcx = arg1[1]

if (rcx != 0)
    (**rcx)(rcx, 1)

struct _Mtx_internal_imp_t* mtx = arg1[2]

if (mtx != 0)
    j_sub_140a74f90(mtx->__offset(0x88).q)
    j_sub_140a74f90(mtx->__offset(0x190).q)
    _Mtx_destroy_in_situ(mtx)
    j_sub_140a74f90(mtx)

int64_t rdx_1 = arg1[6]

if (rdx_1 u>= 0x10)
    void* rcx_5 = arg1[3]
    
    if (rdx_1 + 1 u>= 0x1000)
        void* r8_1 = *(rcx_5 - 8)
        
        if (rcx_5 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = r8_1
    
    j_sub_140a74f90(rcx_5)

arg1[5] = 0
arg1[6] = 0xf
arg1[3].b = 0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
