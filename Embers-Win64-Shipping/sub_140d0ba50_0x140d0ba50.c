// 函数: sub_140d0ba50
// 地址: 0x140d0ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
void* rsi = arg2
int64_t* rbp = nullptr
int64_t arg_8 = 0
int64_t* rcx = *(rax + 8)
(*(*rcx + 0x140))(rcx, &arg_8)
void* rax_2
int64_t rax_3
void* rdx_1

if (rsi != 0)
    rax_2 = sub_140bdf2e0()
    rdx_1 = *(rsi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rsi == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rsi = sub_140d226f0(rsi, sub_140bdf2e0())

int64_t i = *(arg3 + 0x24)
void* var_38
int64_t* rsi_1

if (i != 0)
    var_38 = rsi
    
    if (rsi != 0)
        rbp = *(rsi + 0x48)
    
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_140d09fe0(&var_38)
    rsi_1 = rbp

if (i == 0 || rsi_1 == 0)
label_140d0bb32:
    int64_t* rax_8 = sub_140b63b70(arg3 + 0x24, &var_38)
    int16_t* rbx
    
    if (rax_8[1].d == 0)
        rbx = &data_142d40450
    else
        rbx = *rax_8
    
    int64_t* rax_10 = sub_140d2ee50(sub_140bdf730(), -ffffffffffffffff, rbx, 0)
    void* rcx_7 = var_38
    rsi_1 = rax_10
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rsi_1 == 0)
        return 0
else
    while (rsi_1[3] != i)
        int64_t* rax_7 = rsi_1[5]
        sub_140d09fe0(&var_38)
        rsi_1 = rax_7
        
        if (rsi_1 == 0)
            goto label_140d0bb32

int64_t* rcx_8 = *(*arg1 + 8)
(*(*rcx_8 + 0x170))(rcx_8, rsi_1)
int64_t result = sub_140be0d00(rsi_1, arg_8, 0)

if (sub_140be1e00(rsi_1, result) != 0)
    return result

return sub_140bdeca0(rsi_1)
