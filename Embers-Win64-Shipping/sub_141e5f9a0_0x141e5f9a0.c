// 函数: sub_141e5f9a0
// 地址: 0x141e5f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x428)
int64_t r14
r14.b = 0
int32_t* var_48 = nullptr
int32_t var_40 = 0
int64_t arg_8

if (rcx == 0)
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", 1)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_1 = *rax_2
    int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
    rcx = rax_3
    *(arg1 + 0x428) = rax_3

int64_t var_30 = *arg2
int64_t var_28 = arg2[1]
int64_t var_20 = 0
int64_t rax_6 = *rcx
arg_8 = 0
int64_t var_38 = 0
(*(rax_6 + 0x70))(rcx, &var_38, &var_48, 0x18)
int32_t* rbx_2 = var_48
void* rbp_2 = &rbx_2[sx.q(var_40) * 8]

if (rbx_2 != rbp_2)
    do
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(*rbx_2, 0) == 0
        
        if ((rbx_2[1] != 0 | rcx_3.b) != 0)
            int64_t rsi_1 = sx.q(arg3[1].d)
            r14.b = 1
            int32_t rax_8 = (rsi_1 + 1).d
            arg3[1].d = rax_8
            
            if (rax_8 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            *(*arg3 + (rsi_1 << 3)) = *rbx_2
        
        rbx_2 = &rbx_2[8]
    while (rbx_2 != rbp_2)
    
    rbx_2 = var_48

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return zx.q(r14.b)
