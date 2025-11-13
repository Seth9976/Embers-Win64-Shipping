// 函数: sub_14266b610
// 地址: 0x14266b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* r9 = *(result + 0x50)

if (r9 == 0 || (*(result + 0xb0) & 1) != 0)
    result.b = 0
    return result

int64_t rsi
rsi.b = 0
int32_t* rdx_3

if (*(r9 + 0x458) == *(r9 + 0x484))
label_14266b6be:
    rdx_3 = nullptr
else
    void* r8 = r9 + 0x488
    void* rdx = *(r8 + 8)
    int64_t r10_1 = sx.q(*(arg2 + 0xc))
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_1 = *(r8 + (((sx.q(*(r9 + 0x498)) - 1) & r10_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14266b6be_1:
        rdx_3 = nullptr
    else
        while (true)
            rdx_3 = (sx.q(rax_1) << 5) + *(r9 + 0x450)
            
            if (*rdx_3 == r10_1.d)
                break
            
            rax_1 = rdx_3[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14266b6be_2
        
        if (rax_1 == 0xffffffff)
        label_14266b6be_2:
            rdx_3 = nullptr

void* rax_2 = &rdx_3[2]

if (rdx_3 == 0)
    rax_2 = nullptr

int64_t arg_8

if (rax_2 == 0)
    int64_t rax_5 = (*(*arg3 + 0x50))(arg3)
    
    if (rax_5 != 0 && (not.b((arg4 u>> 3).b) & 1) != 0)
        sub_140d3a3a0(&arg_8, arg2)
        sub_142666330(*arg1 + 0x60, rax_5, arg_8)
        sub_14266d3d0(arg1, rax_5, 0)
else
    sub_142666070(arg1, rax_2, arg4.b)
    void* rcx_4 = *(*arg1 + 0x50)
    
    if (rcx_4 != 0)
        sub_142665220(rcx_4 + 0x450, *(arg2 + 0xc))
    
    rsi.b = 1

if ((not.b((arg4 u>> 2).b) & 1) != 0)
    void var_58
    sub_140d3a3a0(&var_58, arg2)
    int64_t zmm0_1 = data_143dbb1f8.q
    int32_t rax_8 = data_143dbb200
    char var_24
    char var_24_1 = var_24 & 0xfc
    int64_t var_34_1 = zmm0_1
    int64_t var_40_1 = zmm0_1
    int64_t var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_2c_1 = rax_8
    int32_t var_38_1 = rax_8
    char var_28_1 = 0
    sub_1426524d0(*arg1, &arg_8, &var_58)
    int64_t rax_9 = sx.q(arg_8.d)
    
    if (rax_9.d != 0xffffffff)
        void* r8_7 = (rax_9 << 6) + **arg1
        uint8_t rdx_11 = *(r8_7 + 0x34)
        rsi.b |= not.b(rdx_11 u>> 1) & 1
        *(r8_7 + 0x34) = rdx_11 | 2

return zx.q(rsi.b)
