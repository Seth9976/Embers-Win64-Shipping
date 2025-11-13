// 函数: sub_142984ff0
// 地址: 0x142984ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int128_t* rbx = arg2
void* r9_1 = arg3 - arg2
int64_t rdi_2 = r9_1 s/ 0x30
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r14)
int64_t r8_1 = rdx_1 s>> 3
int64_t r8_2 = r8_1 + (r8_1 u>> 0x3f)
int64_t rax_4
int64_t rdx_2
rdx_2:rax_4 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r14)
int64_t rdx_3 = rdx_2 s>> 3
int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)
void* result

if (rdi_2 u> rdx_4)
    if (rdi_2 u> 0x555555555555555)
        sub_14175ce00()
        noreturn
    
    uint64_t rcx_7 = rdx_4 u>> 1
    
    if (rdx_4 u<= 0x555555555555555 - rcx_7)
        int64_t rax_8 = rcx_7 + rdx_4
        
        if (rax_8 u< rdi_2)
            rax_8 = rdi_2
        
        rdi_2 = rax_8
    
    if (r14 != 0)
        public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo *const, unsigned __int64)(
            arg1, r14, rdx_4)
    
    __builtin_memset(arg1, 0, 0x18)
    
    if (rdi_2 != 0)
        if (rdi_2 u> 0x555555555555555)
            sub_14175ce00()
            noreturn
        
        int64_t rax_9 = public: struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo * __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>::allocate(unsigned __int64)(
            arg1, rdi_2)
        *arg1 = rax_9
        arg1[1] = rax_9
        arg1[2] = rdi_2 * 0x30 + *arg1
    
    result = *arg1
    
    while (rbx != arg3)
        *result = *rbx
        *(result + 0x10) = rbx[1]
        int128_t zmm0 = rbx[2]
        rbx = &rbx[3]
        *(result + 0x20) = zmm0
        result += 0x30
    
    arg1[1] = result
else if (rdi_2 u<= r8_2)
    memmove(r14, rbx, r9_1.d)
    result = rdi_2 * 0x30 + r14
    arg1[1] = result
else
    memmove(r14, rbx, (r8_2 * 0x30).d)
    int128_t* rcx_11 = arg1[1]
    result = &rbx[r8_2 * 3]
    
    while (result != arg3)
        *rcx_11 = *result
        rcx_11[1] = *(result + 0x10)
        int128_t zmm0_1 = *(result + 0x20)
        result += 0x30
        rcx_11[2] = zmm0_1
        rcx_11 = &rcx_11[3]
    
    arg1[1] = rcx_11

return result
