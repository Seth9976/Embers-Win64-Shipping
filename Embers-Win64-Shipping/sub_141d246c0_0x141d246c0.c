// 函数: sub_141d246c0
// 地址: 0x141d246c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rsi = sx.q(rax_1)
int32_t var_10 = rsi.d
void* r8 = nullptr
void* var_18 = nullptr
int32_t var_c = 0

if (rax_1 s> 0)
    sub_140610660(&var_18)
    r8 = var_18

if (rsi.d s> 0)
    void* rdx_1 = r8
    
    do
        rdx_1 += 0x10
        int64_t rcx_1 = sx.q(*(*arg2 + (rbx << 2)))
        rbx += 1
        *(rdx_1 - 0x10) = *(arg1[1] + rcx_1 * 0x10)
    while (rbx s< rsi)

if (&arg1[1] != &var_18)
    var_18.o = *(arg1 + 8)
    r8 = var_18
    *(arg1 + 8) = var_18.o

if (r8 == 0)
    return &var_18

return sub_140a74f90(r8)
