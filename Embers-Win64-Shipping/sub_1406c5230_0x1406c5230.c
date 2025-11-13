// 函数: sub_1406c5230
// 地址: 0x1406c5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg1[4]

while (i != 0)
    int64_t* rcx_2 = **(arg1[1] + (((arg1[2] - 1) & (i + arg1[3] - 1)) << 3))
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* r8_1 = rcx_2[0x19]
            
            if (r8_1 == 0)
                (**rcx_2)(rcx_2, 1, r8_1)
            else
                (**r8_1)(r8_1, rcx_2)
    
    int64_t rcx_4 = arg1[4]
    i = rcx_4 - 1
    arg1[4] = i
    
    if (rcx_4 == 1)
        arg1[3] = 0

int64_t i_1 = arg1[2]

while (i_1 != 0)
    i_1 -= 1
    int64_t rcx_5 = *(arg1[1] + (i_1 << 3))
    
    if (rcx_5 != 0)
        j_sub_140a74f90(rcx_5)

void* rcx_7 = arg1[1]

if (rcx_7 != 0)
    if (arg1[2] << 3 u>= 0x1000)
        void* r8_2 = *(rcx_7 - 8)
        
        if (rcx_7 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = r8_2
    
    j_sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg1
__builtin_memset(arg1, 0, 0x18)
return j_sub_140a74f90(rcx_8) __tailcall
