// 函数: sub_14297c110
// 地址: 0x14297c110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
void* r14_1 = arg3 - arg2
int64_t rax_2 = (arg1[1] - rsi) s>> 2
int64_t rbx_1 = r14_1 s>> 2
int64_t r8_2 = (arg1[2] - rsi) s>> 2
void* result

if (rbx_1 u> r8_2)
    if (rbx_1 u> 0x3fffffffffffffff)
        sub_140610c20()
        noreturn
    
    uint64_t rcx_1 = r8_2 u>> 1
    
    if (r8_2 u<= 0x3fffffffffffffff - rcx_1)
        int64_t rax_4 = rcx_1 + r8_2
        
        if (rax_4 u< rbx_1)
            rax_4 = rbx_1
        
        rbx_1 = rax_4
    
    if (rsi != 0)
        public: void __cdecl std::allocator<struct `void __cdecl phmap::container_internal::Deallocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, void *, unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, void *, unsigned __int64)'::`2'::M *const, unsigned __int64)(
            arg1, rsi, r8_2)
    
    void* rax_7 = nullptr
    __builtin_memset(arg1, 0, 0x18)
    
    if (rbx_1 != 0)
        if (rbx_1 u> 0x3fffffffffffffff)
            sub_140610c20()
            noreturn
        
        int64_t rbx_2 = rbx_1 << 2
        
        if (rbx_2 u>= 0x1000)
            int64_t rcx_3 = rbx_2 + 0x27
            
            if (rcx_3 u<= rbx_2)
                rcx_3 = -1
            
            int64_t rax_5 = j_sub_140a82f30(rcx_3)
            
            if (rax_5 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rax_7 = (rax_5 + 0x27) & 0xffffffffffffffe0
            *(rax_7 - 8) = rax_5
        else if (rbx_2 != 0)
            rax_7 = j_sub_140a82f30(rbx_2)
        
        *arg1 = rax_7
        arg1[1] = rax_7
        arg1[2] = *arg1 + rbx_2
    
    int64_t rbx_3 = *arg1
    memmove(rbx_3, arg2, r14_1.d)
    result = r14_1 + rbx_3
else if (rbx_1 u<= rax_2)
    memmove(rsi, arg2, r14_1.d)
    result = rsi + (rbx_1 << 2)
else
    int64_t rbx_4 = rax_2 << 2
    memmove(rsi, arg2, rbx_4.d)
    int64_t rdx_2 = rbx_4 + arg2
    int64_t rbx_5 = arg1[1]
    void* r15_1 = arg3 - rdx_2
    memmove(rbx_5, rdx_2, r15_1.d)
    result = r15_1 + rbx_5

arg1[1] = result
return result
