// 函数: sub_1429a6bf0
// 地址: 0x1429a6bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int128_t* rbx = arg2
int64_t rbp_2 = (arg3 - rbx) s/ 0x38
int64_t rax_3
int64_t rdx_3
rdx_3:rax_3 = muls.dp.q(0x4924924924924925, arg1[1] - r9)
int64_t r8_1 = rdx_3 s>> 4
int64_t r8_2 = r8_1 + (r8_1 u>> 0x3f)
int64_t rax_4
int64_t rdx_4
rdx_4:rax_4 = muls.dp.q(0x4924924924924925, arg1[2] - r9)
int64_t rdx_5 = rdx_4 s>> 4
int64_t rdx_6 = rdx_5 + (rdx_5 u>> 0x3f)
int64_t* result
uint128_t zmm1

if (rbp_2 u> rdx_6)
    if (rbp_2 u> 0x492492492492492)
        sub_14175ce00()
        noreturn
    
    uint64_t rcx_7 = rdx_6 u>> 1
    
    if (rdx_6 u<= 0x492492492492492 - rcx_7)
        int64_t rax_8 = rcx_7 + rdx_6
        
        if (rax_8 u< rbp_2)
            rax_8 = rbp_2
        
        rbp_2 = rax_8
    
    if (r9 != 0)
        if (rdx_6 * 0x38 u>= 0x1000)
            int64_t* rcx_8 = r9[-1]
            
            if (r9 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            r9 = rcx_8
        
        j_sub_140a74f90(r9)
    
    __builtin_memset(arg1, 0, 0x18)
    
    if (rbp_2 != 0)
        if (rbp_2 u> 0x492492492492492)
            sub_14175ce00()
            noreturn
        
        void* rax_10 = sub_1429a8f90(arg1, rbp_2)
        *arg1 = rax_10
        arg1[1] = rax_10
        arg1[2] = rbp_2 * 0x38 + *arg1
    
    result = *arg1
    
    while (rbx != arg3)
        *result = *rbx
        *(result + 0x10) = rbx[1]
        *(result + 0x20) = rbx[2]
        zmm1 = zx.o(rbx[3].q)
        rbx += 0x38
        result[6] = zmm1.q
        result = &result[7]
    
    arg1[1] = result
else if (rbp_2 u<= r8_2)
    result = sub_1429a6e00(rbx, arg3, r9)
    arg1[1] = rbp_2 * 0x38 + r9
else
    void* rdx_10 = r8_2 * 0x38 + rbx
    sub_1429a6e00(rbx, rdx_10, r9)
    result = arg1[1]
    
    while (rdx_10 != arg3)
        *result = *rdx_10
        *(result + 0x10) = *(rdx_10 + 0x10)
        *(result + 0x20) = *(rdx_10 + 0x20)
        zmm1 = zx.o(*(rdx_10 + 0x30))
        rdx_10 += 0x38
        result[6] = zmm1.q
        result = &result[7]
    
    arg1[1] = result
return result
