// 函数: sub_141762560
// 地址: 0x141762560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg1[4]

while (i != 0)
    int64_t i_2 = i
    i -= 1
    arg1[4] = i
    
    if (i_2 == 1)
        arg1[3] = 0

int64_t i_1 = arg1[2]

while (i_1 != 0)
    i_1 -= 1
    int64_t rcx = *(arg1[1] + (i_1 << 3))
    
    if (rcx != 0)
        j_sub_140a74f90(rcx)

void* rcx_2 = arg1[1]

if (rcx_2 != 0)
    if (arg1[2] << 3 u>= 0x1000)
        void* r8_1 = *(rcx_2 - 8)
        
        if (rcx_2 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8_1
    
    j_sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1
arg1[2] = 0
arg1[1] = 0
int64_t result = j_sub_140a74f90(rcx_3)
*arg1 = 0
return result
