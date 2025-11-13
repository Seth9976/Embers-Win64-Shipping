// 函数: sub_1429a86c0
// 地址: 0x1429a86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** var_60 = arg1
*arg1 = &Imf_2_3::ScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
struct _Mtx_internal_imp_t* mtx_3 = j_sub_140a82f30(0x150)
struct _Mtx_internal_imp_t* mtx_1 = mtx_3
int32_t rbx = 0
struct _Mtx_internal_imp_t* rax_2

if (mtx_3 == 0)
    rax_2 = nullptr
else
    rax_2 = sub_1429a83e0(mtx_3, arg4)

arg1[1] = rax_2
struct _Mtx_internal_imp_t* mtx = j_sub_140a82f30(0x60)
struct _Mtx_internal_imp_t* mtx_2 = mtx
mtx_1 = mtx

if (mtx == 0)
    mtx_2 = nullptr
else
    _Mtx_init_in_situ(mtx, 2)
    mtx_2->__offset(0x50).q = 0
    mtx_2->__offset(0x58).q = 0

arg1[2] = mtx_2
mtx_2->__offset(0x50).q = arg3
*(arg1[1] + 0x12c) = (*(*arg3 + 8))(arg3)
sub_1429aa9d0(arg1, arg2)
arg1[1][0xd].__offset(0x0).d = 0
void* rbp_1 = arg1[1]
int32_t r13 = *(rbp_1 + 0x80)
int64_t* r15 = arg1[2][0xa]
int32_t i_1 = 0

if ((*(rbp_1 + 0xa0) - *(rbp_1 + 0x98)) s>> 3 != 0)
    uint64_t i = 0
    
    do
        uint64_t* rdi_1 = *(rbp_1 + 0x98) + (i << 3)
        (*(*r15 + 0x10))(r15, &mtx_1, 8)
        *rdi_1 = ((((((zx.q(mtx_1:7.b) << 8 | zx.q(mtx_1:6.b)) << 8 | zx.q(mtx_1:5.b)) << 8
            | zx.q(mtx_1:4.b)) << 8 | zx.q(mtx_1:3.b)) << 8 | zx.q(mtx_1:2.b)) << 8 | zx.q(mtx_1:1.b))
            << 8 | zx.q(mtx_1.b)
        i_1 += 1
        i = zx.q(i_1)
    while (i u< (*(rbp_1 + 0xa0) - *(rbp_1 + 0x98)) s>> 3)

*(rbp_1 + 0xb0) = 1
int64_t r8 = *(rbp_1 + 0x98)
int64_t rdx_5 = (*(rbp_1 + 0xa0) - r8) s>> 3

if (rdx_5 != 0)
    uint64_t rcx_21 = 0
    
    do
        if (*(r8 + (rcx_21 << 3)) u<= 0)
            *(rbp_1 + 0xb0) = 0
            sub_1429ab3d0(r15, r13, rbp_1 + 0x98)
            break
        
        rbx += 1
        rcx_21 = zx.q(rbx)
    while (rcx_21 u< rdx_5)

__security_check_cookie(rax_1 ^ &var_88)
return arg1
