// 函数: sub_140aa2110
// 地址: 0x140aa2110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int32_t i_4 = -1
int64_t rdi = *(arg2 + 4)
int64_t r12
r12.b = 0
int64_t arg_18 = rdi
int32_t rdx_1 = *(arg1 + 0x828) - *(arg1 + 0x854)
int64_t* var_58 = arg1 + 0x820
int32_t i_2 = 0xffffffff
int32_t var_44 = 0xffffffff
sub_1405b6730(arg1 + 0x820, rdx_1, 0)

if (*(arg1 + 0x868) != 0)
    int32_t rax_2 = sub_140b5ead0(rdi.d) + rdi:4.d
    void* r8_1 = arg1 + 0x858
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    i_4 = *(r8_1 + (((sx.q(*(arg1 + 0x868)) - 1) & sx.q(rax_2)) << 2))
    int32_t i_5 = i_4
    i_2 = i_4
    
    if (i_4 != 0xffffffff)
        int64_t rdx_5 = *(arg1 + 0x820)
        i_2 = i_4
        int32_t i
        
        do
            int64_t rcx_3 = sx.q(i_4) * 3
            i = *(rdx_5 + (rcx_3 << 3) + 0x10)
            int32_t i_3 = i
            
            if (*(rdx_5 + (rcx_3 << 3)) == rdi)
                break
            
            i_2 = i
            i_4 = i
        while (i != 0xffffffff)

int64_t* var_40 = arg1 + 0x820
int64_t zmm1 = i_2.q
int128_t var_78 = var_58.o

if (i_4 != 0xffffffff)
    int32_t j = zmm1:4.d
    r12.b = 1
    int32_t i_1 = zmm1.d
    int64_t* rsi_1 = var_78.q
    int64_t r14_1 = var_78:8.q
    
    do
        char* rdx_6 = arg_10
        int64_t rdi_1 = sx.q(i_1) * 0x18
        
        if (*(rdi_1 + *rsi_1 + 8) == rdx_6)
            int64_t* rax_7 = sub_140b63b70(&arg_18, &var_78)
            int16_t* const r9_1
            
            if (rax_7[1].d == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_7
            
            sub_140af98a0("Unknown", 0x1bc, 
                Log suppression category %s was somehow declared twice with the same data.", r9_1)
            int64_t rcx_6 = var_78.q
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            sub_140afbb40()
            rdx_6 = arg_10
        
        if (*(*(rdi_1 + *rsi_1 + 8) + 3) != rdx_6[3])
            int64_t* rax_10 = sub_140b63b70(&arg_18, &var_58)
            int16_t* const r9_2
            
            if (rax_10[1].d == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *rax_10
            
            sub_140af98a0("Unknown", 0x1c1, 
                Log suppression category %s is defined multiple times with different compile time verbo", 
                r9_2)
            int64_t* rcx_9 = var_58
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            sub_140afbb40()
            rdx_6 = arg_10
        
        *rdx_6 = **(rdi_1 + *rsi_1 + 8)
        arg_10[1] = *(*(rdi_1 + *rsi_1 + 8) + 1)
        arg_10[2] = *(*(rdi_1 + *rsi_1 + 8) + 2)
        i_1 = j
        
        if (j == 0xffffffff)
            break
        
        int64_t r8_2 = *rsi_1
        
        do
            int64_t rcx_13 = sx.q(i_1) * 3
            j = *(r8_2 + (rcx_13 << 3) + 0x10)
            
            if (*(r8_2 + (rcx_13 << 3)) == r14_1)
                break
            
            i_1 = j
        while (j != 0xffffffff)
    while (i_1 != 0xffffffff)

var_78.q = &arg_18
var_78:8.q = &arg_10
int32_t arg_8
int32_t* result = sub_140a923d0(arg1 + 0x820, &arg_8, &var_78, nullptr)

if (r12.b != 0)
    return result

return sub_140ac5120(arg1, arg_10, arg_18)
