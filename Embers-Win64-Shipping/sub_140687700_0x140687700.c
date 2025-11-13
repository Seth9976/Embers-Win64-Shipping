// 函数: sub_140687700
// 地址: 0x140687700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
void* rcx = arg3[1]

if (rcx != 0)
    *(rcx + 8) += 1
    rcx = arg3[1]

int64_t* r14 = arg3[3]
int64_t var_88 = *arg3
int64_t* r8 = &var_88
void* var_80 = rcx
int64_t var_78 = arg3[2]

if (r14 == 0)
    sub_1406ab7a0(arg1, 2, r8)
else
    r14[1].d += 1
    sub_1406ab7a0(arg1, r14, r8)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (*(*r14 + 8))(r14)

void* rcx_7

if (arg3[6].b == 0)
    int64_t* rcx_11 = *arg1 + 0x140
    int64_t var_38_1 = 0
    void* var_48_1 = zx.o(0).q
    void* const __return_addr_1 = __return_addr
    sub_1406934d0(rcx_11, &__return_addr_1)
    
    if (var_48_1 != 0)
        if (((var_38_1 - var_48_1) & 0xfffffffffffffff8) u< 0x1000)
            j_sub_140a74f90(var_48_1)
        else
            rcx_7 = *(var_48_1 - 8)
            
            if (var_48_1 - rcx_7 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_7)
else
    int64_t r14_1 = arg3[8]
    int64_t rbp_1 = arg3[9]
    int64_t var_70 = arg3[7]
    int128_t var_68
    __builtin_memset(&var_68, 0, 0x18)
    void* var_58_1
    
    if (r14_1 != rbp_1)
        int64_t rbp_2 = rbp_1 - r14_1
        int64_t rdi_2 = rbp_2 s>> 3
        void* rax_5 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
            &var_68, rdi_2)
        var_68.q = rax_5
        void* rdi_3 = rax_5 + (rdi_2 << 3)
        var_58_1 = rdi_3
        memmove(rax_5, r14_1, rbp_2.d)
        var_68:8.q = rdi_3
    
    sub_1406934d0(*arg1 + 0x140, &var_70)
    rcx_7 = var_68.q
    
    if (rcx_7 != 0)
        void* rax_6 = rcx_7
        
        if (((var_58_1 - rcx_7) & 0xfffffffffffffff8) u< 0x1000)
            j_sub_140a74f90(rcx_7)
        else
            rcx_7 = *(rcx_7 - 8)
            
            if (rax_6 - rcx_7 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_7)
*(*arg1 + 0xc) = 0
*(*arg1 + 0xd) = 0
Concurrency::details::_TaskEventLogger::_LogScheduleTask(*arg1 + 0x160)
void*** rax_11 = j_sub_140a82f30(0x20)
void*** r8_2 = rax_11

if (rax_11 == 0)
    r8_2 = nullptr
else
    *r8_2 = &data_142d8c908
    r8_2[1] = 0
    r8_2[2] = 0
    void* rax_12 = arg1[1]
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    r8_2[1] = *arg1
    r8_2[2] = arg1[1]
    *r8_2 = &data_142d8c918
    r8_2[3] = arg2

int64_t* rcx_12 = *(*arg1 + 0x130)

if (rcx_12 == 0)
    void** const arg_18 = &data_142d8b300
    sub_1406b0b90(&arg_18, sub_1406af030, r8_2)
else
    (**rcx_12)(rcx_12, sub_1406af030, r8_2)

return arg1
