// 函数: sub_1406c3220
// 地址: 0x1406c3220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(*arg1 + 8)
int64_t var_48 = arg1[0x28]
int128_t var_40
__builtin_memset(&var_40, 0, 0x18)
int64_t rbp = arg1[0x29]
int64_t rsi = arg1[0x2a]
void* var_30_1
void* rdi

if (rbp == rsi)
    rdi = var_40.q
else
    int64_t rsi_1 = rsi - rbp
    int64_t rbx_2 = rsi_1 s>> 3
    void* rax_2 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        &var_40, rbx_2)
    rdi = rax_2
    var_40.q = rax_2
    void* rbx_3 = rax_2 + (rbx_2 << 3)
    var_30_1 = rbx_3
    memmove(rax_2, rbp, rsi_1.d)
    var_40:8.q = rbx_3

int128_t* rax_3
int64_t r8_2
rax_3, r8_2 = j_sub_140a82f30(0x48)
void*** rsi_2 = rax_3
int128_t* arg_8 = rax_3

if (rax_3 == 0)
    rsi_2 = nullptr
else
    *rax_3 = zx.o(0)
    *(rax_3 + 8) = 1
    *(rax_3 + 0xc) = 1
    *rsi_2 = &data_142d8be10
    void* arg_18 = &rsi_2[2]
    rsi_2[2].d = 0
    __ExceptionPtrCopy(&rsi_2[3], arg2)
    sub_14068ed10(&rsi_2[5], &var_48)
    rdi = var_40.q

void* var_58 = &rsi_2[2]
r8_2.b = 1
char rax_5 = r15(arg1, 1, r8_2, 0, &var_58)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        void** rdx_5 = *rsi_2
        (*rdx_5)(rsi_2, rdx_5)
        int32_t rdi_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rsi_2)[1](rsi_2)
    
    rdi = var_40.q

if (rdi != 0)
    void* rax_7 = rdi
    
    if (((var_30_1 - rdi) & 0xfffffffffffffff8) u>= 0x1000)
        rdi = *(rdi - 8)
        
        if (rax_7 - rdi - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rdi)

return zx.q(rax_5)
