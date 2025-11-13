// 函数: sub_14068ae80
// 地址: 0x14068ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t* rdx = arg1[1]
int64_t rsi_2 = (rdx - rax) s>> 2

if (arg2 u< rsi_2)
    void* rax_1 = rax + (arg2 << 2)
    arg1[1] = rax_1
    return rax_1

if (arg2 u> rsi_2)
    int64_t rcx_2 = (arg1[2] - rax) s>> 2
    
    if (arg2 u<= rcx_2)
        void* rax_7 = sub_1406afc20(arg1, rdx, arg2 - rsi_2, arg3)
        arg1[1] = rax_7
        return rax_7
    
    int64_t rbp_1 = 0x3fffffffffffffff
    
    if (arg2 u> 0x3fffffffffffffff)
        sub_140610c20()
        noreturn
    
    uint64_t rdx_2 = rcx_2 u>> 1
    
    if (rcx_2 u<= 0x3fffffffffffffff - rdx_2)
        rbp_1 = rdx_2 + rcx_2
        
        if (rbp_1 u< arg2)
            rbp_1 = arg2
    
    void* rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        arg1, rbp_1)
    int64_t i_1 = arg2 - rsi_2
    void* rcx_4 = rax_3 + (rsi_2 << 2)
    
    if (*arg3 == 0)
        memset(rcx_4, 0, i_1 << 2)
    else if (i_1 != 0)
        int64_t i
        
        do
            *rcx_4 = *arg3
            rcx_4 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int64_t rdx_5 = *arg1
    memmove(rax_3, rdx_5, (arg1[1]).d - rdx_5.d)
    void* rcx_6 = *arg1
    
    if (rcx_6 != 0)
        if (((arg1[2] - rcx_6) & 0xfffffffffffffffc) u>= 0x1000)
            void* r8_3 = *(rcx_6 - 8)
            
            if (rcx_6 - r8_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_6 = r8_3
        
        j_sub_140a74f90(rcx_6)
    
    *arg1 = rax_3
    arg1[1] = rax_3 + (arg2 << 2)
    rax = rax_3 + (rbp_1 << 2)
    arg1[2] = rax

return rax
