// 函数: sub_141d24980
// 地址: 0x141d24980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rbp = sx.q(rax_1)
int32_t var_10 = rbp.d
void* r9 = nullptr
void* var_18 = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_1405a4d70(&var_18)
    r9 = var_18

if (rbp.d s> 0)
    void* rdx_1 = r9
    
    do
        rdx_1 += 8
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        *(rdx_1 - 8) = *(arg1[1] + (rcx_1 << 3))
    while (rbx s< rbp)

if (&arg1[1] != &var_18)
    var_18.o = *(arg1 + 8)
    r9 = var_18
    *(arg1 + 8) = var_18.o

if (r9 == 0)
    return &var_18

return sub_140a74f90(r9)
