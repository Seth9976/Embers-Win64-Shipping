// 函数: sub_1405aab00
// 地址: 0x1405aab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
arg1[0x44].b = 1
*arg1 = &data_142d44df0
arg1[0x45] = 0
arg1[0x46] = 0
int32_t rax = arg1[1].d
*(arg1 + 0x32) |= 2

if (((rax u>> 4).b & 1) == 0)
    void*** arg_8 = arg1
    void*** var_28
    void**** rax_2 = sub_1405a9d10(&var_28, &arg_8)
    int64_t* rdx_2 = rax_2[1]
    void*** r8_1 = *rax_2
    void*** var_38 = r8_1
    int64_t* var_30 = rdx_2
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
        rdx_2 = var_30
    
    if (&arg1[0x45] != &var_38)
        arg1[0x45] = r8_1
        var_38 = nullptr
        sub_1405aeff0(&arg1[0x46], &var_30)
        rdx_2 = var_30
    
    if (rdx_2 != 0)
        rdx_2[1].d -= 1
        
        if (rdx_2[1].d == 1)
            int64_t* rbx_1 = var_30
            (**rbx_1)(rbx_1, rdx_2)
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                int64_t* rcx_3 = var_30
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rax_9 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*var_20 + 8))(var_20, 1)

void* rcx_6 = &arg1[0x68]
*arg1 = &data_142d45460
arg1[0x47] = &data_142d45ab0
__builtin_memset(&arg1[0x4a], 0, 0x30)
arg1[0x50].d = 2
*(arg1 + 0x284) = 0xffffffff
__builtin_memset(&arg1[0x51], 0, 0x1c)
*(arg1 + 0x2a4) = 0x780
arg1[0x55].d = 0x438
*(arg1 + 0x2ac) = 0x106
arg1[0x56] = 0
arg1[0x57] = 0
arg1[0x58] = 2
arg1[0x59] = 0
arg1[0x5a] = 0
arg1[0x5b] = 2
arg1[0x5c].d = 0
__builtin_memset(&arg1[0x5d], 0, 0x28)
arg1[0x63] = 0
arg1[0x64] = 0
arg1[0x65].b = 8
*(arg1 + 0x32c) = 0x3f800000
arg1[0x66] = 0
arg1[0x67] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_11 = *(rcx_6 + 0x10)

if (rax_11 != 0)
    rcx_6 = rax_11

*rcx_6 = 0
*(rcx_6 + 8) = 0
void* rcx_7 = &arg1[0x72]
arg1[0x6c].d = 0xffffffff
*(arg1 + 0x364) = 0
arg1[0x6e] = 0
arg1[0x6f].d = 0
arg1[0x70] = 0
arg1[0x71] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_12 = *(rcx_7 + 0x10)

if (rax_12 != 0)
    rcx_7 = rax_12

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0x7c]
arg1[0x76].d = 0xffffffff
*(arg1 + 0x3b4) = 0
arg1[0x78] = 0
arg1[0x79].d = 0
arg1[0x7a] = 0
arg1[0x7b] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_13 = *(rcx_8 + 0x10)

if (rax_13 != 0)
    rcx_8 = rax_13

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x80].d = 0xffffffff
*(arg1 + 0x404) = 0
arg1[0x82] = 0
arg1[0x83].d = 0
__builtin_memset(&arg1[0x84], 0, 0x38)
void* rcx_9 = &arg1[0x8e]
arg1[0x8b] = &data_142d45448
arg1[0x8c] = 0
arg1[0x8d] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_14 = *(rcx_9 + 0x10)

if (rax_14 != 0)
    rcx_9 = rax_14

*rcx_9 = 0
*(rcx_9 + 8) = 0
void* rcx_10 = &arg1[0x98]
arg1[0x92].d = 0xffffffff
*(arg1 + 0x494) = 0
arg1[0x94] = 0
arg1[0x95].d = 0
arg1[0x96] = 0
arg1[0x97] = 0
*(rcx_10 + 0x10) = 0
*(rcx_10 + 0x18) = 0
*(rcx_10 + 0x1c) = 0x80
void* rax_15 = *(rcx_10 + 0x10)

if (rax_15 != 0)
    rcx_10 = rax_15

*rcx_10 = 0
*(rcx_10 + 8) = 0
arg1[0x9c].d = 0xffffffff
*(arg1 + 0x4e4) = 0
arg1[0x9e] = 0
arg1[0x9f].d = 0
arg1[0xa0] = 0
arg1[0xa1] = 0
arg1[0x61] = arg1[3]
void arg_18
uint64_t rbx_3 = *sub_140b58260(&arg_18, u"CompositingTarget", 1)
int64_t* rax_18 = sub_1405cd020()
arg1[0x48] = sub_140cd9110(arg1, rbx_3, rax_18, rax_18, 1, 0)
void arg_20
uint64_t rbx_4 = *sub_140b58260(&arg_20, u"PostProcessProxy", 1)
int64_t* rax_21 = sub_1405cc800()
void* rax_22 = sub_140cd9110(arg1, rbx_4, rax_21, rax_21, 1, 0)
arg1[0x49] = rax_22
arg1[0x26] = rax_22
return arg1
