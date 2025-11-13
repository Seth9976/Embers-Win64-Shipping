// 函数: sub_140608380
// 地址: 0x140608380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t rdi = 0
int32_t* var_30 = nullptr
int64_t var_28 = 0
void* rbx = *(arg1 + 0x38)

if (*(rbx + 0x40) s> 0)
    int64_t arg_8
    (*(*(rbx + 8) + 0x30))(rbx + 8, &arg_8)
    int64_t rax_2 = arg_8
    
    if (rax_2 s< 0 || rax_2 s> *(rbx + 0x40))
        if (*(rbx + 0xc8) == 0)
            int64_t* rcx_1 = *(rbx + 0x60)
            (*(*rcx_1 + 0x58))(rcx_1)
        
        sub_1405f9eb0(rbx)

while (true)
    void* rdx_2 = **(rbx + 0x58)
    
    if (rdx_2 == 0)
        break
    
    int32_t rbp_1 = *(rdx_2 + 8)
    int64_t rcx_3 = *(rbx + 0x58)
    *(rbx + 0x58) = rdx_2
    *(rdx_2 + 8) = 0
    j_sub_140a74f90(rcx_3)
    int64_t rsi_1 = sx.q(var_28.d)
    int32_t rax_5 = (rsi_1 + 1).d
    var_28.d = rax_5
    
    if (rax_5 s> var_28:4.d)
        sub_1405a4cf0(&var_30)
    
    var_30[rsi_1] = rbp_1

int64_t result = sx.q(var_28.d)
int32_t* r14 = var_30
uint64_t rsi_3 = ((result << 2) + 3) u>> 2

if (r14 u> &r14[result])
    rsi_3 = 0

int32_t* rbx_1 = r14

if (rsi_3 != 0)
    do
        int64_t* rcx_6 = *(arg1 + 0x20)
        result = (**rcx_6)(rcx_6, zx.q(*rbx_1))
        rbx_1 = &rbx_1[1]
        rdi += 1
    while (rdi != rsi_3)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
