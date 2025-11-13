// 函数: sub_1429a69d0
// 地址: 0x1429a69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int128_t* rbx = arg2
void* r9_1 = arg3 - arg2
int64_t rdi_2 = r9_1 s/ 0x38
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x4924924924924925, arg1[1] - r14)
int64_t r8_1 = rdx_1 s>> 4
int64_t r8_2 = r8_1 + (r8_1 u>> 0x3f)
int64_t rax_4
int64_t rdx_2
rdx_2:rax_4 = muls.dp.q(0x4924924924924925, arg1[2] - r14)
int64_t rdx_3 = rdx_2 s>> 4
int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)
void* result
uint128_t zmm1

if (rdi_2 u> rdx_4)
    if (rdi_2 u> 0x492492492492492)
        sub_14175ce00()
        noreturn
    
    uint64_t rcx_7 = rdx_4 u>> 1
    
    if (rdx_4 u<= 0x492492492492492 - rcx_7)
        int64_t rax_8 = rcx_7 + rdx_4
        
        if (rax_8 u< rdi_2)
            rax_8 = rdi_2
        
        rdi_2 = rax_8
    
    if (r14 != 0)
        if (rdx_4 * 0x38 u>= 0x1000)
            void* rcx_8 = *(r14 - 8)
            
            if (r14 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            r14 = rcx_8
        
        j_sub_140a74f90(r14)
    
    __builtin_memset(arg1, 0, 0x18)
    
    if (rdi_2 != 0)
        if (rdi_2 u> 0x492492492492492)
            sub_14175ce00()
            noreturn
        
        void* rax_10 = sub_1429a8f90(arg1, rdi_2)
        *arg1 = rax_10
        arg1[1] = rax_10
        arg1[2] = rdi_2 * 0x38 + *arg1
    
    result = *arg1
    
    while (rbx != arg3)
        *result = *rbx
        *(result + 0x10) = rbx[1]
        *(result + 0x20) = rbx[2]
        zmm1 = zx.o(rbx[3].q)
        rbx += 0x38
        *(result + 0x30) = zmm1.q
        result += 0x38
    
    arg1[1] = result
else if (rdi_2 u<= r8_2)
    memmove(r14, rbx, r9_1.d)
    result = rdi_2 * 0x38 + r14
    arg1[1] = result
else
    void* rdi_3 = r8_2 * 0x38
    memmove(r14, rbx, rdi_3.d)
    void* rcx_12 = arg1[1]
    result = rdi_3 + rbx
    
    while (result != arg3)
        *rcx_12 = *result
        *(rcx_12 + 0x10) = *(result + 0x10)
        *(rcx_12 + 0x20) = *(result + 0x20)
        zmm1 = zx.o(*(result + 0x30))
        result += 0x38
        *(rcx_12 + 0x30) = zmm1.q
        rcx_12 += 0x38
    
    arg1[1] = rcx_12
return result
