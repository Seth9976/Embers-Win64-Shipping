// 函数: sub_14076f530
// 地址: 0x14076f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int64_t* rcx = *(arg1 + 0x28)
(*(*rcx + 0x40))(rcx, *(arg1 + 0x30))

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    sub_140779750(*(arg1 + 0x28), *(arg1 + 0x3c), *(arg1 + 0x40), *(arg1 + 0x38))
    return sub_140779870(*(arg1 + 0x28), *(arg1 + 0x44)) __tailcall

int64_t* r8 = data_143ce3aa0
int16_t result_2 = 1
int64_t i = *(arg1 + 0x10)
int64_t* rax_3 = r8
int64_t rbx_1 = sx.q(data_143ce3aa8)
void* rcx_3 = &r8[rbx_1 * 2]
int64_t i_1 = i
int16_t result_1 = 1
int16_t var_c = 0xffff

if (r8 != rcx_3)
    while (*rax_3 != i || rax_3[1].w != 1)
        rax_3 = &rax_3[2]
        
        if (rax_3 == rcx_3)
            goto label_14076f5c2

if (r8 == rcx_3 || ((rax_3 - r8) s>> 4).d == 0xffffffff)
label_14076f5c2:
    int32_t rax_6 = (rbx_1 + 1).d
    bool cond:0_1 = rax_6 s<= data_143ce3aac
    data_143ce3aa8 = rax_6
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143ce3aa0)
        i = i_1
        r8 = data_143ce3aa0
    
    int64_t rcx_5 = rbx_1 * 2
    r8[rcx_5] = i
    r8[rcx_5 + 1].w = result_1
    *(&r8[rcx_5] + 0xa) = 0xffffffff
    result_2 = result_1
    i = i_1

int64_t* r8_1 = data_143ce3ab0
int64_t rbx_2 = sx.q(data_143ce3ab8)
int64_t* rax_8 = r8_1
void* rcx_8 = &r8_1[rbx_2 * 2]

if (r8_1 != rcx_8)
    while (*rax_8 != i || rax_8[1].w != result_2)
        rax_8 = &rax_8[2]
        
        if (rax_8 == rcx_8)
            goto label_14076f658

if (r8_1 == rcx_8 || ((rax_8 - r8_1) s>> 4).d == 0xffffffff)
label_14076f658:
    int32_t rax_11 = (rbx_2 + 1).d
    bool cond:1_1 = rax_11 s<= data_143ce3abc
    data_143ce3ab8 = rax_11
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143ce3ab0)
        i = i_1
        r8_1 = data_143ce3ab0
    
    int64_t rcx_10 = rbx_2 * 2
    r8_1[rcx_10] = i
    r8_1[rcx_10 + 1].w = result_1
    *(&r8_1[rcx_10] + 0xa) = 0xffffffff

int32_t result = sub_140834b00(&i_1)

if (result.b != 0)
    int64_t* r8_2 = data_143ce3ae0
    int64_t rbx_3 = sx.q(data_143ce3ae8)
    int64_t* rax_13 = r8_2
    int64_t i_2 = i_1
    void* rcx_14 = &r8_2[rbx_3 * 2]
    
    if (r8_2 != rcx_14)
        while (*rax_13 != i_2 || rax_13[1].w != result_1)
            rax_13 = &rax_13[2]
            
            if (rax_13 == rcx_14)
                goto label_14076f702
        
        result = ((rax_13 - r8_2) s>> 4).d
    
    if (r8_2 == rcx_14 || result == 0xffffffff)
    label_14076f702:
        int32_t rax_15 = (rbx_3 + 1).d
        bool cond:2_1 = rax_15 s<= data_143ce3aec
        data_143ce3ae8 = rax_15
        
        if (not(cond:2_1))
            sub_1405a4f90(&data_143ce3ae0)
            i_2 = i_1
            r8_2 = data_143ce3ae0
        
        int64_t rcx_16 = rbx_3 * 2
        r8_2[rcx_16] = i_2
        result = zx.d(result_1)
        r8_2[rcx_16 + 1].w = result.w
        *(&r8_2[rcx_16] + 0xa) = 0xffffffff

return result
